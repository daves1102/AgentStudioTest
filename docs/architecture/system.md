# Whole-System Architecture

_Batch: `624338e5475ffbce89d00d3abf4134e98314eb03` — 2026-10-21_

## System Overview

The system comprises a single component (`nova`) representing the core subsystems of the OpenStack Compute service, extracted across nine batches to 1,484 files. Batch 9 added the hypervisor abstraction layer (`virt/`, 92 files), the Cinder volume integration (`volume/`, 2 files), and WSGI bootstrapping shims (`wsgi/`, 3 files), completing all major production subsystems.

**Production subsystems** (all batches 1–9): the REST API layer (`api/`); the accelerator integration layer (`accelerator/`); the CLI entry points (`cmd/`); the compute service (`compute/`); the conductor service (`conductor/`); the configuration layer (`conf/`); the console subsystem (`console/`); exception and internationalisation utilities (`exception.py`, `i18n.py`, `service_auth.py`, `utils.py`); code-style enforcement (`hacking/`); the Glance image client with signature verification (`image/`); the key-manager wrapper (`keymgr/`); quota-limit enforcement (`limit/`); oslo.messaging versioned notification objects (`notifications/`); the versioned object layer (`objects/`); the database access layer (`db/`); the network integration layer (`network/`); PCI device management (`pci/`); RBAC policy rule definitions for every Nova API action (`policies/`, 56 files); oslo.privsep privilege-separation wrappers (`privsep/`); placement-aware scheduling (`scheduler/`); service-group membership with DB and Memcache heartbeat backends (`servicegroup/`); Manila shared-filesystem client (`share/`); Ceph/RBD block-storage utilities (`storage/`); the hypervisor abstraction layer (`virt/`, 91 files: libvirt/KVM driver 40 files, VMware API driver 15 files, Ironic baremetal driver 4 files, z/VM driver 5 files, disk/VFS utilities 10 files, volume drivers 16 files); Cinder volume integration (`volume/`); and WSGI application bootstrapping (`wsgi/`).

**Test subsystems** (batch 8): `tests/unit/` (514 files), `tests/functional/` (314 files), `tests/fixtures/` (16 files) covering virt drivers, API functional scenarios, and test infrastructure. Test code is part of the `nova` component; side effects recorded from test files reflect test-framework patterns (mock patching, mock HTTP) and do not represent production runtime behaviour.

Sources: `docs/components/nova.md` (Overview), `docs/components/index.md`.

---

## Component Inventory

Line counts are sums of the code lines stated in each Component document's File Inventory, taken from KB `lines` fields. From batch 8 onward this total includes test code (approx. 317,710 LOC in tests/; approx. 144,520 LOC in production subsystems from batches 1–9).

| Component | Language(s) | File count | Code lines |
|-----------|-------------|------------|------------|
| `nova`    | Python      | 1,484      | 462,230    |

Sources: `docs/components/nova.md` (File Inventory); Verification Summary `.aee/verification-summary.md`: "KB aggregate totals (604,264 total / 462,230 code) computed and verified ✓".

---

## Cross-Component Dependency Map

```mermaid
graph LR
    nova["nova"]
```

The Link Graph (`.aee/link-summary.md`, batch `624338e5`) records 5,884 file edges and zero cross-component edges (`summary.crossComponentEdges: 0`; "All 5884 file edges are intra-component (within the `nova` component)"). There is one component in the system; no cross-component directed edges exist. No cross-component seams were found (`summary.seams: 0`).

The graph is built from static imports and shared literals and may miss other coupling. Three known blind spots: (1) scheduler filters loaded dynamically by name from configuration; (2) `privsep/` functions called via oslo.privsep IPC dispatch — neither produces static import edges; (3) test mock-patch patterns (`unittest.mock.patch`) inject call sites that do not appear as static edges.

---

## System-Wide Data Flow

Data enters the system through the public interfaces of the `nova` component. Entry points span multiple production subsystems (sources: `docs/components/nova.md`, Side Effects; KB `securitySurface` arrays):

- **HTTP API requests** — inbound WSGI requests enter through `api/` routing bootstrapped by `wsgi/osapi_compute.py`; RBAC enforced via `policies/` (`oslo_policy.DocumentedRuleDefault`) rules for each action.
- **Metadata proxy requests** — enter `api/metadata/handler.py` at line 97; HMAC validation applied when `CONF.neutron.metadata_proxy_shared_secret` is configured (lines 276–280).
- **Accelerator parameters** — accepted by `accelerator/cyborg.py` and forwarded to the Cyborg REST API; test evidence (`tests/fixtures/cyborg.py`, `CyborgFixture`) confirms `get_arq_by_uuid` is called from production code, likely in `nova.virt.libvirt` or a compute manager accelerator workflow (`.aee/security-chains.json`, `chains[0].stoppedAt.detail`).
- **Scheduler hints** — user-controlled JSON strings dispatched through `scheduler/filters/json_filter.py` (lines 93–112).
- **CLI arguments** — nine service launcher scripts; `cmd/policy.py` accepts `OS_ROLES`, `OS_USER_ID`, `OS_TENANT_ID` from environment.
- **Console connections** — `console/serial.py` raw socket (entry point L83); `console/rfb/authvencrypt.py` VeNCrypt TLS handshake.
- **Privsep IPC** — `privsep/` functions dispatched via oslo.privsep to a root-privileged subprocess.
- **Share operations** — `share/manila.py` wraps the `openstack` SDK for Manila shared-filesystem lifecycle.
- **Storage operations** — `storage/rbd_utils.py` uses `rados`/`rbd` bindings for Ceph block-storage snapshot, clone, and image management.
- **Service heartbeat** — `servicegroup/drivers/db.py` writes heartbeat to DB (L88); `servicegroup/drivers/mc.py` writes heartbeat to Memcache (L93).
- **Hypervisor operations** — `virt/driver.py` abstract interface implemented by libvirt/KVM (`virt/libvirt/`), VMware (`virt/vmwareapi/`), Ironic (`virt/ironic/`), and z/VM (`virt/zvm/`) drivers; spawns `qemu-img` subprocesses for disk image conversion (`virt/disk/api.py`); issues ioctl/sysfs calls for NUMA/CPU topology.
- **Volume operations** — `volume/cinder.py` wraps the cinderclient for block-storage attachment, volume lifecycle, and snapshot management; called by virt drivers at instance boot and termination.
- **Metadata service** — `wsgi/metadata.py` bootstraps the metadata WSGI application; `wsgi/osapi_compute.py` bootstraps the Compute API application.

Data flows from HTTP API entry points through the compute service (`compute/api.py`, `compute/manager.py`) to the conductor (`conductor/manager.py`) and then to virt drivers (`virt/libvirt/driver.py`, etc.) for instance lifecycle operations. Block storage is managed via `volume/cinder.py`; shared filesystem via `share/manila.py`; image retrieval via `image/`; scheduling via `scheduler/`; and privilege-separated operations (disk image manipulation, pty access) via `privsep/`.

Sources: `docs/components/nova.md` (Overview, Side Effects, Defined Symbols); KB records under `.aee/kb/src/nova/`.

---

## External Dependencies

Third-party and standard-library packages imported across the 1,484 files (production + test). Source: `docs/components/nova.md` (External Dependencies table).

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
| `oslo_vmware` | 26 |
| `os_brick` | 24 |
| `oslo_concurrency` | 21 |
| `cinderclient` | 3 |

New packages added in batch 9 (from virt/ and volume/): `oslo_vmware` (`virt/vmwareapi/`), `os_brick` (`virt/libvirt/volume/`), `cinderclient` (`volume/cinder.py`), `guestfs` (`virt/disk/vfs/guestfs.py`), `libvirt` (`virt/libvirt/`), `zvmsdk` (`virt/zvm/`), `pyudev`, `mmap`. Total unique external packages: 154.

Note: `unittest` (433 files), `fixtures` (143 files) are test-framework packages; their import counts reflect test code only.

### Unresolved internal nova imports

923 unresolved imports across 4 distinct symbol roots (Link Summary `.aee/link-summary.md`). The decrease from 1,200 (batch 8) to 923 is driven by batch 9 extracting `nova.virt.*` production code (libvirt, vmwareapi, zvm, ironic drivers, disk utilities) and `nova.volume.*`, resolving 283 previously unresolved `nova.virt.*` refs and 23 `nova.volume` refs in one pass. The remaining gaps are dominated by bare `nova` top-level attribute patterns rather than missing modules.

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 913 | top-level package access patterns across all extracted files; not a single missing module |
| `nova.context` | 7 | request context module — may be part of nova.compute or a standalone module not yet extracted |
| `nova.policy` | 2 | policy enforcer (distinct from nova.policies, which is resolved) |
| `nova.quota` | 1 | quota enforcement |
| **Total** | **923** | |
