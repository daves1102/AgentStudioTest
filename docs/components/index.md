# Component Index

Generated: 2026-10-12 · Delivery: 3 distinct components across 97 files (95 in payload_plaintext, 1 in tools, 1 in src)

| Component | Description | Document |
|---|---|---|
| `payload_plaintext` | Three sub-services sharing the `src/payload_plaintext/` prefix: aurora-portal (Python, 19 files), aurora-compute (Go, 19 files), aurora-network (C, 57 files). Two confirmed intra-component cross-service seams: bus topic `aurora.telemetry.tenant` and cgo symbol `aurora_profile_label` (network-reachable CWE-121). Critical findings: hardcoded credentials (2×), command injection (5×, across Go and C), SQL injection, unsafe deserialization. | [payload_plaintext.md](payload_plaintext.md) |
| `tools` | Python CLI tool (`seam_index.py`) that scans a source tree for cross-component join keys (shared literals) and reports those appearing in two or more components. | [tools.md](tools.md) |
| `src` | Stub — contains only `src/.gitkeep` (UNKNOWN language, unparseable); flagged for human triage. No symbols, dependencies, or security surface recorded. | [src.md](src.md) |

## Delivery Status

- `payload_plaintext` is fully synthesized: all three sub-services (aurora-portal Python, aurora-compute Go, aurora-network C) have been delivered and processed. Both cross-service seams are confirmed.
- `tools` was synthesized in a prior run (1 Python file).
- `src` has no processable content (1 UNKNOWN placeholder file).
