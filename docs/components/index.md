# Component Index

Generated: 2026-10-04 · Delivery: 2 of 3 distinct components received (payload_plaintext now fully delivered; tools and src from prior run)

| Component | Description | Document |
|---|---|---|
| `payload_plaintext` | Python `aurora-portal` service: 16 source modules (10 uniform pipeline-stage classes, 6 functional modules), 1 test module, 2 non-source config files; carries critical security findings (hardcoded credential, command injection, SQL injection) and high-severity findings (unsafe YAML deserialization, TLS disabled, weak session crypto). | [payload_plaintext.md](payload_plaintext.md) |
| `tools` | Python CLI tool (`seam_index.py`) that scans a source tree for cross-component join keys (shared literals) and reports those appearing in two or more components. | [tools.md](tools.md) |
| `src` | Stub — contains only `src/.gitkeep` (UNKNOWN language, unparseable); flagged for human triage. No symbols, dependencies, or security surface recorded. | [src.md](src.md) |

## Delivery Status

All files for the `payload_plaintext` component have been delivered and synthesized. The `tools` component (1 Python file) was synthesized in a prior run. The `src` component (1 UNKNOWN/unparseable file) has no processable content. No cross-component seams appear in the Link Graph yet — five open-end interfaces in `payload_plaintext` await partner components (bus client, database driver, `aurora-cli` binary, and external Aurora API).
