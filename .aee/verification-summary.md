# Verification Summary — Round 1 (Batch 10)

**Batch:** `c7e94e29eea2e3abd5797fc0759b0d98232c7830`
**Date:** 2026-10-21
**Files in batch:** 25 new top-level utility modules (availability_zones.py, baserpc.py, block_device.py, cache_utils.py, config.py, context.py, crypto.py, exception_wrapper.py, filesystem.py, filters.py, loadables.py, manager.py, middleware.py, monkey_patch.py, policy.py, profiler.py, quota.py, rpc.py, safe_utils.py, service.py, test.py, thread_pool_factory.py, version.py, vtpm.py, weights.py)

**Documents audited:** 1,515 (1,509 file documents, 1 component document, 10 security findings, 1 security chain)

---

## Issue Counts

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

| Issue Type         | Count |
|--------------------|-------|
| `missing-citation` | 1     |

---

## All Warnings and Errors

*None.*

---

## What Was Verified

### File documents (1,509 files)

**Automated checks:**
- All 1,509 documents present ✓
- Line counts verified against KB for all 1,509 files via `aee-inventory` — zero mismatches ✓
- 41,366 KB `aee-inventory` symbols cross-checked against fresh inventory — zero wrong-citations, zero missing symbols ✓
- KB aggregate totals (612,304 total / 467,723 code) computed and verified ✓
- Total symbols across all 1,509 KB records: 41,868 ✓

**Nova.md per-file spot-checks (new batch files):**
- `crypto.py`: 329 total / 243 code — matches KB ✓
- `context.py`: 612 total / 445 code — matches KB ✓
- `quota.py`: 1,468 total / 1,070 code — matches KB ✓ (exact-path lookup required; `api/validation/extra_specs/quota.py` appears earlier in table)
- `policy.py`: 285 total / 189 code — matches KB ✓ (exact-path lookup; `cmd/policy.py` appears earlier)
- `service.py`: 515 total / 356 code — matches KB ✓ (exact-path lookup; `notifications/objects/service.py` appears earlier)
- `rpc.py`: 444 total / 339 code — matches KB ✓ (exact-path lookup; `baserpc.py` contains `rpc.py` as substring)
- `block_device.py`: 695 total / 468 code — matches KB ✓

**Note on spot-check method:** Short filename lookup via `if short in line` produces false mismatches when earlier table rows contain the same filename as a suffix (e.g., `baserpc.py` matches `rpc.py`). All four apparent mismatches resolved to correct values via exact backtick-quoted path matching (`if \`{short}\` in line`).

### Component document: `docs/components/nova.md`

- Aggregate total (612,304) and code (467,723) match exact KB sum across all 1,509 files ✓
- Symbol count (41,868) matches sum of all KB `symbols` arrays ✓
- Per-file line counts spot-checked with exact-path lookup — all match KB ✓

### Security findings (9 carried forward, 1 new)

**Carried forward (verified in prior rounds):**
All 9 carry forward unchanged ✓ (cyborg CWE-74, utils SHA-224, json_filter CWE-470, handler CWE-306, authvencrypt CWE-297, privsep CWE-732+CWE-73, disk/api PRNG CWE-338, imagecache SHA-1 CWE-327 ×2, zvm TLS CWE-295)

**New finding: `Security:src/nova/crypto.py` — SHA-1 X.509 fingerprint (L91–92)**
- `tool: semgrep, bandit`, `ruleId: B303`, OWASP A02 / CWE-327, severity low, confidence confirmed
- Source L91: `cert.fingerprint(hashes.SHA1())` — SHA-1 used for X.509 certificate fingerprint ✓
- Source L77: `hashlib.md5(pub_data, usedforsecurity=False)` — SSH key fingerprint correctly uses MD5 with opt-out flag, as noted in detail ✓
- Scanner re-check: bandit B303 confirmed at L91 (severity Medium/High confidence); semgrep SHA-1 rule confirmed at L91 ✓
- Severity downgraded from bandit's Medium to Low: fingerprint is for display/identification, not authentication — justified ✓
- OWASP A02 Cryptographic Failures / CWE-327 (Use of Broken Cryptographic Algorithm): consistent ✓
- Confidence confirmed: explicit `hashes.SHA1()` at L91 ✓

### Security chain: `chain-001`

Unchanged — still partial/no-static-edge. Now 11 evaluatedFindings (1 new: crypto.py L91–92 excluded-not-a-source). Previously verified source/sink/OWASP/CWE ✓.

---

## Documents Passed (zero errors)

All 1,515 audited items pass with zero errors:

| Type | Count | Pass |
|------|-------|------|
| file-document | 1,509 | 1,509 |
| component-document | 1 | 1 |
| security-finding | 10 | 10 |
| security-chain | 1 | 1 |

**Persistent info only:** `docs/src/nova/accelerator/__init__.py.md` — 0-line file, no citation possible (not actionable).
