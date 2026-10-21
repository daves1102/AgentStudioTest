# src/nova/tests/functional/test_servers.py

## Overview

This file implements the `test_servers` module, defining 41 classs, 7 constants, 29 fields, 29 functions, 310 methods, 1 staticmethod, 38 imports, 7 side effects, 15 security surface entries.

Lines: total 7112, code 4767, comment 1074, blank 1271

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L57–L57` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L59–L59` |
| `ServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L62–L1062` |
| `ServersTest.api_major_version` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L63–L63` |
| `ServersTest.test_get_servers` | method | (self) | public | not declared | 2/4 | `src/nova/tests/functional/test_servers.py:L65–L69` |
| `ServersTest._get_node_build_failures` | method | (self) | private | `{ node.hypervisor_hostname: int(node.stats.get('failed_builds', 0)) for node in computes}` (src/nova/tests/functional/test_servers.py:L74) | 2/6 | `src/nova/tests/functional/test_servers.py:L71–L76` |
| `ServersTest.test_create_server_with_error` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers.py:L78–L113` |
| `ServersTest.test_create_server_with_error.throw_error` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L81–L83` |
| `ServersTest.test_create_server_with_error.failed_counter_updated` | function | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L108–L111` |
| `ServersTest.test_create_server_with_image_type_filter` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L115–L134` |
| `ServersTest._test_create_server_with_error_with_retries` | method | (self) | private | `len(fails)` (src/nova/tests/functional/test_servers.py:L161) | 1/13 | `src/nova/tests/functional/test_servers.py:L136–L161` |
| `ServersTest._test_create_server_with_error_with_retries.throw_error` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L143–L145` |
| `ServersTest.test_create_server_with_error_with_retries` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L163–L169` |
| `ServersTest.test_create_server_with_error_with_no_retries` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L171–L186` |
| `ServersTest.test_create_server_with_error_with_no_retries.failed_counter_updated` | function | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L181–L184` |
| `ServersTest.test_create_and_delete_server` | method | (self) | public | not declared | 3/31 | `src/nova/tests/functional/test_servers.py:L188–L249` |
| `ServersTest._force_reclaim` | method | (self) | private | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L251–L258` |
| `ServersTest.test_deferred_delete` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L260–L290` |
| `ServersTest.test_deferred_delete_restore` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers.py:L292–L318` |
| `ServersTest.test_deferred_delete_restore_overquota` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers.py:L320–L352` |
| `ServersTest.test_deferred_delete_force` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers.py:L354–L380` |
| `ServersTest.test_unshelve_offloaded_overquota` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/test_servers.py:L382–L402` |
| `ServersTest._test_unshelve_offloaded_overquota_placement` | method | (self) | private | not declared | 2/9 | `src/nova/tests/functional/test_servers.py:L404–L423` |
| `ServersTest.test_unshelve_offloaded_overquota_placement` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L425–L430` |
| `ServersTest.test_unshelve_offloaded_overquota_ul` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L432–L441` |
| `ServersTest.test_unshelve_overquota` | method | (self) | public | not declared | 2/12 | `src/nova/tests/functional/test_servers.py:L443–L467` |
| `ServersTest.test_unshelve_overquota_placement` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L469–L472` |
| `ServersTest.test_unshelve_overquota_ul` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L474–L483` |
| `ServersTest.test_create_server_with_metadata` | method | (self) | public | not declared | 4/25 | `src/nova/tests/functional/test_servers.py:L485–L524` |
| `ServersTest.test_server_metadata_actions_negative_invalid_state` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/test_servers.py:L526–L563` |
| `ServersTest.test_create_and_rebuild_server` | method | (self) | public | not declared | 2/52 | `src/nova/tests/functional/test_servers.py:L565–L633` |
| `ServersTest.test_rename_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L635–L653` |
| `ServersTest.test_create_multiple_servers` | method | (self) | public | not declared | 3/24 | `src/nova/tests/functional/test_servers.py:L655–L691` |
| `ServersTest.test_create_server_with_injected_files` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/test_servers.py:L693–L729` |
| `ServersTest.test_stop_start_servers_negative_invalid_state` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_servers.py:L731–L769` |
| `ServersTest.test_revert_resized_server_negative_invalid_state` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers.py:L771–L791` |
| `ServersTest.test_resize_server_negative_invalid_state` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L793–L822` |
| `ServersTest.test_confirm_resized_server_negative_invalid_state` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers.py:L824–L844` |
| `ServersTest.test_resize_server_overquota` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L846–L868` |
| `ServersTest.test_resize_server_overquota_multiple_users` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L870–L935` |
| `ServersTest.test_resize_server_overquota_user_quota` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L937–L990` |
| `ServersTest.test_update_quota_user_exceeds_project` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L992–L1010` |
| `ServersTest.test_update_quota_project_below_user` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers.py:L1012–L1039` |
| `ServersTest.test_attach_vol_maximum_disk_devices_exceeded` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L1041–L1062` |
| `ServersTestV21` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1065–L1066` |
| `ServersTestV21.api_major_version` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1066–L1066` |
| `ServersTestV219` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1069–L1272` |
| `ServersTestV219.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1070–L1070` |
| `ServersTestV219._create_server` | method | (self, set_desc=True, desc=None) | private | `(server, response['server'])` (src/nova/tests/functional/test_servers.py:L1078) | 2/7 | `src/nova/tests/functional/test_servers.py:L1072–L1078` |
| `ServersTestV219._update_server` | method | (self, server_id, set_desc=True, desc=None) | private | not declared | 2/6 | `src/nova/tests/functional/test_servers.py:L1080–L1085` |
| `ServersTestV219._rebuild_server` | method | (self, server_id, set_desc=True, desc=None) | private | not declared | 2/17 | `src/nova/tests/functional/test_servers.py:L1087–L1103` |
| `ServersTestV219._create_server_and_verify` | method | (self, set_desc=True, expected_desc=None) | private | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L1105–L1110` |
| `ServersTestV219._update_server_and_verify` | method | (self, server_id, set_desc=True, expected_desc=None) | private | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L1112–L1117` |
| `ServersTestV219._rebuild_server_and_verify` | method | (self, server_id, set_desc=True, expected_desc=None) | private | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L1119–L1124` |
| `ServersTestV219._verify_server_description` | method | (self, server_id, expected_desc=None, desc_in_resp=True) | private | not declared | 4/17 | `src/nova/tests/functional/test_servers.py:L1126–L1149` |
| `ServersTestV219._create_assertRaisesRegex` | method | (self, desc) | private | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L1151–L1156` |
| `ServersTestV219._update_assertRaisesRegex` | method | (self, server_id, desc) | private | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L1158–L1163` |
| `ServersTestV219._rebuild_assertRaisesRegex` | method | (self, server_id, desc) | private | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L1165–L1170` |
| `ServersTestV219.test_create_server_with_description` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L1172–L1180` |
| `ServersTestV219.test_update_server_with_description` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L1182–L1199` |
| `ServersTestV219.test_rebuild_server_with_description` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L1201–L1219` |
| `ServersTestV219.test_version_compatibility` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L1221–L1252` |
| `ServersTestV219.test_description_errors` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L1254–L1272` |
| `ServerTestV220` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1275–L1346` |
| `ServerTestV220.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1276–L1276` |
| `ServerTestV220.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L1278–L1280` |
| `ServerTestV220._create_server` | method | (self) | private | `(server, response['server'])` (src/nova/tests/functional/test_servers.py:L1286) | 1/5 | `src/nova/tests/functional/test_servers.py:L1282–L1286` |
| `ServerTestV220._shelve_server` | method | (self) | private | `self._wait_for_state_change(server, 'SHELVED_OFFLOADED')` (src/nova/tests/functional/test_servers.py:L1293) | 1/6 | `src/nova/tests/functional/test_servers.py:L1288–L1293` |
| `ServerTestV220._get_fake_bdms` | method | (self, ctxt) | private | `block_device_obj.block_device_make_list(self.ctxt, [fake_block_device.FakeDbBlockDeviceDict( {'device_name': '/dev/vda', 'source_type': 'volume', 'destination_type': 'volume', 'volume_id': '5d721593-f` (src/nova/tests/functional/test_servers.py:L1296) | 1/7 | `src/nova/tests/functional/test_servers.py:L1295–L1301` |
| `ServerTestV220.test_attach_detach_vol_to_shelved_offloaded_server_new_flow` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/test_servers.py:L1303–L1346` |
| `ServerTestV269` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1349–L1565` |
| `ServerTestV269.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1350–L1350` |
| `ServerTestV269.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1351–L1351` |
| `ServerTestV269.setUp` | method | (self) | public | not declared | 7/66 | `src/nova/tests/functional/test_servers.py:L1353–L1424` |
| `ServerTestV269.test_get_servers_with_down_cells` | method | (self) | public | not declared | 3/13 | `src/nova/tests/functional/test_servers.py:L1426–L1443` |
| `ServerTestV269.test_get_servers_detail_with_down_cells` | method | (self) | public | not declared | 3/12 | `src/nova/tests/functional/test_servers.py:L1445–L1464` |
| `ServerTestV269.test_get_servers_detail_limits_with_down_cells` | method | (self) | public | not declared | 2/7 | `src/nova/tests/functional/test_servers.py:L1466–L1476` |
| `ServerTestV269.test_get_servers_detail_limits_with_down_cells_the_500_gift` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L1478–L1486` |
| `ServerTestV269.test_get_servers_detail_marker_in_down_cells` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L1488–L1495` |
| `ServerTestV269.test_get_servers_detail_marker_sorting` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/test_servers.py:L1497–L1510` |
| `ServerTestV269.test_get_servers_detail_non_admin_with_deleted_flag` | method | (self) | public | not declared | 3/13 | `src/nova/tests/functional/test_servers.py:L1512–L1531` |
| `ServerTestV269.test_get_servers_detail_filters` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L1533–L1540` |
| `ServerTestV269.test_get_servers_detail_all_tenants_with_down_cells` | method | (self) | public | not declared | 5/15 | `src/nova/tests/functional/test_servers.py:L1542–L1565` |
| `ServerRebuildTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1568–L1791` |
| `ServerRebuildTestCase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1571–L1571` |
| `ServerRebuildTestCase._disable_compute_for` | method | (self, server) | private | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L1573–L1580` |
| `ServerRebuildTestCase.test_rebuild_with_image_novalidhost` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers.py:L1582–L1651` |
| `ServerRebuildTestCase.test_rebuild_with_new_image` | method | (self, mock_rebuild_claim) | public | not declared | 1/46 | `src/nova/tests/functional/test_servers.py:L1656–L1747` |
| `ServerRebuildTestCase.test_rebuild_with_new_image._get_provider_uuid_by_host` | function | (host) | private | `resp['hypervisors'][0]['id']` (src/nova/tests/functional/test_servers.py:L1670) | — | `src/nova/tests/functional/test_servers.py:L1667–L1670` |
| `ServerRebuildTestCase.test_rebuild_with_new_image._get_provider_usages` | function | (provider_uuid) | private | `self.placement.get( '/resource_providers/%s/usages' % provider_uuid).body['usages']` (src/nova/tests/functional/test_servers.py:L1673) | — | `src/nova/tests/functional/test_servers.py:L1672–L1674` |
| `ServerRebuildTestCase.test_rebuild_with_new_image._get_allocations_by_server_uuid` | function | (server_uuid) | private | `self.placement.get( '/allocations/%s' % server_uuid).body['allocations']` (src/nova/tests/functional/test_servers.py:L1677) | — | `src/nova/tests/functional/test_servers.py:L1676–L1678` |
| `ServerRebuildTestCase.test_rebuild_with_new_image._set_provider_inventory` | function | (rp_uuid, resource_class, inventory) | private | `self.placement.put( '/resource_providers/%s/inventories/%s' % (rp_uuid, resource_class), inventory).body` (src/nova/tests/functional/test_servers.py:L1685) | — | `src/nova/tests/functional/test_servers.py:L1680–L1687` |
| `ServerRebuildTestCase.test_rebuild_with_new_image.assertFlavorMatchesAllocation` | function | (flavor, allocation) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1689–L1692` |
| `ServerRebuildTestCase.test_volume_backed_rebuild_different_image` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers.py:L1749–L1791` |
| `ServerRebuildTestCaseV293` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1794–L1874` |
| `ServerRebuildTestCaseV293.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1795–L1795` |
| `ServerRebuildTestCaseV293.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L1797–L1800` |
| `ServerRebuildTestCaseV293._bfv_server` | method | (self) | private | `self._wait_for_state_change(server, 'ACTIVE')` (src/nova/tests/functional/test_servers.py:L1819) | 1/17 | `src/nova/tests/functional/test_servers.py:L1802–L1819` |
| `ServerRebuildTestCaseV293._test_rebuild` | method | (self, server) | private | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L1821–L1831` |
| `ServerRebuildTestCaseV293.test_volume_backed_rebuild_root_v293` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L1833–L1835` |
| `ServerRebuildTestCaseV293.test_volume_backed_rebuild_root_create_failed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L1837–L1848` |
| `ServerRebuildTestCaseV293.test_volume_backed_rebuild_root_instance_deleted` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L1850–L1861` |
| `ServerRebuildTestCaseV293.test_volume_backed_rebuild_root_delete_old_failed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L1863–L1874` |
| `ServersTestV280` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1877–L1955` |
| `ServersTestV280.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1878–L1878` |
| `ServersTestV280.test_get_migrations_after_cold_migrate_server_in_same_project` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_servers.py:L1880–L1910` |
| `ServersTestV280.test_get_migrations_after_live_migrate_server_in_different_project` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L1912–L1955` |
| `ServerMovingTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L1958–L3863` |
| `ServerMovingTests.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1967–L1967` |
| `ServerMovingTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L1971–L1971` |
| `ServerMovingTests.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L1973–L1991` |
| `ServerMovingTests._other_hostname` | method | (self, host) | private | `other_host[host]` (src/nova/tests/functional/test_servers.py:L1996) | 1/4 | `src/nova/tests/functional/test_servers.py:L1993–L1996` |
| `ServerMovingTests._run_periodics` | method | (self) | private | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L1998–L2013` |
| `ServerMovingTests.test_resize_revert` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2015–L2016` |
| `ServerMovingTests.test_resize_revert_reverse` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2018–L2019` |
| `ServerMovingTests.test_resize_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2021–L2022` |
| `ServerMovingTests.test_resize_confirm_reverse` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2024–L2025` |
| `ServerMovingTests.test_migration_confirm_resize_error` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L2027–L2078` |
| `ServerMovingTests.test_migration_confirm_resize_error.fake_confirm_migration` | function | (context, migration, instance, network_info) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L2043–L2045` |
| `ServerMovingTests._test_resize_revert` | method | (self, dest_hostname) | private | not declared | 1/22 | `src/nova/tests/functional/test_servers.py:L2080–L2114` |
| `ServerMovingTests._test_resize_confirm` | method | (self, dest_hostname) | private | not declared | 1/23 | `src/nova/tests/functional/test_servers.py:L2116–L2157` |
| `ServerMovingTests.test_resize_revert_same_host` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L2159–L2186` |
| `ServerMovingTests.test_resize_confirm_same_host` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L2188–L2213` |
| `ServerMovingTests.test_resize_not_enough_resource` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/test_servers.py:L2215–L2270` |
| `ServerMovingTests.test_resize_with_private_flavor` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/test_servers.py:L2272–L2307` |
| `ServerMovingTests.test_resize_delete_while_verify` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L2309–L2329` |
| `ServerMovingTests.test_resize_confirm_assert_hypervisor_usage_no_periodics` | method | (self) | public | not declared | 2/34 | `src/nova/tests/functional/test_servers.py:L2331–L2387` |
| `ServerMovingTests.test_resize_server_conflict` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L2389–L2423` |
| `ServerMovingTests.test_rebuild_server_conflict` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L2425–L2458` |
| `ServerMovingTests.test_evacuate_with_no_compute` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/test_servers.py:L2460–L2515` |
| `ServerMovingTests.test_migrate_no_valid_host` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/test_servers.py:L2517–L2552` |
| `ServerMovingTests._test_evacuate` | method | (self, keep_hypervisor_state) | private | not declared | 1/30 | `src/nova/tests/functional/test_servers.py:L2554–L2601` |
| `ServerMovingTests.test_evacuate_instance_kept_on_the_hypervisor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2603–L2604` |
| `ServerMovingTests.test_evacuate_clean_hypervisor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2606–L2607` |
| `ServerMovingTests._test_evacuate_forced_host` | method | (self, keep_hypervisor_state) | private | not declared | 1/37 | `src/nova/tests/functional/test_servers.py:L2609–L2681` |
| `ServerMovingTests.test_evacuate_forced_host_instance_kept_on_the_hypervisor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2683–L2684` |
| `ServerMovingTests.test_evacuate_forced_host_clean_hypervisor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2686–L2687` |
| `ServerMovingTests.test_evacuate_forced_host_v268` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L2689–L2710` |
| `ServerMovingTests.test_evacuate_host_specified_but_not_forced` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L2716–L2781` |
| `ServerMovingTests._test_evacuate_claim_on_dest_fails` | method | (self, keep_hypervisor_state) | private | not declared | 1/34 | `src/nova/tests/functional/test_servers.py:L2783–L2854` |
| `ServerMovingTests._test_evacuate_claim_on_dest_fails.fake_move_claim` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L2807–L2811` |
| `ServerMovingTests.test_evacuate_claim_on_dest_fails_instance_kept_on_the_hypervisor` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L2856–L2858` |
| `ServerMovingTests.test_evacuate_claim_on_dest_fails_clean_hypervisor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2860–L2861` |
| `ServerMovingTests._test_evacuate_rebuild_on_dest_fails` | method | (self, keep_hypervisor_state) | private | not declared | 1/34 | `src/nova/tests/functional/test_servers.py:L2863–L2930` |
| `ServerMovingTests._test_evacuate_rebuild_on_dest_fails.fake_rebuild` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L2884–L2887` |
| `ServerMovingTests.test_evacuate_rebuild_on_dest_fails_instance_kept_on_the_hypervisor` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L2932–L2934` |
| `ServerMovingTests.test_evacuate_rebuild_on_dest_fails_clean_hypervisor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L2936–L2937` |
| `ServerMovingTests._boot_then_shelve_and_check_allocations` | method | (self, hostname, rp_uuid) | private | `server` (src/nova/tests/functional/test_servers.py:L2956) | 1/13 | `src/nova/tests/functional/test_servers.py:L2939–L2956` |
| `ServerMovingTests.test_shelve_unshelve` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L2958–L2978` |
| `ServerMovingTests.test_shelve_unshelve_to_host` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_servers.py:L2980–L3007` |
| `ServerMovingTests.test_shelve_unshelve_to_host_instance_not_offloaded` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers.py:L3009–L3029` |
| `ServerMovingTests._shelve_offload_and_check_allocations` | method | (self, server, source_rp_uuid) | private | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L3031–L3046` |
| `ServerMovingTests.test_shelve_offload_unshelve_diff_host` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_servers.py:L3048–L3081` |
| `ServerMovingTests.test_shelve_offload_unshelve_same_host` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_servers.py:L3083–L3116` |
| `ServerMovingTests.test_live_migrate_force` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_servers.py:L3118–L3161` |
| `ServerMovingTests.test_live_migrate_forced_v268` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L3163–L3186` |
| `ServerMovingTests.test_live_migrate` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_servers.py:L3188–L3224` |
| `ServerMovingTests.test_live_migrate_pre_check_fails` | method | (self) | public | not declared | 1/31 | `src/nova/tests/functional/test_servers.py:L3226–L3293` |
| `ServerMovingTests.test_live_migrate_pre_check_fails.fake_check_can_live_migrate_destination` | function | (context, instance, src_compute_info, dst_compute_info, block_migration=False, disk_over_commit=False) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3244–L3249` |
| `ServerMovingTests.test_live_migrate_rollback_cleans_dest_node_allocations` | method | (self, mock_pre_live_migration, force=False) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L3296–L3368` |
| `ServerMovingTests.test_live_migrate_rollback_cleans_dest_node_allocations.stub_pre_live_migration` | function | (context, instance, block_device_info, network_info, disk_info, migrate_data) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3315–L3328` |
| `ServerMovingTests.test_live_migrate_rollback_cleans_dest_node_allocations_forced` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L3370–L3378` |
| `ServerMovingTests.test_rescheduling_when_migrating_instance` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_servers.py:L3380–L3427` |
| `ServerMovingTests.test_rescheduling_when_migrating_instance.fake_prep_resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3389–L3402` |
| `ServerMovingTests._test_resize_to_same_host_instance_fails` | method | (self, failing_method, event_name) | private | not declared | 2/26 | `src/nova/tests/functional/test_servers.py:L3429–L3473` |
| `ServerMovingTests._test_resize_to_same_host_instance_fails.fake_resize_method` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3444–L3447` |
| `ServerMovingTests.test_resize_to_same_host_prep_resize_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L3475–L3477` |
| `ServerMovingTests.test_resize_instance_fails_allocation_cleanup` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L3479–L3481` |
| `ServerMovingTests.test_finish_resize_fails_allocation_cleanup` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L3483–L3485` |
| `ServerMovingTests._verify_swap_resize_in_bdm` | method | (self, server_id, swap_size) | private | not declared | 6/12 | `src/nova/tests/functional/test_servers.py:L3487–L3499` |
| `ServerMovingTests._test_swap_resize` | method | (self, swap1, swap2, confirm=True) | private | not declared | 2/16 | `src/nova/tests/functional/test_servers.py:L3501–L3522` |
| `ServerMovingTests.test_swap_expand_0_to_0_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3524–L3525` |
| `ServerMovingTests.test_swap_expand_0_to_1024_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3527–L3528` |
| `ServerMovingTests.test_swap_expand_0_to_1024_revert` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3530–L3531` |
| `ServerMovingTests.test_swap_expand_1024_to_2048_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3533–L3534` |
| `ServerMovingTests.test_swap_expand_1024_to_2048_revert` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3536–L3537` |
| `ServerMovingTests.test_swap_expand_2048_to_2048_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3539–L3540` |
| `ServerMovingTests.test_swap_shrink_1024_to_0_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3542–L3543` |
| `ServerMovingTests.test_swap_shrink_1024_to_0_revert` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3545–L3546` |
| `ServerMovingTests.test_swap_shrink_2048_to_1024_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3548–L3549` |
| `ServerMovingTests.test_swap_shrink_2048_to_1024_revert` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3551–L3552` |
| `ServerMovingTests._server_created_with_host` | method | (self) | private | `server` (src/nova/tests/functional/test_servers.py:L3564) | 1/10 | `src/nova/tests/functional/test_servers.py:L3554–L3564` |
| `ServerMovingTests.test_live_migration_after_server_created_with_host` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L3566–L3585` |
| `ServerMovingTests.test_evacuate_after_server_created_with_host` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers.py:L3587–L3609` |
| `ServerMovingTests.test_resize_and_confirm_after_server_created_with_host` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L3611–L3633` |
| `ServerMovingTests.test_shelve_unshelve_after_server_created_with_host` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_servers.py:L3635–L3668` |
| `ServerMovingTests._test_resize_reschedule_uses_host_lists` | method | (self, mock_fill_provider_map, fails, num_alts=None) | private | not declared | 7/74 | `src/nova/tests/functional/test_servers.py:L3672–L3782` |
| `ServerMovingTests._test_resize_reschedule_uses_host_lists.fake_prep_resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3711–L3715` |
| `ServerMovingTests.test_resize_reschedule_uses_host_lists_1_fail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3784–L3785` |
| `ServerMovingTests.test_resize_reschedule_uses_host_lists_3_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3787–L3788` |
| `ServerMovingTests.test_resize_reschedule_uses_host_lists_not_enough_alts` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L3790–L3791` |
| `ServerMovingTests.test_migrate_confirm` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L3793–L3828` |
| `ServerMovingTests.test_migrate_confirm._check_allocation` | function | — | private | not declared | — | `src/nova/tests/functional/test_servers.py:L3808–L3818` |
| `ServerMovingTests.test_migrate_revert` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L3830–L3863` |
| `ServerMovingTests.test_migrate_revert._check_allocation` | function | — | private | not declared | — | `src/nova/tests/functional/test_servers.py:L3847–L3856` |
| `PollUnconfirmedResizesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L3866–L3927` |
| `PollUnconfirmedResizesTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3868–L3868` |
| `PollUnconfirmedResizesTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L3870–L3874` |
| `PollUnconfirmedResizesTest.test_source_host_down_during_confirm` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_servers.py:L3876–L3927` |
| `ServerLiveMigrateForceAndAbort` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L3930–L4027` |
| `ServerLiveMigrateForceAndAbort.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L3939–L3939` |
| `ServerLiveMigrateForceAndAbort.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L3941–L3948` |
| `ServerLiveMigrateForceAndAbort.test_live_migrate_force_complete` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/test_servers.py:L3950–L3987` |
| `ServerLiveMigrateForceAndAbort.test_live_migrate_delete` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_servers.py:L3989–L4027` |
| `ServerLiveMigrateForceAndAbortWithNestedResourcesRequest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4030–L4044` |
| `ServerLiveMigrateForceAndAbortWithNestedResourcesRequest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4032–L4032` |
| `ServerLiveMigrateForceAndAbortWithNestedResourcesRequest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L4034–L4044` |
| `ServerRescheduleTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4047–L4123` |
| `ServerRescheduleTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4055–L4055` |
| `ServerRescheduleTests.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L4057–L4063` |
| `ServerRescheduleTests._other_hostname` | method | (self, host) | private | `other_host[host]` (src/nova/tests/functional/test_servers.py:L4068) | 1/4 | `src/nova/tests/functional/test_servers.py:L4065–L4068` |
| `ServerRescheduleTests.test_rescheduling_when_booting_instance` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers.py:L4070–L4098` |
| `ServerRescheduleTests.test_allocation_fails_during_reschedule` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L4100–L4123` |
| `ServerRescheduleTestsWithNestedResourcesRequest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4126–L4138` |
| `ServerRescheduleTestsWithNestedResourcesRequest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4127–L4127` |
| `ServerRescheduleTestsWithNestedResourcesRequest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4129–L4138` |
| `ServerBuildAbortTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4141–L4184` |
| `ServerBuildAbortTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4149–L4149` |
| `ServerBuildAbortTests.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4151–L4157` |
| `ServerBuildAbortTests.test_abort_when_booting_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L4159–L4184` |
| `ServerBuildAbortTests.test_abort_when_booting_instance.placement_cleanup` | function | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4178–L4183` |
| `ServerDeleteBuildTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4187–L4234` |
| `ServerDeleteBuildTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4191–L4191` |
| `ServerDeleteBuildTests.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4193–L4197` |
| `ServerDeleteBuildTests.test_delete_stuck_build_instance_after_claim` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L4199–L4234` |
| `ServerBuildAbortTestsWithNestedResourceRequest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4237–L4249` |
| `ServerBuildAbortTestsWithNestedResourceRequest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4238–L4238` |
| `ServerBuildAbortTestsWithNestedResourceRequest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4240–L4249` |
| `ServerUnshelveSpawnFailTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4252–L4313` |
| `ServerUnshelveSpawnFailTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4259–L4259` |
| `ServerUnshelveSpawnFailTests.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4261–L4267` |
| `ServerUnshelveSpawnFailTests.test_driver_spawn_fail_when_unshelving_instance` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_servers.py:L4269–L4313` |
| `ServerUnshelveSpawnFailTestsWithNestedResourceRequest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4316–L4331` |
| `ServerUnshelveSpawnFailTestsWithNestedResourceRequest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4318–L4319` |
| `ServerUnshelveSpawnFailTestsWithNestedResourceRequest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L4321–L4331` |
| `ServerSoftDeleteTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4334–L4436` |
| `ServerSoftDeleteTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4336–L4336` |
| `ServerSoftDeleteTests.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4338–L4344` |
| `ServerSoftDeleteTests._soft_delete_and_check_allocation` | method | (self, server, hostname) | private | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L4346–L4371` |
| `ServerSoftDeleteTests.test_soft_delete_then_reclaim` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers.py:L4373–L4405` |
| `ServerSoftDeleteTests.test_soft_delete_then_restore` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L4407–L4436` |
| `ServerSoftDeleteTestsWithNestedResourceRequest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4439–L4451` |
| `ServerSoftDeleteTestsWithNestedResourceRequest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4440–L4440` |
| `ServerSoftDeleteTestsWithNestedResourceRequest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4442–L4451` |
| `VolumeBackedServerTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4454–L4581` |
| `VolumeBackedServerTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4457–L4457` |
| `VolumeBackedServerTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L4459–L4463` |
| `VolumeBackedServerTest._create_server` | method | (self) | private | `server` (src/nova/tests/functional/test_servers.py:L4471) | 1/7 | `src/nova/tests/functional/test_servers.py:L4465–L4471` |
| `VolumeBackedServerTest._create_volume_backed_server` | method | (self) | private | `server` (src/nova/tests/functional/test_servers.py:L4494) | 1/19 | `src/nova/tests/functional/test_servers.py:L4473–L4494` |
| `VolumeBackedServerTest.test_ephemeral_has_disk_allocation` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L4496–L4509` |
| `VolumeBackedServerTest.test_volume_backed_image_type_filter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L4511–L4518` |
| `VolumeBackedServerTest.test_volume_backed_no_disk_allocation` | method | (self) | public | not declared | 1/39 | `src/nova/tests/functional/test_servers.py:L4520–L4581` |
| `TraitsBasedSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L4584–L5064` |
| `TraitsBasedSchedulingTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L4587–L4587` |
| `TraitsBasedSchedulingTest.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_servers.py:L4589–L4614` |
| `TraitsBasedSchedulingTest._create_server_with_traits` | method | (self, flavor_id, image_id) | private | `self.api.post_server({'server': server_req})` (src/nova/tests/functional/test_servers.py:L4627) | 1/6 | `src/nova/tests/functional/test_servers.py:L4616–L4627` |
| `TraitsBasedSchedulingTest._create_volume_backed_server_with_traits` | method | (self, flavor_id, volume_id) | private | `server` (src/nova/tests/functional/test_servers.py:L4655) | 1/16 | `src/nova/tests/functional/test_servers.py:L4629–L4655` |
| `TraitsBasedSchedulingTest.test_flavor_traits_based_scheduling` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L4657–L4692` |
| `TraitsBasedSchedulingTest.test_flavor_forbidden_traits_based_scheduling` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_servers.py:L4694–L4735` |
| `TraitsBasedSchedulingTest.test_image_traits_based_scheduling` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L4737–L4753` |
| `TraitsBasedSchedulingTest.test_flavor_image_traits_based_scheduling` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L4755–L4772` |
| `TraitsBasedSchedulingTest.test_image_trait_on_volume_backed_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L4774–L4795` |
| `TraitsBasedSchedulingTest.test_flavor_image_trait_on_volume_backed_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L4797–L4819` |
| `TraitsBasedSchedulingTest.test_flavor_traits_based_scheduling_no_valid_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L4821–L4838` |
| `TraitsBasedSchedulingTest.test_image_traits_based_scheduling_no_valid_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L4840–L4857` |
| `TraitsBasedSchedulingTest.test_flavor_image_traits_based_scheduling_no_valid_host` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L4859–L4872` |
| `TraitsBasedSchedulingTest.test_image_trait_on_volume_backed_instance_no_valid_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L4874–L4892` |
| `TraitsBasedSchedulingTest.test_rebuild_instance_with_image_traits` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/test_servers.py:L4894–L4934` |
| `TraitsBasedSchedulingTest.test_rebuild_instance_with_image_traits_no_host` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/test_servers.py:L4936–L4977` |
| `TraitsBasedSchedulingTest.test_rebuild_instance_with_image_traits_no_image_change` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/test_servers.py:L4979–L5017` |
| `TraitsBasedSchedulingTest.test_rebuild_instance_with_image_traits_and_forbidden_flavor_traits` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers.py:L5019–L5064` |
| `ServerTestV256Common` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5067–L5091` |
| `ServerTestV256Common.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5068–L5068` |
| `ServerTestV256Common.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5069–L5069` |
| `ServerTestV256Common._setup_compute_service` | method | (self) | private | not declared | 2/3 | `src/nova/tests/functional/test_servers.py:L5071–L5074` |
| `ServerTestV256Common._create_server` | method | (self, target_host=None) | private | `response['server']` (src/nova/tests/functional/test_servers.py:L5084) | 2/9 | `src/nova/tests/functional/test_servers.py:L5076–L5084` |
| `ServerTestV256Common._get_target_and_other_hosts` | method | (host) | private | `target_other_hosts[host]` (src/nova/tests/functional/test_servers.py:L5091) | 1/5 | `src/nova/tests/functional/test_servers.py:L5087–L5091` |
| `ServerTestV256MultiCellTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5094–L5125` |
| `ServerTestV256MultiCellTestCase.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5098–L5098` |
| `ServerTestV256MultiCellTestCase._setup_compute_service` | method | (self) | private | not declared | 2/7 | `src/nova/tests/functional/test_servers.py:L5100–L5107` |
| `ServerTestV256MultiCellTestCase.test_migrate_server_to_host_in_different_cell` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L5109–L5125` |
| `ServerTestV256SingleCellMultiHostTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5128–L5142` |
| `ServerTestV256SingleCellMultiHostTestCase.test_migrate_server_to_host_in_same_cell` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L5133–L5142` |
| `ServerTestV256RescheduleTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5145–L5164` |
| `ServerTestV256RescheduleTestCase.test_migrate_server_not_reschedule` | method | (self, mock_prep_resize) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers.py:L5150–L5164` |
| `ConsumerGenerationConflictTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5167–L5648` |
| `ConsumerGenerationConflictTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5172–L5172` |
| `ConsumerGenerationConflictTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L5174–L5180` |
| `ConsumerGenerationConflictTest.test_create_server_fails_as_placement_reports_consumer_conflict` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_servers.py:L5182–L5214` |
| `ConsumerGenerationConflictTest.test_migrate_claim_on_dest_fails` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/test_servers.py:L5216–L5254` |
| `ConsumerGenerationConflictTest.test_migrate_move_allocation_fails_due_to_conflict` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers.py:L5256–L5302` |
| `ConsumerGenerationConflictTest.test_confirm_migrate_delete_alloc_on_source_fails` | method | (self) | public | not declared | 1/40 | `src/nova/tests/functional/test_servers.py:L5304–L5353` |
| `ConsumerGenerationConflictTest.test_revert_migrate_delete_dest_allocation_fails_due_to_conflict` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/test_servers.py:L5355–L5401` |
| `ConsumerGenerationConflictTest.test_revert_resize_same_host_delete_dest_fails_due_to_conflict` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/test_servers.py:L5403–L5452` |
| `ConsumerGenerationConflictTest.test_force_live_migrate_claim_on_dest_fails` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/test_servers.py:L5454–L5498` |
| `ConsumerGenerationConflictTest.test_live_migrate_drop_allocation_on_source_fails` | method | (self) | public | not declared | 1/50 | `src/nova/tests/functional/test_servers.py:L5500–L5584` |
| `ConsumerGenerationConflictTest.test_live_migrate_drop_allocation_on_source_fails.fake_put` | function | (_self, url, **kwargs) | public | `rsp` (src/nova/tests/functional/test_servers.py:L5528); `orig_put(_self, url, **kwargs)` (src/nova/tests/functional/test_servers.py:L5530) | — | `src/nova/tests/functional/test_servers.py:L5524–L5530` |
| `ConsumerGenerationConflictTest._test_evacuate_fails_allocating_on_dest_host` | method | (self, force) | private | not declared | 2/38 | `src/nova/tests/functional/test_servers.py:L5586–L5642` |
| `ConsumerGenerationConflictTest.test_force_evacuate_fails_allocating_on_dest_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L5644–L5645` |
| `ConsumerGenerationConflictTest.test_evacuate_fails_allocating_on_dest_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L5647–L5648` |
| `ServerMovingTestsWithNestedComputes` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5651–L5655` |
| `ServerMovingTestsWithNestedComputes.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5655–L5655` |
| `ServerMovingTestsWithNestedResourceRequests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5658–L5827` |
| `ServerMovingTestsWithNestedResourceRequests.setUp` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/test_servers.py:L5664–L5674` |
| `ServerMovingTestsWithNestedResourceRequests._check_allocation_during_evacuate` | method | (self, flavor, server_uuid, source_root_rp_uuid, dest_root_rp_uuid) | private | not declared | 4/18 | `src/nova/tests/functional/test_servers.py:L5676–L5699` |
| `ServerMovingTestsWithNestedResourceRequests.test_live_migrate_force` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers.py:L5701–L5749` |
| `ServerMovingTestsWithNestedResourceRequests._test_evacuate_forced_host` | method | (self, keep_hypervisor_state) | private | not declared | 1/47 | `src/nova/tests/functional/test_servers.py:L5751–L5827` |
| `ServerMovingTestsFromFlatToNested` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L5834–L6022` |
| `ServerMovingTestsFromFlatToNested.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5841–L5841` |
| `ServerMovingTestsFromFlatToNested.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5842–L5842` |
| `ServerMovingTestsFromFlatToNested.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L5844–L5850` |
| `ServerMovingTestsFromFlatToNested.test_force_live_migrate_from_flat_to_nested` | method | (self) | public | not declared | 1/41 | `src/nova/tests/functional/test_servers.py:L5852–L5934` |
| `ServerMovingTestsFromFlatToNested.test_force_live_migrate_from_flat_to_nested.stub_update_provider_tree` | function | (self, provider_tree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5861–L5877` |
| `ServerMovingTestsFromFlatToNested.test_force_evacuate_from_flat_to_nested` | method | (self) | public | not declared | 1/43 | `src/nova/tests/functional/test_servers.py:L5936–L6022` |
| `ServerMovingTestsFromFlatToNested.test_force_evacuate_from_flat_to_nested.stub_update_provider_tree` | function | (self, provider_tree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L5944–L5960` |
| `AcceleratorServerBase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6025–L6211` |
| `AcceleratorServerBase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6027–L6027` |
| `AcceleratorServerBase.setUp` | method | (self) | public | not declared | 2/7 | `src/nova/tests/functional/test_servers.py:L6029–L6037` |
| `AcceleratorServerBase._setup_compute_nodes_and_device_rps` | method | (self) | private | not declared | 7/24 | `src/nova/tests/functional/test_servers.py:L6039–L6072` |
| `AcceleratorServerBase._create_device_rp` | method | (self, index, compute_rp_uuid, resource='FPGA', res_amt=2) | private | `device_rp_uuid` (src/nova/tests/functional/test_servers.py:L6104) | 1/22 | `src/nova/tests/functional/test_servers.py:L6074–L6104` |
| `AcceleratorServerBase._post_nested_resource_provider` | method | (self, rp_name, parent_rp_uuid) | private | `self.placement.post( url='/resource_providers', version='1.20', body=body).body` (src/nova/tests/functional/test_servers.py:L6108) | 1/4 | `src/nova/tests/functional/test_servers.py:L6106–L6109` |
| `AcceleratorServerBase._create_acc_flavor` | method | (self) | private | `flavor_id` (src/nova/tests/functional/test_servers.py:L6115) | 1/5 | `src/nova/tests/functional/test_servers.py:L6111–L6115` |
| `AcceleratorServerBase._check_allocations_usage` | method | (self, server, check_other_host_alloc=True, dev_alloced=1) | private | not declared | 9/40 | `src/nova/tests/functional/test_servers.py:L6117–L6177` |
| `AcceleratorServerBase._check_no_allocs_usage` | method | (self, server_uuid) | private | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6179–L6181` |
| `AcceleratorServerBase._check_resource_released` | method | (self, server) | private | not declared | 4/14 | `src/nova/tests/functional/test_servers.py:L6183–L6197` |
| `AcceleratorServerBase._test_evacuate` | method | (self, server, num_hosts) | private | `compute_to_stop, compute_to_evacuate` (src/nova/tests/functional/test_servers.py:L6211) | 3/12 | `src/nova/tests/functional/test_servers.py:L6199–L6211` |
| `AcceleratorServerTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6214–L6304` |
| `AcceleratorServerTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6215–L6217` |
| `AcceleratorServerTest._get_server` | method | (self, expected_state='ACTIVE') | private | `server` (src/nova/tests/functional/test_servers.py:L6226) | 1/8 | `src/nova/tests/functional/test_servers.py:L6219–L6226` |
| `AcceleratorServerTest.test_create_delete_server_ok` | method | (self) | public | not declared | 2/11 | `src/nova/tests/functional/test_servers.py:L6228–L6247` |
| `AcceleratorServerTest.test_create_server_with_error` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers.py:L6249–L6280` |
| `AcceleratorServerTest.test_create_server_with_error.throw_error` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6251–L6253` |
| `AcceleratorServerTest.test_create_server_with_error.placement_cleanup` | function | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6267–L6269` |
| `AcceleratorServerTest.test_create_server_with_local_delete` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_servers.py:L6282–L6304` |
| `AcceleratorServerReschedTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6307–L6363` |
| `AcceleratorServerReschedTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6309–L6311` |
| `AcceleratorServerReschedTest.test_resched` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L6313–L6335` |
| `AcceleratorServerReschedTest.test_resched.fake_spawn` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6316–L6322` |
| `AcceleratorServerReschedTest.test_resched_fails` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L6337–L6363` |
| `AcceleratorServerReschedTest.test_resched_fails.throw_error` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6339–L6341` |
| `AcceleratorServerOpsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6366–L6632` |
| `AcceleratorServerOpsTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6368–L6376` |
| `AcceleratorServerOpsTest.test_soft_reboot_ok` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6378–L6380` |
| `AcceleratorServerOpsTest.test_hard_reboot_ok` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6382–L6384` |
| `AcceleratorServerOpsTest.test_pause_unpause_ok` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L6386–L6397` |
| `AcceleratorServerOpsTest.test_stop_start_ok` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L6399–L6410` |
| `AcceleratorServerOpsTest.test_lock_unlock_ok` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6412–L6422` |
| `AcceleratorServerOpsTest.test_backup_ok` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L6424–L6430` |
| `AcceleratorServerOpsTest.test_create_image_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6432–L6437` |
| `AcceleratorServerOpsTest.test_rescue_unrescue_ok` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L6439–L6450` |
| `AcceleratorServerOpsTest.test_evacuate_ok` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers.py:L6452–L6464` |
| `AcceleratorServerOpsTest.test_rebuild_ok` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6466–L6474` |
| `AcceleratorServerOpsTest.test_shelve_and_unshelve_ok` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L6476–L6485` |
| `AcceleratorServerOpsTest.test_shelve_offload_and_unshelve_ok` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L6487–L6498` |
| `AcceleratorServerOpsTest.test_resize_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6500–L6505` |
| `AcceleratorServerOpsTest.test_suspend_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L6507–L6511` |
| `AcceleratorServerOpsTest.test_migrate_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L6513–L6517` |
| `AcceleratorServerOpsTest.test_live_migrate_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6519–L6524` |
| `AcceleratorServerOpsTest.test_evacuate_old_compute` | method | (self, old_compute_version) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L6527–L6541` |
| `AcceleratorServerOpsTest.test_rebuild_old_compute` | method | (self, old_compute_version) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L6544–L6557` |
| `AcceleratorServerOpsTest.test_shelve_old_compute` | method | (self, old_compute_version) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L6560–L6569` |
| `AcceleratorServerOpsTest._test_shelve_instance_with_compute_rpc_pin` | method | (self, version_cap, body=None) | private | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6571–L6577` |
| `AcceleratorServerOpsTest.test_shelve_with_compute_rpc_pin_5_0` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L6579–L6585` |
| `AcceleratorServerOpsTest.test_shelve_instance_5_13` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L6587–L6590` |
| `AcceleratorServerOpsTest._test_shelve_offload_instance_with_compute_rpc_pin` | method | (self, version_cap) | private | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L6592–L6600` |
| `AcceleratorServerOpsTest.test_shelve_offload_instance_5_0` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L6602–L6603` |
| `AcceleratorServerOpsTest.test_shelve_offload_instance_5_13` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers.py:L6605–L6606` |
| `AcceleratorServerOpsTest._test_unshelve_instance_with_compute_rpc_pin` | method | (self, version_cap, body=None) | private | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L6608–L6617` |
| `AcceleratorServerOpsTest.test_unshelve_instance_5_0` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L6619–L6622` |
| `AcceleratorServerOpsTest.test_unshelve_instance_5_2` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L6624–L6627` |
| `AcceleratorServerOpsTest.test_unshelve_instance_5_13` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers.py:L6629–L6632` |
| `TwoPortsAcceleratorServerOpsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6635–L6695` |
| `TwoPortsAcceleratorServerOpsTest.setUp` | method | (self) | public | not declared | 2/12 | `src/nova/tests/functional/test_servers.py:L6636–L6647` |
| `TwoPortsAcceleratorServerOpsTest._check_neutron_binding_info_cleaned` | method | (self) | private | not declared | 2/6 | `src/nova/tests/functional/test_servers.py:L6649–L6654` |
| `TwoPortsAcceleratorServerOpsTest.test_create_with_two_accels_ok` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L6656–L6673` |
| `TwoPortsAcceleratorServerOpsTest.test_create_with_two_accels_all_binding_error` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_servers.py:L6675–L6695` |
| `TwoPortsAcceleratorServerOpsTest.test_create_with_two_accels_all_binding_error.throw_error` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6676–L6678` |
| `PortAcceleratorServerOpsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6698–L6895` |
| `PortAcceleratorServerOpsTest.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers.py:L6700–L6733` |
| `PortAcceleratorServerOpsTest.test_delete_server` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6735–L6744` |
| `PortAcceleratorServerOpsTest.test_soft_reboot_ok` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6746–L6748` |
| `PortAcceleratorServerOpsTest.test_hard_reboot_ok` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers.py:L6750–L6752` |
| `PortAcceleratorServerOpsTest.test_pause_unpause_ok` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L6754–L6765` |
| `PortAcceleratorServerOpsTest.test_stop_start_ok` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_servers.py:L6767–L6776` |
| `PortAcceleratorServerOpsTest.test_lock_unlock_ok` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6778–L6788` |
| `PortAcceleratorServerOpsTest.test_backup_ok` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L6790–L6796` |
| `PortAcceleratorServerOpsTest.test_create_image_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6798–L6803` |
| `PortAcceleratorServerOpsTest.test_rescue_unrescue_ok` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L6805–L6816` |
| `PortAcceleratorServerOpsTest.test_rebuild_ok` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6818–L6826` |
| `PortAcceleratorServerOpsTest.test_resize_reject` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6828–L6833` |
| `PortAcceleratorServerOpsTest.test_suspend_reject` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L6835–L6839` |
| `PortAcceleratorServerOpsTest.test_migrate_reject` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L6841–L6845` |
| `PortAcceleratorServerOpsTest.test_live_migrate_reject` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6847–L6852` |
| `PortAcceleratorServerOpsTest.test_shelve_reject` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6854–L6859` |
| `PortAcceleratorServerOpsTest.test_shelve_offload_reject` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers.py:L6861–L6866` |
| `PortAcceleratorServerOpsTest.test_evacuate_reject` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L6868–L6877` |
| `PortAcceleratorServerOpsTest.test_port_attach_interface_reject` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_servers.py:L6879–L6888` |
| `PortAcceleratorServerOpsTest.test_port_detach_interface_reject` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L6890–L6895` |
| `PortAcceleratorServerCreateRejectTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6898–L6931` |
| `PortAcceleratorServerCreateRejectTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L6900–L6911` |
| `PortAcceleratorServerCreateRejectTest.test_reject_multi_device_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_servers.py:L6913–L6919` |
| `PortAcceleratorServerCreateRejectTest.test_reject_if_have_old_version_service` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L6921–L6931` |
| `PortAcceleratorServerCreateRejectTest.test_reject_if_have_old_version_service.get_min_version` | function | (*args, **kwargs) | public | `56` (src/nova/tests/functional/test_servers.py:L6923) | — | `src/nova/tests/functional/test_servers.py:L6922–L6923` |
| `PortAndFlavorAccelsServerCreateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6934–L6986` |
| `PortAndFlavorAccelsServerCreateTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers.py:L6936–L6950` |
| `PortAndFlavorAccelsServerCreateTest.test_accels_from_both_port_and_flavor` | method | (self) | public | not declared | 3/27 | `src/nova/tests/functional/test_servers.py:L6952–L6986` |
| `PortBindingShelvedServerTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L6989–L7063` |
| `PortBindingShelvedServerTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers.py:L6992–L6992` |
| `PortBindingShelvedServerTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers.py:L6994–L6998` |
| `PortBindingShelvedServerTest.list_extensions` | method | (self, *args, **kwargs) | public | `{ 'extensions': [ { # Copied from neutron-lib dns.py "updated": "2015-08-15T18:00:00-00:00", "name": neutron_constants.DNS_INTEGRATION, "links": [], "alias": "dns-integration", "description": "Provide` (src/nova/tests/functional/test_servers.py:L7001) | 1/12 | `src/nova/tests/functional/test_servers.py:L7000–L7012` |
| `PortBindingShelvedServerTest.test_shelve_offload_with_port` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L7014–L7039` |
| `PortBindingShelvedServerTest.test_shelve_offload_with_port_preserve_dns` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers.py:L7041–L7063` |
| `CreateServerConstraintsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers.py:L7066–L7112` |
| `CreateServerConstraintsTest.test_create_server_locked_memory_without_mem_page_size` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers.py:L7068–L7078` |
| `CreateServerConstraintsTest.test_create_server_locked_memory_conflict` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers.py:L7080–L7094` |
| `CreateServerConstraintsTest.test_create_server_amd_sev_snp_non_stateless_firmware` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_servers.py:L7096–L7112` |
| `ServerTestV256Common._get_target_and_other_hosts` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_servers.py:L5086–L5091` |

## Dependencies

- `import collections` (src/nova/tests/functional/test_servers.py:L16)
- `import copy` (src/nova/tests/functional/test_servers.py:L17)
- `import datetime` (src/nova/tests/functional/test_servers.py:L18)
- `import time` (src/nova/tests/functional/test_servers.py:L19)
- `unittest`: imports `mock` (src/nova/tests/functional/test_servers.py:L20)
- `import zlib` (src/nova/tests/functional/test_servers.py:L21)
- `cinderclient`: imports `exceptions as cinder_exception` (src/nova/tests/functional/test_servers.py:L23)
- `keystoneauth1`: imports `adapter` (src/nova/tests/functional/test_servers.py:L24)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/test_servers.py:L25)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/functional/test_servers.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/test_servers.py:L27)
- `oslo_serialization`: imports `base64` (src/nova/tests/functional/test_servers.py:L28)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/test_servers.py:L29)
- `oslo_utils`: imports `fixture as osloutils_fixture` (src/nova/tests/functional/test_servers.py:L30)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_servers.py:L31)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/test_servers.py:L32)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/functional/test_servers.py:L34)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_servers.py:L35)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/functional/test_servers.py:L36)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/functional/test_servers.py:L37)
- `nova`: imports `context` (src/nova/tests/functional/test_servers.py:L38)
- `nova`: imports `exception` (src/nova/tests/functional/test_servers.py:L39)
- `nova.network`: imports `constants as neutron_constants` (src/nova/tests/functional/test_servers.py:L40)
- `nova.network`: imports `neutron as neutronapi` (src/nova/tests/functional/test_servers.py:L41)
- `nova`: imports `objects` (src/nova/tests/functional/test_servers.py:L42)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/functional/test_servers.py:L43)
- `nova.scheduler`: imports `utils` (src/nova/tests/functional/test_servers.py:L44)
- `nova`: imports `test` (src/nova/tests/functional/test_servers.py:L45)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_servers.py:L46)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_servers.py:L47)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_servers.py:L48)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/test_servers.py:L49)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/functional/test_servers.py:L50)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/functional/test_servers.py:L51)
- `nova.tests.unit.objects`: imports `test_instance_info_cache` (src/nova/tests/functional/test_servers.py:L52)
- `nova`: imports `utils as nova_utils` (src/nova/tests/functional/test_servers.py:L53)
- `nova.virt`: imports `fake` (src/nova/tests/functional/test_servers.py:L54)
- `nova`: imports `volume` (src/nova/tests/functional/test_servers.py:L55)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/test_servers.py:L57)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/test_servers.py:L59)
- **global-mutation**: NUMBER_OF_CELLS = 3 (src/nova/tests/functional/test_servers.py:L1351)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/functional/test_servers.py:L1967)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/test_servers.py:L5069)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_servers.py:L5098)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/functional/test_servers.py:L5841)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import adapter (src/nova/tests/functional/test_servers.py:L24)
- **sink** (`db-write`): post['rebuild'].update({ (src/nova/tests/functional/test_servers.py:L594)
- **sink** (`db-write`): post['rebuild'].update({ (src/nova/tests/functional/test_servers.py:L1097)
- **sink** (`db-write`): self._update_assertRaisesRegex(server_id, 'test update 2.18') (src/nova/tests/functional/test_servers.py:L1231)
- **sink** (`db-write`): server.update({'networks': 'auto'}) (src/nova/tests/functional/test_servers.py:L5079)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put') as mock_put: (src/nova/tests/functional/test_servers.py:L5192)
- **sink** (`db-write`): self.assertIn('Failed to update allocations for consumer', (src/nova/tests/functional/test_servers.py:L5208)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put') as mock_put: (src/nova/tests/functional/test_servers.py:L5225)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.post', (src/nova/tests/functional/test_servers.py:L5269)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put', (src/nova/tests/functional/test_servers.py:L5321)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.post', (src/nova/tests/functional/test_servers.py:L5372)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.post', (src/nova/tests/functional/test_servers.py:L5423)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put', (src/nova/tests/functional/test_servers.py:L5474)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put', new=fake_put): (src/nova/tests/functional/test_servers.py:L5532)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put', (src/nova/tests/functional/test_servers.py:L5611)

