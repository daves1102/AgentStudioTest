# Unresolved Items Index

_Batch: `10997c0ea56f02ffec4fd9f8c917d68241ae9ea9` — 2026-10-20_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table).

### Unresolved References (196 total)

**Summary by unresolved module root** (10 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 151 | bare generic import; top-level package access patterns |
| `nova.virt` | 23 | hypervisor abstraction layer — not yet extracted |
| `nova.volume` | 9 | Cinder volume integration — not yet extracted |
| `nova.context` | 4 | request context module — not yet extracted |
| `nova.share` | 3 | Manila share integration — not yet extracted |
| `nova.virt.libvirt` | 2 | libvirt driver sub-module — sub-module of nova.virt |
| `nova.quota` | 1 | quota enforcement — not yet extracted |
| `nova.policy` | 1 | policy enforcer — not yet extracted |
| `nova.virt.node` | 1 | node resource tracking — sub-module of nova.virt |
| `nova.storage` | 1 | storage utility — not yet extracted |
| **Total** | **196** | |

Resolved since batch 6: `nova.policies` (was 60 refs), `nova.notifications.objects` (was 17 refs), `nova.pci` (was 13 refs) — all fully extracted in Batch 7 (`policies/`, `notifications/`, `pci/` subsystems).

**Selected unresolved entries** (Link Summary `.aee/link-summary.md`):

| File | Symbol | Reason |
|------|--------|--------|
| `src/nova/conf/*`, `src/nova/console/*` (multiple) | `nova` | module-not-found (top-level sub-package imports) |
| `src/nova/utils.py` | `nova.virt` | module-not-found |
| `src/nova/api/*`, `src/nova/compute/*` (multiple) | `nova.volume` | module-not-found |
| `src/nova/objects/share_mapping.py` | `nova.share` | module-not-found |

### Ambiguous References

None. (`.aee/link-summary.md`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `get_arq_by_uuid` absent from all 532 source files; all batches 1–7 namespaces confirmed to contain no callers; callers expected in files not yet extracted |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

Note: `privsep/libvirt.py:L150–161` (readpty, CWE-73, needs_cross_file) was evaluated as a potential sink but no partial chain could be formed — no inbound static edges exist because privsep functions are dispatched via oslo.privsep IPC rather than Python imports, a known link-graph blind spot (`.aee/security-chains.json`, `evaluatedFindings`).

---

## UNKNOWN-Language Files (Intake Summary)

None. (`.aee/intake-summary.md`, "UNKNOWN Files — Flagged for Human Review: None")

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).
