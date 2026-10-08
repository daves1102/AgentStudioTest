# License Compliance Summary

Generated: 2026-10-08 · Scanner: trivy 0.75.0

## Product License

No top-level `LICENSE*` or `LICENCE*` file was found in the repository. **Product license: undeclared.**

**Action required:** Add a `LICENSE` file to the repository root to declare the product's own license terms.

## Component Inventory

| Component | License File | SPDX ID | Copyleft | Attribution Required |
|-----------|-------------|---------|----------|---------------------|
| _(none)_ | — | — | — | — |

**Zero vendored third-party components detected.**

Full scan performed for `LICENSE*` / `LICENCE*` / `NOTICE*` files at any directory depth and for `third_party/`, `third-party/`, `thirdparty/`, `vendor/` directories. None found. The trivy `--license-full` scan confirms no loose license files exist in `src/`.

## Package-Manager Dependencies (non-vendored — advisory only)

These dependencies are declared in manifests but are not checked into the repository. They carry no in-repo attribution or bundled-code license obligations. SPDX identifiers are listed as UNKNOWN because trivy did not return license names for unvendored packages and no in-repo license text is available to confirm any identifier.

### aurora-compute (Go modules — `src/payload_plaintext/aurora-compute/go.mod`)

| Package | Version | SPDX ID | Copyleft Advisory |
|---------|---------|---------|-------------------|
| github.com/dgrijalva/jwt-go | v3.2.0+incompatible | UNKNOWN | None expected (deprecated library; has known CVEs — see dependency-advisories.json) |
| github.com/gin-gonic/gin | v1.6.3 | UNKNOWN | None expected |
| github.com/miekg/dns | v1.1.25 | UNKNOWN | None expected |
| gopkg.in/yaml.v2 | v2.2.2 | UNKNOWN | None expected |

### aurora-portal (pip — `src/payload_plaintext/aurora-portal/requirements.txt`)

| Package | Version | SPDX ID | Copyleft Advisory |
|---------|---------|---------|-------------------|
| Django | 2.2.0 | UNKNOWN | None expected |
| requests | 2.19.1 | UNKNOWN | None expected |
| PyYAML | 5.1 | UNKNOWN | None expected |
| urllib3 | 1.24.1 | UNKNOWN | None expected |
| Jinja2 | 2.10 | UNKNOWN | None expected |
| cryptography | 2.3 | UNKNOWN | None expected |
| paramiko | 2.4.1 | UNKNOWN | **Weak copyleft advisory** — LGPL-2.1 if ever vendored/statically linked |

## Copyleft Conflicts

None — no vendored components found.

## Attribution Gaps

None — no vendored components found and no top-level `NOTICE*` file present.

## Notes

- SPDX IDs recorded as UNKNOWN for all manifest-declared packages: trivy did not return license fields for unvendored Go modules or pip packages (no source downloaded to repository), and no in-repo license text exists to independently confirm any identifier.
- `dgrijalva/jwt-go` v3.2.0 is a deprecated library with known CVEs; see `.aee/dependency-advisories.json` for details. This is a security concern, not a license concern.
- If the Go modules or pip packages are ever vendored (checked into `vendor/` or `third_party/`), a full re-scan will be required to determine SPDX identifiers and attribution obligations from the in-repo license texts.
- `paramiko` (LGPL-2.1): dynamic pip installation does not trigger LGPL obligations. Vendoring or static linking would.
