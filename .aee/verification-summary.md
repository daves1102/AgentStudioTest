# Verification Summary — Round 1 (Batch 9)

**Batch:** `624338e5475ffbce89d00d3abf4134e98314eb03`
**Date:** 2026-10-21
**Files in batch:** 97 changed (96 new Python sources: virt/92, wsgi/3, volume/2)

**Documents audited:** 1,490 (1,484 file documents, 1 component document, 9 security findings, 1 security chain)

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

### File documents (1,484 files)

**Automated checks:**
- All 1,484 documents present ✓
- Line counts verified against KB for all 1,484 files via `aee-inventory` — zero mismatches ✓
- 40,801 KB `aee-inventory` symbols cross-checked against fresh inventory — zero wrong-citations, zero missing symbols ✓
- KB aggregate totals (604,264 total / 462,230 code) computed and verified ✓
- Total symbols across all 1,484 KB records: 41,277 ✓

**Nova.md per-file spot-checks (sample from new subsystems):**
- `virt/disk/api.py`: 684 total / 477 code — matches KB ✓
- `virt/libvirt/imagecache.py`: 418 total / 291 code — matches KB ✓
- `virt/zvm/utils.py`: 125 total / 80 code — matches KB ✓
- `virt/block_device.py`: 1,068 total / 775 code — matches KB ✓
- `virt/configdrive.py`: 181 total / 116 code — matches KB ✓
- `volume/__init__.py`: 0 total / 0 code — matches KB ✓
- `wsgi/__init__.py`: 0 total / 0 code — matches KB ✓

### Component document: `docs/components/nova.md`

- Aggregate total (604,264) and code (462,230) match exact KB sum across all 1,484 files ✓
- Symbol count (41,277) matches sum of all KB `symbols` arrays ✓
- Per-file spot-checks for sample of new virt/volume/wsgi files — all match KB ✓

### Security findings (6 carried forward, 3 new)

**Carried forward (verified in prior rounds):**
- `Security:src/nova/accelerator/cyborg.py` (ARQ URL injection, CWE-74/A03) ✓
- `Security:src/nova/utils.py` (SHA-224, CWE-327/A02) ✓
- `Security:src/nova/scheduler/filters/json_filter.py` (getattr reflection, CWE-470/A01) ✓
- `Security:src/nova/api/metadata/handler.py` (HMAC skip, CWE-306/A07) ✓
- `Security:src/nova/console/rfb/authvencrypt.py` (TLS hostname check, CWE-297/A02) ✓
- `Security:src/nova/privsep/libvirt.py` (world-read ploop CWE-732 + unvalidated readpty CWE-73) ✓

**New findings verified this batch:**

**Finding: `Security:src/nova/virt/disk/api.py` — PRNG salt (L612–619)**
- `tool: bandit, manual`, `ruleId: B311`, OWASP A02 / CWE-338, severity medium, confidence confirmed
- Source L619: `random.choice(salt_set)` — Mersenne Twister PRNG used for cryptographic salt ✓
- Scanner re-check: bandit B311 confirmed at L619 (within cited range L612–619) ✓
- Note: citation range starts at L612 (blank line); function `_generate_salt` begins at L614. The description says "at lines 612-619" — slight over-inclusion of 2 leading blank lines, but cited content IS present within the range. Acceptable.
- Salt used at L649 (`algos['MD5'] + salt`) to hash admin password — security sensitivity confirmed ✓
- OWASP A02 Cryptographic Failures / CWE-338 (Use of Cryptographically Weak PRNG): consistent ✓
- Severity medium / confidence confirmed: deterministic Mersenne Twister observable to local attacker ✓

**Finding: `Security:src/nova/virt/libvirt/imagecache.py` — SHA-1 L52 and L317-318**
- `tool: semgrep, bandit`, `ruleId: B324`, OWASP A02 / CWE-327, severity low, confidence confirmed
- Source L52: `hashlib.sha1(image_id.encode('utf-8')).hexdigest()` ✓
- Source L317-318: `hashlib.sha1(encodeutils.safe_encode(img)).hexdigest()` ✓
- Scanner re-check: bandit B324 confirmed at L52 and L317; semgrep SHA-1 rule confirmed at L52 and L317–318 ✓
- Note: scanners also flag L109 (`hashlib.sha1().digest_size`). This is a false positive — L109 queries the algorithm's `digest_size` metadata (a numeric constant) without hashing any data. Security Analyzer correctly excluded L109 from findings ✓
- OWASP A02 / CWE-327 (Use of Broken or Risky Cryptographic Algorithm): consistent with deprecated SHA-1 without `usedforsecurity=False` ✓
- Severity low: non-password hash (cache filename derivation); no direct attack path but FIPS incompatible ✓

**Finding: `Security:src/nova/virt/zvm/utils.py` — TLS verify=False (L52-55)**
- `tool: manual`, OWASP A02 / CWE-295, severity medium, confidence confirmed
- Source L52-55: `else:` branch with `connector.ZVMConnector(..., verify=False)` ✓
- When HTTPS configured but no ca_file: `_ssl_enabled=True`, `ca_file=None` → condition `if _ssl_enabled and ca_file` is False → falls to else branch with `verify=False` ✓
- No warning emitted for this case (warning only covers non-HTTPS + ca_file at L43-46) ✓
- OWASP A02 Cryptographic Failures / CWE-295 (Improper Certificate Validation): consistent ✓
- Severity medium / confidence confirmed: `verify=False` is explicit; management-network access required ✓
- Tool manual: no scanner re-run required ✓

### Security chain: `chain-001`

Updated stoppedAt.detail: `virt/libvirt/driver.py` (now extracted) uses accel_info ARQ dicts passed from compute manager but does not call `get_arq_by_uuid` — grep confirmed. Chain still partial/no-static-edge. Source L337 / Sink L358–359 / OWASP A03 / CWE-74 previously verified ✓. Now 10 evaluatedFindings (4 new).

---

## Documents Passed (zero errors)

All 1,490 audited items pass with zero errors:

| Type | Count | Pass |
|------|-------|------|
| file-document | 1,484 | 1,484 |
| component-document | 1 | 1 |
| security-finding | 9 | 9 |
| security-chain | 1 | 1 |

**Persistent info only:** `docs/src/nova/accelerator/__init__.py.md` — 0-line file, no citation possible (not actionable).
