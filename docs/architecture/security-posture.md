# Security Posture Report

> **Sources:** `.aee/security-log.jsonl`, `.aee/security/src/tools/seam_index.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/session.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py.findings.json`,
> `.aee/security-chains.json`, `.aee/security-chains-summary.md`, `.aee/verification-summary.md`

> **NOTICE — Outstanding Verification Errors:** The Verification Summary (`.aee/verification-summary.md`) reports 2 unresolved `wrong-citation` errors in `docs/components/payload_plaintext.md`. These errors affect the component synthesizer document (wrong command string `"aurora-cli export"` cited instead of the correct `"aurora-cli report --project"` from `api.py:30`). Security findings and chains files are not affected — citations in those files were independently verified as accurate. See [Verification Status](#verification-status) below.

---

## Executive Summary

| Category | Count |
|---|---|
| Files analyzed | 18 |
| Files skipped (unparseable) | 3 (`src/.gitkeep`, `.env.example`, `requirements.txt`) |
| Total security findings | 9 |
| — Critical | 3 |
| — High | 5 |
| — Medium | 1 |
| — Low | 0 |
| Confirmed taint chains | 2 (1 high, 1 medium) |
| Partial taint chains | 3 (2 critical, 1 high) |
| Cross-component chains | 0 |
| Severity upgrades applied | 0 |

Three critical findings are concentrated in the `payload_plaintext` component: a hardcoded production database credential (`api.py:10`, CWE-798), an OS command injection via `os.system()` (`api.py:29–31`, CWE-78), and a SQL injection via string interpolation (`region_lookup.py:9–12`, CWE-89). Five high-severity findings cover unsafe YAML deserialization, disabled TLS verification, weak session-ID generation, and inadequate password hashing. No chains were severity-upgraded because the Link Graph contains no `crossComponent: true` hops (`.aee/link-graph.json`, `crossComponentSeams: []`).

Sources: `.aee/security-log.jsonl`; `.aee/security-chains-summary.md`.

---

## Top Findings

All 9 findings are listed, sorted by severity (critical → high → medium) then confidence (confirmed before needs_cross_file).

| # | File | Line Range | OWASP Category | CWE | Severity | Confidence | Title |
|---|---|---|---|---|---|---|---|
| 1 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L10 | A07 Identification and Authentication Failures | CWE-798 | critical | confirmed | Hardcoded production database password in source |
| 2 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L29–31 | A03 Injection | CWE-78 | critical | needs_cross_file | OS command injection via `os.system()` with unsanitised string interpolation |
| 3 | `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | L9–12 | A03 Injection | CWE-89 | critical | needs_cross_file | SQL injection via `% project` string interpolation in `cursor.execute()` |
| 4 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L15–17 | A08 Software and Data Integrity Failures | CWE-502 | high | needs_cross_file | `yaml.load()` without SafeLoader on caller-supplied file path |
| 5 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L20–26 | A02 Cryptographic Failures | CWE-295 | high | confirmed | TLS certificate verification disabled (`verify=False`) in outbound HTTPS request |
| 6 | `src/payload_plaintext/aurora-portal/aurora_portal/session.py` | L9–11 | A07 Identification and Authentication Failures | CWE-338 | high | confirmed | Weak PRNG (`random.choice`) used for session ID generation |
| 7 | `src/payload_plaintext/aurora-portal/aurora_portal/session.py` | L14–15 | A02 Cryptographic Failures | CWE-916 | high | confirmed | SHA-1 used for password hashing |
| 8 | `src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py` | L16–17 | A08 Software and Data Integrity Failures | CWE-502 | high | confirmed | `yaml.load(message.body)` without SafeLoader on external bus messages |
| 9 | `src/tools/seam_index.py` | L88–89 | A01 Broken Access Control | CWE-22 | medium | confirmed | Unsanitised CLI path argument passed to `os.walk()` and `open()` |

Source: `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`; `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/session.py.findings.json`; `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py.findings.json`; `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py.findings.json`; `.aee/security/src/tools/seam_index.py.findings.json`; `.aee/verification-summary.md` (Security findings — all 9 verified accurate).

---

## Confirmed Taint Chains

| Chain ID | Source File | Source Line | Sink File | Sink Line | OWASP Category | CWE | Severity | Severity Upgraded |
|---|---|---|---|---|---|---|---|---|
| chain-001 | `src/tools/seam_index.py` | L88 | `src/tools/seam_index.py` | L52 | A01 Broken Access Control | CWE-22 | medium | No |
| chain-002 | `src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py` | L8–12 | `src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py` | L17 | A08 Software and Data Integrity Failures | CWE-502 | high | No |

### chain-001 — CLI path argument → arbitrary file read

**Source:** `sys.argv[1]` assigned to `root` at `seam_index.py:88` without normalisation or containment check.

| Hop | File | Line | Symbol | Cross-Component |
|---|---|---|---|---|
| Source | `seam_index.py` | L88 | `sys.argv[1]` → `root` | — |
| 1 | `seam_index.py` | L89 | `scan` | No |
| 2 | `seam_index.py` | L43 | `os.walk` | No |
| 3 | `seam_index.py` | L46 | `os.path.join` | No |
| Sink | `seam_index.py` | L52 | `open(path, …)` — file read | — |

Severity `medium` not upgraded: all hops `crossComponent: false`. Source: `.aee/security-chains.json` (chain-001); `.aee/security-chains-summary.md`.

---

### chain-002 — External bus message → unsafe YAML deserialization

**Source:** Messages from `aurora.telemetry.tenant` bus topic received via `bus.subscribe()` at `telemetry_consumer.py:12`. Producer is external to the service trust boundary.

| Hop | File | Line | Symbol | Cross-Component |
|---|---|---|---|---|
| Source | `telemetry_consumer.py` | L8–12 | `bus.subscribe(TENANT_TOPIC)` | — |
| 1 | `telemetry_consumer.py` | L12–13 | `consume()` → `handle()` | No |
| 2 | `telemetry_consumer.py` | L16 | `handle(message)` receives `message.body` | No |
| Sink | `telemetry_consumer.py` | L17 | `yaml.load(message.body)` — unsafe deserialization | — |

`bus.subscribe` is unresolved in the Link Graph (open end — producer component not yet delivered); no `crossComponent: true` hops present; severity `high` not upgraded. Source: `.aee/security-chains.json` (chain-002); `.aee/security-chains-summary.md`.

---

## Cross-Component Security Seams

No seams from any confirmed or partial taint chain cross a component boundary. The Link Graph (`crossComponentSeams`) is empty. All confirmed chain hops are intra-component; all partial chains stopped at function-entry (no callers found in delivered source). Source: `.aee/link-graph.json` (`crossComponentSeams: []`); `.aee/security-chains.json`.

---

## Verification Status

> **Unresolved errors present — see below.**

The Verification Summary (`.aee/verification-summary.md`, Round 2, 2026-10-04) reports **2 unresolved errors** of type `wrong-citation` in `docs/components/payload_plaintext.md`:

| # | Document | Location | Error |
|---|---|---|---|
| 1 | `docs/components/payload_plaintext.md` | Local Data Flow / Path 1 — command injection | Command string described as `"aurora-cli export %s %s"`; source `api.py:30` contains `"aurora-cli report --project %s > %s"` |
| 2 | `docs/components/payload_plaintext.md` | Cross-Component Interfaces / Executable caller row | Interface labelled `os.system("aurora-cli export ...")`; source `api.py:30` shows `"aurora-cli report --project %s > %s"` |

All 18 file documents, 3 of 4 component documents (`src.md`, `tools.md`, `index.md`), all 9 security findings, and chain-001 were verified clean. The partial chains (chain-002 through chain-005) were not independently re-verified in Round 2 (the verification report focuses on chain-001 for chain verification). Source: `.aee/verification-summary.md` (Errors; Documents Verified Clean).
