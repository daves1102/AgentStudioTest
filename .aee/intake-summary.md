# Intake Summary

**Last batch:** `c7220ddb32aeaa39f4d9e37dd2f11a920564404b` (aurora-network C)
**Updated:** 2026-10-12 — backfilled `loc` for all prior batches via tokei 15.0.0

---

## Cumulative Totals (all 4 batches, 97 files)

### By Language

| Language | Files | Code | Comments | Blanks |
|----------|-------|------|----------|--------|
| C        | 56    | 2582 | 508      | 425    |
| Go       | 18    | 753  | 61       | 182    |
| Python   | 18    | 415  | 34       | 156    |
| UNKNOWN  | 5     | 8    | 7        | 0      |

*UNKNOWN files: `src/.gitkeep`, `.env.example`, `requirements.txt`, `go.mod`, `Makefile` — tokei produced no output for the first two and `go.mod`; `loc` omitted for those three.*

### By Component

| Component         | Files | Code lines |
|-------------------|-------|------------|
| payload_plaintext | 95    | 3,669      |
| tools             | 1     | 89         |
| src               | 1     | 0          |

---

## Batch History

| Batch (short) | Service         | Files | Languages       | Skips |
|---------------|-----------------|-------|-----------------|-------|
| `92982969`    | seam_index.py   | 2     | Python, UNKNOWN | 0     |
| `c2135f00`    | aurora-portal   | 19    | Python, UNKNOWN | 0     |
| `2082c134`    | aurora-compute  | 19    | Go, UNKNOWN     | 0     |
| `c7220ddb`    | aurora-network  | 57    | C, UNKNOWN      | 0     |

---

## Files Requiring Human Review

| File | Reason |
|------|--------|
| `src/.gitkeep` | Empty file, extension `.gitkeep` unrecognised |
| `src/payload_plaintext/aurora-portal/.env.example` | Dotenv template, extension `.example` unrecognised |
| `src/payload_plaintext/aurora-portal/requirements.txt` | Pip manifest, extension `.txt` unrecognised |
| `src/payload_plaintext/aurora-compute/go.mod` | Go module manifest, extension `.mod` unrecognised |
| `src/payload_plaintext/aurora-network/Makefile` | GNU Make build script, no recognised extension |
