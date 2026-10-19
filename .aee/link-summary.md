# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 55 |
| File edges | 212 |
| Cross-component edges | 0 |
| Resolved | 854 |
| Ambiguous | 0 |
| Unresolved | 98 |
| External imports | 196 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 212 file edges are intra-component (within the `nova` component).

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

98 unresolved imports across 12 distinct symbol roots. These are modules not yet extracted; they are expected to resolve in later runs as more of the nova codebase is processed.

| File | Line | Symbol | Reason |
|---|---|---|---|
| src/nova/accelerator/cyborg.py | 49 | nova.scheduler | module-not-found |
| src/nova/objects/aggregate.py | 21 | nova.compute | module-not-found |
| src/nova/objects/aggregate.py | 22 | nova.db.api | module-not-found |
| src/nova/objects/aggregate.py | 23 | nova.db.api | module-not-found |
| src/nova/objects/base.py | 266 | nova | module-not-found |
| src/nova/objects/block_device.py | — | nova.db.main | module-not-found |
| src/nova/objects/build_request.py | — | nova.db.main | module-not-found |
| src/nova/objects/cell_mapping.py | — | nova.db.main | module-not-found |
| src/nova/objects/compute_node.py | — | nova.db.main | module-not-found |
| src/nova/objects/console_auth_token.py | — | nova.db.main | module-not-found |
| src/nova/objects/flavor.py | — | nova.db.main | module-not-found |
| src/nova/objects/host_mapping.py | — | nova.db.main | module-not-found |
| src/nova/objects/instance.py | — | nova.compute | module-not-found |
| src/nova/objects/instance.py | — | nova.db.main | module-not-found |
| src/nova/objects/instance_group.py | — | nova.db.main | module-not-found |
| src/nova/objects/instance_mapping.py | — | nova.db.main | module-not-found |
| src/nova/objects/keypair.py | — | nova.db.main | module-not-found |
| src/nova/objects/migration.py | — | nova.db.main | module-not-found |
| src/nova/objects/pci_device.py | — | nova.db.main | module-not-found |
| src/nova/objects/quotas.py | — | nova.db.main | module-not-found |
| src/nova/objects/request_spec.py | — | nova.db.main | module-not-found |
| src/nova/objects/security_group.py | — | nova.db.main | module-not-found |
| src/nova/objects/service.py | — | nova.db.main | module-not-found |
| src/nova/objects/share_mapping.py | — | nova.db.main | module-not-found |
| src/nova/objects/tag.py | — | nova.db.main | module-not-found |
| src/nova/objects/task_log.py | — | nova.db.main | module-not-found |
| src/nova/objects/virtual_interface.py | — | nova.db.main | module-not-found |
| src/nova/objects/volume_usage.py | — | nova.db.main | module-not-found |
| src/nova/objects/ec2.py | — | nova.db.api | module-not-found |
| src/nova/objects/instance_action.py | — | nova.db.api | module-not-found |
| src/nova/objects/instance_mapping.py | — | nova.db.api | module-not-found |
| src/nova/service_auth.py | — | nova.conf | module-not-found |
| src/nova/utils.py | — | nova.conf | module-not-found |
| src/nova/utils.py | — | nova.virt | module-not-found |
| src/nova/objects/instance.py | — | nova.notifications.objects | module-not-found |
| src/nova/objects/migration.py | — | nova.notifications.objects | module-not-found |
| src/nova/objects/service.py | — | nova.network | module-not-found |
| src/nova/objects/flavor.py | — | nova.scheduler.filters | module-not-found |
| src/nova/objects/share_mapping.py | — | nova.share | module-not-found |

**Summary by unresolved module root** (12 distinct roots):

| Symbol | Refs |
|---|---|
| nova.db.main | 32 |
| nova.db.api | 21 |
| nova | 15 |
| nova.conf | 7 |
| nova.compute | 6 |
| nova.virt | 4 |
| nova.notifications.objects | 4 |
| nova.db | 3 |
| nova.network | 3 |
| nova.scheduler | 1 |
| nova.scheduler.filters | 1 |
| nova.share | 1 |

The `nova.db.*` family (56 refs) is the dominant unresolved group — the database layer (`nova/db/`) has not been extracted yet. These imports are expected to resolve in a subsequent run.

## Ambiguous References

None.

## Warnings

None. All 55 KB records were usable.
