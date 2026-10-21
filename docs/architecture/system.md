# Whole-System Architecture

_Batch: `da4f90f3140927b8c63f00b11af32787a70ff1ac` — 2026-10-21_

## System Overview

The system comprises a single component (`nova`) representing the core subsystems of the OpenStack Compute service, extracted across eight batches to 1,388 files. Batch 8 added the full test suite (unit, functional, fixtures) plus three new production sub-packages.

**Production subsystems** (all batches 1–8): the REST API layer (`api/`); the accelerator integration layer (`accelerator/`); the CLI entry points (`cmd/`); the compute service (`compute/`); the conductor service (`conductor/`); the configuration layer (`conf/`); the console subsystem (`console/`); exception and internationalisation utilities (`exception.py`, `i18n.py`, `service_auth.py`, `utils.py`); code-style enforcement (`hacking/`); the Glance image client with signature verification (`image/`); the key-manager wrapper (`keymgr/`); quota-limit enforcement (`limit/`); oslo.messaging versioned notification objects (`notifications/`); the versioned object layer (`objects/`); the database access layer (`db/`); the network integration layer (`network/`); PCI device management (`pci/`); RBAC policy rule definitions for every Nova API action (`policies/`, 56 files); oslo.privsep privilege-separation wrappers (`privsep/`); placement-aware scheduling (`scheduler/`); service-group membership with DB and Memcache heartbeat backends (`servicegroup/`); Manila shared-filesystem client (`share/`); and Ceph/RBD block-storage utilities (`storage/`).

**Test subsystems** (batch 8): `tests/unit/` (514 files), `tests/functional/` (314 files), `tests/fixtures/` (16 files) covering virt drivers, API functional scenarios, and test infrastructure. Test code is part of the `nova` component; side effects recorded from test files reflect test-framework patterns (mock patching, mock HTTP) and do not represent production runtime behaviour.

Sources: `docs/components/nova.md` (Overview), `docs/components/index.md`.

---

## Component Inventory

Line counts are sums of the code lines stated in each Component document's File Inventory, taken from KB `lines` fields. From batch 8 onward this total includes test code (approx. 317,710 LOC in tests/; approx. 105,633 LOC in production subsystems from batches 1–7).

| Component | Language(s) | File count | Code lines |
|-----------|-------------|------------|------------|
| `nova`    | Python      | 1,388      | 423,343    |

Sources: `docs/components/nova.md` (File Inventory); Verification Summary `.aee/verification-summary.md`: "KB aggregate totals (550,793 total / 423,343 code) computed and verified ✓".

---

## Cross-Component Dependency Map

```mermaid
graph LR
    nova["nova"]
```

The Link Graph (`.aee/link-summary.md`, batch `da4f90f3`) records 5,129 file edges and zero cross-component edges (`summary.crossComponentEdges: 0`; "All 5129 file edges are intra-component (within the `nova` component)"). There is one component in the system; no cross-component directed edges exist. No cross-component seams were found (`summary.seams: 0`).

The graph is built from static imports and shared literals and may miss other coupling. Two known blind spots: (1) scheduler filters loaded dynamically by name from configuration; (2) `privsep/` functions called via oslo.privsep IPC dispatch — neither produces static import edges. Additionally, test mock-patch patterns (`unittest.mock.patch`) inject call sites that do not appear as static edges.

---

## System-Wide Data Flow

Data enters the system through the public interfaces of the `nova` component. Entry points span multiple production subsystems (sources: `docs/components/nova.md`, Side Effects; KB `securitySurface` arrays):

- **HTTP API requests** — inbound WSGI requests enter through `api/` routing; RBAC enforced via `policies/` (`oslo_policy.DocumentedRuleDefault`) rules for each action.
- **Metadata proxy requests** — enter `api/metadata/handler.py` at line 97; HMAC validation applied when `CONF.neutron.metadata_proxy_shared_secret` is configured (lines 276–280).
- **Accelerator parameters** — accepted by `accelerator/cyborg.py` and forwarded to the Cyborg REST API; test evidence (batch 8 `tests/fixtures/cyborg.py`, `CyborgFixture`) confirms `get_arq_by_uuid` is called from production code, likely in `nova.virt.libvirt` or a compute manager accelerator workflow (`.aee/security-chains.json`, `chains[0].stoppedAt.detail`).
- **Scheduler hints** — user-controlled JSON strings dispatched through `scheduler/filters/json_filter.py` (lines 93–112).
- **CLI arguments** — nine service launcher scripts; `cmd/policy.py` accepts `OS_ROLES`, `OS_USER_ID`, `OS_TENANT_ID` from environment.
- **Console connections** — `console/serial.py` raw socket (entry point L83); `console/rfb/authvencrypt.py` VeNCrypt TLS handshake.
- **Privsep IPC** — `privsep/` functions dispatched via oslo.privsep to a root-privileged subprocess.
- **Share operations** — `share/manila.py` wraps the `openstack` SDK for Manila shared-filesystem lifecycle.
- **Storage operations** — `storage/rbd_utils.py` uses `rados`/`rbd` bindings for Ceph block-storage snapshot, clone, and image management.
- **Service heartbeat** — `servicegroup/drivers/db.py` writes heartbeat to DB (L88); `servicegroup/drivers/mc.py` writes heartbeat to Memcache (L93).

Data flows through the production subsystems as described in prior batches; the addition of `servicegroup/`, `share/`, and `storage/` extends:

- **Servicegroup path:** `servicegroup/api.py` factory creates a `ServiceGroupDriver` (DB or Memcache backend) used by compute, conductor, and scheduler services to report and query live service membership.
- **Share path:** `share/manila.py` issues 2 outbound `network` calls to the Manila API via `openstack` SDK for shared-filesystem operations (attach, detach, create, delete, get).
- **Storage path:** `storage/rbd_utils.py` interacts with a Ceph cluster via `rados`/`rbd` bindings; `RBDVolumeProxy` manages block-storage volumes for virt drivers.

Sources: `docs/components/nova.md` (Overview, Side Effects, Defined Symbols); KB records under `.aee/kb/src/nova/`.

---

## External Dependencies

Third-party and standard-library packages imported across the 1,388 files (production + test). Source: `docs/components/nova.md` (External Dependencies table).

### Most widely used (by file count)

| Package | Files importing |
|---------|----------------|
| `oslo_utils` | 625 |
| `unittest` | 433 |
| `oslo_log` | 174 |
| `webob` | 165 |
| `oslo_serialization` | 159 |
| `copy` | 157 |
| `fixtures` | 142 |
| `oslo_config` | 118 |
| `datetime` | 82 |
| `os` | 77 |
| `oslo_policy` | 55 |
| `keystoneauth1` | 52 |
| `ddt` | 48 |
| `functools` | 43 |
| `collections` | 40 |
| `sqlalchemy` | 37 |
| `oslo_db` | 35 |
| `oslo_messaging` | 29 |
| `re` | 26 |
| `mock` | 22 |

New packages added in batch 8 (primarily from tests): `ddt`, `fixtures`, `mock`, `oslotest`, `rados`, `rbd`, `requests`, `requests_mock`, `testtools`, `dataclasses`, `datetime`, `unittest`. Total unique external packages: 148.

Note: `unittest` (433 files), `fixtures` (142 files), `ddt` (48 files), `mock` (22 files) are test-framework packages; their import counts reflect test code only.

### Unresolved internal nova imports

1,200 unresolved imports across 22 symbol roots (Link Summary `.aee/link-summary.md`). The increase from 196 (batch 7) to 1,200 is driven by the test suite extraction: test files import heavily from `nova.virt.*` sub-modules not yet in the KB.

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 884 | top-level package patterns + test suite imports |
| `nova.virt` | 97 | hypervisor abstraction layer — not yet extracted |
| `nova.virt.libvirt` | 72 | libvirt driver — not yet extracted |
| `nova.virt.vmwareapi` | 45 | VMware API driver — not yet extracted |
| `nova.volume` | 23 | Cinder integration — not yet extracted |
| `nova.virt.libvirt.volume` | 21 | libvirt volume handling — not yet extracted |
| other (16 roots) | 58 | various `nova.virt.*` sub-modules and `nova.context`, `nova.quota`, etc. |

The `nova.virt.*` family accounts for 283 of 1,200 unresolved refs across 14 sub-modules and will collapse when `nova/virt/` is extracted.
