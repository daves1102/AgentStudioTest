# Link Summary

**Run date:** 2026-10-12  
**Source root:** `src/`  
**Tool:** `src/tools/seam_index.py`  
**Components in delivery:** `tools` (1 file), `payload_plaintext` (aurora-portal Python + aurora-compute Go + aurora-network C — 58 C/header files + 19 Go files + 18 Python files)

## Counts

| Category | Count |
|---|---|
| Resolved references | 34 (2 cross-service; 8 file-to-file intra-component; 24 stdlib/external) |
| Ambiguous references | 0 |
| Unresolved references | 3 (opaque parameters — bus client, DB cursor ×2) |
| Cross-component seams (secondary pass) | 2 |
| Open ends (one-sided join keys) | 8 |

## Cross-Component Seams

**seam_index returned 0 cross-component seams** on this and all prior runs. All three services (aurora-portal, aurora-compute, aurora-network) land under `src/payload_plaintext/`, so `seam_index component_of()` yields `payload_plaintext` for every file — the tool cannot see any inter-service boundary within this subdirectory.

**Secondary pass identified 2 confirmed cross-service seams:**

### Seam 1 — `aurora.telemetry.tenant` (bus topic, Go → Python)

| Side | Service | Language | File | Line | Symbol |
|---|---|---|---|---|---|
| producer | aurora-compute | Go | `aurora-compute/services/telemetry/publish.go` | 9 | `TenantTopic` |
| consumer | aurora-portal | Python | `aurora-portal/aurora_portal/telemetry_consumer.py` | 8 | `TENANT_TOPIC` |

Producer calls `bus.Send(TenantTopic, body)` (`publish.go:29`). Consumer subscribes with `bus.subscribe(TENANT_TOPIC)` (`telemetry_consumer.py:12`). Payload is YAML-encoded with fields `project`, `metric`, `value`, `source`.

### Seam 2 — `aurora_profile_label` (CGO link-time symbol, Go → C)

| Side | Service | Language | File | Line | Symbol |
|---|---|---|---|---|---|
| caller | aurora-compute | Go (cgo) | `aurora-compute/api/profile.go` | 32 | `C.aurora_profile_label` |
| declaration | aurora-network | C | `aurora-network/src/profile_label.h` | 15 | `aurora_profile_label` |
| definition | aurora-network | C | `aurora-network/src/profile_label.c` | 25 | `aurora_profile_label` |

`profile.go` includes `profile_label.h` via `#cgo CFLAGS: -I../../aurora-network/src` (`profile.go:8`). The Go HTTP handler (`ApplyProfile`) decodes the HTTP request body `Label` field and passes it directly to `C.aurora_profile_label(clabel)` with no length validation. `aurora_profile_label` in C copies the caller-supplied string into a fixed 32-byte buffer using `strcpy` with no bounds check (`profile_label.c:28` — **CWE-121 buffer overflow, network-reachable input**). Previously unresolved; resolved in this run when aurora-network arrived.

**Expected full interface surface:** 9 seams across 6 components. 3 components are now in delivery (all named `payload_plaintext` by the tool). Components still outstanding: aurora-cli, identity/DB service, and any bus infrastructure component.

### Join-Key Category Results

| Category | Hits | Cross-service? |
|---|---|---|
| HTTP endpoints | 3 in aurora-compute (`/v1/profile/apply`, `/v1/profile/list`, `/v1/health`) | No — server side only |
| Bus topics | `aurora.telemetry.tenant` in both aurora-compute + aurora-portal | **Yes — seam 1** |
| Database tables | `tenant_region_assignment` in aurora-portal | No — one-sided |
| Environment variables | `AURORA_ADMIN_TOKEN` in aurora-compute | No — one-sided |
| JSON fields | `label` in aurora-compute profile.go | No — one-sided |
| Executables | `aurora-cli` in aurora-portal | No — one-sided |
| Subcommands | `profile-apply`, `profile-list` in aurora-portal | No — one-sided |
| Native symbols | `aurora_profile_label` in aurora-compute + aurora-network | **Yes — seam 2** |

## Open Ends (one-sided join keys awaiting partner components)

| Join-key kind | Literal | Present side | File | Line | Missing partner |
|---|---|---|---|---|---|
| executable | `aurora-cli` | caller | `aurora-portal/aurora_portal/maintenance.py` | 9 | aurora-cli binary (connects portal → compute HTTP) |
| subcommand | `profile-apply` | caller | `aurora-portal/aurora_portal/maintenance.py` | 20 | aurora-cli (probable bridge to `/v1/profile/apply`) |
| subcommand | `profile-list` | caller | `aurora-portal/aurora_portal/maintenance.py` | 29 | aurora-cli (probable bridge to `/v1/profile/list`) |
| database table | `tenant_region_assignment` | reader | `aurora-portal/aurora_portal/region_lookup.py` | 6 | identity service / schema owner |
| http endpoint | `/v1/profile/apply` | server | `aurora-compute/api/routes.go` | 13 | HTTP caller (likely aurora-cli) |
| http endpoint | `/v1/profile/list` | server | `aurora-compute/api/routes.go` | 14 | HTTP caller (likely aurora-cli) |
| http endpoint | `/v1/health` | server | `aurora-compute/api/routes.go` | 15 | health-check caller |
| environment variable | `AURORA_ADMIN_TOKEN` | reader | `aurora-compute/api/routes.go` | 20 | config / secret injector |

**Note on aurora-cli chain:** aurora-portal `maintenance.py` invokes `aurora-cli profile-apply` and `aurora-cli profile-list` via subprocess. aurora-compute serves `POST /v1/profile/apply` and `GET /v1/profile/list`, which call through to `aurora_profile_label()` in aurora-network C. The aurora-cli binary is the missing intermediary — once it arrives the full chain `aurora-portal → aurora-cli → aurora-compute → aurora-network` can be confirmed as a single seam.

## Resolved References — New This Run (secondary C/C++ pass)

### Cross-service (aurora-compute → aurora-network)

| From | Symbol | Kind | From line | To | To line | crossComponent |
|---|---|---|---|---|---|---|
| `aurora-compute/api/profile.go` | `profile_label.h` | cgo-header-include | 8 | `aurora-network/src/profile_label.h` | 15 | **true** |
| `aurora-compute/api/profile.go` | `aurora_profile_label` | cgo-link-time-symbol | 32 | `aurora-network/src/profile_label.c` | 25 | **true** |

### Intra-component C includes (aurora-network)

| From | Symbol | Kind | From line | To | To line |
|---|---|---|---|---|---|
| `aurora-network/src/profile_label.c` | `profile_label.h` | c-header-include | 13 | `aurora-network/src/profile_label.h` | 15 |
| `aurora-network/src/main.c` | `packet.h` | c-header-include | 13 | `aurora-network/src/packet.h` | 1 |
| `aurora-network/src/acl.c` | `packet.h` | c-header-include | 13 | `aurora-network/src/packet.h` | 1 |
| `aurora-network/src/flow_table.c` | `packet.h` | c-header-include | 13 | `aurora-network/src/packet.h` | 1 |
| `aurora-network/src/packet_parse.c` | `packet.h` | c-header-include | 14 | `aurora-network/src/packet.h` | 1 |

The 47 `*_ops.c` boilerplate files (uniform Record/Store pattern) have no external includes or cross-component references and are not listed individually.

## Unresolved References for Human Review

| File | Symbol | Line | crossComponent | Reason |
|---|---|---|---|---|
| `aurora-portal/aurora_portal/telemetry_consumer.py` | `bus.subscribe` | 12 | false | `bus` is opaque parameter; no bus client in delivery |
| `aurora-portal/aurora_portal/region_lookup.py` | `cursor.execute` | 10 | false | `cursor` is opaque parameter; no DB driver in delivery |
| `aurora-portal/aurora_portal/region_lookup.py` | `cursor.fetchone` | 13 | false | `cursor` is opaque parameter; no DB driver in delivery |

All three reflect the same missing infrastructure components noted in the open-ends table (bus client and identity/DB service).
