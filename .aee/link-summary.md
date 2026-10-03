# Link Summary

**Run date:** 2026-10-03  
**Source root:** `src/`  
**Tool:** `src/tools/seam_index.py`  
**Components in delivery:** `tools` (1 file), `payload_plaintext` (17 Python files + 1 env template)

## Counts

| Category | Count |
|---|---|
| Resolved references | 18 (3 intra-component file-to-file; 15 stdlib/external) |
| Ambiguous references | 0 |
| Unresolved references | 3 |
| Cross-component seams | 0 |
| Open ends (one-sided join keys) | 5 |

## Cross-Component Seams

No cross-component seams were found. Both delivered components (`tools` and `payload_plaintext`) contain join-key literals, but none of those literals appear in more than one component simultaneously. The `tools` component contains only `seam_index.py` itself — a scanning tool with no aurora-portal-specific literals. All aurora-portal join keys are one-sided.

**Expected full interface surface:** 9 seams across 6 components — this delivery provides 2 of 6 components.

### Join-Key Categories — Results

| Category | Hits in `payload_plaintext` | Hits in `tools` | Cross-component? |
|---|---|---|---|
| HTTP endpoints | 0 | 0 | No |
| Bus topics | 1 (`aurora.telemetry.tenant`) | 0 | No — one-sided |
| Database tables | 1 (`tenant_region_assignment`) | 0 | No — one-sided |
| Environment variables | 0 | 0 | No |
| JSON fields | 0 | 0 | No |
| Executables | 1 (`aurora-cli`) | 0 | No — one-sided |
| Subcommands | 2 (`profile-apply`, `profile-list`) | 0 | No — one-sided |
| Native symbols | 0 | 0 | No |

## Open Ends (one-sided seams awaiting partner components)

| Join-key kind | Literal | Present side | File | Line | Missing side |
|---|---|---|---|---|---|
| bus topic | `aurora.telemetry.tenant` | consumer | `aurora_portal/telemetry_consumer.py` | 8 | topic producer |
| executable | `aurora-cli` | caller | `aurora_portal/maintenance.py` | 9 | CLI binary |
| subcommand | `profile-apply` | caller | `aurora_portal/maintenance.py` | 20 | CLI binary |
| subcommand | `profile-list` | caller | `aurora_portal/maintenance.py` | 29 | CLI binary |
| database table | `tenant_region_assignment` | reader | `aurora_portal/region_lookup.py` | 6 | identity service / schema owner |

These 5 open ends will become full cross-component seams once their partner components arrive.

## Resolved References (secondary Python pass)

### File-to-file within delivery

| From file | Symbol | Kind | From line | To file | To line |
|---|---|---|---|---|---|
| `tests/test_quota.py` | `Quota` | import | 1 | `aurora_portal/quota.py` | 8 |
| `tests/test_quota.py` | `remaining` | import | 1 | `aurora_portal/quota.py` | 18 |
| `tests/test_quota.py` | `exceeded` | import | 1 | `aurora_portal/quota.py` | 27 |

All three resolve within `payload_plaintext` (intra-component). `crossComponent: false`.

### Stdlib and external imports

| File | Symbol | Destination | From line |
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
| `src/tools/seam_index.py` | `json` | stdlib | 11 |
| `src/tools/seam_index.py` | `os` | stdlib | 12 |
| `src/tools/seam_index.py` | `re` | stdlib | 13 |
| `src/tools/seam_index.py` | `sys` | stdlib | 14 |
| `src/tools/seam_index.py` | `defaultdict` | stdlib (collections) | 15 |

## Unresolved References for Human Review

| File | Symbol | Line | Reason |
|---|---|---|---|
| `aurora_portal/telemetry_consumer.py` | `bus.subscribe` | 12 | `bus` is an opaque parameter; no bus client implementation in delivery |
| `aurora_portal/region_lookup.py` | `cursor.execute` | 10 | `cursor` is an opaque parameter; no database driver in delivery |
| `aurora_portal/region_lookup.py` | `cursor.fetchone` | 13 | `cursor` is an opaque parameter; no database driver in delivery |

These will remain unresolved until the bus infrastructure and database driver components arrive. They are consistent with the open-end seams on `aurora.telemetry.tenant` and `tenant_region_assignment` — the same missing components explain both the unresolved references and the one-sided join keys.
