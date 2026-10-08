# Component: payload_plaintext

## Overview

The `payload_plaintext` component encompasses two distinct sub-services that share the `src/payload_plaintext/` directory prefix:

- **aurora-portal** (Python) — a pipeline-processing service with ten uniform stage modules, six functional modules, and one test module (19 files, prior run).
- **aurora-compute** (Go) — a compute-management service with an HTTP API layer, a lifecycle model, a placement scheduler, twelve uniform in-memory store services, and a telemetry publisher (19 files, this run).

Both sub-services land under `src/payload_plaintext/`, so `seam_index component_of()` assigns both the component label `payload_plaintext`. One confirmed intra-component cross-service seam exists: `aurora-compute/services/telemetry/publish.go` publishes YAML-encoded `Sample` structs to bus topic `aurora.telemetry.tenant` (producer); `aurora-portal/aurora_portal/telemetry_consumer.py` subscribes to that topic and deserialises each message with `yaml.load` (consumer). An unresolved cross-component reference to `aurora-network/src/profile_label.h` (cgo header) is present in `api/profile.go`; aurora-network has not yet been delivered. The component carries six critical- or high-severity security findings across both sub-services.

---

## File Inventory

Source: `.aee/intake.jsonl`. CCN data not present in KB records for any file in this component.

### aurora-portal (Python — 19 files)

| File | Language | KB status |
|---|---|---|
| `aurora-portal/aurora_portal/adapter.py` | Python | parsed |
| `aurora-portal/aurora_portal/api.py` | Python | parsed |
| `aurora-portal/aurora_portal/collector.py` | Python | parsed |
| `aurora-portal/aurora_portal/dispatcher.py` | Python | parsed |
| `aurora-portal/aurora_portal/formatter.py` | Python | parsed |
| `aurora-portal/aurora_portal/indexer.py` | Python | parsed |
| `aurora-portal/aurora_portal/maintenance.py` | Python | parsed |
| `aurora-portal/aurora_portal/notifier.py` | Python | parsed |
| `aurora-portal/aurora_portal/publisher.py` | Python | parsed |
| `aurora-portal/aurora_portal/quota.py` | Python | parsed |
| `aurora-portal/aurora_portal/region_lookup.py` | Python | parsed |
| `aurora-portal/aurora_portal/resolver.py` | Python | parsed |
| `aurora-portal/aurora_portal/session.py` | Python | parsed |
| `aurora-portal/aurora_portal/telemetry_consumer.py` | Python | parsed |
| `aurora-portal/aurora_portal/throttle.py` | Python | parsed |
| `aurora-portal/aurora_portal/validator.py` | Python | parsed |
| `aurora-portal/tests/test_quota.py` | Python | parsed |
| `aurora-portal/requirements.txt` | UNKNOWN | error: unparseable — pip manifest |
| `aurora-portal/.env.example` | UNKNOWN | error: unparseable — dotenv template |

All paths relative to `src/payload_plaintext/`.

### aurora-compute (Go — 19 files)

| File | Language | KB status |
|---|---|---|
| `aurora-compute/api/profile.go` | Go | parsed |
| `aurora-compute/api/routes.go` | Go | parsed |
| `aurora-compute/api/server.go` | Go | parsed |
| `aurora-compute/lifecycle/instance.go` | Go | parsed |
| `aurora-compute/scheduler/scheduler.go` | Go | parsed |
| `aurora-compute/services/audit/audit.go` | Go | parsed |
| `aurora-compute/services/billing/billing.go` | Go | parsed |
| `aurora-compute/services/dnsproxy/dnsproxy.go` | Go | parsed |
| `aurora-compute/services/imaging/imaging.go` | Go | parsed |
| `aurora-compute/services/keystore/keystore.go` | Go | parsed |
| `aurora-compute/services/loadbalancer/loadbalancer.go` | Go | parsed |
| `aurora-compute/services/metering/metering.go` | Go | parsed |
| `aurora-compute/services/migration/migration.go` | Go | parsed |
| `aurora-compute/services/placement/placement.go` | Go | parsed |
| `aurora-compute/services/scheduler2/scheduler2.go` | Go | parsed |
| `aurora-compute/services/snapshot/snapshot.go` | Go | parsed |
| `aurora-compute/services/telemetry/publish.go` | Go | parsed |
| `aurora-compute/services/telemetry/telemetry.go` | Go | parsed |
| `aurora-compute/go.mod` | UNKNOWN | error: unparseable — Go module manifest |

All paths relative to `src/payload_plaintext/`.

---

## Defined Symbols

### aurora-portal: Pipeline-stage modules

Ten modules share an identical class structure. Source: `.aee/kb/src/payload_plaintext/aurora-portal/aurora_portal/<module>.py.json` for each.

| Module | Class | `__init__` | `handle` | `transform` | `stats` | `build` |
|---|---|---|---|---|---|---|
| `adapter.py` | `Adapter` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `collector.py` | `Collector` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `dispatcher.py` | `Dispatcher` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `formatter.py` | `Formatter` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `indexer.py` | `Indexer` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `notifier.py` | `Notifier` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `publisher.py` | `Publisher` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `resolver.py` | `Resolver` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `throttle.py` | `Throttle` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |
| `validator.py` | `Validator` L7–28 | L10–12 | L14–18 | L20–25 | L27–28 | L31–32 |

All `handle`: `(self, payload: dict) -> dict`. All `transform`: `(self, value: Any) -> Any`. All `stats`: `(self) -> dict`. All `build`: `(options=None) -> <ClassName>`.

### aurora-portal: Functional modules

Source: `.aee/kb/src/payload_plaintext/aurora-portal/aurora_portal/<module>.py.json` for each.

**api.py**

| Name | Kind | Signature / Type | Lines |
|---|---|---|---|
| `DATABASE_PASSWORD` | module-level constant | `str` | L10 |
| `API_BASE` | module-level constant | `str` | L12 |
| `load_quota_profile` | function | `(path: str) -> Any` | L15–17 |
| `fetch_project` | function | `(project_id: str, token: str) -> Any` | L20–26 |
| `export_report` | function | `(project_id: str, destination: str) -> int` | L29–31 |
| `render_template` | function | `(template_path: str, context: dict) -> str` | L34–39 |
| `call_backend` | function | `(argv: list) -> subprocess.CompletedProcess` | L42–43 |

**maintenance.py**

| Name | Kind | Signature / Type | Lines |
|---|---|---|---|
| `CLI_BINARY` | module-level constant | `str` | L9 |
| `apply_profile` | function | `(request: dict) -> dict` | L12–24 |
| `list_profiles` | function | `() -> list[str]` | L27–31 |

**quota.py**

| Name | Kind | Signature / Type | Lines |
|---|---|---|---|
| `Quota` | class (dataclass) | — | L7–12 |
| `Quota.instances` | class field | `int` | L9 |
| `Quota.vcpus` | class field | `int` | L10 |
| `Quota.memory_mib` | class field | `int` | L11 |
| `Quota.volumes` | class field | `int` | L12 |
| `DEFAULT` | module-level constant | `Quota` | L15 |
| `remaining` | function | `(limit: Quota, used: Quota) -> Quota` | L18–24 |
| `exceeded` | function | `(limit: Quota, used: Quota) -> bool` | L27–32 |

**region_lookup.py**

| Name | Kind | Signature / Type | Lines |
|---|---|---|---|
| `TABLE` | module-level constant | `str` | L6 |
| `region_for` | function | `(cursor: Any, project: str) -> dict \| None` | L9–14 |

**session.py**

| Name | Kind | Signature / Type | Lines |
|---|---|---|---|
| `new_session_id` | function | `(length: int = 32) -> str` | L9–11 |
| `password_hash` | function | `(password: str, salt: str) -> str` | L14–15 |
| `constant_time_equal` | function | `(left: str, right: str) -> bool` | L18–24 |

**telemetry_consumer.py**

| Name | Kind | Signature / Type | Lines |
|---|---|---|---|
| `TENANT_TOPIC` | module-level constant | `str` | L8 |
| `consume` | generator function | `(bus: Any) -> Generator` | L11–13 |
| `handle` | function | `(message: Any) -> dict` | L16–22 |

**tests/test_quota.py**

| Name | Kind | Signature | Lines |
|---|---|---|---|
| `test_remaining` | function | `() -> None` | L4–9 |
| `test_exceeded` | function | `() -> None` | L12–15 |

### aurora-compute: API layer

Source: `.aee/kb/src/payload_plaintext/aurora-compute/api/*.go.json`.

**api/profile.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `profileRequest` | struct | no | fields: `Label string (json:"label")` | L18–20 |
| `ApplyProfile` | function | yes | `(w http.ResponseWriter, r *http.Request)` | L23–36 |

**api/routes.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `Register` | function | yes | `(mux *http.ServeMux)` | L12–16 |
| `requireToken` | function | no | `(next http.HandlerFunc) http.HandlerFunc` | L18–26 |
| `ListProfiles` | function | yes | `(w http.ResponseWriter, r *http.Request)` | L29–32 |

**api/server.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `metricsToken` | constant | no | `string` | L13 |
| `newClient` | function | no | `() *http.Client` | L15–20 |
| `Console` | function | yes | `(instance string) ([]byte, error)` | L23–26 |
| `Health` | function | yes | `(w http.ResponseWriter, r *http.Request)` | L28–31 |

### aurora-compute: Lifecycle and scheduler

Source: `.aee/kb/src/payload_plaintext/aurora-compute/lifecycle/instance.go.json` and `.../scheduler/scheduler.go.json`.

**lifecycle/instance.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `State` | type | yes | underlying: `string` | L8 |
| `Building` | constant | yes | `State` | L11 |
| `Active` | constant | yes | `State` | L12 |
| `Stopped` | constant | yes | `State` | L13 |
| `Error` | constant | yes | `State` | L14 |
| `Instance` | struct | yes | fields: `ID string`, `Project string`, `State State`, `CreatedAt time.Time` | L17–22 |
| `Instance.Transition` | receiver method | yes | `(next State) bool` | L24–35 |
| `Age` | function | yes | `(i Instance, now time.Time) time.Duration` | L37–39 |

**scheduler/scheduler.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `Host` | struct | yes | fields: `Name string`, `FreeVCPU int`, `FreeMiB int`, `Reserved bool` | L11–16 |
| `Request` | struct | yes | fields: `VCPU int`, `MiB int` | L18–21 |
| `ErrNoCapacity` | variable | yes | `error` | L23 |
| `Select` | function | yes | `(hosts []Host, req Request) (Host, error)` | L26–43 |

### aurora-compute: Telemetry

Source: `.aee/kb/src/payload_plaintext/aurora-compute/services/telemetry/publish.go.json` and `.../telemetry.go.json`.

**services/telemetry/publish.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `TenantTopic` | constant | yes | `string` (`"aurora.telemetry.tenant"`) | L9 |
| `Sample` | struct | yes | fields: `Project string (yaml:"project")`, `Metric string (yaml:"metric")`, `Value int64 (yaml:"value")`, `Source string (yaml:"source")` | L11–16 |
| `Encode` | function | yes | `(s Sample) ([]byte, error)` | L19–21 |
| `Publish` | function | yes | `(bus Bus, s Sample) error` | L24–30 |
| `Bus` | interface | yes | methods: `Send(topic string, body []byte) error` | L33–35 |

**services/telemetry/telemetry.go**

| Name | Kind | Exported | Signature / Type | Lines |
|---|---|---|---|---|
| `Record` | struct | yes | fields: `ID string`, `Project string`, `Value int64`, `Tags []string` | L12–17 |
| `ErrNotFound` | variable | yes | `error` | L19 |
| `Store` | struct | yes | fields: `records map[string]Record` (unexported) | L21–23 |
| `NewStore` | function | yes | `() *Store` | L25–27 |
| `Store.Put` | receiver method | yes | `(r Record)` | L29–31 |
| `Store.Get` | receiver method | yes | `(id string) (Record, error)` | L33–39 |
| `Store.ByProject` | receiver method | yes | `(project string) []Record` | L41–49 |
| `Store.Total` | receiver method | yes | `(project string) int64` | L51–57 |
| `Normalise` | function | yes | `(tag string) string` | L59–61 |
| `Store.Count` | receiver method | yes | `() int` | L63–65 |

### aurora-compute: Uniform service stores (11 services)

Each of the following files defines an identical symbol set. Source: `.aee/kb/src/payload_plaintext/aurora-compute/services/<service>/<service>.go.json`.

Services: `audit`, `billing`, `dnsproxy`, `imaging`, `keystore`, `loadbalancer`, `metering`, `migration`, `placement`, `scheduler2`, `snapshot`.

| Symbol | Kind | Exported |
|---|---|---|
| `Record` | struct | yes |
| `ErrNotFound` | variable | yes |
| `Store` | struct | yes |
| `NewStore` | function | yes |
| `Store.Put` | receiver method | yes |
| `Store.Get` | receiver method | yes |
| `Store.ByProject` | receiver method | yes |
| `Store.Total` | receiver method | yes |
| `Normalise` | function | yes |
| `Store.Count` | receiver method | yes |

All depend only on `errors` and `strings` (stdlib). No side effects, no security surface.

---

## External Dependencies

Source: `.aee/link-graph.json` (`resolved`) and KB record `externalDependencies` fields.

### aurora-portal

| Module | Kind | Imported by | Line |
|---|---|---|---|
| `os` | stdlib | `api.py` | L4 |
| `subprocess` | stdlib | `api.py` | L5 |
| `subprocess` | stdlib | `maintenance.py` | L6 |
| `hashlib` | stdlib | `session.py` | L4 |
| `random` | stdlib | `session.py` | L5 |
| `string` | stdlib | `session.py` | L6 |
| `dataclasses.dataclass` | stdlib | `quota.py` | L4 |
| `requests` | third-party (pip) | `api.py` | L7 |
| `yaml` (PyYAML) | third-party (pip) | `api.py` | L8 |
| `yaml` (PyYAML) | third-party (pip) | `telemetry_consumer.py` | L6 |
| `aurora_portal.quota` (Quota, remaining, exceeded) | intra-component | `tests/test_quota.py` | L1 |

The 10 pipeline-stage modules declare no external dependencies (builtins only).

### aurora-compute

| Module | Kind | Imported by | Line |
|---|---|---|---|
| `encoding/json` | stdlib | `api/profile.go` | L13 |
| `net/http` | stdlib | `api/profile.go`, `api/routes.go`, `api/server.go` | L14 / L7 / L9 |
| `unsafe` | stdlib | `api/profile.go` | L15 |
| `C` (cgo) | native — header `aurora-network/src/profile_label.h` | `api/profile.go` | L10 |
| `os` | stdlib | `api/routes.go` | L8 |
| `crypto/tls` | stdlib | `api/server.go` | L7 |
| `fmt` | stdlib | `api/server.go` | L8 |
| `os/exec` | stdlib | `api/server.go` | L10 |
| `time` | stdlib | `lifecycle/instance.go` | L6 |
| `errors` | stdlib | `scheduler/scheduler.go`, all 12 service stores | L7 |
| `sort` | stdlib | `scheduler/scheduler.go` | L8 |
| `strings` | stdlib | all 12 service stores | L8 |
| `gopkg.in/yaml.v2` | third-party (Go module) | `services/telemetry/publish.go` | L6 |

---

## Side Effects

Source: KB record `sideEffects` fields.

### aurora-portal

| Kind | Target | File | Lines |
|---|---|---|---|
| File-system read | Caller-supplied YAML quota profile path | `api.py` | L16–17 |
| Network call | `https://api.aurora.example.com/v1/projects/<project_id>` via `requests.get` | `api.py` | L21–25 |
| Process spawn | `aurora-cli` shell command via `os.system` | `api.py` | L30–31 |
| File-system read | Caller-supplied template path | `api.py` | L35–36 |
| Process spawn | Caller-supplied `argv` via `subprocess.run` | `api.py` | L43 |
| Process spawn | `aurora-cli profile-apply --name <profile_name>` via `subprocess.run` (list, no shell) | `maintenance.py` | L19–23 |
| Process spawn | `aurora-cli profile-list` via `subprocess.run` (list, no shell) | `maintenance.py` | L28–30 |
| External I/O — bus subscription | Topic `aurora.telemetry.tenant` via caller-supplied `bus` object | `telemetry_consumer.py` | L12 |
| Database query | Table `tenant_region_assignment` via caller-supplied `cursor` | `region_lookup.py` | L10–12 |

### aurora-compute

| Kind | Target | File | Lines |
|---|---|---|---|
| Native function call | `C.aurora_profile_label(clabel)` — symbol from `profile_label.h` (aurora-network) | `api/profile.go` | L32 |
| HTTP response write | `http.ResponseWriter` — error or encoded profile response | `api/profile.go` | L26–35 |
| Environment variable read | `AURORA_ADMIN_TOKEN` via `os.Getenv` | `api/routes.go` | L20 |
| HTTP response write | `http.ResponseWriter` — forbidden or profile-list response | `api/routes.go` | L21–31 |
| Process spawn | `sh -c 'virsh console <instance>'` via `exec.Command` | `api/server.go` | L24–25 |
| HTTP response write | `http.ResponseWriter` — health check response | `api/server.go` | L29–30 |
| External I/O — bus publish | Topic `aurora.telemetry.tenant` via caller-supplied `Bus.Send()` | `services/telemetry/publish.go` | L29 |

---

## Component Diagram

Nodes are files in this component. Solid edges: intra-component resolved imports/references (Link Graph `resolved`, `crossComponent: false` or cross-service within the same component). Dashed edges: unresolved open ends (Link Graph `unresolved`). Source: `.aee/link-graph.json`.

```mermaid
graph LR
    subgraph aurora-portal
        ap-test-quota["tests/test_quota.py"]
        ap-api["aurora_portal/api.py"]
        ap-maintenance["aurora_portal/maintenance.py"]
        ap-quota["aurora_portal/quota.py"]
        ap-region["aurora_portal/region_lookup.py"]
        ap-session["aurora_portal/session.py"]
        ap-telemetry["aurora_portal/telemetry_consumer.py"]
        ap-pipeline["aurora_portal/{adapter,collector,dispatcher,\nformatter,indexer,notifier,publisher,\nresolver,throttle,validator}.py"]
    end
    subgraph aurora-compute-api
        ac-profile["api/profile.go"]
        ac-routes["api/routes.go"]
        ac-server["api/server.go"]
    end
    subgraph aurora-compute-core
        ac-instance["lifecycle/instance.go"]
        ac-scheduler["scheduler/scheduler.go"]
        ac-publish["services/telemetry/publish.go"]
        ac-telemetry["services/telemetry/telemetry.go"]
        ac-stores["services/{audit,billing,dnsproxy,imaging,\nkeystore,loadbalancer,metering,migration,\nplacement,scheduler2,snapshot}.go"]
    end
    ext-bus["aurora.telemetry.tenant (bus topic)"]
    ext-db["tenant_region_assignment (DB)"]
    ext-aurora-network["aurora-network/profile_label.h (external)"]

    ap-test-quota -->|"import Quota L1->L8"| ap-quota
    ap-test-quota -->|"import remaining L1->L18"| ap-quota
    ap-test-quota -->|"import exceeded L1->L27"| ap-quota

    ac-routes -->|"ApplyProfile L13->L23"| ac-profile
    ac-routes -->|"Health L15->L28"| ac-server

    ac-publish -->|"bus-topic aurora.telemetry.tenant L9->L8 crossComponent"| ap-telemetry

    ap-telemetry -.->|"bus.subscribe (unresolved L12)"| ext-bus
    ap-region -.->|"cursor.execute/fetchone (unresolved L10-13)"| ext-db
    ac-profile -.->|"cgo: profile_label.h (unresolved L8)"| ext-aurora-network
```

---

## Local Data Flow

Source: KB record `securitySurface` and `sideEffects` fields; `.aee/security/…findings.json`.

### Cross-service bus flow (confirmed)

`aurora-compute/services/telemetry/publish.go` → `aurora-portal/aurora_portal/telemetry_consumer.py` via bus topic `aurora.telemetry.tenant`. Link Graph entry: resolved, `crossComponent: true`, from L9 to L8.

1. **Producer side (aurora-compute):** `Encode(s Sample)` (L19–21) serialises a `Sample` struct to YAML bytes using `yaml.Marshal`. `Publish(bus, s)` (L24–30) calls `bus.Send(TenantTopic, encoded)` (L29), pushing the YAML payload to the topic.
2. **Consumer side (aurora-portal):** `consume(bus)` (L11–13) yields messages from the bus via `bus.subscribe(TENANT_TOPIC)`. `handle(message)` (L16–22) calls `yaml.load(message.body)` (L17) **without a Loader argument** — PyYAML's default Loader allows arbitrary Python object instantiation. Any publisher to this topic (not restricted to aurora-compute) can craft a malicious YAML payload to achieve code execution in the consumer process. Security finding: CWE-502, high — source `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py.findings.json`.

### aurora-portal entry points and sinks

**Command injection (api.py)**

`export_report(project_id, destination)` (L29) → `"aurora-cli export %s %s" % (project_id, destination)` (L30) → `os.system()` (L31). Neither parameter is sanitised. CWE-78, critical — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`.

**SQL injection (region_lookup.py)**

`region_for(cursor, project)` (L9) → `SELECT … WHERE id='%s' % (TABLE, project)` (L11) → `cursor.execute()` (L10). `project` is not parameterised. CWE-89, critical — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py.findings.json`.

**Insecure YAML deserialization from file (api.py)**

`load_quota_profile(path)` (L15) → `open(path)` (L16) → `yaml.load(handle.read())` (L17) without Loader. CWE-502, high — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`.

**TLS verification disabled (api.py)**

`fetch_project(project_id, token)` (L20) → `requests.get(url, headers={"Authorization": "Bearer " + token}, verify=False)` (L24). Bearer token exposed to network attackers. CWE-295, high — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`.

**Weak session ID generation (session.py)**

`new_session_id(length)` (L9) → `random.choice(...)` called `length` times (L11). `random` is not cryptographically secure. CWE-338, high — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/session.py.findings.json`.

**Insufficient password hash (session.py)**

`password_hash(password, salt)` (L14) → `hashlib.sha1((salt + password).encode()).hexdigest()` (L15). SHA-1 is a fast hash unsuitable for password storage. CWE-916, high — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/session.py.findings.json`.

**Hardcoded production credential (api.py)**

`DATABASE_PASSWORD = "Aur0ra-Portal-Prod-2026!"` (L10). Plaintext credential in source. CWE-798, critical — `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`.

**Pipeline-stage modules**

All ten pipeline-stage modules receive `payload: dict` via `handle()` (L14–18 each). Only a `isinstance` type check is performed before `transform()`. No schema validation, no sanitisation, no direct sinks.

### aurora-compute entry points and sinks

**Command injection via virsh (api/server.go)**

`Console(instance string)` (L23) → `fmt.Sprintf("virsh console %s", instance)` (L24) → `exec.Command("sh", "-c", ...)` (L24). Shell metacharacters in `instance` allow arbitrary command execution. `instance` is caller-supplied with no sanitisation visible in this file. CWE-78, critical — `.aee/security/src/payload_plaintext/aurora-compute/api/server.go.findings.json`.

**Hardcoded AWS-format key (api/server.go)**

`const metricsToken = "AKIAIOSFODNN7EXAMPLE"` (L13). Matches AWS IAM access key ID pattern; committed to source. CWE-798, critical — `.aee/security/src/payload_plaintext/aurora-compute/api/server.go.findings.json`.

**TLS verification disabled (api/server.go)**

`newClient()` (L15–20) constructs `http.Client` with `tls.Config{InsecureSkipVerify: true}` (L17). All outbound TLS connections via this client accept fraudulent certificates. CWE-295, high — `.aee/security/src/payload_plaintext/aurora-compute/api/server.go.findings.json`.

**Unvalidated cgo boundary (api/profile.go)**

`ApplyProfile()` (L23–36): JSON body decoded into `req.Label` (L25) → `C.CString(req.Label)` (L30) → `C.aurora_profile_label(clabel)` (L32). No length or content validation before the C string crosses the cgo boundary. If the native function copies into a fixed-size buffer, an HTTP caller can trigger a buffer overflow. The route is token-gated (`requireToken` in routes.go), but the risk remains for insider or token-theft scenarios. CWE-20, high — `.aee/security/src/payload_plaintext/aurora-compute/api/profile.go.findings.json`.

**Token comparison (api/routes.go)**

`requireToken` (L18–26): compares `r.Header.Get("X-Aurora-Token")` to `os.Getenv("AURORA_ADMIN_TOKEN")` using `!=` (not constant-time). Timing-based token guessing is theoretically possible. No formal security finding recorded; described in KB `securitySurface` — `.aee/kb/src/payload_plaintext/aurora-compute/api/routes.go.json`.

**Bus producer (services/telemetry/publish.go)**

`Publish(bus, s)` (L24–30) → `yaml.Marshal(s)` (L19–21) → `bus.Send(TenantTopic, body)` (L29). No dangerous sink in isolation; the deserialization risk is on the consumer side (see Cross-service bus flow above).

**Uniform service stores (11 services, telemetry/telemetry.go)**

No external I/O, no security surface. All operations are in-memory CRUD on `map[string]Record`. No entry points with untrusted data; no sinks.

---

## Cross-Component Interfaces

### Confirmed intra-component cross-service seam

| Seam | Producer | Consumer | Join key |
|---|---|---|---|
| Bus topic `aurora.telemetry.tenant` | `services/telemetry/publish.go` L9 (`TenantTopic`, Go) | `aurora_portal/telemetry_consumer.py` L8 (`TENANT_TOPIC`, Python) | bus-topic literal |

Source: `.aee/link-graph.json` (`resolved`, `crossComponent: true`; `crossComponentSeams`). Identified by secondary literal-match pass because `seam_index component_of()` resolves both services to `payload_plaintext` from the directory prefix alone.

### Unresolved open ends (awaiting partner components)

| Open-end kind | Symbol / Target | File | Lines | Notes |
|---|---|---|---|---|
| Cross-component cgo header | `profile_label.h` — includes `aurora-network/src/profile_label.h` via `#cgo CFLAGS: -I../../aurora-network/src` | `api/profile.go` | L8 | aurora-network component not in delivery; native symbol `C.aurora_profile_label` at L32 also unresolved |
| Cross-component cgo symbol | `C.aurora_profile_label` | `api/profile.go` | L32 | Definition in `profile_label.h`; unresolved until aurora-network arrives |
| Bus subscription (opaque parameter) | `bus.subscribe("aurora.telemetry.tenant")` | `aurora_portal/telemetry_consumer.py` | L12 | Bus client implementation not in delivery |
| Database reader (opaque parameter) | `cursor.execute` / `cursor.fetchone` on `tenant_region_assignment` | `aurora_portal/region_lookup.py` | L10–13 | Database driver not in delivery |
| HTTP API consumer | `https://api.aurora.example.com/v1/projects/…` | `aurora_portal/api.py` | L21–25 | External API; no partner in delivery |
| Executable caller | `os.system("aurora-cli export …")` | `aurora_portal/api.py` | L30–31 | `aurora-cli` binary not in delivery |
| Executable caller | `subprocess.run(["aurora-cli", "profile-apply", …])` | `aurora_portal/maintenance.py` | L19–23 | `aurora-cli` binary not in delivery |
| Executable caller | `subprocess.run(["aurora-cli", "profile-list"])` | `aurora_portal/maintenance.py` | L28–30 | `aurora-cli` binary not in delivery |
| Subprocess caller | `subprocess.run(argv)` | `aurora_portal/api.py` | L43 | Caller and target binary unknown |
