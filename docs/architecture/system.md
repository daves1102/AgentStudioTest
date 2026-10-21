# Whole-System Architecture

_Batch: `c7e94e29eea2e3abd5797fc0759b0d98232c7830` — 2026-10-21_

## System Overview

The system comprises a single component (`nova`) representing the full OpenStack Compute service codebase, extracted across ten batches to 1,509 files. Batch 10 completed the top-level module layer, adding 25 utility and service modules that underpin all production subsystems.

**Production subsystems** (all batches 1–10): the REST API layer (`api/`); the accelerator integration layer (`accelerator/`); the CLI entry points (`cmd/`); the compute service (`compute/`); the conductor service (`conductor/`); the configuration layer (`conf/`); the console subsystem (`console/`); the Glance image client with signature verification (`image/`); the key-manager wrapper (`keymgr/`); quota-limit enforcement (`limit/`); oslo.messaging versioned notification objects (`notifications/`); the versioned object layer (`objects/`); the database access layer (`db/`); the network integration layer (`network/`); PCI device management (`pci/`); RBAC policy rule definitions (`policies/`, 56 files); oslo.privsep privilege-separation wrappers (`privsep/`); placement-aware scheduling (`scheduler/`); service-group membership (`servicegroup/`); Manila shared-filesystem client (`share/`); Ceph/RBD block-storage utilities (`storage/`); the hypervisor abstraction layer (`virt/`, 91 files); Cinder volume integration (`volume/`); WSGI bootstrapping (`wsgi/`); code-style enforcement (`hacking/`); and the following 25 top-level utility modules (batch 10): `availability_zones.py` (AZ metadata cache), `baserpc.py` (RPC base class), `block_device.py` (block device mapping helpers), `cache_utils.py` (Memcached/dogpile client factory), `config.py` (oslo.config entry point), `context.py` (RequestContext carrying auth through all calls), `crypto.py` (X.509 utilities and vTPM secret management), `exception_wrapper.py` (RPC exception decorator), `filesystem.py` (sysfs I/O helpers), `filters.py` (pluggable filter chain base), `loadables.py` (dynamic class loader for filters and weighers), `manager.py` (Manager base with periodic-task infrastructure), `middleware.py` (oslo.middleware configuration shim), `monkey_patch.py` (eventlet monkey-patching), `policy.py` (PolicyEngine wrapping oslo.policy), `profiler.py` (osprofiler integration), `quota.py` (QuotaEngine and DbQuotaDriver), `rpc.py` (oslo.messaging transport/target setup), `safe_utils.py` (function introspection helper), `service.py` (Service lifecycle class), `test.py` (TestCase base class), `thread_pool_factory.py` (per-service executor pools), `version.py` (PBR version loading), `vtpm.py` (vTPM secret lifecycle), `weights.py` (base weigher for scheduler and compute).

**Test subsystems** (batch 8): `tests/unit/` (514 files), `tests/functional/` (314 files), `tests/fixtures/` (16 files). Test code is part of the `nova` component; side effects recorded from test files reflect test-framework patterns and do not represent production runtime behaviour.

Sources: `docs/components/nova.md` (Overview), `docs/components/index.md`.

---

## Component Inventory

Line counts are sums of the code lines stated in each Component document's File Inventory, taken from KB `lines` fields. From batch 8 onward this total includes test code (approx. 317,710 LOC in tests/; approx. 150,013 LOC in production subsystems from batches 1–10).

| Component | Language(s) | File count | Code lines |
|-----------|-------------|------------|------------|
| `nova`    | Python      | 1,509      | 467,723    |

Sources: `docs/components/nova.md` (File Inventory); Verification Summary `.aee/verification-summary.md`: "KB aggregate totals (612,304 total / 467,723 code) computed and verified ✓".

---

## Cross-Component Dependency Map

```mermaid
graph LR
    nova["nova"]
```

The Link Graph (`.aee/link-summary.md`, batch `c7e94e29`) records 6,902 file edges and zero cross-component edges (`summary.crossComponentEdges: 0`; "All 6902 file edges are intra-component (within the `nova` component)"). There is one component in the system; no cross-component directed edges exist. No cross-component seams were found (`summary.seams: 0`).

The graph is built from static imports and shared literals and may miss other coupling. Three known blind spots: (1) scheduler filters loaded dynamically by name from configuration; (2) `privsep/` functions called via oslo.privsep IPC dispatch — neither produces static import edges; (3) test mock-patch patterns (`unittest.mock.patch`) inject call sites that do not appear as static edges. Additionally, local-variable dispatch patterns (e.g. storing a client in a variable then calling a method on it) are invisible to static analysis, as confirmed by the chain-001 investigation.

---

## System-Wide Data Flow

Data enters the system through the public interfaces of the `nova` component. Entry points span multiple production subsystems (sources: `docs/components/nova.md`, Side Effects; KB `securitySurface` arrays):

- **HTTP API requests** — inbound WSGI requests enter through `api/` routing bootstrapped by `wsgi/osapi_compute.py`; RBAC enforced by `policy.py` (`PolicyEngine`, oslo.policy) using rules defined in `policies/`.
- **Metadata proxy requests** — enter `api/metadata/handler.py` at line 97; HMAC validation applied when `CONF.neutron.metadata_proxy_shared_secret` is configured (lines 276–280).
- **Accelerator parameters** — accepted by `accelerator/cyborg.py` and forwarded to the Cyborg REST API via `get_arq_by_uuid`; production call site not found in 1,509-file source set (may be dead code or called via local-variable dispatch; see Security Posture chain-001).
- **Scheduler hints** — user-controlled JSON strings dispatched through `scheduler/filters/json_filter.py` (lines 93–112).
- **CLI arguments** — nine service launcher scripts; `service.py` reads `os.path.basename(sys.argv[0])` (L329); `monkey_patch.py` reads `sys.argv[1:]` (L68) and `os.environ.get("OS_NOVA_DISABLE_EVENTLET_PATCHING")` (L134, L191).
- **Console connections** — `console/serial.py` raw socket (entry point L83); `console/rfb/authvencrypt.py` VeNCrypt TLS handshake.
- **Privsep IPC** — `privsep/` functions dispatched via oslo.privsep to a root-privileged subprocess.
- **Share operations** — `share/manila.py` wraps the `openstack` SDK for Manila shared-filesystem lifecycle.
- **Storage operations** — `storage/rbd_utils.py` uses `rados`/`rbd` bindings for Ceph block-storage snapshot, clone, and image management.
- **Service heartbeat** — `servicegroup/drivers/db.py` writes heartbeat to DB (L88); `servicegroup/drivers/mc.py` writes heartbeat to Memcache (L93).
- **Hypervisor operations** — `virt/driver.py` abstract interface dispatches to libvirt/KVM, VMware, Ironic, and z/VM drivers; `filesystem.py` provides sysfs I/O; `crypto.py` manages X.509 certificates and vTPM secrets via castellan.
- **Volume operations** — `volume/cinder.py` wraps the cinderclient for block-storage attachment, volume lifecycle, and snapshot management.
- **Request context** — `context.py` `RequestContext` carries auth token, user, project, and keystoneauth plugin through all nova calls; `rpc.py` sets up oslo.messaging transport/target.
- **Quota enforcement** — `quota.py` `QuotaEngine`/`DbQuotaDriver` enforces per-project and per-user resource limits with 4 db-write sinks; `limit/` provides oslo_limit-based unified-limit quota.

Sources: `docs/components/nova.md` (Overview, Side Effects, Defined Symbols); KB records under `.aee/kb/src/nova/`.

---

## External Dependencies

Third-party and standard-library packages imported across the 1,509 files (production + test). Source: `docs/components/nova.md` (External Dependencies table).

### Most widely used (by file count)

| Package | Files importing |
|---------|----------------|
| `oslo_utils` | 698 |
| `unittest` | 433 |
| `oslo_log` | 230 |
| `oslo_serialization` | 172 |
| `webob` | 165 |
| `copy` | 162 |
| `fixtures` | 143 |
| `oslo_config` | 123 |
| `os` | 106 |
| `collections` | 86 |
| `oslo_policy` | 55 |
| `keystoneauth1` | 52 |

New packages added in batch 10: `dogpile` (`cache_utils.py`), `osprofiler` (`profiler.py`), `pbr` (`version.py`). Total unique external packages: 156.

Note: `unittest` (433 files), `fixtures` (143 files) are test-framework packages; their import counts reflect test code only.

### Unresolved internal nova imports

10 unresolved imports in 1 distinct symbol root (Link Summary `.aee/link-summary.md`). The decrease from 923 (batch 9) to 10 is driven by batch 10 extracting `nova.context`, `nova.policy`, `nova.quota`, and 22 other top-level modules, resolving all previously named-module gaps. The graph is now near-complete. The 10 remaining references use the bare `nova` package name in test files and likely target dynamically-loaded sub-modules.

| File | Line | Symbol | Reason |
|------|------|--------|--------|
| `src/nova/tests/fixtures/manila.py` | 14 | `nova` | module-not-found |
| `src/nova/tests/functional/libvirt/test_numa_servers.py` | 22 | `nova` | module-not-found |
| `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py` | 31 | `nova` | module-not-found |
| `src/nova/tests/functional/libvirt/test_vif_model.py` | 20 | `nova` | module-not-found |
| `src/nova/tests/functional/regressions/test_bug_1845291.py` | 14 | `nova` | module-not-found |
| `src/nova/tests/functional/regressions/test_bug_1849165.py` | 14 | `nova` | module-not-found |
| `src/nova/tests/functional/regressions/test_bug_2143972.py` | 13 | `nova` | module-not-found |
| `src/nova/tests/unit/compute/test_compute.py` | 47 | `nova` | module-not-found |
| `src/nova/tests/unit/compute/test_compute_mgr.py` | 37 | `nova` | module-not-found |
| `src/nova/tests/unit/scheduler/test_host_manager.py` | 28 | `nova` | module-not-found |
