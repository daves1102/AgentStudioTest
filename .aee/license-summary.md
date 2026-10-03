# License Compliance Summary

Generated: 2026-10-03

## Product License

No top-level `LICENSE*` or `LICENCE*` file was found in the repository. **Product license: undeclared.**

## Component Inventory

| Component | License File | SPDX ID | Copyleft | Attribution Required |
|-----------|-------------|---------|----------|---------------------|
| _(none)_ | — | — | — | — |

**Zero bundled third-party components detected.**

A full scan was performed for:
- `LICENSE*` / `LICENCE*` / `NOTICE*` files at any directory depth — **none found**
- `third_party/`, `third-party/`, `thirdparty/`, `vendor/` directories — **none found**

The `aurora-portal` Python service (`src/payload_plaintext/aurora-portal/`) is present and lists 7 pip dependencies in `requirements.txt` (Django 2.2.0, requests 2.19.1, PyYAML 5.1, urllib3 1.24.1, Jinja2 2.10, cryptography 2.3, paramiko 2.4.1), but none of these are vendored (checked-in) into the repository. Their licenses are governed by PyPI package metadata and are not subject to vendored-code attribution obligations in this repository. See `.aee/dependency-inventory.json` for advisory details.

## Copyleft Conflicts

None — no bundled components found.

## Attribution Gaps

None — no bundled components found and no top-level `NOTICE*` file present.

## Notes

- **Action required:** A `LICENSE` file should be added to the repository root to declare the product's own license terms.
- **Advisory note:** Several pip dependencies have known CVEs (see `.aee/dependency-advisories.json`). While this is a security concern rather than a license concern, it is noted here for completeness.
- **Copyleft exposure via pip:** Django is licensed under BSD-3-Clause (permissive); cryptography under Apache-2.0/BSD; paramiko under LGPL-2.1 (weak copyleft). LGPL-2.1 imposes linking/usage obligations if the library is statically bundled — dynamic pip installation does not trigger these obligations. No action is needed unless the package is ever vendored or statically linked.
