# Link Summary

**Run date:** 2026-10-08  
**Source root:** `src/`  
**Tool:** `src/tools/seam_index.py`  
**Components in delivery:** `tools` (1 file), `payload_plaintext` (aurora-portal Python + aurora-compute Go — 19 Go files + 18 Python files + 1 env template)

## Counts

| Category | Count |
|---|---|
| Resolved references | 27 (1 cross-service bus-topic; 5 file-to-file intra-component; 21 stdlib/external) |
| Ambiguous references | 0 |
| Unresolved references | 5 (2 CGO cross-component; 3 opaque-parameter) |
| Cross-component seams (secondary pass) | 1 |
| Open ends (one-sided join keys) | 8 |

## Cross-Component Seams

**seam_index returned 0 cross-component seams.** Both aurora-portal (Python) and aurora-compute (Go) land under `src/payload_plaintext/`, so seam_index `component_of()` yields `payload_plaintext` for all their files — it cannot see the inter-service boundary.

**Secondary pass identified 1 confirmed cross-service seam:**

### `aurora.telemetry.tenant` — bus topic (Go producer → Python consumer)

| Side | Service | Language | File | Line | Symbol |
|---|---|---|---|---|---|
| producer | aurora-compute | Go | `aurora-compute/services/telemetry/publish.go` | 9 | `TenantTopic` |
| consumer | aurora-portal | Python | `aurora-portal/aurora_portal/telemetry_consumer.py` | 8 | `TENANT_TOPIC` |

aurora-compute calls `bus.Send(TenantTopic, body)` (`publish.go:29`). aurora-portal subscribes with `bus.subscribe(TENANT_TOPIC)` (`telemetry_consumer.py:12`). The payload is YAML-encoded (struct fields `project`, `metric`, `value`, `source` from Go; consumed as `document.get("project")`, `metric`, `value` in Python). Both sides missed by seam_index due to shared directory prefix — found via secondary literal match.

**Expected full interface surface:** 9 seams across 6 components. This delivery provides 2 of 6 components (both named `payload_plaintext` by the tool). 4 components still outstanding.

### Join-Key Category Results

| Category | In `payload_plaintext` | In `tools` | Cross-component? |
|---|---|---|---|
| HTTP endpoints | 3 (`/v1/profile/apply`, `/v1/profile/list`, `/v1/health`) | 0 | No — server side only |
| Bus topics | 2 (`aurora.telemetry.tenant` in both services) | 0 | Yes — secondary pass |
| Database tables | 1 (`tenant_region_assignment`) | 0 | No — one-sided |
| Environment variables | 1 (`AURORA_ADMIN_TOKEN`) | 0 | No — one-sided |
| JSON fields | 1 (`label` in profile.go) | 0 | No — one-sided |
| Executables | 1 (`aurora-cli`) | 0 | No — one-sided |
| Subcommands | 2 (`profile-apply`, `profile-list`) | 0 | No — one-sided |
| Native symbols | 1 (`aurora_profile_label`) | 0 | No — one-sided (CGO, partner missing) |

## Open Ends (one-sided seams awaiting partner components)

| Join-key kind | Literal | Present side | File | Line | Missing partner |
|---|---|---|---|---|---|
| cgo header + native symbol | `profile_label.h` / `aurora_profile_label` | caller (cgo) | `aurora-compute/api/profile.go` | 8 / 32 | aurora-network C/C++ component |
| executable | `aurora-cli` | caller | `aurora-portal/aurora_portal/maintenance.py` | 9 | aurora-cli binary |
| subcommand | `profile-apply` | caller | `aurora-portal/aurora_portal/maintenance.py` | 20 | aurora-cli binary |
| subcommand | `profile-list` | caller | `aurora-portal/aurora_portal/maintenance.py` | 29 | aurora-cli binary |
| database table | `tenant_region_assignment` | reader | `aurora-portal/aurora_portal/region_lookup.py` | 6 | identity service |
| http endpoint | `/v1/profile/apply` | server | `aurora-compute/api/routes.go` | 13 | HTTP caller (likely aurora-cli) |
| http endpoint | `/v1/profile/list` | server | `aurora-compute/api/routes.go` | 14 | HTTP caller (likely aurora-cli) |
| http endpoint | `/v1/health` | server | `aurora-compute/api/routes.go` | 15 | health-check caller |
| environment variable | `AURORA_ADMIN_TOKEN` | reader | `aurora-compute/api/routes.go` | 20 | config / secret injector |

**Note on `aurora-cli` chain:** The subcommands (`profile-apply`, `profile-list`) invoked by aurora-portal maintenance.py via subprocess, and the HTTP endpoints (`/v1/profile/apply`, `/v1/profile/list`) served by aurora-compute, are likely connected through an aurora-cli binary that translates subcommands to REST calls. aurora-cli has not arrived and the chain cannot be confirmed without it.

**Note on CGO boundary:** `profile.go` includes `profile_label.h` from `../../aurora-network/src` (resolves to `src/aurora-network/src/profile_label.h`) and calls `C.aurora_profile_label(clabel)` at line 32. The aurora-network C/C++ component is not in delivery; this is an open cross-component cgo seam.

## Resolved References (secondary pass — file-to-file within delivery)

### Cross-service (aurora-compute → aurora-portal)

| From | Symbol | Kind | From line | To | To line | crossComponent |
|---|---|---|---|---|---|---|
| `aurora-compute/services/telemetry/publish.go` | `aurora.telemetry.tenant` | bus-topic | 9 | `aurora-portal/aurora_portal/telemetry_consumer.py` | 8 | **true** |

### Intra-component Go package references

| From | Symbol | Kind | From line | To | To line |
|---|---|---|---|---|---|
| `aurora-compute/api/routes.go` | `ApplyProfile` | package-level | 13 | `aurora-compute/api/profile.go` | 23 |
| `aurora-compute/api/routes.go` | `Health` | package-level | 15 | `aurora-compute/api/server.go` | 28 |

### Intra-component Python imports

| From | Symbol | From line | To |
|---|---|---|---|
| `tests/test_quota.py` | `Quota` | 1 | `aurora_portal/quota.py:8` |
| `tests/test_quota.py` | `remaining` | 1 | `aurora_portal/quota.py:18` |
| `tests/test_quota.py` | `exceeded` | 1 | `aurora_portal/quota.py:27` |

### Stdlib and external imports (all crossComponent: false)

| File | Symbol | Destination | Line |
|---|---|---|---|
| `aurora_portal/api.py` | `os` | stdlib | 4 |
| `aurora_portal/api.py` | `subprocess` | stdlib | 5 |
| `aurora_portal/api.py` | `requests` | external (PyPI) | 7 |
| `aurora_portal/api.py` | `yaml` | external (PyPI) | 8 |
| `aurora_portal/maintenance.py` | `subprocess` | stdlib | 6 |
| `aurora_portal/session.py` | `hashlib` | stdlib | 4 |
| `aurora_portal/session.py` | `random` | stdlib | 5 |
| `aurora_portal/session.py` | `string` | stdlib | 6 |
| `aurora_portal/quota.py` | `dataclass` | stdlib (dataclasses) | 4 |
| `aurora_portal/telemetry_consumer.py` | `yaml` | external (PyPI) | 6 |
| `aurora-compute/api/routes.go` | `net/http` | stdlib | 7 |
| `aurora-compute/api/routes.go` | `os` | stdlib | 8 |
| `aurora-compute/api/server.go` | `crypto/tls` | stdlib | 7 |
| `aurora-compute/api/server.go` | `os/exec` | stdlib | 10 |
| `aurora-compute/api/profile.go` | `encoding/json` | stdlib | 13 |
| `aurora-compute/services/telemetry/publish.go` | `gopkg.in/yaml.v2` | external (Go module) | 6 |
| `src/tools/seam_index.py` | `json` / `os` / `re` / `sys` / `defaultdict` | stdlib | 11–15 |

## Unresolved References for Human Review

| File | Symbol | Line | crossComponent | Reason |
|---|---|---|---|---|
| `aurora-compute/api/profile.go` | `profile_label.h` (include) | 8 | **true** | `#cgo CFLAGS: -I../../aurora-network/src`; aurora-network component not in delivery |
| `aurora-compute/api/profile.go` | `aurora_profile_label` (cgo call) | 32 | **true** | Declared in `profile_label.h`; definition unreachable — aurora-network not in delivery |
| `aurora-portal/aurora_portal/telemetry_consumer.py` | `bus.subscribe` | 12 | false | `bus` is opaque parameter; no bus client in delivery |
| `aurora-portal/aurora_portal/region_lookup.py` | `cursor.execute` | 10 | false | `cursor` is opaque parameter; no DB driver in delivery |
| `aurora-portal/aurora_portal/region_lookup.py` | `cursor.fetchone` | 13 | false | `cursor` is opaque parameter; no DB driver in delivery |

The two CGO unresolved entries and the `bus.subscribe` unresolved entry are all consistent with the same missing components already noted in the open-ends table (aurora-network and a bus infrastructure component).
