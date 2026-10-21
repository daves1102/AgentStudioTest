# src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py

## Overview

This file implements the `test_cross_cell_migrate` module, defining 9 classs, 5 functions, 54 methods, 31 imports, 13 side effects, 2 security surface entries.

Lines: total 1651, code 1334, comment 192, blank 125

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ObjectComparatorMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L48–L67` |
| `ObjectComparatorMixin._compare_objs` | method | (self, obj1, obj2, ignored_keys=None) | private | not declared | 6/15 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L51–L67` |
| `TargetDBSetupTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L70–L379` |
| `TargetDBSetupTaskTestCase.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L72–L83` |
| `TargetDBSetupTaskTestCase._create_instance_data` | method | (self) | private | `inst, migration` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L225) | 4/103 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L85–L225` |
| `TargetDBSetupTaskTestCase.test_execute_and_rollback` | method | (self) | public | not declared | 6/95 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L227–L379` |
| `CrossCellMigrationTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L382–L612` |
| `CrossCellMigrationTaskTestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L384–L400` |
| `CrossCellMigrationTaskTestCase.test_execute_and_rollback` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L402–L435` |
| `CrossCellMigrationTaskTestCase.test_perform_external_api_checks_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L437–L445` |
| `CrossCellMigrationTaskTestCase.test_perform_external_api_checks_old_neutron` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L447–L454` |
| `CrossCellMigrationTaskTestCase.test_rollback_idempotent` | method | (self, mock_log_exception) | public | not declared | 4/14 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L457–L479` |
| `CrossCellMigrationTaskTestCase.test_setup_target_cell_db` | method | (self, mock_target_db_set_task_execute, mock_set_target_cell, mock_get_cell_mapping) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L484–L513` |
| `CrossCellMigrationTaskTestCase.test_prep_resize_at_dest` | method | (self, mock_get_az, mock_task_execute) | public | not declared | 1/37 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L518–L565` |
| `CrossCellMigrationTaskTestCase.test_update_migration_from_dest_after_claim` | method | (self, get_by_uuid) | public | not declared | 1/18 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L568–L589` |
| `CrossCellMigrationTaskTestCase.test_prep_resize_at_source` | method | (self, mock_task_execute) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L592–L599` |
| `CrossCellMigrationTaskTestCase.test_finish_resize_at_dest` | method | (self, mock_task_execute) | public | not declared | 1/10 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L602–L612` |
| `PrepResizeAtDestTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L615–L791` |
| `PrepResizeAtDestTaskTestCase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L617–L631` |
| `PrepResizeAtDestTaskTestCase.test_create_port_bindings` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L633–L641` |
| `PrepResizeAtDestTaskTestCase.test_create_port_bindings_port_binding_failed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L643–L656` |
| `PrepResizeAtDestTaskTestCase.test_create_volume_attachments` | method | (self, mock_bdm_save) | public | not declared | 1/26 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L659–L691` |
| `PrepResizeAtDestTaskTestCase.test_execute` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L693–L721` |
| `PrepResizeAtDestTaskTestCase.test_execute.fake_create_port_bindings` | function | — | public | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L696–L697` |
| `PrepResizeAtDestTaskTestCase.test_execute_messaging_timeout` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L723–L749` |
| `PrepResizeAtDestTaskTestCase.test_rollback` | method | (self, mock_log_exception) | public | not declared | 3/29 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L752–L791` |
| `PrepResizeAtSourceTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L794–L879` |
| `PrepResizeAtSourceTaskTestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L796–L812` |
| `PrepResizeAtSourceTaskTestCase.test_execute_volume_backed` | method | (self, instance_save, create_image) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L816–L837` |
| `PrepResizeAtSourceTaskTestCase.test_execute_image_backed` | method | (self, instance_save, create_image) | public | not declared | 1/20 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L842–L866` |
| `PrepResizeAtSourceTaskTestCase.test_rollback` | method | (self, delete_image) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L869–L879` |
| `FinishResizeAtDestTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L882–L1061` |
| `FinishResizeAtDestTaskTestCase._create_instance` | method | (self, ctxt, create_instance_mapping=False, **updates) | private | `inst` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L926) | 6/22 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L885–L926` |
| `FinishResizeAtDestTaskTestCase.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L928–L958` |
| `FinishResizeAtDestTaskTestCase.test_execute` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L960–L992` |
| `FinishResizeAtDestTaskTestCase.test_finish_snapshot_based_resize_at_dest_fails` | method | (self, mock_im_save) | public | not declared | 1/30 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L995–L1032` |
| `FinishResizeAtDestTaskTestCase.test_copy_latest_fault` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1034–L1048` |
| `FinishResizeAtDestTaskTestCase.test_copy_latest_fault_error` | method | (self, mock_log) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1051–L1061` |
| `UtilityTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1064–L1091` |
| `UtilityTestCase.test_get_inst_and_cell_map_from_source` | method | (self, mock_get_inst, mock_get_by_host) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1071–L1091` |
| `UtilityTestCase.test_get_inst_and_cell_map_from_source.stub_get_by_uuid` | function | (ctxt, *args, **kwargs) | public | `mock.sentinel.instance` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1080) | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1077–L1080` |
| `ConfirmResizeTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1094–L1235` |
| `ConfirmResizeTaskTestCase.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1096–L1111` |
| `ConfirmResizeTaskTestCase.test_execute` | method | (self, mock_get_instance) | public | not declared | 1/26 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1115–L1140` |
| `ConfirmResizeTaskTestCase.test_rollback` | method | (self, mock_set_state_notify, mock_get_reqspec, mock_mig_save, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1149–L1164` |
| `ConfirmResizeTaskTestCase.test_send_resize_confirm_notification` | method | (self, mock_versioned_notify, mock_legacy_notify) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1168–L1179` |
| `ConfirmResizeTaskTestCase.test_cleanup_source_host` | method | (self, mock_action_event, mock_get_mig, mock_action_start) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1184–L1205` |
| `ConfirmResizeTaskTestCase.test_finish_confirm_in_target_cell` | method | (self, mock_drop_ctx, mock_inst_save, mock_mig_save) | public | not declared | 1/14 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1210–L1223` |
| `ConfirmResizeTaskTestCase.test_set_vm_and_task_state_shutdown` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1225–L1229` |
| `ConfirmResizeTaskTestCase.test_set_vm_and_task_state_active` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1231–L1235` |
| `RevertResizeTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1238–L1651` |
| `RevertResizeTaskTestCase.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1240–L1257` |
| `RevertResizeTaskTestCase._generate_source_cell_instance` | method | (self) | private | `source_cell_instance` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1264) | 1/6 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1259–L1264` |
| `RevertResizeTaskTestCase.test_execute` | method | (self, mock_action_event, mock_get_instance) | public | not declared | 1/56 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1269–L1341` |
| `RevertResizeTaskTestCase.test_execute.stub_update_instance_in_source_cell` | function | (*args, **kwargs) | public | `mock.sentinel.source_cell_migration` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1283) | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1279–L1283` |
| `RevertResizeTaskTestCase.test_rollback_target_cell` | method | (self, mock_set_state_notify, mock_get_reqspec, mock_execute) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1347–L1366` |
| `RevertResizeTaskTestCase.test_rollback_source_cell` | method | (self, mock_set_state_notify, mock_get_reqspec, mock_execute) | public | not declared | 1/23 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1372–L1397` |
| `RevertResizeTaskTestCase.test_send_resize_revert_notification` | method | (self, mock_notify_action, mock_notify_usage) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1401–L1413` |
| `RevertResizeTaskTestCase.test_update_instance_in_source_cell` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1415–L1449` |
| `RevertResizeTaskTestCase.test_update_bdms_in_source_cell` | method | (self, mock_clone, mock_get_bdms) | public | not declared | 1/41 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1454–L1515` |
| `RevertResizeTaskTestCase.test_update_bdms_in_source_cell.stub_get_bdms` | function | (ctxt, *args, **kwargs) | public | `source_bdms` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1476); `target_bdms` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1477) | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1474–L1477` |
| `RevertResizeTaskTestCase.test_update_bdms_in_source_cell.stub_mock_clone` | function | (ctxt, obj, *args, **kwargs) | public | `obj` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1482) | — | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1480–L1482` |
| `RevertResizeTaskTestCase.test_delete_orphan_source_cell_bdms_attach_delete_fails` | method | (self, destroy) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1518–L1536` |
| `RevertResizeTaskTestCase.test_update_instance_actions_in_source_cell` | method | (self, mock_event_create, mock_action_create, mock_get_events, mock_get_action) | public | not declared | 1/23 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1542–L1568` |
| `RevertResizeTaskTestCase.test_update_source_obj_from_target_cell` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1570–L1590` |
| `RevertResizeTaskTestCase.test_update_source_obj_from_target_cell_nested_object` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1592–L1601` |
| `RevertResizeTaskTestCase.test_update_migration_in_source_cell` | method | (self, mock_get_migration) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1604–L1619` |
| `RevertResizeTaskTestCase.test_update_instance_mapping` | method | (self, get_inst_map) | public | not declared | 1/25 | `src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1622–L1651` |

## Dependencies

- `import copy` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L14)
- `oslo_messaging`: imports `exceptions as messaging_exceptions` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L18)
- `nova.compute`: imports `instance_actions` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L20)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L21)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L22)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L24)
- `nova.conductor.tasks`: imports `cross_cell_migrate` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L25)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L27)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L29)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L30)
- `nova.objects`: imports `fields` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L31)
- `nova.objects`: imports `instance as instance_obj` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L32)
- `nova`: imports `test` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L33)
- `nova.tests.unit.db.main`: imports `test_api as test_db_api` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L34)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L35)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L36)
- `nova.tests.unit.objects`: imports `test_compute_node` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L37)
- `nova.tests.unit.objects`: imports `test_instance_device_metadata` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L38)
- `nova.tests.unit.objects`: imports `test_instance_numa` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L39)
- `nova.tests.unit.objects`: imports `test_instance_pci_requests` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L40)
- `nova.tests.unit.objects`: imports `test_keypair` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L41)
- `nova.tests.unit.objects`: imports `test_migration` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L42)
- `nova.tests.unit.objects`: imports `test_pci_device` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L43)
- `nova.tests.unit.objects`: imports `test_service` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L44)
- `nova.tests.unit.objects`: imports `test_vcpu_model` (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L45)

## Side Effects

- **network**: @mock.patch('nova.scheduler.utils.set_vm_state_and_notify') (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1148)
- **network**: def test_rollback(self, mock_set_state_notify, mock_get_reqspec, (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1149)
- **network**: mock_set_state_notify.assert_called_once_with( (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1159)
- **network**: def test_send_resize_confirm_notification(self, mock_versioned_notify, (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1168)
- **network**: mock_legacy_notify): (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1169)
- **network**: mock_legacy_notify.assert_called_once_with( (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1173)
- **network**: mock_versioned_notify.assert_called_once_with( (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1176)
- **network**: @mock.patch('nova.scheduler.utils.set_vm_state_and_notify') (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1346)
- **network**: self, mock_set_state_notify, mock_get_reqspec, mock_execute): (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1348)
- **network**: mock_set_state_notify.assert_called_once_with( (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1360)
- **network**: @mock.patch('nova.scheduler.utils.set_vm_state_and_notify') (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1371)
- **network**: self, mock_set_state_notify, mock_get_reqspec, mock_execute): (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1373)
- **network**: mock_set_state_notify.assert_called_once_with( (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1391)

## Security Surface

- **sink** (`db-write`): """Tests the case that we did not update the instance mapping (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1349)
- **sink** (`db-write`): """Tests the case that we did update the instance mapping (src/nova/tests/unit/conductor/tasks/test_cross_cell_migrate.py:L1374)

## Notes

- KB `sideEffects` entries at L1149, L1168 have targets that appear to be code fragments rather than resource paths; documented as recorded.

