# Component: payload_plaintext

## Overview

The `payload_plaintext` component encompasses three distinct sub-services that share the `src/payload_plaintext/` directory prefix, causing `seam_index component_of()` to assign all to the same component label:

- **aurora-portal** (Python, 19 files) — pipeline-processing service with ten uniform stage modules and six functional modules.
- **aurora-compute** (Go, 19 files) — compute-management service with an HTTP API, lifecycle model, placement scheduler, twelve in-memory service stores, and a telemetry publisher.
- **aurora-network** (C, 57 files) — network-management daemon: profile labelling, packet parsing, flow tracking, ACL enforcement, tunnel management, per-resource operation tables, and a stats subsystem.

Two confirmed intra-component cross-service seams exist, both identified by secondary literal/symbol matching:

1. **Bus topic** `aurora.telemetry.tenant`: aurora-compute (`publish.go:9`) → aurora-portal (`telemetry_consumer.py:8`).
2. **cgo link-time symbol** `aurora_profile_label`: aurora-compute (`api/profile.go:32`) → aurora-network (`profile_label.c:25`), with CWE-121 buffer overflow confirmed at `profile_label.c:28`.

Three unresolved open ends remain (all opaque parameters in aurora-portal). The component carries multiple critical and high-severity security findings across all three sub-services.

---

## File Inventory

Source: `.aee/intake.jsonl`. CCN data present for non-boilerplate aurora-network C files only (see Defined Symbols). All paths relative to `src/payload_plaintext/`.

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

### aurora-network (C — 57 files)

**Non-boilerplate files** (9 source files, detailed review):

| File | Language | KB status |
|---|---|---|
| `aurora-network/src/profile_label.h` | C | parsed |
| `aurora-network/src/profile_label.c` | C | parsed |
| `aurora-network/src/packet.h` | C | parsed |
| `aurora-network/src/packet_parse.c` | C | parsed |
| `aurora-network/src/main.c` | C | parsed |
| `aurora-network/src/acl.c` | C | parsed |
| `aurora-network/src/flow_table.c` | C | parsed |
| `aurora-network/src/stats.c` | C | parsed |
| `aurora-network/src/tunnel.c` | C | parsed |

**Uniform boilerplate `*_ops.c` files** (47 files, identical structure — see Defined Symbols):

`account_ops.c`, `alarm_ops.c`, `backup_ops.c`, `catalog_ops.c`, `cluster_ops.c`, `config_ops.c`, `console_ops.c`, `device_ops.c`, `domain_ops.c`, `event_ops.c`, `export_ops.c`, `firewall_ops.c`, `gateway_ops.c`, `health_ops.c`, `image_ops.c`, `inventory_ops.c`, `job_ops.c`, `keypair_ops.c`, `label_ops.c`, `limit_ops.c`, `lock_ops.c`, `meter_ops.c`, `network_ops.c`, `node_ops.c`, `object_ops.c`, `policy_ops.c`, `port_ops.c`, `profile_ops.c`, `queue_ops.c`, `quota_ops.c`, `region_ops.c`, `route_ops.c`, `schedule_ops.c`, `secret_ops.c`, `server_ops.c`, `session_ops.c`, `share_ops.c`, `snapshot2_ops.c`, `subnet_ops.c`, `tag_ops.c`, `task_ops.c`, `tenant_ops.c`, `trunk_ops.c`, `usage_ops.c`, `volume_ops.c`, `worker_ops.c`, `zone_ops.c`.

**Config files** (1 file):

| File | Language | KB status |
|---|---|---|
| `aurora-network/Makefile` | UNKNOWN | error: unparseable — GNU Make build script |

---

## Defined Symbols

### aurora-portal: Pipeline-stage modules

Ten modules share an identical class structure. Source: `.aee/kb/src/payload_plaintext/aurora-portal/aurora_portal/<module>.py.json`.

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

### aurora-portal: Functional and test modules

Source: individual `.aee/kb/src/payload_plaintext/aurora-portal/…json` files.

**api.py**: `DATABASE_PASSWORD` (str, L10), `API_BASE` (str, L12), `load_quota_profile(path) -> Any` (L15–17), `fetch_project(project_id, token) -> Any` (L20–26), `export_report(project_id, destination) -> int` (L29–31), `render_template(template_path, context) -> str` (L34–39), `call_backend(argv) -> subprocess.CompletedProcess` (L42–43).

**maintenance.py**: `CLI_BINARY` (str, L9), `apply_profile(request) -> dict` (L12–24), `list_profiles() -> list[str]` (L27–31).

**quota.py**: `Quota` dataclass (L7–12; fields: `instances int` L9, `vcpus int` L10, `memory_mib int` L11, `volumes int` L12), `DEFAULT` (Quota, L15), `remaining(limit, used) -> Quota` (L18–24), `exceeded(limit, used) -> bool` (L27–32).

**region_lookup.py**: `TABLE` (str, L6), `region_for(cursor, project) -> dict|None` (L9–14).

**session.py**: `new_session_id(length=32) -> str` (L9–11), `password_hash(password, salt) -> str` (L14–15), `constant_time_equal(left, right) -> bool` (L18–24).

**telemetry_consumer.py**: `TENANT_TOPIC` (str, L8), `consume(bus) -> Generator` (L11–13), `handle(message) -> dict` (L16–22).

**tests/test_quota.py**: `test_remaining() -> None` (L4–9), `test_exceeded() -> None` (L12–15).

### aurora-compute: API layer

Source: `.aee/kb/src/payload_plaintext/aurora-compute/api/*.go.json`.

**api/profile.go**: `profileRequest` struct (L18–20; field: `Label string json:"label"`), `ApplyProfile(w, r)` exported (L23–36).

**api/routes.go**: `Register(mux *http.ServeMux)` exported (L12–16), `requireToken(next) http.HandlerFunc` (L18–26), `ListProfiles(w, r)` exported (L29–32).

**api/server.go**: `metricsToken` const (L13), `newClient() *http.Client` (L15–20), `Console(instance string) ([]byte, error)` exported (L23–26), `Health(w, r)` exported (L28–31).

### aurora-compute: Lifecycle, scheduler, and telemetry

**lifecycle/instance.go**: `State` type (L8), `Building/Active/Stopped/Error` consts (L11–14), `Instance` struct (L17–22; fields: ID, Project, State, CreatedAt), `Instance.Transition(next State) bool` (L24–35), `Age(i, now) time.Duration` (L37–39).

**scheduler/scheduler.go**: `Host` struct (L11–16; fields: Name, FreeVCPU, FreeMiB, Reserved), `Request` struct (L18–21; fields: VCPU, MiB), `ErrNoCapacity` error (L23), `Select(hosts, req) (Host, error)` (L26–43).

**services/telemetry/publish.go**: `TenantTopic` const `"aurora.telemetry.tenant"` (L9), `Sample` struct (L11–16; yaml-tagged fields: Project, Metric, Value, Source), `Encode(s Sample) ([]byte, error)` (L19–21), `Publish(bus Bus, s Sample) error` (L24–30), `Bus` interface `Send(topic, body) error` (L33–35).

**services/telemetry/telemetry.go**: `Record` struct (L12–17), `ErrNotFound` error (L19), `Store` struct (L21–23), `NewStore() *Store` (L25–27), `Store.Put`, `Store.Get`, `Store.ByProject`, `Store.Total`, `Normalise`, `Store.Count` (L29–65).

**Aurora-compute uniform service stores** (11 services: audit, billing, dnsproxy, imaging, keystore, loadbalancer, metering, migration, placement, scheduler2, snapshot): each defines `Record`, `ErrNotFound`, `Store`, `NewStore`, `Store.Put/Get/ByProject/Total/Count`, `Normalise` — identical pattern, no side effects, no security surface.

### aurora-network: Non-boilerplate files

Source: `.aee/kb/src/payload_plaintext/aurora-network/src/*.json`.

**profile_label.h** (L1–16): `AURORA_PROFILE_LABEL_H` guard (L12); declaration `aurora_profile_label(const char *label) -> int` (L15).

**profile_label.c** (L11–45):

| Symbol | Kind | Signature | Lines | NLOC | CCN |
|---|---|---|---|---|---|
| `PROFILE_SLOTS` | constant | — | L15 | — | — |
| `profile_slot` | struct | fields: `label[32] char`, `applied int` | L17–20 | — | — |
| `slots` | static variable | `profile_slot[PROFILE_SLOTS]` | L22 | — | — |
| `slot_next` | static variable | `int` | L23 | — | — |
| `aurora_profile_label` | function | `(const char *label) -> int` | L25–34 | 8 | 1 |
| `aurora_profile_count` | function | `() -> int` | L36–45 | 10 | 3 |

**packet.h** (L12–28): `AURORA_PACKET_H` guard (L12), `MAX_LABELS` const (L16), `flow_key` struct (L18–23; fields: tenant uint32, sport uint16, dport uint16, labels[MAX_LABELS] uint8), declarations: `parse_tenant_tag`, `parse_ports`, `copy_labels`, `dump_key` (L25–28).

**packet_parse.c** (L11–49): implements all four `packet.h` declarations.

| Symbol | Kind | Signature | Lines | NLOC | CCN |
|---|---|---|---|---|---|
| `parse_tenant_tag` | function | `(const char *header, struct flow_key *key) -> int` | L17–23 | 7 | 1 |
| `parse_ports` | function | `(const unsigned char *buf, size_t len, struct flow_key *key) -> int` | L25–33 | 9 | 2 |
| `copy_labels` | function | `(struct flow_key *key, const unsigned char *labels, int count) -> int` | L36–43 | 8 | 2 |
| `dump_key` | function | `(const struct flow_key *key, char *out, size_t outlen) -> void` | L45–49 | 5 | 1 |

**main.c** (L11–27):

| Symbol | Kind | Signature | Lines | NLOC | CCN |
|---|---|---|---|---|---|
| `main` | function | `(int argc, char **argv) -> int` | L15–27 | 12 | 2 |

**acl.c** (L11–51):

| Symbol | Kind | Signature | Lines | NLOC | CCN |
|---|---|---|---|---|---|
| `acl_rule` | struct | fields: tenant uint32, dport uint32, allow int | L15–19 | — | — |
| `rules` | static variable | `acl_rule[64]` | L21 | — | — |
| `rule_count` | static variable | int | L22 | — | — |
| `acl_add` | function | `(tenant, dport uint, allow int) -> int` | L24–34 | 11 | 2 |
| `acl_check` | function | `(key *struct flow_key) -> int` | L36–45 | 10 | 4 |
| `acl_reset` | function | `() -> void` | L47–51 | 5 | 1 |

**flow_table.c** (L11–74):

| Symbol | Kind | Signature | Lines | NLOC | CCN |
|---|---|---|---|---|---|
| `entry` | struct | fields: key flow_key, packets ulong, bytes ulong, next *entry | L15–20 | — | — |
| `table` | static variable | `*entry[4096]` | L22 | — | — |
| `hash_key` | function | `(key *struct flow_key) -> unsigned int` | L24–27 | 4 | 1 |
| `flow_lookup` | function | `(key *struct flow_key) -> *entry` | L29–39 | 11 | 3 |
| `flow_insert` | function | `(key *struct flow_key) -> int` | L41–54 | 14 | 2 |
| `flow_account` | function | `(e *entry, bytes ulong) -> void` | L56–60 | 5 | 1 |
| `flow_flush` | function | `() -> void` | L62–74 | 13 | 3 |

**stats.c** (L11–35): `counters` struct (rx, tx, drop unsigned long), `global` variable, `stats_rx/tx/drop(n ulong)` (each CCN 1), `stats_render(out, len)`, `stats_reset()` (all CCN 1).

**tunnel.c** (L11–38):

| Symbol | Kind | Signature | Lines | NLOC | CCN |
|---|---|---|---|---|---|
| `tunnel_up` | function | `(name char*, remote char*) -> int` | L16–21 | 6 | 1 |
| `tunnel_down` | function | `(name char*) -> int` | L23–28 | 6 | 1 |
| `tunnel_mtu` | function | `(name char*, mtu int) -> int` | L30–38 | 9 | 3 |

**Five highest-CCN functions** (from KB records; only non-boilerplate C files contain CCN data):

| Rank | Function | File | Lines | CCN |
|---|---|---|---|---|
| 1 | `acl_check` | `acl.c` | L36–45 | 4 |
| 2 | `aurora_profile_count` | `profile_label.c` | L36–45 | 3 |
| 2 | `flow_lookup` | `flow_table.c` | L29–39 | 3 |
| 2 | `flow_flush` | `flow_table.c` | L62–74 | 3 |
| 2 | `tunnel_mtu` | `tunnel.c` | L30–38 | 3 |

### aurora-network: Uniform boilerplate `*_ops.c` files (47 files)

Each file defines: `<NAME>_MAX` constant, `<name>_entry` struct (fields: name, value, active), static `<name>_table` array, `<name>_count` int, and four functions: `<name>_add`, `<name>_find`, `<name>_total`, `<name>_clear`. No external dependencies beyond `<stdio.h>`, `<stdlib.h>`, `<string.h>`. No side effects, no security surface. Source: `.aee/kb/src/payload_plaintext/aurora-network/src/account_ops.c.json` (representative; all 47 files confirmed identical structure).

---

## External Dependencies

Source: KB record `externalDependencies` fields; `.aee/link-graph.json` (`resolved`).

### aurora-portal

| Module | Kind | Imported by | Line |
|---|---|---|---|
| `os`, `subprocess` | stdlib | `api.py` | L4–5 |
| `subprocess` | stdlib | `maintenance.py` | L6 |
| `hashlib`, `random`, `string` | stdlib | `session.py` | L4–6 |
| `dataclasses.dataclass` | stdlib | `quota.py` | L4 |
| `requests` | third-party (pip) | `api.py` | L7 |
| `yaml` (PyYAML) | third-party (pip) | `api.py`, `telemetry_consumer.py` | L8, L6 |
| `aurora_portal.quota` | intra-component | `tests/test_quota.py` | L1 |

### aurora-compute

| Module | Kind | Imported by |
|---|---|---|
| `encoding/json`, `net/http`, `unsafe` | stdlib | `api/profile.go` |
| `C` (cgo, via `profile_label.h`) | native — aurora-network | `api/profile.go` L10 |
| `net/http`, `os` | stdlib | `api/routes.go` |
| `crypto/tls`, `fmt`, `net/http`, `os/exec` | stdlib | `api/server.go` |
| `time` | stdlib | `lifecycle/instance.go` |
| `errors`, `sort` | stdlib | `scheduler/scheduler.go` |
| `errors`, `strings` | stdlib | all 12 service stores |
| `gopkg.in/yaml.v2` | third-party (Go module) | `services/telemetry/publish.go` |

### aurora-network

All dependencies are C stdlib. No third-party libraries.

| Header | Imported by |
|---|---|
| `<stdio.h>` | `profile_label.c`, `packet_parse.c`, `main.c`, `acl.c`, `stats.c`, `tunnel.c`, all `*_ops.c` |
| `<stdlib.h>` | `packet_parse.c`, `flow_table.c`, `tunnel.c`, all `*_ops.c` |
| `<string.h>` | `profile_label.c`, `packet_parse.c`, `main.c`, `acl.c`, `flow_table.c`, `stats.c`, `tunnel.c`, all `*_ops.c` |
| `<stddef.h>` | `packet.h` |
| `"profile_label.h"` | `profile_label.c` |
| `"packet.h"` | `main.c`, `acl.c`, `flow_table.c`, `packet_parse.c` |

---

## Side Effects

Source: KB record `sideEffects` fields.

### aurora-portal

| Kind | Target | File | Lines |
|---|---|---|---|
| File-system read | YAML quota profile path | `api.py` | L16–17 |
| Network call | `https://api.aurora.example.com/v1/projects/<id>` | `api.py` | L21–25 |
| Process spawn | `aurora-cli export …` via `os.system` | `api.py` | L30–31 |
| File-system read | Template file path | `api.py` | L35–36 |
| Process spawn | Caller-supplied `argv` via `subprocess.run` | `api.py` | L43 |
| Process spawn | `aurora-cli profile-apply --name …` | `maintenance.py` | L19–23 |
| Process spawn | `aurora-cli profile-list` | `maintenance.py` | L28–30 |
| External I/O — bus subscription | `aurora.telemetry.tenant` via opaque `bus` | `telemetry_consumer.py` | L12 |
| Database query | `tenant_region_assignment` via opaque `cursor` | `region_lookup.py` | L10–12 |

### aurora-compute

| Kind | Target | File | Lines |
|---|---|---|---|
| Native function call | `C.aurora_profile_label(clabel)` — definition in `profile_label.c:25` | `api/profile.go` | L32 |
| HTTP response write | `http.ResponseWriter` | `api/profile.go` | L26–35 |
| Environment variable read | `AURORA_ADMIN_TOKEN` via `os.Getenv` | `api/routes.go` | L20 |
| HTTP response write | `http.ResponseWriter` | `api/routes.go` | L21–31 |
| Process spawn | `sh -c 'virsh console <instance>'` via `exec.Command` | `api/server.go` | L24–25 |
| HTTP response write | `http.ResponseWriter` | `api/server.go` | L29–30 |
| External I/O — bus publish | `aurora.telemetry.tenant` via caller-supplied `Bus.Send()` | `services/telemetry/publish.go` | L29 |

### aurora-network

| Kind | Target | File | Lines |
|---|---|---|---|
| Process spawn | `system("ip link add … type gre remote …")` | `tunnel.c` | L20 |
| Process spawn | `system("ip link del …")` | `tunnel.c` | L27 |
| Process spawn | `system("ip link set … mtu …")` | `tunnel.c` | L37 |
| Heap alloc | `malloc(sizeof(struct entry))` for flow entry | `flow_table.c` | L43 |
| Heap free | `free(e)` during flush | `flow_table.c` | L67–72 |

---

## Component Diagram

Solid edges: resolved references (Link Graph `resolved`). Dashed edges: unresolved open ends. Source: `.aee/link-graph.json`.

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
    subgraph aurora-compute
        ac-profile["api/profile.go"]
        ac-routes["api/routes.go"]
        ac-server["api/server.go"]
        ac-publish["services/telemetry/publish.go"]
        ac-other["lifecycle/, scheduler/,\nservices/{11 stores}"]
    end
    subgraph aurora-network
        an-profile-h["src/profile_label.h"]
        an-profile-c["src/profile_label.c"]
        an-packet-h["src/packet.h"]
        an-packet-parse["src/packet_parse.c"]
        an-main["src/main.c"]
        an-acl["src/acl.c"]
        an-flow["src/flow_table.c"]
        an-tunnel["src/tunnel.c"]
        an-stats["src/stats.c"]
        an-ops["src/*_ops.c (x47)"]
    end
    ext-bus["aurora.telemetry.tenant (bus — open end)"]
    ext-db["tenant_region_assignment (DB — open end)"]

    ap-test-quota -->|"import Quota L1->L8"| ap-quota
    ap-test-quota -->|"import remaining L1->L18"| ap-quota
    ap-test-quota -->|"import exceeded L1->L27"| ap-quota

    ac-routes -->|"ApplyProfile L13->L23"| ac-profile
    ac-routes -->|"Health L15->L28"| ac-server

    ac-publish -->|"bus-topic aurora.telemetry.tenant L9->L8"| ap-telemetry

    ac-profile -->|"cgo-header-include L8->L15"| an-profile-h
    ac-profile -->|"cgo-link-time-symbol L32->L25"| an-profile-c
    an-profile-c -->|"c-header-include L13->L15"| an-profile-h

    an-main -->|"c-header-include L13->L1"| an-packet-h
    an-acl -->|"c-header-include L13->L1"| an-packet-h
    an-flow -->|"c-header-include L13->L1"| an-packet-h
    an-packet-parse -->|"c-header-include L14->L1"| an-packet-h

    ap-telemetry -.->|"bus.subscribe (unresolved L12)"| ext-bus
    ap-region -.->|"cursor.execute/fetchone (unresolved L10-13)"| ext-db
```

---

## Local Data Flow

Source: KB record `securitySurface` fields; `.aee/security/…findings.json`; `.aee/security-chains.json`.

### Cross-service bus flow: aurora-compute → aurora-portal (chain-002, critical, confirmed)

`Publish(bus, s)` (publish.go L24–30) → `yaml.Marshal(s)` → `bus.Send(TenantTopic, body)` (L29) → bus topic `aurora.telemetry.tenant` → `consume(bus)` (telemetry_consumer.py L11–13) → `handle(message)` (L16–22) → `yaml.load(message.body)` (L17) **without SafeLoader**. Any publisher to this topic can craft a YAML payload that achieves arbitrary Python object instantiation. CWE-502, critical. Source: `.aee/security-chains.json` chain-002; `.aee/security/…telemetry_consumer.py.findings.json`.

### Cross-service cgo flow: aurora-compute → aurora-network (chain-006, high, needs_cross_file)

HTTP `POST /v1/profile/apply` (token-gated via `requireToken`, routes.go L13) → `ApplyProfile(w, r)` (profile.go L23–36) → `json.NewDecoder(r.Body).Decode(&req)` (L25) → `C.CString(req.Label)` (L30) → `C.aurora_profile_label(clabel)` (L32) → `aurora_profile_label(label)` (profile_label.c L25–34) → **`strcpy(slot->label, label)`** (L28): copies network-supplied string into `slot->label[32]` with no length check. Label longer than 31 chars overflows. CWE-121, network-reachable. Source: `.aee/security-chains.json` chain-006; `.aee/kb/src/payload_plaintext/aurora-network/src/profile_label.c.json` (`securitySurface`).

### aurora-portal: Additional dangerous paths

**Command injection** (`api.py`, chain-003, critical): `export_report(project_id, destination)` → `"aurora-cli export %s %s" % (project_id, destination)` (L30) → `os.system()` (L31). CWE-78.

**SQL injection** (`region_lookup.py`, chain-004, critical): `region_for(cursor, project)` → `SELECT … '%s' % project` (L11) → `cursor.execute()` (L10). CWE-89.

**Unsafe YAML from file** (`api.py`, chain-005, high): `load_quota_profile(path)` → `yaml.load(handle.read())` without Loader (L17). CWE-502.

**Hardcoded production credential** (`api.py`, critical): `DATABASE_PASSWORD = "Aur0ra-Portal-Prod-2026!"` (L10). CWE-798.

**TLS disabled** (`api.py`, high): `requests.get(…, verify=False)` (L24). CWE-295.

**Weak session PRNG** (`session.py`, high): `random.choice(…)` (L11). CWE-338.

**SHA-1 password hash** (`session.py`, high): `hashlib.sha1(…)` (L15). CWE-916.

### aurora-compute: Dangerous paths

**Virsh command injection** (`api/server.go`, chain-007, critical): `Console(instance)` → `fmt.Sprintf("virsh console %s", instance)` (L24) → `exec.Command("sh", "-c", …)` (L24). CWE-78.

**Hardcoded AWS-format key** (`api/server.go`, critical): `const metricsToken = "AKIAIOSFODNN7EXAMPLE"` (L13). CWE-798.

**TLS disabled** (`api/server.go`, high): `newClient()` sets `InsecureSkipVerify: true` (L17). CWE-295.

**Unvalidated cgo input** (`api/profile.go`, high): HTTP `Label` field crosses Go→C boundary without length check (L30–32). CWE-20. (Full path — see cross-service cgo flow above.)

### aurora-network: Dangerous paths

**Buffer overflow — profile labelling** (`profile_label.c`, critical, network-reachable): `strcpy(slot->label, label)` (L28) into `label[32]`; caller is `C.aurora_profile_label` in `api/profile.go`. CWE-121. Source: `.aee/kb/src/payload_plaintext/aurora-network/src/profile_label.c.json` (`securitySurface`).

**Buffer overflow — tenant tag parsing** (`packet_parse.c`): `parse_tenant_tag` copies `header` into `tag[16]` via `strcpy` (L19) with no bounds check. CWE-121. Source: `.aee/kb/src/payload_plaintext/aurora-network/src/packet_parse.c.json`.

**Off-by-one write — label copy** (`packet_parse.c`): `copy_labels` loop condition `i <= count` (L38–41) writes `count+1` bytes into `key->labels[MAX_LABELS=8]`. CWE-193, CWE-787. Source: `.aee/kb/src/payload_plaintext/aurora-network/src/packet_parse.c.json`.

**Buffer overflow via CLI argument** (`main.c`): `main` passes `argv[1]` to `parse_tenant_tag()` (L21–22), which uses `strcpy` into a 16-byte buffer. CWE-121. Source: `.aee/kb/src/payload_plaintext/aurora-network/src/main.c.json`.

**Command injection — tunnel management** (`tunnel.c`): three functions use `system(cmd)` with caller-supplied strings. `tunnel_up` (L18–20): `sprintf(cmd[512], "ip link add %s … remote %s", name, remote)` — `sprintf` with no bounds check on `name`/`remote`, then `system()`. `tunnel_down` (L24–27) and `tunnel_mtu` (L34–37): `snprintf` used but `system()` interprets the resulting string through a shell, allowing metacharacter injection via `name`. CWE-78, CWE-121. Source: `.aee/kb/src/payload_plaintext/aurora-network/src/tunnel.c.json`.

---

## Cross-Component Interfaces

### Confirmed intra-component cross-service seams

| Seam | Producer side | Consumer side | Join key |
|---|---|---|---|
| Bus topic `aurora.telemetry.tenant` | `services/telemetry/publish.go` L9 — `TenantTopic` (Go) | `aurora_portal/telemetry_consumer.py` L8 — `TENANT_TOPIC` (Python) | bus-topic literal |
| cgo link-time symbol `aurora_profile_label` | `api/profile.go` L32 — `C.aurora_profile_label()` (Go caller) | `profile_label.h` L15 (declaration), `profile_label.c` L25 (definition, C) | cgo symbol |

Source: `.aee/link-graph.json` (`crossComponentSeams`, `resolved` with `crossComponent: true`). Both seams missed by `seam_index` because all three sub-services share the `src/payload_plaintext/` prefix; identified via secondary pass.

### Remaining open ends (awaiting external components)

| Open-end kind | Symbol / Target | File | Lines | Notes |
|---|---|---|---|---|
| Bus subscription (opaque parameter) | `bus.subscribe("aurora.telemetry.tenant")` | `aurora_portal/telemetry_consumer.py` | L12 | Bus client implementation not in delivery |
| Database reader (opaque parameter) | `cursor.execute` / `cursor.fetchone` on `tenant_region_assignment` | `aurora_portal/region_lookup.py` | L10–13 | Database driver not in delivery |
| HTTP API consumer | `https://api.aurora.example.com/v1/projects/…` | `aurora_portal/api.py` | L21–25 | External API; no partner in delivery |
| Executable caller | `os.system("aurora-cli export …")` | `aurora_portal/api.py` | L30–31 | `aurora-cli` binary not in delivery |
| Executable caller | `subprocess.run(["aurora-cli", "profile-apply", …])` | `aurora_portal/maintenance.py` | L19–23 | `aurora-cli` binary not in delivery |
| Executable caller | `subprocess.run(["aurora-cli", "profile-list"])` | `aurora_portal/maintenance.py` | L28–30 | `aurora-cli` binary not in delivery |
| Subprocess caller | `subprocess.run(argv)` | `aurora_portal/api.py` | L43 | Caller and target binary unknown |
