# Security Analysis Warnings

## Toolchain

The secscan toolchain was absent during the first three analysis runs (2026-10-02 to 2026-10-06). On 2026-10-06 the toolchain became available and all scanners were run over the full `src/` tree. Findings have been updated accordingly.

**Scanners run on 2026-10-06 (second pass):**

| Scanner | Version | Result |
|---|---|---|
| gitleaks | 8.30.1 | 0 findings — hardcoded credentials were not flagged: `AKIAIOSFODNN7EXAMPLE` is on gitleaks' example-key allowlist; `DATABASE_PASSWORD = "Aur0ra-Portal-Prod-2026!"` does not match any token-format rule. Both were found by manual inspection. |
| semgrep | 1.179.0 | 4 findings across 3 files (profile.go, server.go, api.py, session.py). |
| bandit | 1.9.4 | 7 findings across 4 Python files (api.py ×4, region_lookup.py, session.py, telemetry_consumer.py). Run with `-ll` (medium severity and above); B311 (random PRNG, LOW severity) was therefore filtered — that finding remains manual only. |
| spotbugs | 4.10.4 | Skipped — no Java files in scope; no compiled class directories present. |

**Note on semgrep exec.Command coverage:** Semgrep's `p/security-audit` and `p/owasp-top-ten` rulesets did not flag the `exec.Command("sh","-c",...)` pattern in `server.go`. That finding remains manual only.

## Skipped files (unparseable KB records)

- `src/.gitkeep`: KB error `unparseable` — empty file, unrecognised extension. Skipped.
- `src/payload_plaintext/aurora-portal/.env.example`: KB error `unparseable` — dotenv template, unrecognised extension. Skipped.
- `src/payload_plaintext/aurora-portal/requirements.txt`: KB error `unparseable` — pip manifest, unrecognised extension. Skipped.
- `src/payload_plaintext/aurora-compute/go.mod`: KB error `unparseable` — Go module manifest, unrecognised extension. Skipped.
