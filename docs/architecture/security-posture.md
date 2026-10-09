# Security Posture Report

> **Sources:** `.aee/security-log.jsonl`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/api.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/session.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-compute/api/server.go.findings.json`,
> `.aee/security/src/payload_plaintext/aurora-compute/api/profile.go.findings.json`,
> `.aee/security/src/tools/seam_index.py.findings.json`,
> `.aee/security-chains.json`, `.aee/security-chains-summary.md`, `.aee/verification-summary.md`

> **NOTICE — Outstanding Verification Errors:** The Verification Summary (`.aee/verification-summary.md`, Round 2, 2026-10-04) reports 2 unresolved `wrong-citation` errors in `docs/components/payload_plaintext.md` (incorrect command string `"aurora-cli export"` cited instead of the correct `"aurora-cli report --project"` from `api.py:30`). The aurora-compute files delivered in this run were not covered by Round 2 verification — no Verifier Critic pass has been run against the aurora-compute component documents or new security findings. See [Verification Status](#verification-status).

---

## Executive Summary

| Category | Count |
|---|---|
| Files analyzed | 21 (38 payload_plaintext + 1 tools, minus 4 skipped UNKNOWN) |
| Files skipped (unparseable) | 4 (`src/.gitkeep`, `.env.example`, `requirements.txt`, `go.mod`) |
| Total security findings | 15 |
| — Critical | 5 |
| — High | 7 |
| — Medium | 1 |
| — Low | 1 |
| — Informational | 1 |
| Confirmed taint chains | 2 (1 critical ⬆ upgraded, 1 medium) |
| Partial taint chains | 5 (3 critical, 2 high) |
| Cross-component chains | 1 (chain-002, critical, upgraded this run) |
| Severity upgrades applied | 1 (chain-002: high → critical) |

**Severity upgrade this run:** chain-002 was upgraded from `high` to `critical` when aurora-compute source was delivered and the Link Graph resolved the `aurora.telemetry.tenant` bus seam as `crossComponent: true` (producer `publish.go:29` → consumer `telemetry_consumer.py:8`). Source: `.aee/security-chains-summary.md` (Severity Upgrade Applied This Run).

Security findings are concentrated in `aurora-portal/api.py` (5 findings: 2 critical, 2 high, 1 low) and `aurora-compute/api/server.go` (4 findings: 2 critical, 1 high, 1 informational). All 12 uniform in-memory store services in aurora-compute are clean.

Sources: `.aee/security-log.jsonl` (latest entry per file); `.aee/security-chains-summary.md`.

---

## Top Findings

Top 10 findings by severity (critical → high) then confidence (confirmed before needs_cross_file). Rows are sourced from per-file findings files and security-chains-summary.

| # | File | Line Range | OWASP Category | CWE | Severity | Confidence | Title |
|---|---|---|---|---|---|---|---|
| 1 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L10 | A07 Identification and Authentication Failures | CWE-798 | critical | confirmed | Hardcoded production database password in source |
| 2 | `src/payload_plaintext/aurora-compute/api/server.go` | L13 | A07 Identification and Authentication Failures | CWE-798 | critical | confirmed | Hardcoded AWS-format key (`metricsToken`) in source |
| 3 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L29–31 | A03 Injection | CWE-78 | critical | needs_cross_file | OS command injection via `os.system()` with unsanitised `%s` interpolation |
| 4 | `src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py` | L9–12 | A03 Injection | CWE-89 | critical | needs_cross_file | SQL injection via `% project` string interpolation in `cursor.execute()` |
| 5 | `src/payload_plaintext/aurora-compute/api/server.go` | L24 | A03 Injection | CWE-78 | critical | needs_cross_file | Go command injection via `exec.Command("sh","-c",fmt.Sprintf("virsh console %s", instance))` |
| 6 | `src/payload_plaintext/aurora-portal/aurora_portal/api.py` | L20–26 | A02 Cryptographic Failures | CWE-295 | high | confirmed | TLS certificate verification disabled (`verify=False`) in outbound HTTPS request |
| 7 | `src/payload_plaintext/aurora-portal/aurora_portal/session.py` | L9–11 | A07 Identification and Authentication Failures | CWE-338 | high | confirmed | Weak PRNG (`random.choice`) for session ID generation |
| 8 | `src/payload_plaintext/aurora-portal/aurora_portal/session.py` | L14–15 | A02 Cryptographic Failures | CWE-916 | high | confirmed | SHA-1 used for password hashing |
| 9 | `src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py` | L16–17 | A08 Software and Data Integrity Failures | CWE-502 | high | confirmed | `yaml.load(message.body)` without SafeLoader on external bus messages |
| 10 | `src/payload_plaintext/aurora-compute/api/server.go` | L15–20 | A02 Cryptographic Failures | CWE-295 | high | confirmed | TLS `InsecureSkipVerify: true` in HTTP client |

Sources: `.aee/security/…/api.py.findings.json`; `.aee/security/…/session.py.findings.json`; `.aee/security/…/region_lookup.py.findings.json`; `.aee/security/…/telemetry_consumer.py.findings.json`; `.aee/security/…/server.go.findings.json`; `.aee/security-chains-summary.md` (Additional Confirmed Findings); `.aee/verification-summary.md` (aurora-portal findings verified Round 2; aurora-compute findings not yet verified by Verifier Critic).

---

## Confirmed Taint Chains

| Chain ID | Source File | Source Line | Sink File | Sink Line | OWASP | CWE | Severity | Severity Upgraded |
|---|---|---|---|---|---|---|---|---|
| chain-002 | `aurora-compute/services/telemetry/publish.go` | L24–29 | `aurora-portal/aurora_portal/telemetry_consumer.py` | L17 | A08 Software and Data Integrity Failures | CWE-502 | **critical** | **Yes (was high)** |
| chain-001 | `src/tools/seam_index.py` | L88 | `src/tools/seam_index.py` | L52 | A01 Broken Access Control | CWE-22 | medium | No |

### chain-002 — Go telemetry publish → Python unsafe YAML deserialization (CWE-502, critical) ⬆ UPGRADED

**Cross-component seam:** `aurora.telemetry.tenant` bus topic, `crossComponent: true` in Link Graph.

| Hop | File | Line | Symbol | Cross-Component |
|---|---|---|---|---|
| Source | `aurora-compute/services/telemetry/publish.go` | L24–29 | `Publish()` marshals `Sample` → YAML and calls `bus.Send()` | — |
| 1 | `aurora-compute/services/telemetry/publish.go` | L29 | `bus.Send(TenantTopic, body)` | **Yes** |
| 2 | `aurora-portal/aurora_portal/telemetry_consumer.py` | L11–13 | `consume()` → `handle()` | No |
| 3 | `aurora-portal/aurora_portal/telemetry_consumer.py` | L16 | `handle(message)` receives raw `message.body` | No |
| Sink | `aurora-portal/aurora_portal/telemetry_consumer.py` | L17 | `yaml.load(message.body)` — unsafe deserialization | — |

Note: The Go producer itself is safe (typed struct serialized to YAML cannot produce object-instantiation tags). The risk is that the bus topic is an open network channel — any publisher (not only aurora-compute) can send arbitrary bytes to the consumer, which deserializes them with PyYAML's default (unsafe) Loader. Severity upgraded high → critical because `bus.Send` hop 1 is `crossComponent: true`. Source: `.aee/security-chains.json` (chain-002); `.aee/security-chains-summary.md`.

---

### chain-001 — CLI path argument → arbitrary file read (CWE-22, medium)

| Hop | File | Line | Symbol | Cross-Component |
|---|---|---|---|---|
| Source | `src/tools/seam_index.py` | L88 | `sys.argv[1]` → `root` | — |
| 1 | `src/tools/seam_index.py` | L89 | `scan` | No |
| 2 | `src/tools/seam_index.py` | L43 | `os.walk` | No |
| 3 | `src/tools/seam_index.py` | L46 | `os.path.join` | No |
| Sink | `src/tools/seam_index.py` | L52 | `open(path, …)` — file read | — |

Severity `medium` not upgraded: all hops `crossComponent: false`. Source: `.aee/security-chains.json` (chain-001).

---

## Confirmed Taint Chains — Seam Table

| Chain ID | Source File | Sink File | OWASP | CWE | Severity |
|---|---|---|---|---|---|
| chain-002 | `aurora-compute/services/telemetry/publish.go` (L24–29) | `aurora-portal/aurora_portal/telemetry_consumer.py` (L17) | A08 Software and Data Integrity Failures | CWE-502 | critical |
| chain-001 | `src/tools/seam_index.py` (L88) | `src/tools/seam_index.py` (L52) | A01 Broken Access Control | CWE-22 | medium |

---

## Cross-Component Security Seams

Seams that appear in at least one confirmed or partial taint chain and carry a `crossComponent: true` hop.

| Seam | Join Key | Producer / Caller | Consumer / Target | Chains |
|---|---|---|---|---|
| Bus topic (confirmed, cross-service within `payload_plaintext`) | `aurora.telemetry.tenant` | `aurora-compute/services/telemetry/publish.go:29` | `aurora-portal/aurora_portal/telemetry_consumer.py:8` | chain-002 (confirmed, critical) |
| cgo header + native symbol (unresolved, cross-component) | `profile_label.h` / `aurora_profile_label` | `aurora-compute/api/profile.go:8,32` | aurora-network (not in delivery) | chain-006 (partial, high) |

The bus-topic seam is a resolved `crossComponent: true` link in the Link Graph (`.aee/link-graph.json`, `crossComponentSeams`). The cgo seam is unresolved (`unresolved` array, `crossComponent: true`); chain-006 stops at the cgo boundary because the aurora-network C library definition is absent.

---

## Verification Status

> **Unresolved errors and coverage gaps present — see below.**

**Round 2 verification (`.aee/verification-summary.md`, 2026-10-04)** covered 18 file documents (all aurora-portal), 4 component documents, and 9 aurora-portal security findings. Aurora-compute was not yet delivered at that time and has not been verified by the Verifier Critic.

| # | Document | Location | Error |
|---|---|---|---|
| 1 | `docs/components/payload_plaintext.md` | Local Data Flow / Path 1 | Command string cited as `"aurora-cli export %s %s"`; source `api.py:30` contains `"aurora-cli report --project %s > %s"` |
| 2 | `docs/components/payload_plaintext.md` | Cross-Component Interfaces / Executable caller row | Interface labelled `os.system("aurora-cli export ...")`; source `api.py:30` shows `"aurora-cli report --project %s > %s"` |

**Coverage gap:** The following artifacts have not been verified by the Verifier Critic:
- File documents for all 19 aurora-compute files (`docs/src/payload_plaintext/aurora-compute/…`)
- Security findings for `aurora-compute/api/server.go` (4 findings) and `aurora-compute/api/profile.go` (1 finding)
- Chains chain-003 through chain-007 (partial chains added after Round 2)

Source: `.aee/verification-summary.md`.
