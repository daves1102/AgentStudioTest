# Component Index

Generated: 2026-10-08 · Delivery: 3 distinct components across 40 files (38 in payload_plaintext, 1 in tools, 1 in src)

| Component | Description | Document |
|---|---|---|
| `payload_plaintext` | Two Go + Python sub-services (`aurora-compute` and `aurora-portal`) sharing the `src/payload_plaintext/` prefix; 38 files total. One confirmed cross-service bus seam (aurora.telemetry.tenant). Critical findings: hardcoded credentials (2×), command injection (2×), SQL injection. One unresolved cgo cross-component reference to aurora-network. | [payload_plaintext.md](payload_plaintext.md) |
| `tools` | Python CLI tool (`seam_index.py`) that scans a source tree for cross-component join keys (shared literals) and reports those appearing in two or more components. | [tools.md](tools.md) |
| `src` | Stub — contains only `src/.gitkeep` (UNKNOWN language, unparseable); flagged for human triage. No symbols, dependencies, or security surface recorded. | [src.md](src.md) |

## Delivery Status

- `payload_plaintext` is fully synthesized (both aurora-portal Python and aurora-compute Go sub-services). The `aurora-network` component is referenced via cgo from `api/profile.go` but has not yet been delivered.
- `tools` was synthesized in a prior run (1 Python file).
- `src` has no processable content (1 UNKNOWN placeholder file).
