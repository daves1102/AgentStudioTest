# src/nova/tests/functional/test_cross_cell_migrate.py

## Overview

This file implements the `test_cross_cell_migrate` module, defining 2 classs, 2 constants, 2 fields, 1 function, 37 methods, 20 imports, 2 side effects.

Lines: total 1205, code 800, comment 279, blank 126

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L36–L36` |
| `HostNameWeigher` | class | — | exported | not declared | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L39–L49` |
| `HostNameWeigher._weights` | field | — | private | not declared | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L45–L45` |
| `HostNameWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `self._weights.get(host_state.host, 0)` (src/nova/tests/functional/test_cross_cell_migrate.py:L49) | 1/2 | `src/nova/tests/functional/test_cross_cell_migrate.py:L47–L49` |
| `TestMultiCellMigrate` | class | — | exported | not declared | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L52–L1205` |
| `TestMultiCellMigrate.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L55–L55` |
| `TestMultiCellMigrate.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L56–L56` |
| `TestMultiCellMigrate.setUp` | method | (self) | public | not declared | 2/24 | `src/nova/tests/functional/test_cross_cell_migrate.py:L58–L92` |
| `TestMultiCellMigrate._enable_cross_cell_resize` | method | (self) | private | not declared | 1/5 | `src/nova/tests/functional/test_cross_cell_migrate.py:L94–L101` |
| `TestMultiCellMigrate.assertFlavorMatchesAllocation` | method | (self, flavor, allocation, volume_backed=False) | public | not declared | 2/8 | `src/nova/tests/functional/test_cross_cell_migrate.py:L103–L111` |
| `TestMultiCellMigrate.assert_instance_fields_match_flavor` | method | (self, instance, flavor) | public | not declared | 1/6 | `src/nova/tests/functional/test_cross_cell_migrate.py:L113–L118` |
| `TestMultiCellMigrate._count_volume_attachments` | method | (self, server_id) | private | `len(attachment_ids)` (src/nova/tests/functional/test_cross_cell_migrate.py:L122) | 1/3 | `src/nova/tests/functional/test_cross_cell_migrate.py:L120–L122` |
| `TestMultiCellMigrate.assert_quota_usage` | method | (self, expected_num_instances) | public | not declared | 1/3 | `src/nova/tests/functional/test_cross_cell_migrate.py:L124–L126` |
| `TestMultiCellMigrate._create_server` | method | (self, flavor, volume_backed=False, group_id=None, no_networking=False) | private | `server` (src/nova/tests/functional/test_cross_cell_migrate.py:L175) | 5/31 | `src/nova/tests/functional/test_cross_cell_migrate.py:L128–L175` |
| `TestMultiCellMigrate.stub_image_create` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_cross_cell_migrate.py:L177–L189` |
| `TestMultiCellMigrate.stub_image_create.image_create_snooper` | function | (*args, **kwargs) | public | `image` (src/nova/tests/functional/test_cross_cell_migrate.py:L184) | — | `src/nova/tests/functional/test_cross_cell_migrate.py:L181–L184` |
| `TestMultiCellMigrate._resize_and_validate` | method | (self, volume_backed=False, stopped=False, target_host=None, server=None) | private | `server, source_rp_uuid, target_rp_uuid, old_flavor, new_flavor` (src/nova/tests/functional/test_cross_cell_migrate.py:L414) | 16/130 | `src/nova/tests/functional/test_cross_cell_migrate.py:L191–L414` |
| `TestMultiCellMigrate._attach_volume_to_server` | method | (self, server_id, volume_id) | private | not declared | 1/6 | `src/nova/tests/functional/test_cross_cell_migrate.py:L416–L424` |
| `TestMultiCellMigrate._detach_volume_from_server` | method | (self, server_id, volume_id) | private | not declared | 1/5 | `src/nova/tests/functional/test_cross_cell_migrate.py:L426–L433` |
| `TestMultiCellMigrate.assert_volume_is_attached` | method | (self, server_id, volume_id) | public | not declared | 2/6 | `src/nova/tests/functional/test_cross_cell_migrate.py:L435–L441` |
| `TestMultiCellMigrate.assert_volume_is_detached` | method | (self, server_id, volume_id) | public | not declared | 2/6 | `src/nova/tests/functional/test_cross_cell_migrate.py:L443–L449` |
| `TestMultiCellMigrate.assert_resize_confirm_notifications` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_cross_cell_migrate.py:L451–L462` |
| `TestMultiCellMigrate.delete_server_and_assert_cleanup` | method | (self, server, assert_confirmed_migration=False) | public | not declared | 4/23 | `src/nova/tests/functional/test_cross_cell_migrate.py:L464–L510` |
| `TestMultiCellMigrate.assert_resize_confirm_actions` | method | (self, server) | public | not declared | 4/16 | `src/nova/tests/functional/test_cross_cell_migrate.py:L512–L527` |
| `TestMultiCellMigrate.test_resize_confirm_image_backed` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_cross_cell_migrate.py:L529–L562` |
| `TestMultiCellMigrate._assert_confirm` | method | (self, server, source_rp_uuid, target_rp_uuid, new_flavor) | private | not declared | 2/38 | `src/nova/tests/functional/test_cross_cell_migrate.py:L564–L617` |
| `TestMultiCellMigrate._archive_cell_dbs` | method | (self) | private | not declared | 2/10 | `src/nova/tests/functional/test_cross_cell_migrate.py:L619–L629` |
| `TestMultiCellMigrate.assert_resize_revert_notifications` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_cross_cell_migrate.py:L631–L645` |
| `TestMultiCellMigrate.assert_resize_revert_actions` | method | (self, server, source_host, dest_host) | public | not declared | 3/28 | `src/nova/tests/functional/test_cross_cell_migrate.py:L647–L691` |
| `TestMultiCellMigrate.test_resize_revert_volume_backed` | method | (self) | public | not declared | 1/49 | `src/nova/tests/functional/test_cross_cell_migrate.py:L693–L778` |
| `TestMultiCellMigrate.test_resize_revert_detach_volume_while_resized` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_cross_cell_migrate.py:L780–L805` |
| `TestMultiCellMigrate.test_delete_while_in_verify_resize_status` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_cross_cell_migrate.py:L807–L814` |
| `TestMultiCellMigrate.test_cold_migrate_target_host_in_other_cell` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_cross_cell_migrate.py:L816–L826` |
| `TestMultiCellMigrate.test_cold_migrate_cross_cell_weigher_stays_in_source_cell` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_cross_cell_migrate.py:L828–L844` |
| `TestMultiCellMigrate.test_resize_cross_cell_weigher_filtered_to_target_cell_by_spec` | method | (self) | public | not declared | 2/31 | `src/nova/tests/functional/test_cross_cell_migrate.py:L846–L889` |
| `TestMultiCellMigrate.test_anti_affinity_group` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_cross_cell_migrate.py:L897–L964` |
| `TestMultiCellMigrate.test_poll_unconfirmed_resizes_with_upcall` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_cross_cell_migrate.py:L970–L998` |
| `TestMultiCellMigrate.test_poll_unconfirmed_resizes_with_no_upcall` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1004–L1037` |
| `TestMultiCellMigrate.test_resize_confirm_from_stopped` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1043–L1060` |
| `TestMultiCellMigrate.test_resize_revert_from_stopped` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1062–L1081` |
| `TestMultiCellMigrate.test_finish_snapshot_based_resize_at_dest_spawn_fails` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1083–L1134` |
| `TestMultiCellMigrate._assert_instance_not_in_cell` | method | (self, cell_name, server_id) | private | not declared | 1/7 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1136–L1142` |
| `TestMultiCellMigrate._assert_allocation_revert_on_fail` | method | (self, server) | private | not declared | 2/13 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1144–L1160` |
| `TestMultiCellMigrate.test_prep_snapshot_based_resize_at_source_destroy_fails` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_cross_cell_migrate.py:L1162–L1205` |

## Dependencies

- `import datetime` (src/nova/tests/functional/test_cross_cell_migrate.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/test_cross_cell_migrate.py:L14)
- `oslo_db`: imports `exception as oslo_db_exc` (src/nova/tests/functional/test_cross_cell_migrate.py:L16)
- `oslo_utils`: imports `fixture as osloutils_fixture` (src/nova/tests/functional/test_cross_cell_migrate.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_cross_cell_migrate.py:L18)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/test_cross_cell_migrate.py:L19)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_cross_cell_migrate.py:L21)
- `nova`: imports `conf` (src/nova/tests/functional/test_cross_cell_migrate.py:L22)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/test_cross_cell_migrate.py:L23)
- `nova.db.main`: imports `api as db_api` (src/nova/tests/functional/test_cross_cell_migrate.py:L24)
- `nova`: imports `exception` (src/nova/tests/functional/test_cross_cell_migrate.py:L25)
- `nova`: imports `objects` (src/nova/tests/functional/test_cross_cell_migrate.py:L26)
- `nova.policies`: imports `base as base_policies` (src/nova/tests/functional/test_cross_cell_migrate.py:L27)
- `nova.policies`: imports `servers as servers_policies` (src/nova/tests/functional/test_cross_cell_migrate.py:L28)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/functional/test_cross_cell_migrate.py:L29)
- `nova.scheduler`: imports `weights` (src/nova/tests/functional/test_cross_cell_migrate.py:L30)
- `nova`: imports `test` (src/nova/tests/functional/test_cross_cell_migrate.py:L31)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_cross_cell_migrate.py:L32)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_cross_cell_migrate.py:L33)
- `nova`: imports `utils` (src/nova/tests/functional/test_cross_cell_migrate.py:L34)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/test_cross_cell_migrate.py:L36)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_cross_cell_migrate.py:L55)

