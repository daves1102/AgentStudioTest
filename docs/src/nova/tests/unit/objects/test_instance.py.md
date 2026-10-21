# src/nova/tests/unit/objects/test_instance.py

## Overview

This file implements the `test_instance` module, defining 8 classs, 5 functions, 136 methods, 1 property, 33 imports, 4 security surface entries.

Lines: total 2430, code 1997, comment 129, blank 304

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestInstanceObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L52–L1641` |
| `_TestInstanceObject.fake_instance` | method | (self) | public | `db_inst` (src/nova/tests/unit/objects/test_instance.py:L84) | 1/29 | `src/nova/tests/unit/objects/test_instance.py:L54–L84` |
| `_TestInstanceObject.test_datetime_deserialization` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_instance.py:L86–L102` |
| `_TestInstanceObject.test_ip_deserialization` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_instance.py:L104–L122` |
| `_TestInstanceObject.test_get_without_expected` | method | (self, mock_get) | public | not declared | 2/8 | `src/nova/tests/unit/objects/test_instance.py:L125–L134` |
| `_TestInstanceObject.test_get_with_expected` | method | (self, mock_get, mock_fault_get, mock_extra_get) | public | not declared | 4/79 | `src/nova/tests/unit/objects/test_instance.py:L139–L222` |
| `_TestInstanceObject.test_lazy_load_services_on_deleted_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance.py:L224–L229` |
| `_TestInstanceObject.test_lazy_load_tags_on_deleted_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance.py:L231–L236` |
| `_TestInstanceObject.test_lazy_load_generic_on_deleted_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L238–L252` |
| `_TestInstanceObject.test_lazy_load_flavor_on_deleted_instance` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance.py:L254–L270` |
| `_TestInstanceObject.test_lazy_load_tags` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L272–L281` |
| `_TestInstanceObject.test_save_does_not_log_exception_after_tags_loaded` | method | (self, mock_log) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L284–L300` |
| `_TestInstanceObject.test_save_updates_host_not_compute_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L302–L315` |
| `_TestInstanceObject.test_save_updates_host_not_compute_id_compat` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance.py:L320–L338` |
| `_TestInstanceObject.test_create_with_host_not_compute_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L340–L350` |
| `_TestInstanceObject.test_create_with_host_not_compute_id_compat` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance.py:L355–L371` |
| `_TestInstanceObject.test_get_by_id` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L374–L380` |
| `_TestInstanceObject.test_load` | method | (self, mock_get) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_instance.py:L383–L403` |
| `_TestInstanceObject.test_load_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance.py:L405–L408` |
| `_TestInstanceObject.test_create_and_load_keypairs_from_extra` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L410–L420` |
| `_TestInstanceObject.test_lazy_load_keypairs_from_extra` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L422–L433` |
| `_TestInstanceObject.test_lazy_load_flavor_from_extra` | method | (self, mock_get) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_instance.py:L436–L456` |
| `_TestInstanceObject.test_get_remote` | method | (self, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance.py:L459–L474` |
| `_TestInstanceObject.test_refresh` | method | (self, mock_get, mock_refresh) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_instance.py:L478–L496` |
| `_TestInstanceObject.test_refresh_does_not_recurse` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L499–L509` |
| `_TestInstanceObject._save_test_helper` | method | (self, save_kwargs, mock_db_instance_get_by_uuid, mock_db_instance_update_and_get_original, mock_db_instance_info_cache_update, mock_notifications_send_update) | private | not declared | 7/51 | `src/nova/tests/unit/objects/test_instance.py:L515–L570` |
| `_TestInstanceObject.test_save` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance.py:L572–L573` |
| `_TestInstanceObject.test_save_exp_vm_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance.py:L575–L576` |
| `_TestInstanceObject.test_save_exp_task_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance.py:L578–L579` |
| `_TestInstanceObject.test_save_rename_sends_notification` | method | (self, mock_send, mock_get, mock_update_and_get) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_instance.py:L584–L608` |
| `_TestInstanceObject.test_save_object_pci_requests` | method | (self, mock_instance_extra_update) | public | not declared | 1/29 | `src/nova/tests/unit/objects/test_instance.py:L611–L640` |
| `_TestInstanceObject.test_save_does_not_refresh_pci_devices` | method | (self, mock_fdo, mock_update) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L644–L656` |
| `_TestInstanceObject.test_save_updates_numa_topology` | method | (self, mock_fdo, mock_update, mock_extra_update) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_instance.py:L661–L694` |
| `_TestInstanceObject.test_save_vcpu_model` | method | (self, mock_update) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_instance.py:L697–L714` |
| `_TestInstanceObject.test_save_migration_context_model` | method | (self, mock_update) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_instance.py:L717–L736` |
| `_TestInstanceObject.test_save_flavor_skips_unchanged_flavors` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L738–L745` |
| `_TestInstanceObject.test_save_multiple_extras_updates_once` | method | (self, mock_update) | public | not declared | 1/23 | `src/nova/tests/unit/objects/test_instance.py:L748–L777` |
| `_TestInstanceObject.test_get_deleted` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L780–L789` |
| `_TestInstanceObject.test_get_not_cleaned` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L792–L801` |
| `_TestInstanceObject.test_get_cleaned` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L804–L813` |
| `_TestInstanceObject.test_with_info_cache` | method | (self, mock_get, mock_upd_cache, mock_upd_and_get) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_instance.py:L818–L844` |
| `_TestInstanceObject.test_with_info_cache_none` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L847–L856` |
| `_TestInstanceObject.test_get_network_info_with_cache` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L858–L865` |
| `_TestInstanceObject.test_get_network_info_without_cache` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance.py:L867–L871` |
| `_TestInstanceObject.test_with_security_groups` | method | (self, mock_get, mock_upd_and_get, mock_upd_secgrp) | public | not declared | 1/25 | `src/nova/tests/unit/objects/test_instance.py:L876–L904` |
| `_TestInstanceObject.test_with_empty_security_groups` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L907–L915` |
| `_TestInstanceObject.test_with_empty_pci_devices` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L918–L927` |
| `_TestInstanceObject.test_with_pci_devices` | method | (self, mock_get) | public | not declared | 1/52 | `src/nova/tests/unit/objects/test_instance.py:L930–L982` |
| `_TestInstanceObject.test_with_fault` | method | (self, mock_get, mock_fault_get) | public | not declared | 2/13 | `src/nova/tests/unit/objects/test_instance.py:L986–L1001` |
| `_TestInstanceObject.test_with_ec2_ids` | method | (self, mock_get, mock_ec2) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L1005–L1016` |
| `_TestInstanceObject.test_with_image_meta` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L1019–L1031` |
| `_TestInstanceObject.test_iteritems_with_extra_attrs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L1033–L1038` |
| `_TestInstanceObject._test_metadata_change_tracking` | method | (self, which) | private | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L1040–L1047` |
| `_TestInstanceObject.test_create_skip_scheduled_at` | method | (self, mock_create) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_instance.py:L1050–L1074` |
| `_TestInstanceObject.test_metadata_change_tracking` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance.py:L1076–L1077` |
| `_TestInstanceObject.test_system_metadata_change_tracking` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance.py:L1079–L1080` |
| `_TestInstanceObject.test_create_stubbed` | method | (self, mock_create) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_instance.py:L1083–L1105` |
| `_TestInstanceObject.test_create` | method | (self, mock_create) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_instance.py:L1108–L1125` |
| `_TestInstanceObject.test_create_with_values` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L1127–L1135` |
| `_TestInstanceObject.test_create_deleted` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L1137–L1142` |
| `_TestInstanceObject.test_create_with_extras` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/objects/test_instance.py:L1144–L1174` |
| `_TestInstanceObject.test_recreate_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1176–L1182` |
| `_TestInstanceObject.test_create_with_special_things` | method | (self, mock_create) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_instance.py:L1185–L1210` |
| `_TestInstanceObject.test_destroy_stubbed` | method | (self, mock_destroy) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_instance.py:L1213–L1227` |
| `_TestInstanceObject.test_destroy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1229–L1238` |
| `_TestInstanceObject.test_destroy_host_constraint` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L1240–L1248` |
| `_TestInstanceObject.test_destroy_hard` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L1250–L1260` |
| `_TestInstanceObject.test_destroy_hard_host_constraint` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1262–L1271` |
| `_TestInstanceObject.test_name_does_not_trigger_lazy_loads` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1273–L1282` |
| `_TestInstanceObject.test_name_blank_if_no_id_pre_scheduling` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance.py:L1284–L1289` |
| `_TestInstanceObject.test_name_uuid_if_no_id_post_scheduling` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L1291–L1298` |
| `_TestInstanceObject.test_from_db_object_not_overwrite_info_cache` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1300–L1309` |
| `_TestInstanceObject.test_from_db_object_info_cache_not_set` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L1311–L1318` |
| `_TestInstanceObject.test_from_db_object_security_groups_net_set` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L1320–L1328` |
| `_TestInstanceObject.test_from_db_object_no_extra_db_calls` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L1332–L1337` |
| `_TestInstanceObject.test_get_with_pci_requests` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1340–L1349` |
| `_TestInstanceObject.test_get_flavor` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance.py:L1351–L1355` |
| `_TestInstanceObject.test_get_flavor_namespace` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance.py:L1357–L1361` |
| `_TestInstanceObject.test_delete_metadata_key` | method | (self, db_delete) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L1364–L1372` |
| `_TestInstanceObject.test_reset_changes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L1374–L1381` |
| `_TestInstanceObject.test_load_generic_calls_handler` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1383–L1391` |
| `_TestInstanceObject.test_load_generic_calls_handler.fake_load` | function | (name) | public | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1386–L1387` |
| `_TestInstanceObject.test_load_fault_calls_handler` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1393–L1401` |
| `_TestInstanceObject.test_load_fault_calls_handler.fake_load` | function | — | public | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1396–L1397` |
| `_TestInstanceObject.test_load_ec2_ids_calls_handler` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1403–L1412` |
| `_TestInstanceObject.test_load_ec2_ids_calls_handler.fake_load` | function | — | public | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1406–L1408` |
| `_TestInstanceObject.test_load_migration_context` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L1414–L1421` |
| `_TestInstanceObject.test_load_migration_context_no_context` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1423–L1432` |
| `_TestInstanceObject.test_load_migration_context_no_data` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1434–L1440` |
| `_TestInstanceObject.test_apply_revert_migration_context` | method | (self) | public | not declared | 3/18 | `src/nova/tests/unit/objects/test_instance.py:L1442–L1460` |
| `_TestInstanceObject.test_drop_migration_context` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance.py:L1462–L1474` |
| `_TestInstanceObject.test_mutated_migration_context` | method | (self) | public | not declared | 4/35 | `src/nova/tests/unit/objects/test_instance.py:L1476–L1513` |
| `_TestInstanceObject.test_mutated_migration_context_early_exit` | method | (self, obj_load_attr) | public | not declared | 3/7 | `src/nova/tests/unit/objects/test_instance.py:L1517–L1527` |
| `_TestInstanceObject.test_clear_numa_topology` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L1529–L1540` |
| `_TestInstanceObject.test_load_generic` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance.py:L1543–L1547` |
| `_TestInstanceObject.test_load_something_unspecial` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1550–L1559` |
| `_TestInstanceObject.test_load_fault` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1562–L1571` |
| `_TestInstanceObject.test_load_ec2_ids` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance.py:L1574–L1581` |
| `_TestInstanceObject.test_load_pci_devices` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1584–L1590` |
| `_TestInstanceObject.test_load_resources` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance.py:L1593–L1599` |
| `_TestInstanceObject.test_get_with_extras` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_instance.py:L1601–L1614` |
| `_TestInstanceObject.test_obj_clone` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L1616–L1628` |
| `_TestInstanceObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1630–L1641` |
| `TestInstanceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1644–L1693` |
| `TestInstanceObject._test_save_objectfield_fk_constraint_fails` | method | (self, foreign_key, expected_exception) | private | not declared | 4/14 | `src/nova/tests/unit/objects/test_instance.py:L1646–L1670` |
| `TestInstanceObject._test_save_objectfield_fk_constraint_fails._test` | function | (mock_is_set, mock_save_field) | private | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1663–L1669` |
| `TestInstanceObject.test_save_objectfield_missing_instance_row` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_instance.py:L1672–L1674` |
| `TestInstanceObject.test_save_objectfield_reraises_if_not_instance_related` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_instance.py:L1676–L1678` |
| `TestInstanceObject.test_obj_load_attr_log` | method | (self, mock_log_debug) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L1681–L1693` |
| `TestRemoteInstanceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1696–L1698` |
| `_TestInstanceListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L1701–L2136` |
| `_TestInstanceListObject.fake_instance` | method | (self, id, updates=None) | public | `db_inst` (src/nova/tests/unit/objects/test_instance.py:L1719) | 2/16 | `src/nova/tests/unit/objects/test_instance.py:L1702–L1719` |
| `_TestInstanceListObject.test_get_all_by_filters` | method | (self, mock_get_all) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_instance.py:L1722–L1736` |
| `_TestInstanceListObject.test_get_all_by_filters_sorted` | method | (self, mock_get_all) | public | not declared | 2/14 | `src/nova/tests/unit/objects/test_instance.py:L1739–L1755` |
| `_TestInstanceListObject.test_get_all_by_filters_calls_non_sort` | method | (self, mock_get_by_filters, mock_get_by_filters_sort) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance.py:L1759–L1770` |
| `_TestInstanceListObject.test_get_all_by_filters_calls_sort` | method | (self, mock_get_by_filters, mock_get_by_filters_sort) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance.py:L1774–L1787` |
| `_TestInstanceListObject.test_get_all_by_filters_works_for_cleaned` | method | (self, mock_get_all) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_instance.py:L1790–L1810` |
| `_TestInstanceListObject.test_get_by_host` | method | (self, mock_get_all) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_instance.py:L1813–L1826` |
| `_TestInstanceListObject.test_get_by_host_and_node` | method | (self, mock_get_all) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_instance.py:L1829–L1841` |
| `_TestInstanceListObject.test_get_by_host_and_not_type` | method | (self, mock_get_all) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_instance.py:L1844–L1856` |
| `_TestInstanceListObject.test_get_all` | method | (self, mock_get_all, mock_exp) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_instance.py:L1860–L1870` |
| `_TestInstanceListObject.test_get_hung_in_rebooting` | method | (self, mock_get_all) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_instance.py:L1873–L1885` |
| `_TestInstanceListObject.test_get_active_by_window_joined` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_instance.py:L1887–L1911` |
| `_TestInstanceListObject.test_get_active_by_window_joined.fake_instance_get_active_by_window_joined` | function | (context, begin, end, project_id, host, columns_to_join, limit=None, marker=None) | public | `fakes` (src/nova/tests/unit/objects/test_instance.py:L1902) | — | `src/nova/tests/unit/objects/test_instance.py:L1894–L1902` |
| `_TestInstanceListObject.test_with_fault` | method | (self, mock_get_all, mock_fault_get) | public | not declared | 2/21 | `src/nova/tests/unit/objects/test_instance.py:L1915–L1938` |
| `_TestInstanceListObject.test_fill_faults` | method | (self, mock_sg) | public | not declared | 4/31 | `src/nova/tests/unit/objects/test_instance.py:L1941–L1977` |
| `_TestInstanceListObject.test_fill_faults_multicell` | method | (self, mock_sg) | public | not declared | 3/38 | `src/nova/tests/unit/objects/test_instance.py:L1980–L2027` |
| `_TestInstanceListObject.test_fill_faults_cell_no_response` | method | (self, mock_sg) | public | not declared | 3/28 | `src/nova/tests/unit/objects/test_instance.py:L2030–L2065` |
| `_TestInstanceListObject.test_fill_faults_cell_exception` | method | (self, mock_sg) | public | not declared | 3/28 | `src/nova/tests/unit/objects/test_instance.py:L2068–L2103` |
| `_TestInstanceListObject.test_get_uuids_by_host_no_match` | method | (self, mock_get_all) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L2106–L2111` |
| `_TestInstanceListObject.test_get_uuids_by_host` | method | (self, mock_get_all) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L2114–L2122` |
| `_TestInstanceListObject.test_get_uuids_by_hosts` | method | (self, mock_get_all) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance.py:L2125–L2136` |
| `TestInstanceListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L2139–L2239` |
| `TestInstanceListObject.test_hidden_filter_query` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/objects/test_instance.py:L2142–L2189` |
| `TestInstanceListObject.test_fill_metadata` | method | (self) | public | not declared | 7/23 | `src/nova/tests/unit/objects/test_instance.py:L2191–L2232` |
| `TestInstanceListObject.test_fill_metadata_nop` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance.py:L2234–L2239` |
| `TestRemoteInstanceListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L2242–L2244` |
| `TestInstanceObjectMisc` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L2247–L2269` |
| `TestInstanceObjectMisc.test_expected_cols` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance.py:L2248–L2252` |
| `TestInstanceObjectMisc.test_expected_cols_extra` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance.py:L2254–L2257` |
| `TestInstanceObjectMisc.test_expected_cols_no_duplicates` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L2259–L2269` |
| `TestInstanceObjectGetPciDevices` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L2272–L2430` |
| `TestInstanceObjectGetPciDevices.test_lazy_loading_pci_devices` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance.py:L2273–L2285` |
| `TestInstanceObjectGetPciDevices.test_lazy_loading_pci_requests` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/objects/test_instance.py:L2287–L2319` |
| `TestInstanceObjectGetPciDevices.test_no_filter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance.py:L2321–L2328` |
| `TestInstanceObjectGetPciDevices.test_no_filter_by_request_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance.py:L2330–L2340` |
| `TestInstanceObjectGetPciDevices.test_no_filter_by_source` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/objects/test_instance.py:L2342–L2369` |
| `TestInstanceObjectGetPciDevices.test_no_filter_by_request_id_and_source` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/objects/test_instance.py:L2371–L2400` |
| `TestInstanceObjectGetPciDevices.test_old_pci_dev_and_req` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_instance.py:L2402–L2430` |
| `_TestInstanceObject.fake_instance` | property | — | public | not declared | — | `src/nova/tests/unit/objects/test_instance.py:L53–L84` |

## Dependencies

- `import collections` (src/nova/tests/unit/objects/test_instance.py:L15)
- `import datetime` (src/nova/tests/unit/objects/test_instance.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance.py:L17)
- `import netaddr` (src/nova/tests/unit/objects/test_instance.py:L19)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/objects/test_instance.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_instance.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance.py:L22)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_instance.py:L23)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_instance.py:L24)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/objects/test_instance.py:L26)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/objects/test_instance.py:L27)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_instance.py:L28)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_instance.py:L29)
- `nova.db.main`: imports `models as sql_models` (src/nova/tests/unit/objects/test_instance.py:L30)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance.py:L31)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/objects/test_instance.py:L32)
- `nova`: imports `notifications` (src/nova/tests/unit/objects/test_instance.py:L33)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance.py:L34)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_instance.py:L35)
- `nova.objects`: imports `instance` (src/nova/tests/unit/objects/test_instance.py:L36)
- `nova.objects`: imports `instance_info_cache` (src/nova/tests/unit/objects/test_instance.py:L37)
- `nova.objects`: imports `pci_device` (src/nova/tests/unit/objects/test_instance.py:L38)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_instance.py:L39)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_instance.py:L40)
- `nova.tests.unit.objects`: imports `test_instance_device_metadata` (src/nova/tests/unit/objects/test_instance.py:L41)
- `nova.tests.unit.objects`: imports `test_instance_fault` (src/nova/tests/unit/objects/test_instance.py:L42)
- `nova.tests.unit.objects`: imports `test_instance_info_cache` (src/nova/tests/unit/objects/test_instance.py:L43)
- `nova.tests.unit.objects`: imports `test_instance_numa` (src/nova/tests/unit/objects/test_instance.py:L44)
- `nova.tests.unit.objects`: imports `test_instance_pci_requests` (src/nova/tests/unit/objects/test_instance.py:L45)
- `nova.tests.unit.objects`: imports `test_migration_context as test_mig_ctxt` (src/nova/tests/unit/objects/test_instance.py:L46)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance.py:L47)
- `nova.tests.unit.objects`: imports `test_vcpu_model` (src/nova/tests/unit/objects/test_instance.py:L48)
- `nova`: imports `utils` (src/nova/tests/unit/objects/test_instance.py:L49)

## Security Surface

- **sink** (`db-write`): db_inst.update(updates) (src/nova/tests/unit/objects/test_instance.py:L1718)
- **sink** (`db-write`): translate those values on SELECT. (src/nova/tests/unit/objects/test_instance.py:L2147)
- **sink** (`db-write`): update = table.insert().values( (src/nova/tests/unit/objects/test_instance.py:L2163)
- **sink** (`db-write`): conn.execute(update) (src/nova/tests/unit/objects/test_instance.py:L2170)

