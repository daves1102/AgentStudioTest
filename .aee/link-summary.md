# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 122 |
| File edges | 382 |
| Cross-component edges | 0 |
| Resolved | 1470 |
| Ambiguous | 0 |
| Unresolved | 99 |
| External imports | 348 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 382 file edges are intra-component (within the `nova` component).

## Seams

| Kind | Count |
|---|---|
| http-endpoint | 0 |
| bus-topic | 0 |
| db-table | 0 |
| env-var | 0 |
| executable | 0 |
| native-symbol | 0 |

No cross-component seams found in `src/`. All seam kinds produced no results.

## Unresolved Imports

99 unresolved imports across 9 distinct symbol roots. The `nova.db.*` group that dominated the previous run has now largely resolved (the database layer was extracted in this batch). Remaining unresolved are modules not yet in the KB.

**Summary by unresolved module root:**

| Symbol | Refs |
|---|---|
| nova | 35 |
| nova.conf | 31 |
| nova.compute | 12 |
| nova.virt | 8 |
| nova.network | 4 |
| nova.notifications.objects | 4 |
| nova.context | 2 |
| nova.pci | 2 |
| nova.share | 1 |

Notable resolved in this run (vs previous): `nova.db.main` (was 32 refs), `nova.db.api` (was 21 refs) — both now in the KB. Dominant remaining gaps are `nova.conf` (configuration layer) and `nova.compute` (compute service layer).

**Unresolved entries (selected):**

| File | Line | Symbol | Reason |
|---|---|---|---|
| src/nova/accelerator/cyborg.py | 49 | nova.scheduler | module-not-found |
| src/nova/objects/aggregate.py | 21 | nova.compute | module-not-found |
| src/nova/objects/instance.py | — | nova.notifications.objects | module-not-found |
| src/nova/objects/service.py | — | nova.network | module-not-found |
| src/nova/service_auth.py | — | nova.conf | module-not-found |
| src/nova/utils.py | — | nova.conf | module-not-found |
| src/nova/utils.py | — | nova.virt | module-not-found |
| src/nova/objects/share_mapping.py | — | nova.share | module-not-found |
| src/nova/db/main/api.py | — | nova | module-not-found |
| src/nova/db/main/api.py | — | nova.conf | module-not-found |
| src/nova/db/api/api.py | — | nova.context | module-not-found |
| src/nova/objects/pci_device.py | — | nova.pci | module-not-found |

These are expected to resolve when `nova/conf/`, `nova/compute/`, `nova/virt/`, and related sub-packages are extracted in a subsequent run.

## Ambiguous References

None.

## Warnings

None. All 122 KB records were usable.
