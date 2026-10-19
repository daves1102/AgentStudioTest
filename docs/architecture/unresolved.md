# Unresolved Items Index

_Batch: `733c737267c89a04a0ad54b304c4e167bd16c887` — 2026-10-19_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table) and `.aee/link-graph.json` (`unresolved` and `ambiguous` arrays).

### Unresolved References (98 total)

| File | Line | Symbol | Reason |
|------|------|--------|--------|
| `src/nova/accelerator/cyborg.py` | 49 | `nova.scheduler` | module-not-found |
| `src/nova/objects/aggregate.py` | 21 | `nova.compute` | module-not-found |
| `src/nova/objects/aggregate.py` | 22 | `nova.db.api` | module-not-found |
| `src/nova/objects/aggregate.py` | 23 | `nova.db.api` | module-not-found |
| `src/nova/objects/base.py` | 266 | `nova` | module-not-found |
| `src/nova/objects/block_device.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/build_request.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/cell_mapping.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/compute_node.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/console_auth_token.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/flavor.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/host_mapping.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/instance.py` | — | `nova.compute` | module-not-found |
| `src/nova/objects/instance.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/instance_group.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/instance_mapping.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/keypair.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/migration.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/pci_device.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/quotas.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/request_spec.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/security_group.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/service.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/share_mapping.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/tag.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/task_log.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/virtual_interface.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/volume_usage.py` | — | `nova.db.main` | module-not-found |
| `src/nova/objects/ec2.py` | — | `nova.db.api` | module-not-found |
| `src/nova/objects/instance_action.py` | — | `nova.db.api` | module-not-found |
| `src/nova/objects/instance_mapping.py` | — | `nova.db.api` | module-not-found |
| `src/nova/service_auth.py` | — | `nova.conf` | module-not-found |
| `src/nova/utils.py` | — | `nova.conf` | module-not-found |
| `src/nova/utils.py` | — | `nova.virt` | module-not-found |
| `src/nova/objects/instance.py` | — | `nova.notifications.objects` | module-not-found |
| `src/nova/objects/migration.py` | — | `nova.notifications.objects` | module-not-found |
| `src/nova/objects/service.py` | — | `nova.network` | module-not-found |
| `src/nova/objects/flavor.py` | — | `nova.scheduler.filters` | module-not-found |
| `src/nova/objects/share_mapping.py` | — | `nova.share` | module-not-found |
| _(additional refs to same roots — 59 further entries)_ | — | see summary below | module-not-found |

**Summary by unresolved module root** (Link Summary `.aee/link-summary.md`):

| Symbol root | Refs |
|-------------|------|
| `nova.db.main` | 32 |
| `nova.db.api` | 21 |
| `nova` | 15 |
| `nova.conf` | 7 |
| `nova.compute` | 6 |
| `nova.virt` | 4 |
| `nova.notifications.objects` | 4 |
| `nova.db` | 3 |
| `nova.network` | 3 |
| `nova.scheduler` | 1 |
| `nova.scheduler.filters` | 1 |
| `nova.share` | 1 |
| **Total** | **98** |

### Ambiguous References

None. (`.aee/link-graph.json`, `ambiguous: []`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no file in the 55-file source set has an edge pointing TO `cyborg.py`; callers of `_CyborgClient.get_arq_by_uuid` remain outside the source set |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

---

## UNKNOWN-Language Files (Intake Summary)

None. (`.aee/intake-summary.md`, "UNKNOWN Files — Flagged for Human Review: None")

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "warning"` or `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 1     |
| info     | 1     |

The one open warning: `docs/src/nova/accelerator/cyborg.py.md` overview paragraph missing citation for lazy-adapter claim; should cite `src/nova/accelerator/cyborg.py:L121–L134` (Verification Report `.aee/verification-report.json`, item 1).
