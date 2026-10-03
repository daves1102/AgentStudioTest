# Security Posture Report

> **Sources:** `.aee/security-log.jsonl`, `.aee/security/src/tools/seam_index.py.findings.json`,
> `.aee/security-chains.json`, `.aee/security-chains-summary.md`, `.aee/verification-summary.md`

---

## Executive Summary

| Category | Count |
|---|---|
| Total findings (all files) | 1 |
| — Critical | 0 |
| — High | 0 |
| — Medium | 1 |
| — Low | 0 |
| Confirmed taint chains | 1 |
| Partial taint chains | 0 |
| Files analyzed | 1 |
| Files skipped (unparseable) | 1 |

The single analyzed file (`src/tools/seam_index.py`) carries one medium-severity finding. The skipped file (`src/.gitkeep`) was excluded by the Security Analyzer due to `KB error: unparseable` (empty content, unrecognised extension). No findings were produced for it. Delivery is partial — only 1 of 6 expected components has been received; the security surface of the remaining five components is not yet assessed.

Sources: `.aee/security-log.jsonl`; `.aee/security-chains-summary.md` (Counts); `.aee/verification-summary.md` (Verification Status).

---

## Top Findings

| # | File | Line Range | OWASP Category | CWE | Severity | Confidence | Title |
|---|---|---|---|---|---|---|---|
| 1 | `src/tools/seam_index.py` | L88–89 | A01 Broken Access Control | CWE-22 | medium | confirmed | Unsanitised CLI path argument passed to `os.walk()` and `open()` — path traversal possible |

Source: `.aee/security/src/tools/seam_index.py.findings.json`; `.aee/verification-summary.md` (Security Finding verification, `src/tools/seam_index.py` finding 1).

---

## Confirmed Taint Chains

| Chain ID | Source File | Source Line | Sink File | Sink Line | OWASP Category | CWE | Severity | Confidence | Severity Upgraded |
|---|---|---|---|---|---|---|---|---|---|
| chain-001 | `src/tools/seam_index.py` | L88 | `src/tools/seam_index.py` | L52 | A01 Broken Access Control | CWE-22 | medium | confirmed | No |

**chain-001 hop detail** (source: `.aee/security-chains.json`):

| Hop | File | Line | Symbol | Cross-Component |
|---|---|---|---|---|
| Source | `src/tools/seam_index.py` | L88 | `sys.argv[1]` → `root` | — |
| 1 | `src/tools/seam_index.py` | L89 | `scan` | No |
| 2 | `src/tools/seam_index.py` | L43 | `os.walk` | No |
| 3 | `src/tools/seam_index.py` | L46 | `os.path.join` | No |
| Sink | `src/tools/seam_index.py` | L52 | `open(path, …)` | — |

Severity was not upgraded because all hops are intra-component (`crossComponent: false`). Source: `.aee/security-chains-summary.md`; team convention (severity upgrade applies only when a confirmed chain crosses at least one `crossComponent: true` hop).

---

## Cross-Component Security Seams

No cross-component seams exist in the current delivery. The Link Graph (`.aee/link-graph.json`, `crossComponentSeams`) is empty. No seams from the confirmed or partial chain list cross a component boundary. Source: `.aee/link-graph.json`; `.aee/security-chains.json`.

---

## Verification Status

All documents and findings verified — zero errors. Verification was completed in round 1 with no unresolved errors, warnings, or issues. Source: `.aee/verification-summary.md` (Counts by Issue Type and Severity; Documents Verified Clean).
