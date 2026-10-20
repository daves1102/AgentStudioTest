# src/nova/conductor/tasks/cross_cell_migrate.py

## Overview

This file implements the `cross_cell_migrate` module, defining 7 classs, 2 constants, 2 functions, 46 methods, 1 staticmethod, 23 imports, 2 side effects, 9 security surface entries.

Lines: total 1471, code 987, comment 305, blank 179

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L39–L39` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L40–L40` |
| `clone_creatable_object` | function | (ctxt, obj, delete_fields=None) | exported | `new_obj` (src/nova/conductor/tasks/cross_cell_migrate.py:L71) | 6/14 | `src/nova/conductor/tasks/cross_cell_migrate.py:L43–L71` |
| `TargetDBSetupTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L74–L215` |
| `TargetDBSetupTask.__init__` | method | (self, context, instance, source_migration, target_cell_context) | public | not declared | 1/6 | `src/nova/conductor/tasks/cross_cell_migrate.py:L81–L95` |
| `TargetDBSetupTask._copy_migrations` | method | (self, migrations) | private | `target_cell_migration` (src/nova/conductor/tasks/cross_cell_migrate.py:L111) | 3/8 | `src/nova/conductor/tasks/cross_cell_migrate.py:L97–L111` |
| `TargetDBSetupTask._execute` | method | (self) | private | `inst, target_cell_migration` (src/nova/conductor/tasks/cross_cell_migrate.py:L202) | 8/39 | `src/nova/conductor/tasks/cross_cell_migrate.py:L113–L202` |
| `TargetDBSetupTask.rollback` | method | (self, ex) | public | not declared | 2/6 | `src/nova/conductor/tasks/cross_cell_migrate.py:L204–L215` |
| `PrepResizeAtDestTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L218–L379` |
| `PrepResizeAtDestTask.__init__` | method | (self, context, instance, flavor, target_migration, request_spec, compute_rpcapi, host_selection, network_api, volume_api) | public | not declared | 1/13 | `src/nova/conductor/tasks/cross_cell_migrate.py:L227–L257` |
| `PrepResizeAtDestTask._create_port_bindings` | method | (self) | private | not declared | 2/10 | `src/nova/conductor/tasks/cross_cell_migrate.py:L259–L276` |
| `PrepResizeAtDestTask._create_volume_attachments` | method | (self) | private | `volume_bdms` (src/nova/conductor/tasks/cross_cell_migrate.py:L309) | 4/12 | `src/nova/conductor/tasks/cross_cell_migrate.py:L278–L309` |
| `PrepResizeAtDestTask._execute` | method | (self) | private | `self.compute_rpcapi.prep_snapshot_based_resize_at_dest( self.context, self.instance, self.flavor, self.host_selection.nodename, self.target_migration, self.host_selection.limits, self.request_spec, de` (src/nova/conductor/tasks/cross_cell_migrate.py:L345) | 2/17 | `src/nova/conductor/tasks/cross_cell_migrate.py:L311–L352` |
| `PrepResizeAtDestTask.rollback` | method | (self, ex) | public | not declared | 5/20 | `src/nova/conductor/tasks/cross_cell_migrate.py:L354–L379` |
| `PrepResizeAtSourceTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L382–L467` |
| `PrepResizeAtSourceTask.__init__` | method | (self, context, instance, flavor, migration, request_spec, compute_rpcapi, image_api) | public | not declared | 1/11 | `src/nova/conductor/tasks/cross_cell_migrate.py:L400–L421` |
| `PrepResizeAtSourceTask._execute` | method | (self) | private | `self._image_id` (src/nova/conductor/tasks/cross_cell_migrate.py:L450) | 2/17 | `src/nova/conductor/tasks/cross_cell_migrate.py:L423–L450` |
| `PrepResizeAtSourceTask.rollback` | method | (self, ex) | public | not declared | 2/7 | `src/nova/conductor/tasks/cross_cell_migrate.py:L452–L467` |
| `FinishResizeAtDestTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L470–L610` |
| `FinishResizeAtDestTask.__init__` | method | (self, context, instance, migration, source_cell_instance, compute_rpcapi, target_cell_mapping, snapshot_id, request_spec) | public | not declared | 1/10 | `src/nova/conductor/tasks/cross_cell_migrate.py:L485–L506` |
| `FinishResizeAtDestTask._finish_snapshot_based_resize_at_dest` | method | (self) | private | not declared | 2/21 | `src/nova/conductor/tasks/cross_cell_migrate.py:L508–L547` |
| `FinishResizeAtDestTask._copy_latest_fault` | method | (self, source_cell_context) | private | not declared | 3/12 | `src/nova/conductor/tasks/cross_cell_migrate.py:L549–L566` |
| `FinishResizeAtDestTask._update_instance_mapping` | method | (self) | private | not declared | 1/12 | `src/nova/conductor/tasks/cross_cell_migrate.py:L568–L600` |
| `FinishResizeAtDestTask._execute` | method | (self) | private | not declared | 1/3 | `src/nova/conductor/tasks/cross_cell_migrate.py:L602–L606` |
| `FinishResizeAtDestTask.rollback` | method | (self, ex) | public | not declared | 1/2 | `src/nova/conductor/tasks/cross_cell_migrate.py:L608–L610` |
| `CrossCellMigrationTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L613–L868` |
| `CrossCellMigrationTask.__init__` | method | (self, context, instance, flavor, request_spec, source_migration, compute_rpcapi, host_selection, alternate_hosts) | public | not declared | 1/16 | `src/nova/conductor/tasks/cross_cell_migrate.py:L616–L655` |
| `CrossCellMigrationTask._get_target_cell_mapping` | method | (self) | private | `objects.CellMapping.get_by_uuid( self.context, self.host_selection.cell_uuid)` (src/nova/conductor/tasks/cross_cell_migrate.py:L666) | 1/3 | `src/nova/conductor/tasks/cross_cell_migrate.py:L657–L667` |
| `CrossCellMigrationTask._setup_target_cell_db` | method | (self) | private | `target_cell_migration, target_cell_mapping` (src/nova/conductor/tasks/cross_cell_migrate.py:L693) | 1/13 | `src/nova/conductor/tasks/cross_cell_migrate.py:L669–L693` |
| `CrossCellMigrationTask._perform_external_api_checks` | method | (self) | private | not declared | 2/7 | `src/nova/conductor/tasks/cross_cell_migrate.py:L695–L709` |
| `CrossCellMigrationTask._prep_resize_at_dest` | method | (self, target_cell_migration) | private | `self._update_migration_from_dest_after_claim( target_cell_migration)` (src/nova/conductor/tasks/cross_cell_migrate.py:L760) | 1/20 | `src/nova/conductor/tasks/cross_cell_migrate.py:L711–L761` |
| `CrossCellMigrationTask._update_migration_from_dest_after_claim` | method | (self, target_cell_migration) | private | `target_cell_migration` (src/nova/conductor/tasks/cross_cell_migrate.py:L786) | 1/8 | `src/nova/conductor/tasks/cross_cell_migrate.py:L763–L786` |
| `CrossCellMigrationTask._prep_resize_at_source` | method | (self) | private | `snapshot_id` (src/nova/conductor/tasks/cross_cell_migrate.py:L801) | 1/9 | `src/nova/conductor/tasks/cross_cell_migrate.py:L788–L801` |
| `CrossCellMigrationTask._finish_resize_at_dest` | method | (self, target_cell_migration, target_cell_mapping, snapshot_id) | private | not declared | 1/8 | `src/nova/conductor/tasks/cross_cell_migrate.py:L803–L817` |
| `CrossCellMigrationTask._execute` | method | (self) | private | not declared | 1/11 | `src/nova/conductor/tasks/cross_cell_migrate.py:L819–L853` |
| `CrossCellMigrationTask.rollback` | method | (self, ex) | public | not declared | 3/6 | `src/nova/conductor/tasks/cross_cell_migrate.py:L855–L868` |
| `get_inst_and_cell_map_from_source` | function | (target_cell_context, source_compute, instance_uuid) | exported | `instance, source_cell_mapping` (src/nova/conductor/tasks/cross_cell_migrate.py:L899) | 1/11 | `src/nova/conductor/tasks/cross_cell_migrate.py:L871–L899` |
| `ConfirmResizeTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L902–L1078` |
| `ConfirmResizeTask.__init__` | method | (self, context, instance, migration, legacy_notifier, compute_rpcapi) | public | not declared | 1/6 | `src/nova/conductor/tasks/cross_cell_migrate.py:L916–L932` |
| `ConfirmResizeTask._send_resize_confirm_notification` | method | (self, instance, phase) | private | not declared | 1/8 | `src/nova/conductor/tasks/cross_cell_migrate.py:L934–L950` |
| `ConfirmResizeTask._cleanup_source_host` | method | (self, source_instance) | private | not declared | 1/15 | `src/nova/conductor/tasks/cross_cell_migrate.py:L952–L983` |
| `ConfirmResizeTask._finish_confirm_in_target_cell` | method | (self) | private | not declared | 1/12 | `src/nova/conductor/tasks/cross_cell_migrate.py:L985–L1008` |
| `ConfirmResizeTask._set_vm_and_task_state` | method | (self) | private | not declared | 2/11 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1010–L1030` |
| `ConfirmResizeTask._execute` | method | (self) | private | not declared | 1/13 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1032–L1055` |
| `ConfirmResizeTask.rollback` | method | (self, ex) | public | not declared | 1/19 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1057–L1078` |
| `RevertResizeTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L1081–L1471` |
| `RevertResizeTask.__init__` | method | (self, context, instance, migration, legacy_notifier, compute_rpcapi) | public | not declared | 1/9 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1093–L1115` |
| `RevertResizeTask._send_resize_revert_notification` | method | (self, instance, phase) | private | not declared | 1/8 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1117–L1133` |
| `RevertResizeTask._update_source_obj_from_target_cell` | method | (source_obj, target_obj) | private | not declared | 5/9 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1136–L1167` |
| `RevertResizeTask._update_bdms_in_source_cell` | method | (self, source_cell_context) | private | not declared | 4/24 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1169–L1216` |
| `RevertResizeTask._delete_orphan_source_cell_bdms` | method | (self, source_cell_bdms) | private | not declared | 3/16 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1218–L1243` |
| `RevertResizeTask._update_instance_actions_in_source_cell` | method | (self, source_cell_context) | private | not declared | 2/10 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1245–L1273` |
| `RevertResizeTask._update_migration_in_source_cell` | method | (self, source_cell_context) | private | `source_cell_migration` (src/nova/conductor/tasks/cross_cell_migrate.py:L1293) | 1/7 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1275–L1293` |
| `RevertResizeTask._update_instance_in_source_cell` | method | (self, instance) | private | `source_cell_migration` (src/nova/conductor/tasks/cross_cell_migrate.py:L1327) | 1/14 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1295–L1327` |
| `RevertResizeTask._update_instance_mapping` | method | (self, source_cell_instance, source_cell_mapping) | private | not declared | 1/13 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1329–L1362` |
| `RevertResizeTask._execute` | method | (self) | private | not declared | 1/36 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1364–L1436` |
| `RevertResizeTask.rollback` | method | (self, ex) | public | not declared | 4/22 | `src/nova/conductor/tasks/cross_cell_migrate.py:L1438–L1471` |
| `RevertResizeTask._update_source_obj_from_target_cell` | staticmethod | — | private | not declared | — | `src/nova/conductor/tasks/cross_cell_migrate.py:L1135–L1167` |

## Dependencies

- `import collections` (src/nova/conductor/tasks/cross_cell_migrate.py:L13)
- `import copy` (src/nova/conductor/tasks/cross_cell_migrate.py:L14)
- `oslo_log`: imports `log as logging` (src/nova/conductor/tasks/cross_cell_migrate.py:L16)
- `import oslo_messaging as messaging` (src/nova/conductor/tasks/cross_cell_migrate.py:L17)
- `oslo_utils`: imports `excutils` (src/nova/conductor/tasks/cross_cell_migrate.py:L18)
- `nova`: imports `availability_zones` (src/nova/conductor/tasks/cross_cell_migrate.py:L20)
- `nova.compute`: imports `instance_actions` (src/nova/conductor/tasks/cross_cell_migrate.py:L21)
- `nova.compute`: imports `power_state` (src/nova/conductor/tasks/cross_cell_migrate.py:L22)
- `nova.compute`: imports `task_states` (src/nova/conductor/tasks/cross_cell_migrate.py:L23)
- `nova.compute`: imports `utils as compute_utils` (src/nova/conductor/tasks/cross_cell_migrate.py:L24)
- `nova.compute`: imports `vm_states` (src/nova/conductor/tasks/cross_cell_migrate.py:L25)
- `nova.conductor.tasks`: imports `base` (src/nova/conductor/tasks/cross_cell_migrate.py:L26)
- `nova`: imports `conf` (src/nova/conductor/tasks/cross_cell_migrate.py:L27)
- `nova`: imports `context as nova_context` (src/nova/conductor/tasks/cross_cell_migrate.py:L28)
- `nova`: imports `exception` (src/nova/conductor/tasks/cross_cell_migrate.py:L29)
- `nova.i18n`: imports `_` (src/nova/conductor/tasks/cross_cell_migrate.py:L30)
- `nova.image`: imports `glance` (src/nova/conductor/tasks/cross_cell_migrate.py:L31)
- `nova.network`: imports `constants as neutron_constants` (src/nova/conductor/tasks/cross_cell_migrate.py:L32)
- `nova.network`: imports `neutron` (src/nova/conductor/tasks/cross_cell_migrate.py:L33)
- `nova`: imports `objects` (src/nova/conductor/tasks/cross_cell_migrate.py:L34)
- `nova.objects`: imports `fields` (src/nova/conductor/tasks/cross_cell_migrate.py:L35)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/conductor/tasks/cross_cell_migrate.py:L36)
- `nova.volume`: imports `cinder` (src/nova/conductor/tasks/cross_cell_migrate.py:L37)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/conductor/tasks/cross_cell_migrate.py:L39)
- **global-mutation**: CONF = conf.CONF (src/nova/conductor/tasks/cross_cell_migrate.py:L40)

## Security Surface

- **sink** (`db-write`): :param delete_fields: list of fields to delete from the new object; (src/nova/conductor/tasks/cross_cell_migrate.py:L51)
- **sink** (`db-write`): compute service, this method will update the source cell instance (src/nova/conductor/tasks/cross_cell_migrate.py:L512)
- **sink** (`db-write`): """Update the source cell migration record with target cell info. (src/nova/conductor/tasks/cross_cell_migrate.py:L764)
- **sink** (`db-write`): update the status of the instance in the target cell. (src/nova/conductor/tasks/cross_cell_migrate.py:L909)
- **sink** (`db-write`): not change during an update. The ``updated_at`` field is also skipped (src/nova/conductor/tasks/cross_cell_migrate.py:L1145)
- **sink** (`db-write`): because saving changes to ``source_obj`` will automatically update the (src/nova/conductor/tasks/cross_cell_migrate.py:L1146)
- **sink** (`db-write`): """Update BlockDeviceMappings in the source cell database. (src/nova/conductor/tasks/cross_cell_migrate.py:L1170)
- **sink** (`db-write`): """Update instance action records in the source cell database (src/nova/conductor/tasks/cross_cell_migrate.py:L1246)
- **sink** (`db-write`): """Update the migration record in the source cell database. (src/nova/conductor/tasks/cross_cell_migrate.py:L1276)

