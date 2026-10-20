# Verification Summary — Round 1 (Batch 7)

**Batch:** `10997c0ea56f02ffec4fd9f8c917d68241ae9ea9`
**Date:** 2026-10-20
**Files in batch:** 89 new Python sources (notifications/18, pci/7, policies/56, privsep/8)

**Documents audited:** 538 (532 file documents, 1 component document, 6 security findings, 1 security chain)

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

### File documents (532 files)

**Automated checks:**
- All 532 documents present ✓
- Line counts verified against KB for all 532 files via `aee-inventory` — zero mismatches ✓
- 10,312 KB `aee-inventory` symbols cross-checked against fresh inventory — zero wrong-citations, zero missing symbols ✓
- KB aggregate totals (147,963 total / 105,633 code) computed and verified ✓
- Total symbols across all 532 KB records: 10,536 ✓

**Nova.md per-file spot-checks (sample from new subsystems):**
- `notifications/base.py`: 399 total / 256 code — matches KB ✓
- `notifications/objects/instance.py`: 815 total / 550 code — matches KB ✓
- `pci/devspec.py`: 434 total / 320 code — matches KB ✓
- `pci/stats.py`: 1,075 total / 746 code — matches KB ✓
- `policies/__init__.py`: 130 total / 114 code — matches KB ✓
- `policies/admin_actions.py`: 51 total / 29 code — matches KB ✓
- `privsep/libvirt.py`: 236 total / 135 code — matches KB ✓
- `privsep/__init__.py`: 31 total / 14 code — matches KB ✓

### Component document: `docs/components/nova.md`

- Aggregate total (147,963) and code (105,633) match exact KB sum across all 532 files ✓
- Symbol count (10,536) matches sum of all KB `symbols` arrays ✓
- Per-file counts for sample of new subsystem files spot-checked — all match KB ✓
- Subsystem descriptions for notifications/, pci/, policies/, privsep/ verified ✓

### Security findings (5 carried forward)

All 5 carry forward verified status unchanged:
- `Security:src/nova/accelerator/cyborg.py` (ARQ URL injection, CWE-74/A03) ✓
- `Security:src/nova/utils.py` (SHA-224, CWE-327/A02) ✓
- `Security:src/nova/scheduler/filters/json_filter.py` (getattr reflection, CWE-470/A01) ✓
- `Security:src/nova/api/metadata/handler.py` (HMAC skip, CWE-306/A07) ✓
- `Security:src/nova/console/rfb/authvencrypt.py` (TLS hostname check, CWE-297/A02) ✓

### Security finding: `Security:src/nova/privsep/libvirt.py` *(new — 2 findings)*

**Finding 1: ploop disk image set world-readable (L81–84)**
- `tool: manual`, `lineRange: {start: 81, end: 84}`, OWASP A05 / CWE-732, severity low, confidence confirmed
- Source L84: `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` — adds world-read permission to ploop disk image ✓
- Developer TODO at L78–82 explicitly acknowledges this is undesirable ✓
- Function runs inside `sys_admin_pctxt` privsep context (L64 `@nova.privsep.sys_admin_pctxt.entrypoint`) ✓
- OWASP A05 Security Misconfiguration / CWE-732 (Incorrect Permission Assignment): consistent with world-read on guest disk image ✓
- Severity low: requires local user access on the compute host; code already flagged by developer TODO ✓
- Confidence confirmed: explicit `stat.S_IROTH` set at L84 ✓

**Finding 2: readpty opens unvalidated path as root (L150–161)**
- `tool: manual`, `lineRange: {start: 150, end: 161}`, OWASP A01 / CWE-73, severity medium, confidence needs_cross_file
- Source L150: `def readpty(path):` — privsep entrypoint, L161: `with open(path, 'r') as f:` ✓
- Developer TODO at L151–152 explicitly acknowledges the missing pty-path validation ✓
- Function decorated with `sys_admin_pctxt.entrypoint` at L149 (CAP_DAC_READ_SEARCH) — root privileges ✓
- OWASP A01 Broken Access Control / CWE-73 (Improper Path Validation): consistent with arbitrary path passed to privileged `open()` ✓
- Severity medium: full root arbitrary file read if path is externally controlled — impact high but conditionality on cross-file control ✓
- Confidence needs_cross_file: whether path reaches an attacker-controlled value requires caller analysis ✓
- Chain correlator disposition: excluded-no-source-found (consistent with needs_cross_file) ✓

### Security chain: `chain-001`

Unchanged — carries forward verified status. Now 6 evaluatedFindings (2 new privsep entries added). Chain still partial/no-static-edge.
- Source `cyborg.py:L337` / Sink `cyborg.py:L358–359` / OWASP A03 / CWE-74 ✓
- stoppedAt: no-static-edge — get_arq_by_uuid callers not in 532-file source set ✓

---

## Documents Passed (zero errors)

All 538 audited items pass with zero errors:

| Type | Count | Pass |
|------|-------|------|
| file-document | 532 | 532 |
| component-document | 1 | 1 |
| security-finding | 6 | 6 |
| security-chain | 1 | 1 |

**Persistent info only:** `docs/src/nova/accelerator/__init__.py.md` — 0-line file, no citation possible (not actionable).
