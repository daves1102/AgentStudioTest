# Security Chains Summary

**Generated:** 2026-10-02

## Counts

| Status | Count |
|---|---|
| Confirmed chains | 1 |
| Partial chains | 0 |

### Confirmed chains by severity

| Severity | Count |
|---|---|
| Critical | 0 |
| High | 0 |
| Medium | 1 |
| Low | 0 |

No cross-component seams were present in the Link Graph; all hops in chain-001 are intra-component. Severity was therefore not upgraded.

## Confirmed Chains

| Chain ID | Source File | Sink File | OWASP Category | CWE | Severity | Confidence |
|---|---|---|---|---|---|---|
| chain-001 | src/tools/seam_index.py (L88) | src/tools/seam_index.py (L52) | A01 Broken Access Control | CWE-22 | medium | confirmed |

### chain-001 — Unsanitised CLI path → arbitrary file read

**Source:** `sys.argv[1]` assigned to `root` at line 88 without normalisation or containment check.

**Hops:**
1. `src/tools/seam_index.py:89` — `root` passed to `scan(root)`
2. `src/tools/seam_index.py:43` — `root` used as argument to `os.walk(root)`
3. `src/tools/seam_index.py:46` — `path` constructed via `os.path.join(base, name)` from walk output

**Sink:** `open(path, ...)` at `src/tools/seam_index.py:52` — reads arbitrary files reachable from the attacker-controlled root.

**Sanitisation gaps:**
- Line 88: no `os.path.realpath`/`abspath` call, no prefix containment check on `sys.argv[1]`
- Line 44: directory blocklist only excludes named directories; it does not prevent root from pointing outside the intended source tree

## Partial Chains

None. All link-graph references were fully resolved; no ambiguous or unresolved edges were present for traced symbols.
