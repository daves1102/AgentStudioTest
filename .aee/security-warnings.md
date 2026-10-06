# Security Analysis Warnings

## Toolchain

The `secscan` toolchain image is not present in this environment. `aee-toolchain doctor` returned command-not-found; none of the following scanners were available and all were skipped:

- **gitleaks** — MISSING (secrets scan not performed; hardcoded credentials were found by manual reading)
- **semgrep** — MISSING (SAST scan not performed; injection/deserialization patterns were found by manual reading)
- **bandit** — MISSING (Python SAST not performed; Python sink patterns were applied manually)
- **spotbugs** — MISSING (Java SAST not applicable; no Java files in scope)
- **trivy / osv-scanner / checkov / conftest / syft / ruff / pylint / shellcheck / hadolint** — MISSING (not applicable or not available)

All findings in this run were produced by manual static analysis (AGENT-PROMPT step 5 sink patterns) applied to source files read directly. No scanner-backed findings were generated. The quality bar and confidence labels reflect this: `confirmed` is used only where the full vulnerable path is visible in the static text; `needs_cross_file` is used where the taint source or sink is in another file.

## Skipped files (unparseable KB records)

- `src/.gitkeep`: KB error `unparseable` — empty file, unrecognised extension. Skipped.
- `src/payload_plaintext/aurora-portal/.env.example`: KB error `unparseable` — dotenv template, unrecognised extension. Skipped.
- `src/payload_plaintext/aurora-portal/requirements.txt`: KB error `unparseable` — pip manifest, unrecognised extension. Skipped.
- `src/payload_plaintext/aurora-compute/go.mod`: KB error `unparseable` — Go module manifest, unrecognised extension. Skipped.
