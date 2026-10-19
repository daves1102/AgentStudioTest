# Verification Summary — Round 1 (Batch 2)

**Batch:** `733c737267c89a04a0ad54b304c4e167bd16c887`
**Date:** 2026-10-19
**Prior batch warnings resolved:** 2 of 3 (unsupported-claim `instance_uuid` URL key in nova.md fixed; 1 warning carried forward)

**Documents audited:** 59 (55 file documents, 1 component document, 2 security findings, 1 security chain)

---

## Issue Counts

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 1     |
| info     | 1     |

| Issue Type         | Count |
|--------------------|-------|
| `missing-citation` | 2     |

---

## All Warnings and Errors

| # | Severity | Document | Issue Type | Description |
|---|----------|----------|------------|-------------|
| 1 | warning | `docs/src/nova/accelerator/cyborg.py.md` | `missing-citation` | Overview paragraph "adapter created lazily" claim (L121–134) still lacks a `(file:Lstart–Lend)` citation — carried forward from round 1, not corrected |

---

## What Was Verified

### File documents (55 files)

**Automated checks run:**
- All 55 documents present ✓
- Line counts (total/code/comment/blank) for all 55 files: zero mismatches against KB ✓
- Symbol names and line ranges: all KB `aee-inventory` symbols present in documents; 265 symbols spot-checked against actual source — zero wrong-citation issues ✓
- KB getter/setter pairs (migrate_data.py, migration.py): both entries present in inventory; KB correctly records getter ranges for properties; no mismatch ✓
- Dependency citation line numbers: spot-checked across files — all accurate ✓

**Manual/targeted checks:**
- `cyborg.py.md`: all 32 symbols, 7 dependencies, 8 side effects, 13 security surface entries re-verified against source ✓
- `utils.py.md`: generate_hostid at L857–871 verified; SHA-224 at L869 verified; security surface citations (L33, L730, L744, L747, L757) verified ✓
- `migrate_data.py` / `migration.py`: property getter/setter line ranges verified by reading source ✓

### Component document: `docs/components/nova.md`

- Aggregate line counts (22,503 total / 15,164 code / 3,245 comment / 4,094 blank) verified against sum of all 55 KB records ✓
- 10 per-file line counts spot-checked — all match KB ✓
- **Round-1 warnings resolved:** `?instance_uuid=` corrected to `?instance=` in both GET and DELETE Sinks rows (L317 and L377 of cyborg.py verified) ✓

### Security finding: `Security:src/nova/accelerator/cyborg.py`

Unchanged from round 1 — carries forward verified status.
- L358–359 URL path concatenation confirmed ✓; OWASP A03 / CWE-74 consistent ✓; tool=manual, no rescan required.

### Security finding: `Security:src/nova/utils.py`

New finding in this batch.
- `tool: semgrep`, `ruleId: python.lang.security.audit.sha224-hash.sha224-hash`, L869–869
- Source L869: `sha_hash = hashlib.sha224(data)` confirmed ✓
- Semgrep re-run confirms rule fires at L869 ✓
- OWASP A02 Cryptographic Failures / CWE-327: consistent with use of deprecated SHA-224 hash ✓
- Severity low, confidence confirmed: appropriate — SHA-224 is deprecated by policy but not cryptographically broken; used only for opaque host ID, not passwords or keys ✓

### Security chain: `chain-001`

Unchanged from round 1 — carries forward verified status.
- Source L337 / Sink L358–359 verified ✓; partial-chain status with no-static-edge stop reason consistent ✓

---

## Documents Passed (zero errors)

All 59 audited items pass with zero errors:

| Type | Count | Pass |
|------|-------|------|
| file-document | 55 | 55 |
| component-document | 1 | 1 |
| security-finding | 2 | 2 |
| security-chain | 1 | 1 |

**Still-open warning (1):** `cyborg.py.md` overview paragraph missing citation for lazy-adapter claim. File Documenter should add `(src/nova/accelerator/cyborg.py:L121–L134)` after that sentence.
