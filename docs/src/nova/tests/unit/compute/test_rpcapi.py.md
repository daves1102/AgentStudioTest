# src/nova/tests/unit/compute/test_rpcapi.py

## Overview

This file implements the `test_rpcapi` module, defining 1 class, 112 methods, 15 imports.

Lines: total 1427, code 1203, comment 79, blank 145

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeRpcAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_rpcapi.py:L38–L1427` |
| `ComputeRpcAPITestCase.setUp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_rpcapi.py:L40–L67` |
| `ComputeRpcAPITestCase.tearDown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L69–L72` |
| `ComputeRpcAPITestCase.test_auto_pin` | method | (self, mock_get_min) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L75–L81` |
| `ComputeRpcAPITestCase.test_auto_pin_fails_if_too_old` | method | (self, mock_get_min) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_rpcapi.py:L84–L89` |
| `ComputeRpcAPITestCase.test_auto_pin_with_service_version_zero` | method | (self, mock_get_min) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L92–L101` |
| `ComputeRpcAPITestCase.test_auto_pin_caches` | method | (self, mock_get_min) | public | not declared | 2/9 | `src/nova/tests/unit/compute/test_rpcapi.py:L104–L112` |
| `ComputeRpcAPITestCase._test_compute_api` | method | (self, method, rpc_method, expected_args=None, **kwargs) | private | not declared | 18/73 | `src/nova/tests/unit/compute/test_rpcapi.py:L114–L209` |
| `ComputeRpcAPITestCase.test_add_fixed_ip_to_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L211–L214` |
| `ComputeRpcAPITestCase.test_attach_interface` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L216–L220` |
| `ComputeRpcAPITestCase.test_attach_volume` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L222–L225` |
| `ComputeRpcAPITestCase.test_check_instance_shared_storage` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L227–L233` |
| `ComputeRpcAPITestCase.test_check_instance_shared_storage_old_compute` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_rpcapi.py:L235–L254` |
| `ComputeRpcAPITestCase.test_confirm_resize_cast` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L256–L259` |
| `ComputeRpcAPITestCase.test_confirm_resize_call` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L261–L264` |
| `ComputeRpcAPITestCase.test_detach_interface` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L266–L269` |
| `ComputeRpcAPITestCase.test_detach_volume` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L271–L274` |
| `ComputeRpcAPITestCase.test_finish_resize` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_rpcapi.py:L276–L281` |
| `ComputeRpcAPITestCase.test_finish_resize_old_compute` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_rpcapi.py:L283–L307` |
| `ComputeRpcAPITestCase.test_finish_revert_resize` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_rpcapi.py:L309–L314` |
| `ComputeRpcAPITestCase.test_finish_revert_resize_old_compute` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_rpcapi.py:L316–L338` |
| `ComputeRpcAPITestCase.test_get_console_output` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L340–L343` |
| `ComputeRpcAPITestCase.test_get_diagnostics` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L345–L347` |
| `ComputeRpcAPITestCase.test_get_instance_diagnostics` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L349–L353` |
| `ComputeRpcAPITestCase.test_get_vnc_console` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L355–L358` |
| `ComputeRpcAPITestCase.test_get_spice_console` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L360–L363` |
| `ComputeRpcAPITestCase.test_get_serial_console` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L365–L368` |
| `ComputeRpcAPITestCase.test_get_mks_console` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L370–L373` |
| `ComputeRpcAPITestCase.test_validate_console_port` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L375–L379` |
| `ComputeRpcAPITestCase.test_host_maintenance_mode` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L381–L383` |
| `ComputeRpcAPITestCase.test_host_power_action` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L385–L387` |
| `ComputeRpcAPITestCase.test_inject_network_info` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L389–L391` |
| `ComputeRpcAPITestCase.test_live_migration` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L393–L399` |
| `ComputeRpcAPITestCase.test_live_migration_force_complete` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_rpcapi.py:L401–L420` |
| `ComputeRpcAPITestCase.test_live_migration_abort` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L422–L425` |
| `ComputeRpcAPITestCase.test_post_live_migration_at_destination` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L427–L433` |
| `ComputeRpcAPITestCase.test_pause_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L435–L437` |
| `ComputeRpcAPITestCase.test_soft_delete_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L439–L441` |
| `ComputeRpcAPITestCase.test_swap_volume` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L443–L447` |
| `ComputeRpcAPITestCase.test_restore_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L449–L451` |
| `ComputeRpcAPITestCase.test_pre_live_migration` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L453–L462` |
| `ComputeRpcAPITestCase.test_supports_numa_live_migration` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_rpcapi.py:L464–L477` |
| `ComputeRpcAPITestCase.test_check_can_live_migrate_destination` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_rpcapi.py:L479–L489` |
| `ComputeRpcAPITestCase.test_check_can_live_migrate_destination_backlevel` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_rpcapi.py:L491–L518` |
| `ComputeRpcAPITestCase.test_rollback_live_migration_at_destination` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L520–L526` |
| `ComputeRpcAPITestCase.test_drop_move_claim_at_destination` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L528–L532` |
| `ComputeRpcAPITestCase.test_prep_resize` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L534–L543` |
| `ComputeRpcAPITestCase.test_prep_resize_old_compute` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_rpcapi.py:L545–L580` |
| `ComputeRpcAPITestCase.test_prep_snapshot_based_resize_at_dest` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_rpcapi.py:L582–L600` |
| `ComputeRpcAPITestCase.test_prep_snapshot_based_resize_at_dest_old_compute` | method | (self, mock_client) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_rpcapi.py:L603–L621` |
| `ComputeRpcAPITestCase.test_prep_snapshot_based_resize_at_dest_6_0_non_compat` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_rpcapi.py:L623–L654` |
| `ComputeRpcAPITestCase.test_prep_snapshot_based_resize_at_source` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_rpcapi.py:L656–L668` |
| `ComputeRpcAPITestCase.test_prep_snapshot_based_resize_at_source_old_compute` | method | (self, mock_client) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_rpcapi.py:L671–L685` |
| `ComputeRpcAPITestCase.test_finish_snapshot_based_resize_at_dest` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_rpcapi.py:L687–L703` |
| `ComputeRpcAPITestCase.test_finish_snapshot_based_resize_at_dest_old_compute` | method | (self, client) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_rpcapi.py:L706–L720` |
| `ComputeRpcAPITestCase.test_finish_snapshot_based_resize_at_dest_6_0_non_compat` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_rpcapi.py:L722–L753` |
| `ComputeRpcAPITestCase.test_confirm_snapshot_based_resize_at_source` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_rpcapi.py:L755–L765` |
| `ComputeRpcAPITestCase.test_confirm_snapshot_based_resize_at_source_old_compute` | method | (self, client) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L768–L780` |
| `ComputeRpcAPITestCase.test_revert_snapshot_based_resize_at_dest` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_rpcapi.py:L782–L792` |
| `ComputeRpcAPITestCase.test_revert_snapshot_based_resize_at_dest_old_compute` | method | (self, client) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L795–L807` |
| `ComputeRpcAPITestCase.test_finish_revert_snapshot_based_resize_at_source` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_rpcapi.py:L809–L821` |
| `ComputeRpcAPITestCase.test_finish_revert_snapshot_based_resize_at_source_old_compute` | method | (self, client) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_rpcapi.py:L824–L838` |
| `ComputeRpcAPITestCase.test_reboot_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_rpcapi.py:L840–L845` |
| `ComputeRpcAPITestCase.test_rebuild_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L847–L860` |
| `ComputeRpcAPITestCase.test_rebuild_instance_old_rpcapi` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/compute/test_rpcapi.py:L862–L904` |
| `ComputeRpcAPITestCase.test_rebuild_instance_vol_backed_old_rpcapi` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_rpcapi.py:L906–L940` |
| `ComputeRpcAPITestCase.test_rebuild_instance_evacuate_old_rpcapi` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_rpcapi.py:L942–L974` |
| `ComputeRpcAPITestCase.test_reserve_block_device_name` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_rpcapi.py:L976–L983` |
| `ComputeRpcAPITestCase.test_remove_fixed_ip_from_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L985–L988` |
| `ComputeRpcAPITestCase.test_remove_volume_connection` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L990–L994` |
| `ComputeRpcAPITestCase.test_rescue_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L996–L1000` |
| `ComputeRpcAPITestCase.test_resize_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L1002–L1008` |
| `ComputeRpcAPITestCase.test_resize_instance_old_compute` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_rpcapi.py:L1010–L1035` |
| `ComputeRpcAPITestCase.test_resume_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1037–L1039` |
| `ComputeRpcAPITestCase.test_revert_resize` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L1041–L1045` |
| `ComputeRpcAPITestCase.test_revert_resize_old_compute` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_rpcapi.py:L1047–L1069` |
| `ComputeRpcAPITestCase.test_set_admin_password` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1071–L1074` |
| `ComputeRpcAPITestCase.test_set_host_enabled` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L1076–L1080` |
| `ComputeRpcAPITestCase.test_get_host_uptime` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_rpcapi.py:L1082–L1083` |
| `ComputeRpcAPITestCase.test_backup_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1085–L1088` |
| `ComputeRpcAPITestCase.test_snapshot_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1090–L1092` |
| `ComputeRpcAPITestCase.test_start_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1094–L1096` |
| `ComputeRpcAPITestCase.test_stop_instance_cast` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1098–L1101` |
| `ComputeRpcAPITestCase.test_stop_instance_call` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1103–L1106` |
| `ComputeRpcAPITestCase.test_suspend_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1108–L1110` |
| `ComputeRpcAPITestCase.test_terminate_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1112–L1115` |
| `ComputeRpcAPITestCase.test_unpause_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1117–L1119` |
| `ComputeRpcAPITestCase.test_unrescue_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1121–L1123` |
| `ComputeRpcAPITestCase.test_shelve_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1125–L1128` |
| `ComputeRpcAPITestCase.test_shelve_instance_old_rpcapi` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_rpcapi.py:L1130–L1153` |
| `ComputeRpcAPITestCase.test_shelve_offload_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1155–L1158` |
| `ComputeRpcAPITestCase.test_shelve_offload_instance_old_rpcapi` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_rpcapi.py:L1160–L1183` |
| `ComputeRpcAPITestCase.test_unshelve_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_rpcapi.py:L1185–L1190` |
| `ComputeRpcAPITestCase.test_cache_image` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_rpcapi.py:L1192–L1196` |
| `ComputeRpcAPITestCase.test_cache_image_pinned` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_rpcapi.py:L1198–L1206` |
| `ComputeRpcAPITestCase.test_unshelve_instance_old_compute` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_rpcapi.py:L1208–L1233` |
| `ComputeRpcAPITestCase.test_volume_snapshot_create` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1235–L1238` |
| `ComputeRpcAPITestCase.test_volume_snapshot_delete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_rpcapi.py:L1240–L1243` |
| `ComputeRpcAPITestCase.test_external_instance_event` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_rpcapi.py:L1245–L1250` |
| `ComputeRpcAPITestCase.test_build_and_run_instance` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_rpcapi.py:L1252–L1264` |
| `ComputeRpcAPITestCase.test_build_and_run_instance_old_rpcapi` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_rpcapi.py:L1266–L1295` |
| `ComputeRpcAPITestCase.test_quiesce_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1297–L1299` |
| `ComputeRpcAPITestCase.test_unquiesce_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1301–L1303` |
| `ComputeRpcAPITestCase.test_trigger_crash_dump` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_rpcapi.py:L1305–L1307` |
| `ComputeRpcAPITestCase.test_version_cap_no_computes_log_once` | method | (self, mock_allcells, mock_minver, mock_log) | public | not declared | 2/12 | `src/nova/tests/unit/compute/test_rpcapi.py:L1312–L1323` |
| `ComputeRpcAPITestCase.test_version_cap_all_cells` | method | (self, mock_allcells, mock_minver) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L1327–L1333` |
| `ComputeRpcAPITestCase.test_version_cap_all_cells_no_access` | method | (self, mock_allcells, mock_minver, mock_log_error) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_rpcapi.py:L1339–L1358` |
| `ComputeRpcAPITestCase.get_fake_share_mapping` | method | (self) | public | `share_mapping` (src/nova/tests/unit/compute/test_rpcapi.py:L1369) | 1/10 | `src/nova/tests/unit/compute/test_rpcapi.py:L1360–L1369` |
| `ComputeRpcAPITestCase.test_allow_share` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L1371–L1377` |
| `ComputeRpcAPITestCase.test_deny_share` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_rpcapi.py:L1379–L1385` |
| `ComputeRpcAPITestCase.test_prepare_for_alt_rpcserver_select_topic_alt` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_rpcapi.py:L1387–L1397` |
| `ComputeRpcAPITestCase.test_prepare_for_alt_rpcserver_fallback_topic_for_old_compute` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_rpcapi.py:L1399–L1409` |
| `ComputeRpcAPITestCase.test_prepare_for_alt_rpcserver_with_extra_kwargs` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_rpcapi.py:L1411–L1427` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_rpcapi.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/compute/test_rpcapi.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_rpcapi.py:L22)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/compute/test_rpcapi.py:L24)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_rpcapi.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_rpcapi.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_rpcapi.py:L27)
- `nova.objects`: imports `block_device as objects_block_dev` (src/nova/tests/unit/compute/test_rpcapi.py:L28)
- `nova.objects`: imports `migration as migration_obj` (src/nova/tests/unit/compute/test_rpcapi.py:L29)
- `nova.objects`: imports `service as service_obj` (src/nova/tests/unit/compute/test_rpcapi.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_rpcapi.py:L31)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/compute/test_rpcapi.py:L32)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/compute/test_rpcapi.py:L33)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_rpcapi.py:L34)
- `nova.tests.unit`: imports `fake_request_spec` (src/nova/tests/unit/compute/test_rpcapi.py:L35)

