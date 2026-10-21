# src/nova/tests/unit/cmd/test_manage.py

## Overview

This file implements the `test_manage` module, defining 10 classs, 3 constants, 4 functions, 216 methods, 1 staticmethod, 24 imports, 7 side effects, 5 security surface entries.

Lines: total 4441, code 3844, comment 188, blank 409

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L43–L43` |
| `UtilitiesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L46–L100` |
| `UtilitiesTestCase.test_format_dict` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/cmd/test_manage.py:L48–L67` |
| `UtilitiesTestCase.test_mask_passwd` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/cmd/test_manage.py:L69–L100` |
| `DbCommandsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L103–L852` |
| `DbCommandsTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L104–L104` |
| `DbCommandsTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_manage.py:L106–L112` |
| `DbCommandsTestCase.test_online_migrations_unique` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/cmd/test_manage.py:L114–L117` |
| `DbCommandsTestCase.test_archive_deleted_rows_negative` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L119–L120` |
| `DbCommandsTestCase.test_archive_deleted_rows_large_number` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L122–L124` |
| `DbCommandsTestCase._test_archive_deleted_rows_all_cells` | method | (self, mock_db_archive, mock_purge, purge=False) | private | not declared | 2/56 | `src/nova/tests/unit/cmd/test_manage.py:L133–L195` |
| `DbCommandsTestCase.test_archive_deleted_rows_all_cells` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L197–L198` |
| `DbCommandsTestCase.test_archive_deleted_rows_all_cells_purge` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L200–L201` |
| `DbCommandsTestCase.test_archive_deleted_rows_all_cells_until_complete` | method | (self, mock_db_archive) | public | not declared | 1/66 | `src/nova/tests/unit/cmd/test_manage.py:L204–L283` |
| `DbCommandsTestCase._test_archive_deleted_rows` | method | (self, mock_db_archive, verbose=False) | private | not declared | 2/19 | `src/nova/tests/unit/cmd/test_manage.py:L288–L306` |
| `DbCommandsTestCase.test_archive_deleted_rows` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L308–L310` |
| `DbCommandsTestCase.test_archive_deleted_rows_verbose` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L312–L314` |
| `DbCommandsTestCase.test_archive_deleted_rows_until_complete` | method | (self, mock_get_all, mock_db_archive, mock_sleep, verbose=False, sleep=0) | public | not declared | 2/39 | `src/nova/tests/unit/cmd/test_manage.py:L319–L358` |
| `DbCommandsTestCase.test_archive_deleted_rows_until_complete_quiet` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L360–L361` |
| `DbCommandsTestCase.test_archive_deleted_rows_until_complete_sleep` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L363–L364` |
| `DbCommandsTestCase.test_archive_deleted_rows_until_stopped` | method | (self, mock_get_all, mock_db_archive, mock_db_purge, verbose=True) | public | not declared | 2/40 | `src/nova/tests/unit/cmd/test_manage.py:L369–L409` |
| `DbCommandsTestCase.test_archive_deleted_rows_until_stopped_cells` | method | (self, mock_db_archive, verbose=True) | public | not declared | 2/54 | `src/nova/tests/unit/cmd/test_manage.py:L412–L471` |
| `DbCommandsTestCase.test_archive_deleted_rows_until_stopped_quiet` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L473–L474` |
| `DbCommandsTestCase.test_archive_deleted_rows_before` | method | (self, mock_get_all, mock_db_archive) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L478–L488` |
| `DbCommandsTestCase.test_archive_deleted_rows_verbose_no_results` | method | (self, mock_get_all, mock_db_archive) | public | not declared | 1/10 | `src/nova/tests/unit/cmd/test_manage.py:L492–L502` |
| `DbCommandsTestCase.test_archive_deleted_rows_deleted_instances_no_rows` | method | (self, mock_get_all, mock_db_archive) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L506–L522` |
| `DbCommandsTestCase.test_archive_deleted_rows_and_api_db_records` | method | (self, mock_members_destroy, mock_reqspec_destroy, mock_db_archive, verbose=True) | public | not declared | 3/52 | `src/nova/tests/unit/cmd/test_manage.py:L527–L582` |
| `DbCommandsTestCase.test_archive_deleted_rows_without_api_connection_configured` | method | (self, mock_get_all) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L586–L597` |
| `DbCommandsTestCase.test_purge_all` | method | (self, mock_purge) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L600–L604` |
| `DbCommandsTestCase.test_purge_date` | method | (self, mock_purge) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_manage.py:L607–L613` |
| `DbCommandsTestCase.test_purge_date_fail` | method | (self, mock_purge) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L616–L619` |
| `DbCommandsTestCase.test_purge_no_args` | method | (self, mock_purge) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L622–L625` |
| `DbCommandsTestCase.test_purge_nothing_deleted` | method | (self, mock_purge) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L628–L631` |
| `DbCommandsTestCase.test_purge_all_cells` | method | (self, mock_get_cells, mock_purge) | public | not declared | 1/20 | `src/nova/tests/unit/cmd/test_manage.py:L635–L662` |
| `DbCommandsTestCase.test_purge_all_cells.fake_purge` | function | (*args, **kwargs) | public | `val` (src/nova/tests/unit/cmd/test_manage.py:L650) | — | `src/nova/tests/unit/cmd/test_manage.py:L647–L650` |
| `DbCommandsTestCase.test_purge_all_cells_no_api_config` | method | (self, mock_get_cells) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L665–L669` |
| `DbCommandsTestCase.test_version` | method | (self, mock_db_version) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L672–L674` |
| `DbCommandsTestCase.test_sync` | method | (self, mock_db_sync) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L677–L679` |
| `DbCommandsTestCase.test_sync_cell0` | method | (self, mock_get_by_uuid, mock_db_sync) | public | not declared | 1/21 | `src/nova/tests/unit/cmd/test_manage.py:L683–L704` |
| `DbCommandsTestCase.test_sync_cell0_unknown_error` | method | (self, mock_get_by_uuid) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L708–L726` |
| `DbCommandsTestCase._fake_db_command` | method | (self, migrations=None) | private | `_CommandSub` (src/nova/tests/unit/cmd/test_manage.py:L739) | 2/10 | `src/nova/tests/unit/cmd/test_manage.py:L728–L739` |
| `DbCommandsTestCase._fake_db_command._CommandSub` | class | — | private | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L736–L737` |
| `DbCommandsTestCase.test_online_migrations` | method | (self, mock_get_context) | public | not declared | 1/19 | `src/nova/tests/unit/cmd/test_manage.py:L742–L760` |
| `DbCommandsTestCase.test_online_migrations_no_max_count` | method | (self, mock_get_context) | public | not declared | 1/24 | `src/nova/tests/unit/cmd/test_manage.py:L763–L793` |
| `DbCommandsTestCase.test_online_migrations_no_max_count.fake_migration` | function | (context, count) | public | `count, count` (src/nova/tests/unit/cmd/test_manage.py:L774) | — | `src/nova/tests/unit/cmd/test_manage.py:L769–L774` |
| `DbCommandsTestCase.test_online_migrations_error` | method | (self, mock_get_context) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L796–L826` |
| `DbCommandsTestCase.test_online_migrations_error.good_migration` | function | (context, count) | public | `found, done` (src/nova/tests/unit/cmd/test_manage.py:L804) | — | `src/nova/tests/unit/cmd/test_manage.py:L799–L804` |
| `DbCommandsTestCase.test_online_migrations_bad_max` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_manage.py:L828–L834` |
| `DbCommandsTestCase.test_online_migrations_no_max` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L836–L840` |
| `DbCommandsTestCase.test_online_migrations_finished` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L842–L846` |
| `DbCommandsTestCase.test_online_migrations_not_finished` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L848–L852` |
| `ApiDbCommandsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L855–L870` |
| `ApiDbCommandsTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L856–L860` |
| `ApiDbCommandsTestCase.test_version` | method | (self, mock_db_version) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L863–L865` |
| `ApiDbCommandsTestCase.test_sync` | method | (self, mock_db_sync) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L868–L870` |
| `CellV2CommandsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L874–L2385` |
| `CellV2CommandsTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L875–L875` |
| `CellV2CommandsTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_manage.py:L877–L883` |
| `CellV2CommandsTestCase.test_map_cell_and_hosts` | method | (self) | public | not declared | 3/28 | `src/nova/tests/unit/cmd/test_manage.py:L885–L915` |
| `CellV2CommandsTestCase.test_map_cell_and_hosts_duplicate` | method | (self) | public | not declared | 3/37 | `src/nova/tests/unit/cmd/test_manage.py:L917–L955` |
| `CellV2CommandsTestCase.test_map_cell_and_hosts_partial_update` | method | (self) | public | not declared | 4/42 | `src/nova/tests/unit/cmd/test_manage.py:L957–L1009` |
| `CellV2CommandsTestCase.test_map_cell_and_hosts_no_hosts_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L1011–L1019` |
| `CellV2CommandsTestCase.test_map_cell_and_hosts_no_transport_url` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L1021–L1028` |
| `CellV2CommandsTestCase.test_map_cell_and_hosts_transport_url_config` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L1030–L1033` |
| `CellV2CommandsTestCase.test_map_instances` | method | (self, mock_target_cell) | public | not declared | 3/24 | `src/nova/tests/unit/cmd/test_manage.py:L1036–L1062` |
| `CellV2CommandsTestCase.test_map_instances_duplicates` | method | (self, mock_target_cell) | public | not declared | 3/28 | `src/nova/tests/unit/cmd/test_manage.py:L1065–L1096` |
| `CellV2CommandsTestCase.test_map_instances_two_batches` | method | (self, mock_target_cell) | public | not declared | 3/24 | `src/nova/tests/unit/cmd/test_manage.py:L1099–L1125` |
| `CellV2CommandsTestCase.test_map_instances_max_count` | method | (self, mock_target_cell) | public | not declared | 4/28 | `src/nova/tests/unit/cmd/test_manage.py:L1128–L1162` |
| `CellV2CommandsTestCase.test_map_instances_marker_deleted` | method | (self, mock_target_cell) | public | not declared | 3/31 | `src/nova/tests/unit/cmd/test_manage.py:L1165–L1204` |
| `CellV2CommandsTestCase.test_map_instances_marker_reset` | method | (self, mock_target_cell) | public | not declared | 2/43 | `src/nova/tests/unit/cmd/test_manage.py:L1207–L1275` |
| `CellV2CommandsTestCase.test_map_instances_validate_cell_uuid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L1277–L1282` |
| `CellV2CommandsTestCase.test_map_cell0` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L1284–L1292` |
| `CellV2CommandsTestCase.test_map_cell0_returns_0_on_successful_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L1295–L1296` |
| `CellV2CommandsTestCase.test_map_cell0_returns_0_if_cell0_already_exists` | method | (self, _map_cell0) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L1299–L1304` |
| `CellV2CommandsTestCase.test_map_cell0_default_database` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L1306–L1317` |
| `CellV2CommandsTestCase.test_map_cell0_default_database_special_characters` | method | (self, connection) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L1324–L1341` |
| `CellV2CommandsTestCase._test_migrate_simple_command` | method | (self, cell0_sync_fail=False) | private | not declared | 3/41 | `src/nova/tests/unit/cmd/test_manage.py:L1343–L1396` |
| `CellV2CommandsTestCase._test_migrate_simple_command._test` | function | (mock_gen_uuid, mock_target_cell, mock_db_sync) | private | `result` (src/nova/tests/unit/cmd/test_manage.py:L1376) | — | `src/nova/tests/unit/cmd/test_manage.py:L1371–L1376` |
| `CellV2CommandsTestCase.test_simple_command_single` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L1398–L1399` |
| `CellV2CommandsTestCase.test_simple_command_cell0_fail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L1401–L1404` |
| `CellV2CommandsTestCase.test_simple_command_multiple` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L1406–L1409` |
| `CellV2CommandsTestCase.test_instance_verify_no_mapping` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L1411–L1413` |
| `CellV2CommandsTestCase.test_instance_verify_has_only_instance_mapping` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L1416–L1420` |
| `CellV2CommandsTestCase.test_instance_verify_has_all_mappings` | method | (self, mock_target_cell, mock_get2, mock_get1) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L1425–L1432` |
| `CellV2CommandsTestCase.test_instance_verify_quiet` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L1434–L1438` |
| `CellV2CommandsTestCase.test_instance_verify_has_instance_mapping_but_no_instance` | method | (self, mock_target_cell) | public | not declared | 1/27 | `src/nova/tests/unit/cmd/test_manage.py:L1441–L1471` |
| `CellV2CommandsTestCase._return_compute_nodes` | method | (self, ctxt, num=1) | private | `nodes` (src/nova/tests/unit/cmd/test_manage.py:L1488) | 2/16 | `src/nova/tests/unit/cmd/test_manage.py:L1473–L1488` |
| `CellV2CommandsTestCase.test_discover_hosts_single_cell` | method | (self, mock_cell_mapping_get_all, mock_target_cell) | public | not declared | 3/21 | `src/nova/tests/unit/cmd/test_manage.py:L1492–L1519` |
| `CellV2CommandsTestCase.test_discover_hosts_single_cell_no_new_hosts` | method | (self, mock_cell_mapping_get_all, mock_target_cell) | public | not declared | 2/22 | `src/nova/tests/unit/cmd/test_manage.py:L1523–L1549` |
| `CellV2CommandsTestCase.test_discover_hosts_multiple_cells` | method | (self, mock_cell_mapping_get_by_uuid) | public | not declared | 2/38 | `src/nova/tests/unit/cmd/test_manage.py:L1552–L1601` |
| `CellV2CommandsTestCase.test_discover_hosts_strict` | method | (self, mock_discover_hosts) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L1604–L1614` |
| `CellV2CommandsTestCase.test_discover_hosts_by_service` | method | (self, mock_discover_hosts) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_manage.py:L1617–L1623` |
| `CellV2CommandsTestCase.test_discover_hosts_mapping_exists` | method | (self, mock_discover_hosts) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L1626–L1639` |
| `CellV2CommandsTestCase.test_validate_transport_url_in_conf` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L1641–L1645` |
| `CellV2CommandsTestCase.test_validate_transport_url_on_command_line` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L1647–L1650` |
| `CellV2CommandsTestCase.test_validate_transport_url_missing` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L1652–L1654` |
| `CellV2CommandsTestCase.test_validate_transport_url_favors_command_line` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L1656–L1660` |
| `CellV2CommandsTestCase.test_validate_transport_url_invalid_url` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L1662–L1664` |
| `CellV2CommandsTestCase.test_non_unique_transport_url_database_connection_checker` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/cmd/test_manage.py:L1666–L1693` |
| `CellV2CommandsTestCase.test_create_cell_use_params` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L1695–L1710` |
| `CellV2CommandsTestCase.test_create_cell_use_params_with_template` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/cmd/test_manage.py:L1712–L1735` |
| `CellV2CommandsTestCase.test_create_cell_use_config_values` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L1737–L1753` |
| `CellV2CommandsTestCase.test_create_cell_failed_if_non_unique` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/cmd/test_manage.py:L1755–L1764` |
| `CellV2CommandsTestCase.test_create_cell_failed_if_no_transport_url` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L1766–L1770` |
| `CellV2CommandsTestCase.test_create_cell_failed_if_no_database_connection` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L1772–L1776` |
| `CellV2CommandsTestCase.test_create_cell_pre_disabled` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L1778–L1790` |
| `CellV2CommandsTestCase.test_list_cells_verbose_false` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/cmd/test_manage.py:L1792–L1817` |
| `CellV2CommandsTestCase.test_list_cells_multiple_sorted_verbose_true` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/cmd/test_manage.py:L1819–L1856` |
| `CellV2CommandsTestCase.test_delete_cell_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L1858–L1864` |
| `CellV2CommandsTestCase.test_delete_cell_host_mappings_exist` | method | (self, mock_get_cn) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L1867–L1883` |
| `CellV2CommandsTestCase.test_delete_cell_instance_mappings_exist_with_instances` | method | (self, mock_get_all) | public | not declared | 1/17 | `src/nova/tests/unit/cmd/test_manage.py:L1886–L1905` |
| `CellV2CommandsTestCase.test_delete_cell_instance_mappings_exist_without_instances` | method | (self, mock_get_all) | public | not declared | 1/19 | `src/nova/tests/unit/cmd/test_manage.py:L1909–L1930` |
| `CellV2CommandsTestCase.test_delete_cell_success_without_host_mappings` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/cmd/test_manage.py:L1932–L1943` |
| `CellV2CommandsTestCase.test_delete_cell_success_with_host_mappings` | method | (self, mock_cell_destroy, mock_hm_destroy, mock_get_cn) | public | not declared | 1/17 | `src/nova/tests/unit/cmd/test_manage.py:L1948–L1967` |
| `CellV2CommandsTestCase.test_delete_cell_force_with_inst_mappings_of_deleted_instances` | method | (self, mock_cell_destroy, mock_hm_destroy, mock_im_destroy, mock_target_cell) | public | not declared | 1/32 | `src/nova/tests/unit/cmd/test_manage.py:L1973–L2015` |
| `CellV2CommandsTestCase.test_update_cell_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L2017–L2020` |
| `CellV2CommandsTestCase.test_update_cell_failed_if_non_unique_transport_db_urls` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/cmd/test_manage.py:L2022–L2049` |
| `CellV2CommandsTestCase.test_update_cell_failed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L2051–L2061` |
| `CellV2CommandsTestCase.test_update_cell_success` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L2063–L2076` |
| `CellV2CommandsTestCase.test_update_cell_success_defaults` | method | (self) | public | not declared | 3/18 | `src/nova/tests/unit/cmd/test_manage.py:L2078–L2095` |
| `CellV2CommandsTestCase.test_update_cell_disable_and_enable` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L2097–L2108` |
| `CellV2CommandsTestCase.test_update_cell_disable_cell0` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L2110–L2118` |
| `CellV2CommandsTestCase.test_update_cell_disable_success` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/cmd/test_manage.py:L2120–L2136` |
| `CellV2CommandsTestCase.test_update_cell_enable_success` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/cmd/test_manage.py:L2138–L2155` |
| `CellV2CommandsTestCase.test_update_cell_disable_already_disabled` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L2157–L2170` |
| `CellV2CommandsTestCase.test_update_cell_enable_already_enabled` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L2172–L2184` |
| `CellV2CommandsTestCase.test_list_hosts` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/cmd/test_manage.py:L2186–L2215` |
| `CellV2CommandsTestCase.test_list_hosts_in_cell` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/cmd/test_manage.py:L2217–L2245` |
| `CellV2CommandsTestCase.test_list_hosts_cell_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L2247–L2253` |
| `CellV2CommandsTestCase.test_delete_host_cell_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L2255–L2261` |
| `CellV2CommandsTestCase.test_delete_host_host_not_found` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/cmd/test_manage.py:L2263–L2274` |
| `CellV2CommandsTestCase.test_delete_host_host_not_in_cell` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/cmd/test_manage.py:L2276–L2298` |
| `CellV2CommandsTestCase.test_delete_host_instances_exist` | method | (self, mock_get_cn, mock_get_by_host) | public | not declared | 1/18 | `src/nova/tests/unit/cmd/test_manage.py:L2302–L2322` |
| `CellV2CommandsTestCase.test_delete_host_success` | method | (self, mock_get_cn, mock_destroy, mock_get_by_host) | public | not declared | 2/21 | `src/nova/tests/unit/cmd/test_manage.py:L2328–L2353` |
| `CellV2CommandsTestCase.test_delete_host_success_compute_host_not_found` | method | (self, mock_get_cn, mock_destroy, mock_get_by_host) | public | not declared | 1/20 | `src/nova/tests/unit/cmd/test_manage.py:L2360–L2385` |
| `TestNovaManagePlacement` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L2389–L3149` |
| `TestNovaManagePlacement.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L2399–L2404` |
| `TestNovaManagePlacement.test_heal_allocations_with_cell_instance_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L2406–L2414` |
| `TestNovaManagePlacement.test_heal_allocations_with_cell_id_not_found` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L2418–L2422` |
| `TestNovaManagePlacement.test_heal_allocations_invalid_max_count` | method | (self, max_count) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L2425–L2426` |
| `TestNovaManagePlacement.test_heal_allocations_no_cells` | method | (self, mock_get_all_cells) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L2430–L2432` |
| `TestNovaManagePlacement.test_heal_allocations_no_instances` | method | (self, mock_get_instances, mock_get_all_cells) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L2440–L2443` |
| `TestNovaManagePlacement.test_heal_allocations_compute_host_not_found` | method | (self, mock_get_compute_node, mock_get_allocs, mock_get_instances, mock_get_all_cells) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L2459–L2464` |
| `TestNovaManagePlacement.test_heal_allocations_put_allocations_fails` | method | (self, mock_put_allocations, mock_res_from_flavor, mock_get_compute_node, mock_get_allocs, mock_get_instances, mock_get_all_cells) | public | not declared | 1/23 | `src/nova/tests/unit/cmd/test_manage.py:L2485–L2508` |
| `TestNovaManagePlacement.test_heal_allocations_get_allocs_placement_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L2520–L2525` |
| `TestNovaManagePlacement.test_heal_allocations_get_allocs_retrieval_fails` | method | (self, mock_put, mock_getinst) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_manage.py:L2545–L2547` |
| `TestNovaManagePlacement.test_heal_allocations` | method | (self, mock_put, mock_get_compute_node, mock_get_allocs, mock_get_instances, mock_get_all_cells) | public | not declared | 1/28 | `src/nova/tests/unit/cmd/test_manage.py:L2569–L2604` |
| `TestNovaManagePlacement.test_heal_allocations_put_fails` | method | (self, mock_put, mock_get_allocs, mock_get_instances, mock_get_all_cells) | public | not declared | 1/28 | `src/nova/tests/unit/cmd/test_manage.py:L2626–L2659` |
| `TestNovaManagePlacement.test_sync_aggregates_host_mapping_not_found` | method | (self, mock_get_host_mapping, mock_get_aggs) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L2666–L2674` |
| `TestNovaManagePlacement.test_sync_aggregates_too_many_computes_for_host` | method | (self, mock_target_cell, mock_get_nodes, mock_get_host_mapping, mock_get_aggs) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L2687–L2702` |
| `TestNovaManagePlacement.test_sync_aggregates_compute_not_found` | method | (self, mock_target_cell, mock_get_nodes, mock_get_host_mapping, mock_get_aggs) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L2713–L2728` |
| `TestNovaManagePlacement.test_sync_aggregates_get_provider_aggs_placement_server_error` | method | (self, mock_agg_add) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L2736–L2750` |
| `TestNovaManagePlacement.test_sync_aggregates_put_aggregates_fails_provider_not_found` | method | (self, mock_agg_add) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L2758–L2776` |
| `TestNovaManagePlacement.test_sync_aggregates_put_aggregates_fails_generation_conflict` | method | (self, mock_agg_add) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L2784–L2801` |
| `TestNovaManagePlacement.test_has_request_but_no_allocation` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/cmd/test_manage.py:L2807–L2871` |
| `TestNovaManagePlacement.test_has_request_but_no_allocation_extended` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/cmd/test_manage.py:L2877–L2940` |
| `TestNovaManagePlacement.test_update_ports_only_updates_binding_profile` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/cmd/test_manage.py:L2942–L2965` |
| `TestNovaManagePlacement.test_audit_with_provider_uuid` | method | (self, get_resource_providers, check_orphaned_allocs) | public | not declared | 1/29 | `src/nova/tests/unit/cmd/test_manage.py:L2970–L3007` |
| `TestNovaManagePlacement.test_audit_with_invalid_provider_uuid` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L3009–L3021` |
| `TestNovaManagePlacement._test_audit` | method | (self, get_resource_providers, check_orphaned_allocs, verbose=False, delete=False, errors=False, found=False) | private | not declared | 12/52 | `src/nova/tests/unit/cmd/test_manage.py:L3026–L3091` |
| `TestNovaManagePlacement.test_audit_not_found_orphaned_allocs` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3093–L3094` |
| `TestNovaManagePlacement.test_audit_found_orphaned_allocs_not_verbose` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3096–L3097` |
| `TestNovaManagePlacement.test_audit_found_orphaned_allocs_verbose` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3099–L3100` |
| `TestNovaManagePlacement.test_audit_found_orphaned_allocs_and_deleted_them` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3102–L3103` |
| `TestNovaManagePlacement.test_audit_found_orphaned_allocs_but_got_errors` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3105–L3106` |
| `TestNovaManagePlacement.test_check_orphaned_allocations_for_provider` | method | (self, get_insts_and_migs, get_allocs_for_rp, delete_allocs) | public | not declared | 1/30 | `src/nova/tests/unit/cmd/test_manage.py:L3114–L3149` |
| `VolumeAttachmentCommandsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L3152–L3743` |
| `VolumeAttachmentCommandsTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L3162–L3166` |
| `VolumeAttachmentCommandsTestCase._get_fake_connector_info` | method | — | private | `{ 'ip': '192.168.7.8', 'host': 'fake-host', 'initiator': 'fake.initiator.iqn', 'wwpns': '100010604b019419', 'wwnns': '200010604b019419', 'multipath': False, 'platform': 'x86_64', 'os_type': 'linux2', ` (src/nova/tests/unit/cmd/test_manage.py:L3170) | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L3169–L3179` |
| `VolumeAttachmentCommandsTestCase.test_show` | method | (self, mock_get_im, mock_get_bdm, mock_format_dict) | public | not declared | 1/24 | `src/nova/tests/unit/cmd/test_manage.py:L3184–L3214` |
| `VolumeAttachmentCommandsTestCase.test_show_json` | method | (self, mock_get_im, mock_get_bdm, mock_dump) | public | not declared | 1/24 | `src/nova/tests/unit/cmd/test_manage.py:L3219–L3249` |
| `VolumeAttachmentCommandsTestCase.test_show_connection_info` | method | (self, mock_get_im, mock_get_bdm, mock_format_dict) | public | not declared | 1/34 | `src/nova/tests/unit/cmd/test_manage.py:L3254–L3294` |
| `VolumeAttachmentCommandsTestCase.test_show_connection_info_json` | method | (self, mock_get_im, mock_get_bdm) | public | not declared | 1/32 | `src/nova/tests/unit/cmd/test_manage.py:L3298–L3336` |
| `VolumeAttachmentCommandsTestCase.test_show_unknown_failure` | method | (self, mock_get_context) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L3339–L3347` |
| `VolumeAttachmentCommandsTestCase.test_show_instance_not_found` | method | (self, mock_get_im) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L3353–L3369` |
| `VolumeAttachmentCommandsTestCase.test_show_bdm_not_found` | method | (self, mock_get_im, mock_get_bdm) | public | not declared | 1/21 | `src/nova/tests/unit/cmd/test_manage.py:L3373–L3398` |
| `VolumeAttachmentCommandsTestCase.test_get_connector` | method | (self, mock_get_connector, mock_get_root, mock_format_dict) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L3403–L3419` |
| `VolumeAttachmentCommandsTestCase.test_get_connector_json` | method | (self, mock_get_connector, mock_get_root, mock_dump) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L3424–L3440` |
| `VolumeAttachmentCommandsTestCase.test_get_connector_unknown_failure` | method | (self, mock_get_connector, mock_get_root) | public | not declared | 1/15 | `src/nova/tests/unit/cmd/test_manage.py:L3444–L3459` |
| `VolumeAttachmentCommandsTestCase.test_refresh_missing_connector_path_file` | method | (self, mock_exists) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L3462–L3473` |
| `VolumeAttachmentCommandsTestCase.test_refresh_invalid_connector_path_file` | method | (self, mock_exists) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L3476–L3489` |
| `VolumeAttachmentCommandsTestCase.test_refresh_connector_file_oserr` | method | (self, mock_exists) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L3492–L3501` |
| `VolumeAttachmentCommandsTestCase._test_refresh` | method | (self, mock_exists) | private | `ret` (src/nova/tests/unit/cmd/test_manage.py:L3531) | 1/23 | `src/nova/tests/unit/cmd/test_manage.py:L3504–L3531` |
| `VolumeAttachmentCommandsTestCase.test_refresh_invalid_instance_uuid` | method | (self, mock_get_instance) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L3534–L3543` |
| `VolumeAttachmentCommandsTestCase.test_refresh_invalid_instance_state` | method | (self, mock_get_instance, mock_get_bdm) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L3548–L3562` |
| `VolumeAttachmentCommandsTestCase.test_refresh_instance_already_locked` | method | (self, mock_get_instance, mock_get_bdm, mock__do_refresh, mock_action_start) | public | not declared | 1/15 | `src/nova/tests/unit/cmd/test_manage.py:L3569–L3585` |
| `VolumeAttachmentCommandsTestCase.test_refresh_invalid_volume_id` | method | (self, mock_get_instance, mock_get_bdm) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L3590–L3600` |
| `VolumeAttachmentCommandsTestCase.test_refresh_attachment_unknown_failure` | method | (self, mock_action_start, mock_get_instance, mock_get_bdm, mock_lock, mock_unlock, mock_attachment_create, mock_attachment_delete, mock_attachment_get) | public | not declared | 1/30 | `src/nova/tests/unit/cmd/test_manage.py:L3611–L3643` |
| `VolumeAttachmentCommandsTestCase.test_refresh_invalid_connector_host` | method | (self, mock_action_start, mock_get_instance, mock_get_bdm, mock_save_bdm, mock_compute_api, mock_volume_api, mock_compute_rpcapi) | public | not declared | 1/25 | `src/nova/tests/unit/cmd/test_manage.py:L3653–L3687` |
| `VolumeAttachmentCommandsTestCase.test_refresh` | method | (self, mock_action_start, mock_get_instance, mock_get_bdm, mock_save_bdm, mock_compute_api, mock_volume_api, mock_compute_rpcapi) | public | not declared | 1/42 | `src/nova/tests/unit/cmd/test_manage.py:L3697–L3743` |
| `TestNovaManageMain` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L3746–L3813` |
| `TestNovaManageMain.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_manage.py:L3749–L3752` |
| `TestNovaManageMain.test_error_traceback` | method | (self, mock_conf, mock_parse_args) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L3756–L3765` |
| `TestNovaManageMain.test_error_post_mortem` | method | (self, mock_conf, mock_parse_args, mock_pm) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_manage.py:L3770–L3775` |
| `TestNovaManageMain._lock_instance` | method | (self, ctxt, instance, reason) | private | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3777–L3778` |
| `TestNovaManageMain._unlock_instance` | method | (self, ctxt, instance) | private | not declared | 1/2 | `src/nova/tests/unit/cmd/test_manage.py:L3780–L3781` |
| `TestNovaManageMain.test_locked_instance` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L3783–L3797` |
| `TestNovaManageMain.test_unlocked_instance` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L3799–L3813` |
| `LibvirtCommandsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L3816–L4118` |
| `LibvirtCommandsTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L3818–L3822` |
| `LibvirtCommandsTestCase.test_get` | method | (self, mock_get_context, mock_get_machine_type) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_manage.py:L3826–L3838` |
| `LibvirtCommandsTestCase.test_get_unknown_failure` | method | (self, mock_get_context, mock_get_machine_type) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L3842–L3853` |
| `LibvirtCommandsTestCase.test_get_unable_to_find_instance_mapping` | method | (self, mock_get_machine_type) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L3857–L3867` |
| `LibvirtCommandsTestCase.test_get_machine_type_unable_to_find_instance` | method | (self, mock_get_machine_type) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_manage.py:L3871–L3882` |
| `LibvirtCommandsTestCase.test_get_none_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_manage.py:L3887–L3894` |
| `LibvirtCommandsTestCase.test_update` | method | (self, mock_get_context, mock_update) | public | not declared | 1/19 | `src/nova/tests/unit/cmd/test_manage.py:L3898–L3916` |
| `LibvirtCommandsTestCase.test_update_force` | method | (self, mock_get_context, mock_update) | public | not declared | 1/20 | `src/nova/tests/unit/cmd/test_manage.py:L3920–L3939` |
| `LibvirtCommandsTestCase.test_update_unknown_failure` | method | (self, mock_update) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L3943–L3953` |
| `LibvirtCommandsTestCase.test_update_instance_mapping_not_found` | method | (self, mock_update) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L3957–L3970` |
| `LibvirtCommandsTestCase.test_update_instance_not_found` | method | (self, mock_update) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L3974–L3987` |
| `LibvirtCommandsTestCase.test_update_instance_invalid_state` | method | (self, mock_update) | public | not declared | 1/18 | `src/nova/tests/unit/cmd/test_manage.py:L3991–L4008` |
| `LibvirtCommandsTestCase.test_update_invalid_machine_type_update` | method | (self, mock_update) | public | not declared | 1/15 | `src/nova/tests/unit/cmd/test_manage.py:L4012–L4026` |
| `LibvirtCommandsTestCase.test_update_unsupported_machine_type` | method | (self, mock_update) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_manage.py:L4030–L4043` |
| `LibvirtCommandsTestCase.test_list_unset_machine_type_none_found` | method | (self, mock_get_context, mock_get_instances) | public | not declared | 1/17 | `src/nova/tests/unit/cmd/test_manage.py:L4048–L4064` |
| `LibvirtCommandsTestCase.test_list_unset_machine_type_unknown_failure` | method | (self, mock_get_context, mock_get_instances) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L4069–L4079` |
| `LibvirtCommandsTestCase.test_list_unset_machine_type_cell_mapping_not_found` | method | (self, mock_get_context, mock_get_instances) | public | not declared | 1/15 | `src/nova/tests/unit/cmd/test_manage.py:L4084–L4098` |
| `LibvirtCommandsTestCase.test_list_unset_machine_type` | method | (self, mock_get_context, mock_get_instances) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L4103–L4118` |
| `ImagePropertyCommandsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L4121–L4441` |
| `ImagePropertyCommandsTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_manage.py:L4123–L4127` |
| `ImagePropertyCommandsTestCase.test_show_image_properties` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/17 | `src/nova/tests/unit/cmd/test_manage.py:L4135–L4151` |
| `ImagePropertyCommandsTestCase.test_show_image_properties_instance_not_found` | method | (self, mock_get_instance) | public | not declared | 1/10 | `src/nova/tests/unit/cmd/test_manage.py:L4158–L4167` |
| `ImagePropertyCommandsTestCase.test_show_image_properties_instance_mapping_not_found` | method | (self, mock_get_instance_mapping) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L4172–L4182` |
| `ImagePropertyCommandsTestCase.test_show_image_properties_image_property_not_found` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L4190–L4205` |
| `ImagePropertyCommandsTestCase.test_show_image_properties_unknown_failure` | method | (self, mock_get_instance_mapping) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_manage.py:L4210–L4218` |
| `ImagePropertyCommandsTestCase.test_set_image_properties` | method | (self, mock_instance_save, mock_target_cell, mock_get_instance, mock_get_request_spec, mock_request_spec_save) | public | not declared | 1/37 | `src/nova/tests/unit/cmd/test_manage.py:L4229–L4266` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_instance_not_found` | method | (self, mock_get_instance) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_manage.py:L4273–L4279` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_instance_mapping_not_found` | method | (self, mock_get_instance_mapping) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_manage.py:L4284–L4294` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_instance_invalid_state` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/17 | `src/nova/tests/unit/cmd/test_manage.py:L4302–L4318` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_invalid_input` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L4326–L4341` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_with_trait_in_property_name` | method | (self, mock_instance_save, mock_target_cell, mock_get_instance, mock_get_request_spec, mock_request_spec_save) | public | not declared | 1/21 | `src/nova/tests/unit/cmd/test_manage.py:L4352–L4372` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_without_trait_in_property_name` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L4380–L4395` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_invalid_property_name` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L4403–L4418` |
| `ImagePropertyCommandsTestCase.test_set_image_properties_invalid_property_value` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_manage.py:L4426–L4441` |
| `VolumeAttachmentCommandsTestCase._get_fake_connector_info` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/cmd/test_manage.py:L3168–L3179` |

## Dependencies

- `import datetime` (src/nova/tests/unit/cmd/test_manage.py:L16)
- `io`: imports `StringIO` (src/nova/tests/unit/cmd/test_manage.py:L17)
- `import sys` (src/nova/tests/unit/cmd/test_manage.py:L18)
- `import textwrap` (src/nova/tests/unit/cmd/test_manage.py:L19)
- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_manage.py:L20)
- `import warnings` (src/nova/tests/unit/cmd/test_manage.py:L21)
- `import ddt` (src/nova/tests/unit/cmd/test_manage.py:L23)
- `import fixtures` (src/nova/tests/unit/cmd/test_manage.py:L24)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/cmd/test_manage.py:L25)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/cmd/test_manage.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/cmd/test_manage.py:L27)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/cmd/test_manage.py:L28)
- `nova.cmd`: imports `manage` (src/nova/tests/unit/cmd/test_manage.py:L30)
- `nova`: imports `conf` (src/nova/tests/unit/cmd/test_manage.py:L31)
- `nova`: imports `context` (src/nova/tests/unit/cmd/test_manage.py:L32)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/cmd/test_manage.py:L33)
- `nova.db`: imports `migration` (src/nova/tests/unit/cmd/test_manage.py:L34)
- `nova`: imports `exception` (src/nova/tests/unit/cmd/test_manage.py:L35)
- `nova`: imports `objects` (src/nova/tests/unit/cmd/test_manage.py:L36)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/cmd/test_manage.py:L37)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/cmd/test_manage.py:L38)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_manage.py:L39)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/cmd/test_manage.py:L40)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/unit/cmd/test_manage.py:L41)

## Side Effects

- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/cmd/test_manage.py:L3461)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/cmd/test_manage.py:L3475)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/cmd/test_manage.py:L3491)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/cmd/test_manage.py:L3503)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/cmd/test_manage.py:L43)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/cmd/test_manage.py:L104)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/cmd/test_manage.py:L875)

## Security Surface

- **sink** (`db-write`): self.assertIn('Unable to update', self.output.getvalue()) (src/nova/tests/unit/cmd/test_manage.py:L2061)
- **sink** (`db-write`): self.assertIn('Failed to update allocations for consumer', (src/nova/tests/unit/cmd/test_manage.py:L2490)
- **sink** (`db-write`): method='update machine type' (src/nova/tests/unit/cmd/test_manage.py:L3996)
- **sink** (`db-write`): "update machine type while the instance is in this state.", (src/nova/tests/unit/cmd/test_manage.py:L4006)
- **sink** (`db-write`): "Cannot update machine type q35 to pc.", (src/nova/tests/unit/cmd/test_manage.py:L4024)

