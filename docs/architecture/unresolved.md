# Unresolved Items Index

_Batch: `624338e5475ffbce89d00d3abf4134e98314eb03` — 2026-10-21_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table).

### Unresolved References (923 total)

The decrease from 1,200 (batch 8) to 923 is driven by batch 9 extracting `nova.virt.*` production code (libvirt, vmwareapi, zvm, ironic drivers, disk utilities, etc.) and `nova.volume.*`, resolving the entire 283-ref `nova.virt.*` cluster and the 23-ref `nova.volume` gap in one pass. The remaining 923 unresolved entries are dominated by the bare `nova` pattern (913 refs), which represents dynamic attribute access and re-export patterns rather than a single missing file.

**Summary by unresolved module root** (4 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 913 | top-level package access patterns across all extracted files; not a single missing module |
| `nova.context` | 7 | request context module — may be part of nova.compute or a standalone module not yet extracted |
| `nova.policy` | 2 | policy enforcer (distinct from nova.policies, which is resolved) |
| `nova.quota` | 1 | quota enforcement |
| **Total** | **923** | |

Modules resolved in batch 9 (previously unresolved): `nova.virt` (97 refs), `nova.virt.libvirt` (72), `nova.virt.vmwareapi` (45), `nova.virt.libvirt.volume` (21), `nova.virt.image` (10), `nova.virt.disk.mount` (8), `nova.virt.libvirt.cpu` (5), `nova.virt.zvm` (5), `nova.virt.ironic` (4), `nova.virt.libvirt.storage` (4), `nova.virt.disk` (3), `nova.virt.libvirt.host` (2), `nova.virt.block_device` (2), `nova.virt.disk.vfs` (2), `nova.virt.node` (1), `nova.virt.hardware` (1), `nova.virt.libvirt.driver` (1), `nova.volume` (23), `nova.share` (3), `nova.storage` (1) — all now in the KB.

### Ambiguous References

None. (`.aee/link-summary.md`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no production call site across all 1,484 extracted files; `virt/libvirt/driver.py` (extracted in batch 9) uses accel_info ARQ dicts passed from compute manager but does not call `get_arq_by_uuid` — grep confirmed; test fixture `tests/fixtures/cyborg.py` (CyborgFixture) remains the only evidence the method is called from production |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

Note: `privsep/libvirt.py:L150–161` (readpty, CWE-73) was evaluated as a potential sink but no partial chain formable — privsep IPC dispatch produces no static inbound edges.

---

## UNKNOWN-Language Files (Intake Summary)

No UNKNOWN files in batch 9. (`.aee/intake-summary.md`, batch `624338e5`: "UNKNOWN Files — Flagged for Human Review: None.")

Note: batch 9 contains 1 OTHER file (1 × `.template` — network interface config template), which is non-source and not flagged as UNKNOWN.

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).
