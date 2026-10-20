# Whole-System Architecture

_Batch: `f56908d5e0741524fb4cb768d9b52ccb0f3a585b` — 2026-10-20_

## System Overview

The system comprises a single component (`nova`) representing the core subsystems of the OpenStack Compute service, extracted across five batches to 433 files. The component spans: the REST API layer (`api/`) implementing the WSGI framework, request dispatch, authentication middleware, API versioning, metadata service, JSON schema validation, and the full OpenStack Compute REST API (servers, flavors, keypairs, and more); the accelerator integration layer (`accelerator/`) brokering communication with the Cyborg accelerator management service; the CLI entry points (`cmd/`) providing nine service launcher scripts plus the `nova-manage` administration command; the compute service (`compute/`) implementing the public compute API and per-hypervisor compute manager for instance lifecycle; the conductor service (`conductor/`) coordinating multi-node operations (build, migrate, evacuate, unshelve); the configuration layer (`conf/`) declaring oslo.config option groups for all Nova sub-systems; the console subsystem (`console/`) providing VNC/RFB, serial, and SPICE console proxy infrastructure; exception and internationalisation utilities (`exception.py`, `i18n.py`, `service_auth.py`, `utils.py`); the versioned object layer (`objects/`) defining Nova's domain entities; the database access layer (`db/`) providing Alembic-managed schemas for both the API and main databases with a full SQLAlchemy query API; the network integration layer (`network/`) providing the Neutron client, network model, and security group API; and the scheduler subsystem (`scheduler/`) implementing placement-aware host selection, filtering, weighing, and Placement resource-provider management.

Sources: `docs/components/nova.md` (Overview), `docs/components/index.md`.

---

## Component Inventory

Line counts are sums of the code lines stated in each Component document's File Inventory, taken from KB `lines` fields.

| Component | Language(s) | File count | Code lines |
|-----------|-------------|------------|------------|
| `nova`    | Python      | 433        | 95,464     |

Sources: `docs/components/nova.md` (File Inventory, TOTAL row: 133,109 total / 95,464 code); Verification Summary `.aee/verification-summary.md`: "Aggregate totals (133,109 total / 95,464 code) verified against sum of all 433 KB records ✓".

---

## Cross-Component Dependency Map

```mermaid
graph LR
    nova["nova"]
```

The Link Graph (`.aee/link-summary.md`, batch `f56908d5`) records 1,536 file edges and zero cross-component edges (`summary.crossComponentEdges: 0`; "All 1536 file edges are intra-component (within the `nova` component)"). There is one component in the system; no cross-component directed edges exist. No cross-component seams were found (`summary.seams: 0`).

The graph is built from static imports and shared literals and may miss other coupling.

---

## System-Wide Data Flow

Data enters the system through the public interfaces of the `nova` component. Entry points span multiple subsystems (sources: `docs/components/nova.md`, Side Effects and Defined Symbols; KB `securitySurface` arrays):

- **HTTP API requests** — inbound WSGI requests enter through `api/` routing; `api/auth.py` applies keystoneauth1 token verification middleware on each request.
- **Metadata proxy requests** — enter `api/metadata/handler.py` at the `@webob.dec.wsgify`-decorated entry (line 97); HMAC validation against `CONF.neutron.metadata_proxy_shared_secret` is applied when the secret is configured (lines 276–280).
- **Accelerator parameters** — `context`, `dp_name`, `instance_uuid`, `arq_uuid`, `bindings` accepted by `accelerator/cyborg.py` module-level functions and forwarded to the Cyborg REST API.
- **Scheduler hints** — user-controlled JSON strings accepted via `spec_obj.get_scheduler_hint('query')` at `scheduler/filters/json_filter.py:135` and dispatched through `JsonFilter._parse_string` (lines 93–112).
- **CLI arguments** — nine service launcher scripts (`cmd/api.py`, `cmd/compute.py`, `cmd/conductor.py`, `cmd/scheduler.py`, `cmd/novncproxy.py`, `cmd/serialproxy.py`, `cmd/spicehtml5proxy.py`, `cmd/status.py`) each call `config.parse_args(sys.argv)` as their primary entry point (`docs/components/nova.md`, Defined Symbols > cmd/ section).
- **Console connections** — `console/serial.py` opens a raw network socket (`network-socket` entry point at L83) for serial console connections; `console/rfb/authvencrypt.py` performs the VeNCrypt TLS handshake to the QEMU VNC backend.

Data flows through the following subsystems:

- **API path:** inbound requests are dispatched through `api/openstack/` routers to compute resource handlers; JSON schema validation is applied by the `schema` decorator factory in `api/validation/__init__.py`; response serialisers in `api/openstack/compute/views/` format outbound data.
- **Compute/Conductor path:** `compute/api.py` (class `API`) is the public compute service interface; operations requiring cross-node coordination are delegated via RPC to `conductor/manager.py` (`ConductorManager`). `compute/manager.py` (`ComputeManager`) executes per-hypervisor operations (instance lifecycle) and issues 50+ RPC calls to the conductor, scheduler, and network services.
- **Accelerator path:** caller-supplied parameters flow through `_CyborgClient` (`cyborg.py:L118–L419`) and exit via HTTP calls to the Cyborg REST API; `network/neutron.py` calls `get_client()` (line 673), `get_arq_pci_device_profile` (line 1715), and `get_device_amount_of_dp_groups` (line 2369).
- **Metadata path:** `api/metadata/handler.py` issues HTTP calls to the metadata service backend; when shared-secret is absent, provider identity headers are accepted without HMAC validation (Finding 1, CWE-306).
- **Objects/DB path:** OVO objects (`objects/*.py`) issue SQLAlchemy sessions against `db/api/` and `db/main/`; `db/main/api.py` (4,967 lines, 3,535 LOC) provides the complete query API (`docs/components/nova.md`, Defined Symbols > db/ section).
- **Network path:** `network/neutron.py` (3,989 lines) issues 80+ outbound Neutron REST API calls (port CRUD, security groups, floating IP, network listing) (`docs/components/nova.md`, Side Effects).
- **Scheduler path:** `scheduler/manager.py` orchestrates host selection via `select_destinations`; `scheduler/client/report.py` issues HTTP calls to the OpenStack Placement API (line 279).
- **Auth path:** `service_auth.py` constructs service-user keystoneauth1 auth plugins and sessions (lines 56, 70) consumed by `accelerator/cyborg.py` and `utils.py`.
- **Console path:** `console/websocketproxy.py` serves as WebSocket proxy base for noVNC, SPICE, and serial console; `console/securityproxy/rfb.py` implements the RFB security handshake; `console/rfb/authvencrypt.py` performs outbound TLS negotiation with the QEMU VNC backend (L151–L152).

Sources: `docs/components/nova.md` (Local Data Flow, Side Effects, Defined Symbols); KB records under `.aee/kb/src/nova/`.

---

## External Dependencies

Third-party and standard-library packages imported across the 433 files. Source: `docs/components/nova.md` (External Dependencies table).

### Most widely used (by file count)

| Package | Files importing |
|---------|----------------|
| `oslo_utils` | 130 |
| `oslo_log` | 106 |
| `webob` | 86 |
| `copy` | 69 |
| `oslo_config` | 61 |
| `sqlalchemy` | 59 |
| `oslo_serialization` | 43 |
| `oslo_db` | 30 |
| `keystoneauth1` | 26 |
| `collections` | 25 |
| `functools` | 24 |
| `alembic` | 18 |
| `re` | 17 |
| `sys` | 15 |
| `os` | 14 |
| `oslo_messaging` | 13 |
| `typing` | 11 |
| `itertools` | 10 |
| `urllib` | 10 |
| `oslo_reports` | 10 |

Additional packages (fewer files): `cursive`, `eventlet`, `greenlet`, `hashlib`, `jsonschema`, `netaddr`, `openstack`, `os_resource_classes`, `os_service_types`, `os_traits`, `oslo_concurrency`, `oslo_i18n`, `oslo_middleware`, `oslo_service`, `oslo_versionedobjects`, `osc_lib`, `retrying`, and standard-library modules. Total unique external packages: 90.

### Unresolved internal nova imports

302 unresolved imports across 15 symbol roots (Link Summary `.aee/link-summary.md`). Dominant gaps:

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 149 | bare generic import; count increased as conf/ and console/ files import top-level sub-packages not yet extracted |
| `nova.policies` | 60 | policy layer — not yet extracted |
| `nova.virt` | 23 | virt driver layer — not yet extracted |
| `nova.notifications.objects` | 17 | notification objects — not yet extracted |
| `nova.pci` | 13 | PCI management — not yet extracted |

Resolved since batch 4: `nova.conf` (was 53 refs) and `nova.compute` (was 66 refs) — both fully extracted in Batch 5.
