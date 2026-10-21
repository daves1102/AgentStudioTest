# Unresolved Items Index

_Batch: `da4f90f3140927b8c63f00b11af32787a70ff1ac` — 2026-10-21_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table).

### Unresolved References (1,200 total)

The increase from 196 (batch 7) to 1,200 is driven by the test suite extraction (856 new files). Test files import heavily from `nova.virt.*` sub-modules not yet in the KB. No previously resolved modules regressed.

**Summary by unresolved module root** (22 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 884 | top-level package patterns + test suite imports |
| `nova.virt` | 97 | hypervisor abstraction layer — not yet extracted |
| `nova.virt.libvirt` | 72 | libvirt driver — not yet extracted |
| `nova.virt.vmwareapi` | 45 | VMware API driver — not yet extracted |
| `nova.volume` | 23 | Cinder integration — not yet extracted |
| `nova.virt.libvirt.volume` | 21 | libvirt volume handling — not yet extracted |
| `nova.virt.image` | 10 | VM image management — not yet extracted |
| `nova.virt.disk.mount` | 8 | Disk mount utilities — not yet extracted |
| `nova.context` | 7 | Request context module — not yet extracted |
| `nova.virt.libvirt.cpu` | 5 | libvirt CPU pinning — not yet extracted |
| `nova.virt.zvm` | 5 | z/VM driver — not yet extracted |
| `nova.virt.ironic` | 4 | Ironic driver — not yet extracted |
| `nova.virt.libvirt.storage` | 4 | libvirt storage — not yet extracted |
| `nova.virt.disk` | 3 | Disk utilities — not yet extracted |
| `nova.policy` | 2 | Policy enforcer — not yet extracted |
| `nova.virt.libvirt.host` | 2 | libvirt host management — not yet extracted |
| `nova.virt.block_device` | 2 | Block device management — not yet extracted |
| `nova.virt.disk.vfs` | 2 | Virtual filesystem utilities — not yet extracted |
| `nova.quota` | 1 | Quota enforcement — not yet extracted |
| `nova.virt.node` | 1 | Node resource tracking — not yet extracted |
| `nova.virt.hardware` | 1 | Hardware topology — not yet extracted |
| `nova.virt.libvirt.driver` | 1 | libvirt main driver — not yet extracted |
| **Total** | **1,200** | |

The `nova.virt.*` family accounts for 283 refs across 14 sub-modules and will collapse significantly when `nova/virt/` is extracted.

**Selected unresolved entries**:

| File | Symbol | Reason |
|------|--------|--------|
| `src/nova/tests/unit/virt/test_block_device.py` | `nova.virt.libvirt` | module-not-found |
| `src/nova/tests/unit/virt/vmwareapi/*` (multiple) | `nova.virt.vmwareapi` | module-not-found |
| `src/nova/tests/unit/virt/zvm/*` | `nova.virt.zvm` | module-not-found |
| `src/nova/tests/unit/compute/*` (multiple) | `nova.virt` | module-not-found |
| `src/nova/api/*`, `src/nova/compute/*` (multiple) | `nova.volume` | module-not-found |

### Ambiguous References

None. (`.aee/link-summary.md`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no production call site in 1,388-file source set; test evidence (batch 8) confirms production caller exists but is not yet extracted: `tests/fixtures/cyborg.py` mocks `get_arq_by_uuid` via `CyborgFixture` (used in compute manager and virt/libvirt driver tests), suggesting caller is in `nova.virt.libvirt` or a compute manager accelerator workflow |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

Note: `privsep/libvirt.py:L150–161` (readpty, CWE-73) was evaluated as a potential sink but no partial chain formable — privsep IPC dispatch produces no static inbound edges.

---

## UNKNOWN-Language Files (Intake Summary)

One UNKNOWN file requiring human review:

| File | Reason |
|------|--------|
| `src/nova/tests/unit/ssl_cert/new_cert.sh` | Shell script — source code in unsupported language (bash/sh) |

Source: `.aee/intake-summary.md` (UNKNOWN Files table).

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).
