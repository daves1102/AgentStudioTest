# Unresolved Items Index

> **Sources:** `.aee/link-graph.json`, `.aee/security-chains.json`,
> `.aee/intake-summary.md`, `.aee/verification-summary.md`

---

## Unresolved Symbol References

Source: `.aee/link-graph.json` (`unresolved`).

| From File | Symbol | Kind | Line | Reason |
|---|---|---|---|---|
| `src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py` | `bus.subscribe` | method-call | L12 | `bus` is an opaque parameter passed into `consume()`; no bus client implementation present in delivery |
| `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | `cursor.execute` | method-call | L10 | `cursor` is an opaque parameter passed into `region_for()`; no database driver present in delivery |
| `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | `cursor.fetchone` | method-call | L13 | `cursor` is an opaque parameter passed into `region_for()`; no database driver present in delivery |

These three unresolved references correspond to two of the five open-end seams in `.aee/link-graph.json` (`openEnds`): the `aurora.telemetry.tenant` bus topic (consumer side) and the `tenant_region_assignment` database table (reader side). They will resolve when the bus infrastructure and database driver components are delivered.

---

## Partial Taint Chains

Source: `.aee/security-chains.json` (entries with `"status": "partial"`); `.aee/security-chains-summary.md`.

| Chain ID | Source File | Stopped At | Sink File | Sink Line | OWASP | CWE | Severity | Stop Reason |
|---|---|---|---|---|---|---|---|---|
| chain-003 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L29 (function-entry) | `api.py` | L31 | A03 Injection | CWE-78 | critical | No callers of `export_report(project_id, destination)` found in delivered source; origin of `project_id` and `destination` unknown |
| chain-004 | `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | L9 (function-entry) | `region_lookup.py` | L10–12 | A03 Injection | CWE-89 | critical | No callers of `region_for(cursor, project)` found in delivered source; origin of `project` unknown |
| chain-005 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L15 (function-entry) | `api.py` | L17 | A08 Software and Data Integrity Failures | CWE-502 | high | No callers of `load_quota_profile(path)` found in delivered source; origin of `path` unknown |

Human review required: identify call sites of `export_report()`, `region_for()`, and `load_quota_profile()`. If parameters derive from external input (HTTP requests, form fields, environment variables) without sanitisation, chain-003 and chain-004 become confirmed critical injection chains and chain-005 a confirmed high-severity deserialization chain. Source: `.aee/security-chains.json` (chain-003, chain-004, chain-005 `stoppedAt` fields).

---

## UNKNOWN-Language Files Requiring Human Review

Source: `.aee/intake-summary.md` (Files Requiring Human Review); `.aee/document-warnings.md`; `.aee/security-warnings.md`.

| File | Reason |
|---|---|
| `src/.gitkeep` | Extension `.gitkeep` not a recognised source extension; content is empty. Language recorded as UNKNOWN. Possible placeholder file — verify intent and resubmit if the file carries meaningful content. |
| `src/payload_plaintext/aurora-portal/.env.example` | Extension `.example` not a recognised source extension; content is a dotenv template. Language recorded as UNKNOWN. No KB record, security analysis, or document produced. |
| `src/payload_plaintext/aurora-portal/requirements.txt` | Extension `.txt` not a recognised source extension; content is a pip package manifest. Language recorded as UNKNOWN. No KB record, security analysis, or document produced. Note: dependency analysis was performed separately via the Dependency Analyzer (`.aee/dependency-inventory.json`). |

---

## Verification Errors

Source: `.aee/verification-summary.md` (Errors; Round 2, 2026-10-04).

| # | Document | Location | Error | Correct Value (from source) |
|---|---|---|---|---|
| 1 | `docs/components/payload_plaintext.md` | Local Data Flow / Path 1 — command injection | Command string cited as `"aurora-cli export %s %s"` | `"aurora-cli report --project %s > %s"` (`api.py:30`) |
| 2 | `docs/components/payload_plaintext.md` | Cross-Component Interfaces / Executable caller row (`api.py` L30–31) | Interface labelled `os.system("aurora-cli export ...")` | `os.system("aurora-cli report --project %s > %s")` (`api.py:30`) |

Both errors are `wrong-citation` severity `error` in `docs/components/payload_plaintext.md` only. No other documents contain errors. The security chains and findings files use the correct command string and were verified accurate. Source: `.aee/verification-summary.md` (Errors table; Documents Verified Clean).
