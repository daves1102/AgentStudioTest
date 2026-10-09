# Unresolved Items Index

> **Sources:** `.aee/link-graph.json`, `.aee/security-chains.json`,
> `.aee/intake-summary.md`, `.aee/verification-summary.md`

---

## Unresolved Symbol References

Source: `.aee/link-graph.json` (`unresolved`).

| From File | Symbol | Kind | Line | Cross-Component | Reason |
|---|---|---|---|---|---|
| `src/payload_plaintext/aurora-compute/api/profile.go` | `profile_label.h` | cgo-header-include | L8 | **Yes** | `#cgo CFLAGS: -I../../aurora-network/src`; resolves to `src/aurora-network/src/profile_label.h` — aurora-network component not in delivery |
| `src/payload_plaintext/aurora-compute/api/profile.go` | `aurora_profile_label` | cgo-link-time-symbol | L32 | **Yes** | `C.aurora_profile_label()` declared in `profile_label.h` from aurora-network; definition unreachable — aurora-network not in delivery |
| `src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py` | `bus.subscribe` | method-call | L12 | No | `bus` is an opaque parameter; no bus client implementation in delivery |
| `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | `cursor.execute` | method-call | L10 | No | `cursor` is an opaque parameter; no database driver in delivery |
| `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | `cursor.fetchone` | method-call | L13 | No | `cursor` is an opaque parameter; no database driver in delivery |

The two cgo unresolved entries are cross-component links to the aurora-network C/C++ component. The `bus.subscribe` entry is consistent with the open end for `aurora.telemetry.tenant` (consumer side). The `cursor.*` entries correspond to the open end for `tenant_region_assignment`.

---

## Partial Taint Chains

Source: `.aee/security-chains.json` (entries with `"status": "partial"`); `.aee/security-chains-summary.md`.

| Chain ID | Source File | Stopped At | Sink File | Sink Line | OWASP | CWE | Severity | Stop Reason |
|---|---|---|---|---|---|---|---|---|
| chain-003 | `aurora-portal/aurora_portal/api.py` (L29) | L29 — no callers | `api.py` | L31 | A03 Injection | CWE-78 | critical | No callers of `export_report(project_id, destination)` in delivered source |
| chain-004 | `aurora-portal/aurora_portal/region_lookup.py` (L9) | L9 — no callers | `region_lookup.py` | L10–12 | A03 Injection | CWE-89 | critical | No callers of `region_for(cursor, project)` in delivered source |
| chain-007 | `aurora-compute/api/server.go` (L23) | L23 — no callers | `server.go` | L24 | A03 Injection | CWE-78 | critical | No callers of `Console(instance string)` and function not wired to any HTTP route in delivered source |
| chain-005 | `aurora-portal/aurora_portal/api.py` (L15) | L15 — no callers | `api.py` | L17 | A08 Software and Data Integrity Failures | CWE-502 | high | No callers of `load_quota_profile(path)` in delivered source |
| chain-006 | `aurora-compute/api/routes.go` (L13) | `profile.go:32` — C fn def missing | `api/profile.go` | L32 | A04 Insecure Design | CWE-20 | high | `C.aurora_profile_label` definition in aurora-network not in delivery; cannot confirm bounds safety |

Human review required:
- **chain-003 / chain-004:** Identify call sites of `export_report()` and `region_for()` in undelivered components. If parameters derive from HTTP or form input, these are confirmed critical injection chains.
- **chain-007:** Identify callers of `Console()`. If ever wired to an HTTP endpoint with externally-influenced `instance`, this is a confirmed critical command injection on the hypervisor host.
- **chain-005:** Identify call sites of `load_quota_profile()`. If `path` is externally supplied, both CWE-22 and CWE-502 apply simultaneously.
- **chain-006:** Obtain `aurora-network/src/profile_label.h` and its C implementation. If `aurora_profile_label` copies `clabel` into a fixed-size buffer without bounds checking, this is a confirmed high/critical buffer-overflow chain reachable via an authenticated `POST /v1/profile/apply`.

---

## UNKNOWN-Language Files Requiring Human Review

Source: `.aee/intake-summary.md` (Files Requiring Human Review, all batches).

| File | Reason |
|---|---|
| `src/.gitkeep` | Empty placeholder; extension not recognised. Possibly a repository artifact — verify and remove if unneeded. |
| `src/payload_plaintext/aurora-portal/.env.example` | Dotenv template; extension `.example` not recognised. Contains environment variable definitions — review for hardcoded secrets before use. |
| `src/payload_plaintext/aurora-portal/requirements.txt` | pip package manifest; extension `.txt` not recognised. Dependency analysis performed separately via Dependency Analyzer (`.aee/dependency-inventory.json`). |
| `src/payload_plaintext/aurora-compute/go.mod` | Go module manifest; extension `.mod` not recognised. Dependency analysis performed separately via Dependency Analyzer (`.aee/dependency-inventory.json`). |

---

## Verification Errors

Source: `.aee/verification-summary.md` (Errors; Round 2, 2026-10-04).

| # | Document | Location | Error | Correct Value |
|---|---|---|---|---|
| 1 | `docs/components/payload_plaintext.md` | Local Data Flow / Path 1 — command injection | Command cited as `"aurora-cli export %s %s"` | `"aurora-cli report --project %s > %s"` (`api.py:30`) |
| 2 | `docs/components/payload_plaintext.md` | Cross-Component Interfaces / Executable caller row | Interface labelled `os.system("aurora-cli export ...")` | `os.system("aurora-cli report --project %s > %s")` (`api.py:30`) |

**Unverified artifacts (no Verifier Critic pass yet):** All aurora-compute file documents (`docs/src/payload_plaintext/aurora-compute/…`, 19 files), aurora-compute security findings in `server.go` and `profile.go`, and partial chains chain-003 through chain-007 were added after Round 2 and have not been reviewed by the Verifier Critic. Source: `.aee/verification-summary.md` (coverage scope).
