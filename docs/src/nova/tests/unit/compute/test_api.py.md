# src/nova/tests/unit/compute/test_api.py

## Overview

This file implements the `test_api` module, defining 2 classs, 6 constants, 47 functions, 414 methods, 51 imports, 17 side effects, 14 security surface entries.

Lines: total 8967, code 7705, comment 339, blank 923

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L71–L71` |
| `NODENAME` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L73–L73` |
| `SHELVED_IMAGE` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L74–L74` |
| `SHELVED_IMAGE_NOT_FOUND` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L75–L75` |
| `SHELVED_IMAGE_NOT_AUTHORIZED` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L76–L76` |
| `SHELVED_IMAGE_EXCEPTION` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L77–L77` |
| `_ComputeAPIUnitTestMixIn` | class | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L81–L7676` |
| `_ComputeAPIUnitTestMixIn.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_api.py:L82–L108` |
| `_ComputeAPIUnitTestMixIn._get_vm_states` | method | (self, exclude_states=None) | private | `vm_state - exclude_states` (src/nova/tests/unit/compute/test_api.py:L118) | 2/9 | `src/nova/tests/unit/compute/test_api.py:L110–L118` |
| `_ComputeAPIUnitTestMixIn._create_flavor` | method | (self, **updates) | private | `objects.Flavor._from_db_object( self.context, objects.Flavor(extra_specs={}), flavor, expected_attrs=expected_attrs)` (src/nova/tests/unit/compute/test_api.py:L147) | 4/28 | `src/nova/tests/unit/compute/test_api.py:L120–L149` |
| `_ComputeAPIUnitTestMixIn._create_instance_obj` | method | (self, params=None, flavor=None) | private | `instance` (src/nova/tests/unit/compute/test_api.py:L202) | 4/48 | `src/nova/tests/unit/compute/test_api.py:L151–L202` |
| `_ComputeAPIUnitTestMixIn._create_keypair_obj` | method | (self, instance) | private | `keypair` (src/nova/tests/unit/compute/test_api.py:L213) | 1/9 | `src/nova/tests/unit/compute/test_api.py:L204–L213` |
| `_ComputeAPIUnitTestMixIn._obj_to_list_obj` | method | (self, list_obj, obj) | private | `list_obj` (src/nova/tests/unit/compute/test_api.py:L220) | 1/6 | `src/nova/tests/unit/compute/test_api.py:L215–L220` |
| `_ComputeAPIUnitTestMixIn.test_create_strips_internal_scheduler_hints` | method | (self, mock_build_filter) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L223–L238` |
| `_ComputeAPIUnitTestMixIn.test_create_with_networks_max_count_none` | method | (self, provision_instances, get_image, check_limit, check_requested_networks, record_action_start, build_instances, check_deltas) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_api.py:L251–L279` |
| `_ComputeAPIUnitTestMixIn.test_create_quota_exceeded_messages` | method | (self, mock_limit_check_pu, mock_limit_check, mock_count) | public | not declared | 3/29 | `src/nova/tests/unit/compute/test_api.py:L286–L319` |
| `_ComputeAPIUnitTestMixIn.test_create_volume_backed_instance_with_trusted_certs` | method | (self, check_limit) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L322–L329` |
| `_ComputeAPIUnitTestMixIn.test_create_volume_backed_instance_with_conf_trusted_certs` | method | (self, check_limit) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L332–L342` |
| `_ComputeAPIUnitTestMixIn._test_create_max_net_count` | method | (self, max_net_count, min_count, max_count) | private | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L344–L360` |
| `_ComputeAPIUnitTestMixIn.test_max_net_count_zero` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L362–L367` |
| `_ComputeAPIUnitTestMixIn.test_max_net_count_less_than_min_count` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L369–L374` |
| `_ComputeAPIUnitTestMixIn.test_specified_port_and_multiple_instances` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L376–L387` |
| `_ComputeAPIUnitTestMixIn.test_specified_ip_and_multiple_instances` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L389–L399` |
| `_ComputeAPIUnitTestMixIn.test_specified_hostname_and_multiple_instances` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L401–L407` |
| `_ComputeAPIUnitTestMixIn.test_create_mixed_instance_compute_version_fail` | method | (self, mock_pci) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L414–L431` |
| `_ComputeAPIUnitTestMixIn.test_create_volume_bdm_local_creation` | method | (self, bdm_create) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_api.py:L434–L458` |
| `_ComputeAPIUnitTestMixIn.test_attach_volume_new_flow` | method | (self, mock_attach, mock_get_by_volume) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L462–L479` |
| `_ComputeAPIUnitTestMixIn.test_tagged_volume_attach_new_flow` | method | (self, mock_attach, mock_get_by_volume) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_api.py:L483–L504` |
| `_ComputeAPIUnitTestMixIn.test_attach_volume_timeout` | method | (self, mock_get_by_volume, mock_attach) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L508–L525` |
| `_ComputeAPIUnitTestMixIn.test_attach_volume_bdm_exists` | method | (self, mock_by_volume) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_api.py:L528–L557` |
| `_ComputeAPIUnitTestMixIn.test_suspend` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_api.py:L559–L579` |
| `_ComputeAPIUnitTestMixIn._test_suspend_fails` | method | (self, vm_state) | private | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L581–L587` |
| `_ComputeAPIUnitTestMixIn.test_suspend_fails_invalid_states` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/compute/test_api.py:L589–L592` |
| `_ComputeAPIUnitTestMixIn.test_resume` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_api.py:L594–L616` |
| `_ComputeAPIUnitTestMixIn.test_start` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L618–L636` |
| `_ComputeAPIUnitTestMixIn.test_start_invalid_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L638–L643` |
| `_ComputeAPIUnitTestMixIn.test_start_no_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L645–L650` |
| `_ComputeAPIUnitTestMixIn._test_stop` | method | (self, vm_state, force=False, clean_shutdown=True) | private | not declared | 2/24 | `src/nova/tests/unit/compute/test_api.py:L652–L679` |
| `_ComputeAPIUnitTestMixIn.test_stop` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L681–L682` |
| `_ComputeAPIUnitTestMixIn.test_stop_stopped_instance_with_bypass` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L684–L685` |
| `_ComputeAPIUnitTestMixIn.test_stop_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L687–L688` |
| `_ComputeAPIUnitTestMixIn.test_stop_without_clean_shutdown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L690–L692` |
| `_ComputeAPIUnitTestMixIn.test_stop_forced_without_clean_shutdown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L694–L696` |
| `_ComputeAPIUnitTestMixIn._test_stop_invalid_state` | method | (self, vm_state) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L698–L703` |
| `_ComputeAPIUnitTestMixIn.test_stop_fails_invalid_states` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/compute/test_api.py:L705–L709` |
| `_ComputeAPIUnitTestMixIn.test_stop_a_stopped_inst` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L711–L717` |
| `_ComputeAPIUnitTestMixIn.test_stop_no_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L719–L724` |
| `_ComputeAPIUnitTestMixIn.test_trigger_crash_dump` | method | (self, trigger_crash_dump, _record_action_start) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L728–L740` |
| `_ComputeAPIUnitTestMixIn.test_trigger_crash_dump_invalid_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L742–L747` |
| `_ComputeAPIUnitTestMixIn.test_trigger_crash_dump_no_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L749–L754` |
| `_ComputeAPIUnitTestMixIn.test_trigger_crash_dump_locked` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L756–L761` |
| `_ComputeAPIUnitTestMixIn._test_reboot_type` | method | (self, vm_state, reboot_type, task_state=None) | private | not declared | 2/23 | `src/nova/tests/unit/compute/test_api.py:L763–L790` |
| `_ComputeAPIUnitTestMixIn._test_reboot_type_fails` | method | (self, reboot_type, **updates) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L792–L798` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L800–L801` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L803–L804` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_rebooting` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L806–L808` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_reboot_started` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L810–L812` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_reboot_pending` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L814–L816` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_rescued` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L818–L819` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_resuming` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L821–L823` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_unpausing` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L825–L827` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_suspending` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L829–L831` |
| `_ComputeAPIUnitTestMixIn.test_reboot_hard_error_not_launched` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L833–L835` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L837–L838` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L840–L841` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_paused` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L843–L844` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_stopped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L846–L847` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_suspended` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L849–L850` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_rebooting` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L852–L853` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_rebooting_hard` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L855–L857` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_reboot_started` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L859–L861` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_reboot_pending` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L863–L865` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_rescued` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L867–L868` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_error_not_launched` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L870–L872` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_resuming` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L874–L875` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_pausing` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L877–L878` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_unpausing` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L880–L881` |
| `_ComputeAPIUnitTestMixIn.test_reboot_soft_suspending` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L883–L884` |
| `_ComputeAPIUnitTestMixIn._test_delete_resizing_part` | method | (self, inst, deltas) | private | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L886–L889` |
| `_ComputeAPIUnitTestMixIn._set_delete_shelved_part` | method | (self, inst, mock_image_delete) | private | `snapshot_id` (src/nova/tests/unit/compute/test_api.py:L905) | 5/14 | `src/nova/tests/unit/compute/test_api.py:L891–L905` |
| `_ComputeAPIUnitTestMixIn._test_delete` | method | (self, delete_type, **attrs) | private | not declared | 1/23 | `src/nova/tests/unit/compute/test_api.py:L907–L930` |
| `_ComputeAPIUnitTestMixIn._do_delete` | method | (self, delete_type, mock_confirm, mock_terminate, mock_soft_delete, delete_time, mock_save, mock_bdm_get, mock_elevated, mock_get_cn, mock_up, mock_record, mock_inst_update, mock_deallocate, mock_inst_meta, mock_inst_destroy, mock_notify_legacy, mock_get_inst, mock_save_im, mock_image_delete, mock_mig_get, mock_notify, **attrs) | private | not declared | 27/133 | `src/nova/tests/unit/compute/test_api.py:L951–L1119` |
| `_ComputeAPIUnitTestMixIn._do_delete._reset_task_state` | function | (context, instance, migration, src_host, cast=False) | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L973–L975` |
| `_ComputeAPIUnitTestMixIn.test_delete` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1121–L1122` |
| `_ComputeAPIUnitTestMixIn.test_delete_if_not_launched` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1124–L1125` |
| `_ComputeAPIUnitTestMixIn.test_delete_in_resizing` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L1127–L1131` |
| `_ComputeAPIUnitTestMixIn.test_delete_in_resized` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1133–L1134` |
| `_ComputeAPIUnitTestMixIn.test_delete_shelved` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L1136–L1140` |
| `_ComputeAPIUnitTestMixIn.test_delete_shelved_offloaded` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L1142–L1146` |
| `_ComputeAPIUnitTestMixIn.test_delete_shelved_image_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L1148–L1152` |
| `_ComputeAPIUnitTestMixIn.test_delete_shelved_image_not_authorized` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L1154–L1158` |
| `_ComputeAPIUnitTestMixIn.test_delete_shelved_exception` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L1160–L1164` |
| `_ComputeAPIUnitTestMixIn.test_delete_with_down_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1166–L1167` |
| `_ComputeAPIUnitTestMixIn.test_delete_soft_with_down_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1169–L1170` |
| `_ComputeAPIUnitTestMixIn.test_delete_soft_in_resized` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1172–L1173` |
| `_ComputeAPIUnitTestMixIn.test_delete_soft` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1175–L1176` |
| `_ComputeAPIUnitTestMixIn.test_delete_forced` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/compute/test_api.py:L1178–L1185` |
| `_ComputeAPIUnitTestMixIn.test_delete_error_state_with_no_host` | method | (self, mock_local_delete, mock_record, mock_service_get, _mock_notify, _mock_save, mock_bdm_get, mock_lookup, _mock_del_booting) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L1196–L1214` |
| `_ComputeAPIUnitTestMixIn.test_delete_error_state_with_host_set` | method | (self, mock_local_delete, _mock_record, mock_service_up, mock_elevated, mock_service_get, _mock_notify, _mock_save, mock_bdm_get, mock_lookup, _mock_del_booting) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L1227–L1245` |
| `_ComputeAPIUnitTestMixIn.test_delete_forced_when_task_state_is_not_none` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/compute/test_api.py:L1247–L1250` |
| `_ComputeAPIUnitTestMixIn.test_delete_fast_if_host_not_set` | method | (self, mock_br_get, mock_save, mock_bdm_get, mock_cons, mock_inst_destroy, mock_notify_legacy, mock_notify) | public | not declared | 2/44 | `src/nova/tests/unit/compute/test_api.py:L1259–L1310` |
| `_ComputeAPIUnitTestMixIn.test_local_delete_with_deleted_volume` | method | (self, mock_inst_destroy, mock_elevated, mock_dealloc, mock_notify_legacy, mock_detach, mock_bdm_destroy, mock_notify) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_api.py:L1319–L1355` |
| `_ComputeAPIUnitTestMixIn.test_local_delete_for_arqs` | method | (self, mock_del_arqs, mock_inst_destroy, mock_elevated, mock_dealloc, mock_notify_legacy, mock_detach, mock_bdm_destroy, mock_notify) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_api.py:L1365–L1378` |
| `_ComputeAPIUnitTestMixIn.test_local_cleanup_bdm_volumes_stashed_connector` | method | (self, mock_destroy) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_api.py:L1381–L1421` |
| `_ComputeAPIUnitTestMixIn.test_local_cleanup_bdm_volumes_stashed_connector.do_test` | function | (self, mock_elevated, mock_delete, mock_detach, mock_terminate) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1410–L1419` |
| `_ComputeAPIUnitTestMixIn.test_local_cleanup_bdm_volumes_with_attach_id` | method | (self, mock_destroy) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L1424–L1454` |
| `_ComputeAPIUnitTestMixIn.test_local_cleanup_bdm_volumes_with_attach_id.do_test` | function | (self, mock_elevated, mock_attach_delete, mock_delete) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1445–L1453` |
| `_ComputeAPIUnitTestMixIn.test_local_cleanup_bdm_volumes_stashed_connector_host_none` | method | (self, mock_destroy) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_api.py:L1457–L1500` |
| `_ComputeAPIUnitTestMixIn.test_local_cleanup_bdm_volumes_stashed_connector_host_none.do_test` | function | (self, mock_elevated, mock_delete, mock_detach, mock_terminate) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1489–L1498` |
| `_ComputeAPIUnitTestMixIn.test_delete_disabled` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L1502–L1507` |
| `_ComputeAPIUnitTestMixIn.test_delete_soft_rollback` | method | (self, mock_get, mock_save) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L1513–L1522` |
| `_ComputeAPIUnitTestMixIn.test_attempt_delete_of_buildrequest_success` | method | (self, mock_get_by_inst) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L1525–L1533` |
| `_ComputeAPIUnitTestMixIn.test_attempt_delete_of_buildrequest_not_found` | method | (self, mock_get_by_inst) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L1536–L1543` |
| `_ComputeAPIUnitTestMixIn.test_attempt_delete_of_buildrequest_already_deleted` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L1545–L1555` |
| `_ComputeAPIUnitTestMixIn.test_delete_while_booting_buildreq_not_deleted` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L1557–L1564` |
| `_ComputeAPIUnitTestMixIn.test_delete_while_booting_buildreq_deleted_instance_none` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L1566–L1579` |
| `_ComputeAPIUnitTestMixIn.test_delete_while_booting_buildreq_deleted_instance_none.test` | function | (mock_lookup, mock_attempt) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1574–L1577` |
| `_ComputeAPIUnitTestMixIn.test_delete_while_booting_buildreq_deleted_instance_not_found` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L1581–L1595` |
| `_ComputeAPIUnitTestMixIn.test_delete_while_booting_buildreq_deleted_instance_not_found.test` | function | (mock_lookup, mock_attempt) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1590–L1593` |
| `_ComputeAPIUnitTestMixIn.test_delete_instance_from_cell0` | method | (self, destroy_mock, notify_mock, mock_bdm_get) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_api.py:L1600–L1628` |
| `_ComputeAPIUnitTestMixIn.test_delete_instance_while_booting_host_changes_lookup_fails` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_api.py:L1630–L1656` |
| `_ComputeAPIUnitTestMixIn.test_delete_instance_while_scheduling_with_bdm` | method | (self, mock_bdm_get, notify_mock, mock_bdm_destroy, instance_destroy) | public | not declared | 1/47 | `src/nova/tests/unit/compute/test_api.py:L1662–L1718` |
| `_ComputeAPIUnitTestMixIn.test_lookup_instance_mapping_none` | method | (self, mock_map_get, mock_target_cell) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L1724–L1734` |
| `_ComputeAPIUnitTestMixIn.test_lookup_instance_cell_mapping_none` | method | (self, mock_map_get, mock_target_cell) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L1739–L1749` |
| `_ComputeAPIUnitTestMixIn.test_lookup_instance_cell_mapping` | method | (self, mock_target_cell) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_api.py:L1752–L1774` |
| `_ComputeAPIUnitTestMixIn.test_lookup_instance_cell_mapping.test` | function | (mock_inst_get, mock_map_get) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1764–L1772` |
| `_ComputeAPIUnitTestMixIn._test_confirm_resize` | method | (self, mock_elevated, mock_get, mock_save, mock_service_is_up, mock_get_service, mig_ref_passed=False) | private | not declared | 4/35 | `src/nova/tests/unit/compute/test_api.py:L1781–L1823` |
| `_ComputeAPIUnitTestMixIn._test_confirm_resize._check_mig` | function | (expected_task_state=None) | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1801–L1802` |
| `_ComputeAPIUnitTestMixIn.test_confirm_resize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1825–L1826` |
| `_ComputeAPIUnitTestMixIn.test_confirm_resize_with_migration_ref` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1828–L1829` |
| `_ComputeAPIUnitTestMixIn.test_get_source_compute_service` | method | (self, mock_service_get, mock_hm_get) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L1837–L1857` |
| `_ComputeAPIUnitTestMixIn._test_revert_resize` | method | (self, mock_get_reqspec, mock_elevated, mock_get_migration, mock_check, mock_get_host_az, mock_get_requested_resources, mock_get_numa, same_flavor) | private | not declared | 3/68 | `src/nova/tests/unit/compute/test_api.py:L1868–L1956` |
| `_ComputeAPIUnitTestMixIn._test_revert_resize._check_reqspec` | function | — | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1901–L1908` |
| `_ComputeAPIUnitTestMixIn._test_revert_resize._check_state` | function | (expected_task_state=None) | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1910–L1912` |
| `_ComputeAPIUnitTestMixIn._test_revert_resize._check_mig` | function | — | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L1914–L1915` |
| `_ComputeAPIUnitTestMixIn.test_revert_resize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1958–L1959` |
| `_ComputeAPIUnitTestMixIn.test_revert_resize_same_flavor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L1961–L1965` |
| `_ComputeAPIUnitTestMixIn.test_revert_resize_concurrent_fail` | method | (self, mock_reqspec, mock_elevated, mock_get_migration, mock_check, mock_get_host_az, mock_get_requested_resources) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_api.py:L1974–L2004` |
| `_ComputeAPIUnitTestMixIn._test_resize` | method | (self, mock_get_all_by_host, mock_get_by_instance_uuid, mock_get_flavor, mock_upsize, mock_inst_save, mock_count, mock_limit, mock_record, mock_migration, mock_validate, mock_is_vol_backed, mock_allow_resize_to_same_host, mock_get_numa, flavor_id_passed=True, same_host=False, allow_same_host=False, project_id=None, same_flavor=False, clean_shutdown=True, host_name=None, request_spec=True, requested_destination=False, allow_cross_cell_resize=False) | private | not declared | 27/166 | `src/nova/tests/unit/compute/test_api.py:L2024–L2222` |
| `_ComputeAPIUnitTestMixIn._test_resize._check_state` | function | (expected_task_state=None) | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L2087–L2090` |
| `_ComputeAPIUnitTestMixIn.test_resize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2224–L2225` |
| `_ComputeAPIUnitTestMixIn.test_resize_same_host_and_allowed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2227–L2228` |
| `_ComputeAPIUnitTestMixIn.test_resize_same_host_and_not_allowed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2230–L2231` |
| `_ComputeAPIUnitTestMixIn.test_resize_different_project_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2233–L2234` |
| `_ComputeAPIUnitTestMixIn.test_resize_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2236–L2237` |
| `_ComputeAPIUnitTestMixIn.test_resize_allow_cross_cell_resize_true` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2239–L2240` |
| `_ComputeAPIUnitTestMixIn.test_resize_quota_check` | method | (self, mock_check, mock_count, mock_get) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_api.py:L2249–L2275` |
| `_ComputeAPIUnitTestMixIn.test_resize__with_accelerator` | method | (self, mock_get_flavor) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L2282–L2294` |
| `_ComputeAPIUnitTestMixIn.test_resize_with_extended_resource_request_old_compute` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L2308–L2315` |
| `_ComputeAPIUnitTestMixIn.test_resize_with_shares_old_compute_blocked` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L2329–L2336` |
| `_ComputeAPIUnitTestMixIn.test_resize_with_shares_new_compute_allowed` | method | (self, mock_get_flavor) | public | not declared | 3/14 | `src/nova/tests/unit/compute/test_api.py:L2351–L2368` |
| `_ComputeAPIUnitTestMixIn.test_resize_with_shares_old_service_version_blocked` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L2382–L2389` |
| `_ComputeAPIUnitTestMixIn._test_migrate` | method | (self, *args, **kwargs) | private | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2391–L2392` |
| `_ComputeAPIUnitTestMixIn.test_migrate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2394–L2395` |
| `_ComputeAPIUnitTestMixIn.test_migrate_same_host_and_allowed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2397–L2398` |
| `_ComputeAPIUnitTestMixIn.test_migrate_same_host_and_not_allowed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2400–L2401` |
| `_ComputeAPIUnitTestMixIn.test_migrate_different_project_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2403–L2404` |
| `_ComputeAPIUnitTestMixIn.test_migrate_request_spec_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2406–L2407` |
| `_ComputeAPIUnitTestMixIn.test_migrate_with_requested_destination` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2409–L2411` |
| `_ComputeAPIUnitTestMixIn.test_migrate_with_host_name` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L2413–L2414` |
| `_ComputeAPIUnitTestMixIn.test_migrate_with_host_name_allow_cross_cell_resize_true` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L2416–L2418` |
| `_ComputeAPIUnitTestMixIn.test_migrate_nonexistent_host` | method | (self, mock_get_all_by_host) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L2425–L2429` |
| `_ComputeAPIUnitTestMixIn.test_resize_invalid_flavor_fails` | method | (self, mock_get_flavor, mock_count, mock_limit, mock_record, mock_save) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_api.py:L2438–L2458` |
| `_ComputeAPIUnitTestMixIn.test_resize_vol_backed_smaller_min_ram` | method | (self, mock_get_flavor, mock_count, mock_limit, mock_record, mock_save, mock_is_vol_backed) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_api.py:L2469–L2492` |
| `_ComputeAPIUnitTestMixIn.test_resize_disabled_flavor_fails` | method | (self, mock_get_flavor, mock_count, mock_limit, mock_record, mock_save) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L2501–L2522` |
| `_ComputeAPIUnitTestMixIn.test_resize_to_zero_disk_flavor_fails` | method | (self, get_flavor_by_flavor_id) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L2527–L2538` |
| `_ComputeAPIUnitTestMixIn.test_resize_to_zero_disk_flavor_volume_backed` | method | (self, get_flavor_by_flavor_id, resize_instance_mock, record_mock, get_by_inst, validate_mock) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L2547–L2569` |
| `_ComputeAPIUnitTestMixIn.test_resize_to_zero_disk_flavor_volume_backed.do_test` | function | (mock_save, mock_volume) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L2564–L2567` |
| `_ComputeAPIUnitTestMixIn.test_resize_quota_exceeds_fails` | method | (self, mock_get_flavor, mock_upsize, mock_count, mock_limit, mock_record, mock_save) | public | not declared | 1/42 | `src/nova/tests/unit/compute/test_api.py:L2582–L2631` |
| `_ComputeAPIUnitTestMixIn.test_resize_quota_exceeds_fails_instance` | method | (self, mock_check, mock_count, mock_upsize, mock_flavor) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L2641–L2660` |
| `_ComputeAPIUnitTestMixIn.test_resize_instance_quota_exceeds_with_multiple_resources` | method | (self, mock_check, mock_count, mock_get_flavor) | public | not declared | 2/27 | `src/nova/tests/unit/compute/test_api.py:L2669–L2696` |
| `_ComputeAPIUnitTestMixIn.test_resize_instance_quota_exceeds_with_multiple_resources_ul` | method | (self, mock_get_flavor, mock_enforce) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_api.py:L2704–L2723` |
| `_ComputeAPIUnitTestMixIn.test_resize_mixed_instance_compute_version_low_fails` | method | (self, mock_get_flavor, mock_image, mock_spec) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_api.py:L2735–L2769` |
| `_ComputeAPIUnitTestMixIn.test_pause` | method | (self, mock_save, mock_record) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L2773–L2790` |
| `_ComputeAPIUnitTestMixIn._test_pause_fails` | method | (self, vm_state) | private | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L2792–L2798` |
| `_ComputeAPIUnitTestMixIn.test_pause_fails_invalid_states` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/compute/test_api.py:L2800–L2803` |
| `_ComputeAPIUnitTestMixIn.test_unpause` | method | (self, mock_save, mock_record) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L2807–L2824` |
| `_ComputeAPIUnitTestMixIn.test_get_diagnostics_none_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L2826–L2831` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_diagnostics_none_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L2833–L2838` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_active_vm_state` | method | (self, mock_nodelist) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L2841–L2843` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_paused_vm_state` | method | (self, mock_nodelist) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L2846–L2849` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_messaging_timeout` | method | (self, _save, _action, get_spec, add_instance_fault_from_exc, mock_nodelist, mock_get_bdms) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L2857–L2873` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_computehost_notfound` | method | (self, mock_nodelist, mock_action, mock_get_spec) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L2880–L2890` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_with_extended_resource_request_old_compute` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L2900–L2907` |
| `_ComputeAPIUnitTestMixIn._fake_live_migrate_block_devices` | method | (self, instance, volume_status="in-use") | private | `fake_bdms, volume` (src/nova/tests/unit/compute/test_api.py:L2922) | 1/12 | `src/nova/tests/unit/compute/test_api.py:L2909–L2922` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_volume_not_inuse` | method | (self, mock_nodelist, _action, _save, get_spec, mock_get_bdms) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_api.py:L2929–L2958` |
| `_ComputeAPIUnitTestMixIn._live_migrate_instance` | method | (self, instance, _save, _action, get_spec, mock_get_bdms) | private | not declared | 1/29 | `src/nova/tests/unit/compute/test_api.py:L2964–L2996` |
| `_ComputeAPIUnitTestMixIn._get_volumes_for_test_swap_volume` | method | (self) | private | `volumes` (src/nova/tests/unit/compute/test_api.py:L3016) | 1/18 | `src/nova/tests/unit/compute/test_api.py:L2998–L3016` |
| `_ComputeAPIUnitTestMixIn._get_instance_for_test_swap_volume` | method | (self) | private | `fake_instance.fake_instance_obj(None, **{ 'vm_state': vm_states.ACTIVE, 'launched_at': timeutils.utcnow(), 'locked': False, 'availability_zone': 'fake_az', 'uuid': uuids.vol_instance, 'task_state': No` (src/nova/tests/unit/compute/test_api.py:L3019) | 1/8 | `src/nova/tests/unit/compute/test_api.py:L3018–L3025` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume_for_precheck_with_exception` | method | (self, exc, instance_update=None, volume_update=None) | private | not declared | 3/13 | `src/nova/tests/unit/compute/test_api.py:L3027–L3040` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_with_invalid_server_state` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L3042–L3052` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_with_another_server_volume` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L3054–L3062` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_with_new_volume_attached` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3064–L3069` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_with_smaller_new_volume` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3071–L3076` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_with_swap_volume_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3078–L3079` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_volume_api_usage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3081–L3082` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_volume_api_usage_new_attach_flow` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3084–L3085` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_with_swap_volume_error_new_attach_flow` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3087–L3089` |
| `_ComputeAPIUnitTestMixIn.test_swap_volume_new_vol_already_attached_new_flow` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3091–L3093` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume` | method | (self, expected_exception=None, attachment_id=None, volume_already_attached=False) | private | not declared | 1/33 | `src/nova/tests/unit/compute/test_api.py:L3095–L3244` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_vol_api_begin_detaching` | function | (context, volume_id) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3100–L3102` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_vol_api_roll_detaching` | function | (context, volume_id) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3104–L3107` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_vol_api_reserve` | function | (context, volume_id) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3109–L3112` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_vol_api_unreserve` | function | (context, volume_id) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3114–L3117` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_vol_api_attachment_create` | function | (context, volume_id, instance_id) | public | `{'id': uuids.attachment_id}` (src/nova/tests/unit/compute/test_api.py:L3123) | — | `src/nova/tests/unit/compute/test_api.py:L3119–L3123` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_vol_api_attachment_delete` | function | (context, attachment_id) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3125–L3128` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume.fake_volume_is_attached` | function | (context, instance, volume_id) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3130–L3134` |
| `_ComputeAPIUnitTestMixIn._test_swap_volume._do_test` | function | (mock_begin_detaching, mock_get_by_volume_and_instance, mock_roll_detaching, mock_attachment_create, mock_check_volume_attached, mock_reserve_volume, mock_attachment_delete, mock_unreserve_volume, mock_swap_volume, mock_record) | private | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3156–L3242` |
| `_ComputeAPIUnitTestMixIn.test_count_attachments_for_swap_not_found_and_readonly` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_api.py:L3246–L3275` |
| `_ComputeAPIUnitTestMixIn.test_count_attachments_for_swap_not_found_and_readonly.fake_attachment_get` | function | (_context, attachment_id) | public | `{'attach_mode': 'ro'}` (src/nova/tests/unit/compute/test_api.py:L3267) | — | `src/nova/tests/unit/compute/test_api.py:L3263–L3267` |
| `_ComputeAPIUnitTestMixIn.test_count_attachments_for_swap_no_query` | method | (self, mock_attachment_get) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_api.py:L3279–L3296` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_and_backup` | method | (self, mock_record, mock_get_image, mock_create, mock_save, mock_is_volume, is_snapshot=True, with_base_ref=False, min_ram=None, min_disk=None, create_fails=False, instance_vm_state=vm_states.ACTIVE) | private | not declared | 14/109 | `src/nova/tests/unit/compute/test_api.py:L3303–L3430` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_and_backup.check_state` | function | (expected_task_state=None) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3374–L3378` |
| `_ComputeAPIUnitTestMixIn.test_snapshot` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3432–L3433` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3435–L3436` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_invalid_state` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L3438–L3454` |
| `_ComputeAPIUnitTestMixIn.test_vm_deleting_while_creating_snapshot` | method | (self, snapshot_instance, _create_image, save) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_api.py:L3460–L3474` |
| `_ComputeAPIUnitTestMixIn.test_vm_deleted_while_creating_snapshot` | method | (self, snapshot_instance, _create_image, save) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_api.py:L3480–L3494` |
| `_ComputeAPIUnitTestMixIn.test_vm_deleted_while_snapshot_and_snapshot_delete_failed` | method | (self, snapshot_instance, _create_image, save) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_api.py:L3500–L3514` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_with_base_image_ref` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3516–L3517` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_min_ram` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3519–L3520` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_min_disk` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3522–L3523` |
| `_ComputeAPIUnitTestMixIn.test_backup` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/compute/test_api.py:L3525–L3529` |
| `_ComputeAPIUnitTestMixIn.test_backup_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L3531–L3532` |
| `_ComputeAPIUnitTestMixIn.test_backup_invalid_state` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_api.py:L3534–L3553` |
| `_ComputeAPIUnitTestMixIn.test_backup_with_base_image_ref` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3555–L3557` |
| `_ComputeAPIUnitTestMixIn.test_backup_volume_backed_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L3559–L3569` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed` | method | (self, quiesce_required=False, quiesce_fails=False, quiesce_unsupported=False, vm_state=vm_states.ACTIVE, snapshot_fails=False, limits=None) | private | not declared | 7/168 | `src/nova/tests/unit/compute/test_api.py:L3571–L3784` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed.fake_bdm_list_get_by_instance_uuid` | function | (cls, context, instance_uuid) | public | `obj_base.obj_make_list(context, cls(), instance_bdms)` (src/nova/tests/unit/compute/test_api.py:L3612) | — | `src/nova/tests/unit/compute/test_api.py:L3611–L3612` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed.fake_image_create` | function | (_self, context, image_meta, data=None) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3614–L3615` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed.fake_volume_create_snapshot` | function | (self, context, volume_id, name, description) | public | `{'id': '%s-snapshot' % volume_id}` (src/nova/tests/unit/compute/test_api.py:L3621) | — | `src/nova/tests/unit/compute/test_api.py:L3617–L3621` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed.fake_quiesce_instance` | function | (context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3623–L3629` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed.fake_unquiesce_instance` | function | (context, instance, mapping=None) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L3631–L3632` |
| `_ComputeAPIUnitTestMixIn._test_snapshot_volume_backed.fake_get_absolute_limits` | function | (context) | public | `limits` (src/nova/tests/unit/compute/test_api.py:L3636); `{"totalSnapshotsUsed": 0, "maxTotalSnapshots": 10}` (src/nova/tests/unit/compute/test_api.py:L3637) | — | `src/nova/tests/unit/compute/test_api.py:L3634–L3637` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3786–L3788` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_quiesce_unsupported` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3790–L3792` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_quiesce_failure` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3794–L3798` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_quiesce_create_snap_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3800–L3802` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_unlimited_quota` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3804–L3809` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_over_quota_before_snapshot` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3811–L3818` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_quiesce_skipped` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L3820–L3822` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_quiesce_exception` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3824–L3828` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_suspended` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L3830–L3833` |
| `_ComputeAPIUnitTestMixIn.test_snapshot_volume_backed_with_pause` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L3835–L3838` |
| `_ComputeAPIUnitTestMixIn.test_get_bdm_by_volume_id` | method | (self, mock_get_by_volume, mock_target_cell) | public | not declared | 2/17 | `src/nova/tests/unit/compute/test_api.py:L3842–L3862` |
| `_ComputeAPIUnitTestMixIn.test_get_missing_bdm_by_volume_id` | method | (self, mock_get_by_volume, mock_target_cell) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L3866–L3878` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_create` | method | (self, mock_get_bdm) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_api.py:L3881–L3917` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_create_shelving` | method | (self, bdm_get_by_volume) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3926–L3933` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_create_shelved_offloaded` | method | (self, bdm_get_by_volume) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3942–L3949` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_delete` | method | (self, mock_get_bdm) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_api.py:L3952–L3987` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_delete_shelving` | method | (self, bdm_get_by_volume) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L3996–L4003` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_delete_shelved_offloaded` | method | (self, bdm_get_by_volume) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L4012–L4019` |
| `_ComputeAPIUnitTestMixIn.test_volume_snapshot_delete_intermediary_commit` | method | (self, mock_get_bdm) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_api.py:L4022–L4056` |
| `_ComputeAPIUnitTestMixIn._create_instance_with_disabled_disk_config` | method | (self, object=False) | private | `instance` (src/nova/tests/unit/compute/test_api.py:L4063); `obj_base.obj_to_primitive(instance)` (src/nova/tests/unit/compute/test_api.py:L4064) | 2/7 | `src/nova/tests/unit/compute/test_api.py:L4058–L4064` |
| `_ComputeAPIUnitTestMixIn._setup_fake_image_with_disabled_disk_config` | method | (self) | private | `self.fake_image['id']` (src/nova/tests/unit/compute/test_api.py:L4077) | 1/11 | `src/nova/tests/unit/compute/test_api.py:L4066–L4077` |
| `_ComputeAPIUnitTestMixIn._setup_fake_image_with_invalid_arch` | method | (self) | private | `self.fake_image['id']` (src/nova/tests/unit/compute/test_api.py:L4090) | 1/11 | `src/nova/tests/unit/compute/test_api.py:L4079–L4090` |
| `_ComputeAPIUnitTestMixIn.test_resize_with_disabled_auto_disk_config_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L4094–L4101` |
| `_ComputeAPIUnitTestMixIn.test_create_with_disabled_auto_disk_config_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L4103–L4108` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_with_disabled_auto_disk_config_fails` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L4110–L4120` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_with_invalid_image_arch` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L4122–L4135` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_with_invalid_volume` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _check_image_arch, mock_get_image, mock_get_bdms, get_flavor, instance_save, req_spec_get_by_inst_uuid, mock_get_minimum_version_all_cells) | public | not declared | 1/49 | `src/nova/tests/unit/compute/test_api.py:L4148–L4204` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_volume_backed` | method | (self, reimage_boot_vol, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _check_image_arch, mock_get_image, mock_get_bdms, get_flavor, instance_save, req_spec_get_by_inst_uuid, request_save, mock_get_minimum_version_all_cells) | public | not declared | 2/75 | `src/nova/tests/unit/compute/test_api.py:L4219–L4300` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_volume_backed_fails` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _check_image_arch, mock_get_image, mock_get_bdms, get_flavor, instance_save, req_spec_get_by_inst_uuid, request_save) | public | not declared | 1/46 | `src/nova/tests/unit/compute/test_api.py:L4312–L4360` |
| `_ComputeAPIUnitTestMixIn.test_rebuild` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _get_image, bdm_get_by_instance_uuid, get_flavor, instance_save, req_spec_get_by_inst_uuid, mock_get_minimum_version_all_cells) | public | not declared | 1/46 | `src/nova/tests/unit/compute/test_api.py:L4372–L4422` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_change_image` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _get_image, bdm_get_by_instance_uuid, get_flavor, instance_save, req_spec_get_by_inst_uuid, req_spec_save, mock_get_minimum_version_all_cells) | public | not declared | 1/58 | `src/nova/tests/unit/compute/test_api.py:L4435–L4504` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_change_image.get_image` | function | (context, image_href) | public | `(None, new_image)` (src/nova/tests/unit/compute/test_api.py:L4468); `(None, orig_image)` (src/nova/tests/unit/compute/test_api.py:L4470) | — | `src/nova/tests/unit/compute/test_api.py:L4466–L4470` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_change_keypair` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _get_image, bdm_get_by_instance_uuid, get_flavor, instance_save, req_spec_get_by_inst_uuid, mock_get_keypair, mock_get_minimum_version_all_cells) | public | not declared | 1/51 | `src/nova/tests/unit/compute/test_api.py:L4517–L4572` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_change_trusted_certs` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _get_image, bdm_get_by_instance_uuid, get_flavor, instance_save, req_spec_get_by_inst_uuid, mock_get_minimum_version_all_cells) | public | not declared | 1/46 | `src/nova/tests/unit/compute/test_api.py:L4584–L4634` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_unset_trusted_certs` | method | (self, _record_action_start, _checks_for_create_and_rebuild, _check_auto_disk_config, _get_image, bdm_get_by_instance_uuid, get_flavor, instance_save, req_spec_get_by_inst_uuid, mock_get_minimum_version_all_cells) | public | not declared | 1/48 | `src/nova/tests/unit/compute/test_api.py:L4646–L4702` |
| `_ComputeAPIUnitTestMixIn.test_rebuild_volume_backed_instance_with_trusted_certs` | method | (self, _record_action_start, _check_auto_disk_config, _get_image, bdm_get_by_instance_uuid, get_flavor, instance_is_volume_backed) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_api.py:L4711–L4740` |
| `_ComputeAPIUnitTestMixIn.test_check_metadata_properties_quota_with_empty_dict` | method | (self, limit_check) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L4743–L4748` |
| `_ComputeAPIUnitTestMixIn.test_check_injected_file_quota_with_empty_list` | method | (self, limit_check) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L4751–L4756` |
| `_ComputeAPIUnitTestMixIn._test_check_injected_file_quota_onset_file_limit_exceeded` | method | (self, side_effect) | private | not declared | 1/12 | `src/nova/tests/unit/compute/test_api.py:L4758–L4769` |
| `_ComputeAPIUnitTestMixIn.test_check_injected_file_quota_onset_file_limit_exceeded` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L4771–L4776` |
| `_ComputeAPIUnitTestMixIn.test_check_injected_file_quota_onset_file_path_limit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L4778–L4785` |
| `_ComputeAPIUnitTestMixIn.test_check_injected_file_quota_onset_file_content_limit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L4787–L4794` |
| `_ComputeAPIUnitTestMixIn.test_restore_by_admin` | method | (self, update_qfd, action_start, instance_save, quota_check, quota_count) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_api.py:L4805–L4838` |
| `_ComputeAPIUnitTestMixIn.test_restore_by_instance_owner` | method | (self, update_qfd, action_start, instance_save, quota_check, quota_count) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_api.py:L4849–L4881` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event` | method | (self, mock_action_start) | public | not declared | 2/65 | `src/nova/tests/unit/compute/test_api.py:L4884–L4951` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event_power_update_invalid_tag` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/compute/test_api.py:L4953–L5004` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event_evacuating_instance` | method | (self) | public | not declared | 2/55 | `src/nova/tests/unit/compute/test_api.py:L5006–L5069` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event_evacuating_instance.migration_get` | function | (context, id) | public | `migrations[id]` (src/nova/tests/unit/compute/test_api.py:L5028) | — | `src/nova/tests/unit/compute/test_api.py:L5027–L5028` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event_cross_cell_move` | method | (self, get_admin_context, set_target_cell, get_hm_by_host, get_mig_by_id) | public | not declared | 1/47 | `src/nova/tests/unit/compute/test_api.py:L5075–L5150` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event_cross_cell_move.wrap_get_relevant_hosts` | function | (_self, *a, **kw) | public | `sorted(hosts), cross_cell_move` (src/nova/tests/unit/compute/test_api.py:L5101) | — | `src/nova/tests/unit/compute/test_api.py:L5099–L5101` |
| `_ComputeAPIUnitTestMixIn.test_external_instance_event_cross_cell_move.fake_hm_get_by_host` | function | (ctxt, host) | public | `objects.HostMapping( host=host, cell_mapping=source_cell_mapping)` (src/nova/tests/unit/compute/test_api.py:L5107); `objects.HostMapping( host=host, cell_mapping=dest_cell_mapping)` (src/nova/tests/unit/compute/test_api.py:L5110) | — | `src/nova/tests/unit/compute/test_api.py:L5105–L5112` |
| `_ComputeAPIUnitTestMixIn.test_volume_ops_invalid_task_state` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L5152–L5169` |
| `_ComputeAPIUnitTestMixIn.test_get_volumes_for_bdms_errors` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/compute/test_api.py:L5171–L5189` |
| `_ComputeAPIUnitTestMixIn.test_validate_vol_az_for_create_multiple_vols_diff_az` | method | (self, cross_az) | public | not declared | 3/12 | `src/nova/tests/unit/compute/test_api.py:L5192–L5209` |
| `_ComputeAPIUnitTestMixIn.test_validate_vol_az_for_create_vol_az_matches_default_cpu_az` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L5211–L5220` |
| `_ComputeAPIUnitTestMixIn.test_validate_bdm_with_cinder_down` | method | (self, mock_get_snapshot) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_api.py:L5224–L5241` |
| `_ComputeAPIUnitTestMixIn.test_validate_bdm_with_error_volume_new_flow` | method | (self, mock_attach_create) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_api.py:L5245–L5273` |
| `_ComputeAPIUnitTestMixIn.test_validate_bdm_missing_boot_index` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L5275–L5286` |
| `_ComputeAPIUnitTestMixIn.test_validate_bdm_with_volume_type_name_is_specified` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/compute/test_api.py:L5288–L5339` |
| `_ComputeAPIUnitTestMixIn.test_validate_bdm_missing_volume_size` | method | (self, mock_get_image) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_api.py:L5342–L5371` |
| `_ComputeAPIUnitTestMixIn.test_validate_bdm_disk_bus` | method | (self, mock_get_image) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_api.py:L5374–L5388` |
| `_ComputeAPIUnitTestMixIn.test_the_specified_volume_type_id_assignment_to_name` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L5390–L5413` |
| `_ComputeAPIUnitTestMixIn._test_provision_instances_with_cinder_error` | method | (self, expected_exception) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L5415–L5481` |
| `_ComputeAPIUnitTestMixIn._test_provision_instances_with_cinder_error.do_test` | function | (mock_req_spec_from_components, _mock_create, mock_check_num_inst_quota) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5419–L5479` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_with_cinder_down` | method | (self, mock_get) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L5485–L5487` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_with_error_volume` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L5494–L5496` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_with_keypair` | method | (self, mock_im, mock_instance, mock_br, mock_rs) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L5502–L5534` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_with_keypair.do_test` | function | (mock_bdm_v, mock_sg, mock_cniq, mock_get_vols) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5518–L5532` |
| `_ComputeAPIUnitTestMixIn._test_provision_instances_with_accels` | method | (self, flavor, dp_request_groups, prev_request_groups, mock_im, mock_instance, mock_br, mock_rs, mock_get_dp) | private | `mock_get_dp, fake_rs` (src/nova/tests/unit/compute/test_api.py:L5567) | 1/21 | `src/nova/tests/unit/compute/test_api.py:L5541–L5567` |
| `_ComputeAPIUnitTestMixIn._test_provision_instances_with_accels.do_test` | function | (mock_bdm_v, mock_sg, mock_cniq, mock_get_vols) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5556–L5560` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_with_accels_ok` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_api.py:L5569–L5584` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_with_accels_no_dp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L5586–L5596` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_unified_limits_disabled_skips_limits_spec` | method | (self, mock_im, mock_instance, mock_br, mock_rs, mock_req_spec_for_limits, mock_enforce) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_api.py:L5606–L5633` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_unified_limits_disabled_skips_limits_spec.do_test` | function | (mock_bdm_v, mock_sg, mock_cniq, mock_get_vols) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5622–L5627` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_creates_build_request` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L5635–L5736` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_creates_build_request.do_test` | function | (mock_req_spec_from_components, mock_check_num_inst_quota, mock_inst_create, mock_create_rs_br_im, mock_get_volumes) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5642–L5734` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_creates_instance_mapping` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_api.py:L5738–L5819` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_creates_instance_mapping.do_test` | function | (mock_inst_mapping, mock_rs, mock_check_num_inst_quota, mock_get_vols) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5749–L5818` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_cleans_up_when_volume_invalid_new_flow` | method | (self, _mock_bdm, _mock_cinder_attach_create, _mock_cinder_check_availability_zone, _mock_cinder_get) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_api.py:L5828–L5921` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_cleans_up_when_volume_invalid_new_flow.do_test` | function | (mock_inst_mapping, mock_build_req, mock_req_spec_from_components, mock_inst, mock_check_num_inst_quota, mock_create_rs_br_im) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5838–L5919` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_creates_reqspec_with_secgroups` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L5923–L5951` |
| `_ComputeAPIUnitTestMixIn.test_provision_instances_creates_reqspec_with_secgroups.test` | function | (mock_objects, mock_secgroup, mock_cniq) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L5937–L5950` |
| `_ComputeAPIUnitTestMixIn._test_rescue` | method | (self, vm_state=vm_states.ACTIVE, rescue_password=None, rescue_image=None, clean_shutdown=True) | private | not declared | 2/40 | `src/nova/tests/unit/compute/test_api.py:L5953–L5994` |
| `_ComputeAPIUnitTestMixIn.test_rescue_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L5996–L5997` |
| `_ComputeAPIUnitTestMixIn.test_rescue_stopped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L5999–L6000` |
| `_ComputeAPIUnitTestMixIn.test_rescue_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L6002–L6003` |
| `_ComputeAPIUnitTestMixIn.test_rescue_with_password` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L6005–L6006` |
| `_ComputeAPIUnitTestMixIn.test_rescue_with_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L6008–L6009` |
| `_ComputeAPIUnitTestMixIn.test_rescue_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L6011–L6012` |
| `_ComputeAPIUnitTestMixIn.test_unrescue` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_api.py:L6014–L6033` |
| `_ComputeAPIUnitTestMixIn.test_rescue_bfv_with_required_trait` | method | (self, mock_get_bdms, mock_is_volume_backed, mock_get_cn, mock_image_meta_obj_from_ref) | public | not declared | 1/53 | `src/nova/tests/unit/compute/test_api.py:L6042–L6104` |
| `_ComputeAPIUnitTestMixIn.test_rescue_bfv_without_required_trait` | method | (self, mock_get_bdms, mock_is_volume_backed, mock_get_cn, mock_image_meta) | public | not declared | 1/42 | `src/nova/tests/unit/compute/test_api.py:L6113–L6165` |
| `_ComputeAPIUnitTestMixIn.test_rescue_bfv_with_required_image_properties` | method | (self, mock_get_bdms, mock_is_volume_backed, mock_get_cn, mock_image_meta_obj_from_ref) | public | not declared | 1/54 | `src/nova/tests/unit/compute/test_api.py:L6174–L6237` |
| `_ComputeAPIUnitTestMixIn.test_rescue_bfv_without_required_image_properties` | method | (self, mock_get_bdms, mock_is_volume_backed, mock_image_meta_obj_from_ref) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_api.py:L6244–L6283` |
| `_ComputeAPIUnitTestMixIn.test_rescue_bfv_without_allow_flag` | method | (self, mock_get_bdms, mock_is_volume_backed) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_api.py:L6289–L6321` |
| `_ComputeAPIUnitTestMixIn.test_rescue_from_image_ref_failure` | method | (self, mock_image_meta_obj_from_ref) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L6324–L6348` |
| `_ComputeAPIUnitTestMixIn.test_rescue_using_volume_backed_snapshot` | method | (self, mock_image_meta_obj_from_ref) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L6351–L6368` |
| `_ComputeAPIUnitTestMixIn.test_set_admin_password_invalid_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L6370–L6375` |
| `_ComputeAPIUnitTestMixIn.test_set_admin_password` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L6377–L6396` |
| `_ComputeAPIUnitTestMixIn.test_set_admin_password.do_test` | function | (compute_rpcapi_mock, record_mock, instance_save_mock) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L6385–L6394` |
| `_ComputeAPIUnitTestMixIn._test_attach_interface_invalid_state` | method | (self, state) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L6398–L6403` |
| `_ComputeAPIUnitTestMixIn.test_attach_interface_invalid_state` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_api.py:L6405–L6411` |
| `_ComputeAPIUnitTestMixIn._test_detach_interface_invalid_state` | method | (self, state) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L6413–L6418` |
| `_ComputeAPIUnitTestMixIn.test_detach_interface_invalid_state` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_api.py:L6420–L6426` |
| `_ComputeAPIUnitTestMixIn._test_check_and_transform_bdm` | method | (self, block_device_mapping) | private | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L6428–L6443` |
| `_ComputeAPIUnitTestMixIn.test_check_and_transform_bdm_source_volume` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L6445–L6455` |
| `_ComputeAPIUnitTestMixIn.test_check_and_transform_bdm_source_snapshot` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L6457–L6467` |
| `_ComputeAPIUnitTestMixIn.test_update_ephemeral_encryption_bdms` | method | (self) | public | not declared | 3/31 | `src/nova/tests/unit/compute/test_api.py:L6469–L6502` |
| `_ComputeAPIUnitTestMixIn.test_bdm_validate_set_size_and_instance` | method | (self) | public | not declared | 2/48 | `src/nova/tests/unit/compute/test_api.py:L6504–L6556` |
| `_ComputeAPIUnitTestMixIn.test_tenant_to_project_conversion` | method | (self, mock_cell_map_get, mock_get, mock_buildreq_get) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L6561–L6569` |
| `_ComputeAPIUnitTestMixIn.test_populate_instance_names_host_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L6571–L6575` |
| `_ComputeAPIUnitTestMixIn.test_populate_instance_names_host_name_is_empty` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L6577–L6581` |
| `_ComputeAPIUnitTestMixIn.test_populate_instance_names_host_name_multi` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L6583–L6587` |
| `_ComputeAPIUnitTestMixIn.test_populate_instance_names_host_name_is_empty_multi` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L6589–L6593` |
| `_ComputeAPIUnitTestMixIn.test_host_statuses` | method | (self) | public | not declared | 2/48 | `src/nova/tests/unit/compute/test_api.py:L6595–L6643` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_force_complete_succeeded` | method | (self, action_start, get_by_id_and_instance) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L6647–L6670` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_force_complete_invalid_migration_state` | method | (self, get_by_id_and_instance) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L6673–L6685` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_force_complete_invalid_vm_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L6687–L6693` |
| `_ComputeAPIUnitTestMixIn._get_migration` | method | (self, migration_id, status, migration_type) | private | `migration` (src/nova/tests/unit/compute/test_api.py:L6700) | 1/6 | `src/nova/tests/unit/compute/test_api.py:L6695–L6700` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_abort_succeeded` | method | (self, mock_get_migration, mock_lm_abort, mock_rec_action) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L6705–L6721` |
| `_ComputeAPIUnitTestMixIn.test_live_migrate_abort_in_queue_succeeded` | method | (self, mock_get_migration, mock_lm_abort, mock_rec_action) | public | not declared | 2/21 | `src/nova/tests/unit/compute/test_api.py:L6726–L6746` |
| `_ComputeAPIUnitTestMixIn.test_live_migration_abort_in_queue_old_microversion_fails` | method | (self, mock_get_migration) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L6749–L6758` |
| `_ComputeAPIUnitTestMixIn.test_live_migration_abort_wrong_migration_status` | method | (self, mock_get_migration) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L6761–L6772` |
| `_ComputeAPIUnitTestMixIn.test_check_requested_networks_no_requested_networks` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L6774–L6781` |
| `_ComputeAPIUnitTestMixIn.test_check_requested_networks_no_allocate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L6783–L6794` |
| `_ComputeAPIUnitTestMixIn.test_check_requested_networks_auto_allocate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L6796–L6806` |
| `_ComputeAPIUnitTestMixIn.test_update_queued_for_deletion` | method | (self, mock_get, mock_save) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L6810–L6819` |
| `_ComputeAPIUnitTestMixIn.test_generate_minimal_construct_for_down_cells` | method | (self, mock_get_ims) | public | not declared | 2/12 | `src/nova/tests/unit/compute/test_api.py:L6823–L6835` |
| `_ComputeAPIUnitTestMixIn.test_generate_minimal_construct_for_down_cells_limited` | method | (self, mock_get_ims) | public | not declared | 2/19 | `src/nova/tests/unit/compute/test_api.py:L6839–L6862` |
| `_ComputeAPIUnitTestMixIn.test_get_all_without_cell_down_support` | method | (self, mock_get_ims, mock_buildreq_get) | public | not declared | 2/19 | `src/nova/tests/unit/compute/test_api.py:L6867–L6885` |
| `_ComputeAPIUnitTestMixIn.test_get_all_with_cell_down_support` | method | (self, mock_get_ims, mock_buildreq_get) | public | not declared | 2/28 | `src/nova/tests/unit/compute/test_api.py:L6890–L6920` |
| `_ComputeAPIUnitTestMixIn.test_get_all_with_cell_down_support_all_tenants` | method | (self, mock_get_ims, mock_buildreq_get) | public | not declared | 2/21 | `src/nova/tests/unit/compute/test_api.py:L6925–L6947` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_from_cell_success` | method | (self, mock_get_inst) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L6952–L6961` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_from_cell_failure` | method | (self, mock_get_inst, mock_log_exp) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L6965–L6986` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_with_cell_down_support` | method | (self, mock_sg, mock_rs, mock_save_uid) | public | not declared | 1/53 | `src/nova/tests/unit/compute/test_api.py:L6991–L7058` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_no_mapping` | method | (self, mock_get_inst, mock_get_build_req, mock_get_inst_map) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L7064–L7071` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_not_in_cell` | method | (self, mock_get_inst, mock_get_build_req, mock_get_inst_map) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L7076–L7090` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_not_in_cell_buildreq_deleted_inst_in_cell` | method | (self, mock_get_inst, mock_get_build_req, mock_get_inst_map) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_api.py:L7097–L7131` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_not_in_cell_buildreq_deleted_inst_still_not_in_cell` | method | (self, mock_get_inst, mock_get_build_req, mock_get_inst_map, mock_target_cell) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_api.py:L7137–L7163` |
| `_ComputeAPIUnitTestMixIn.test_save_user_id_in_instance_mapping` | method | (self, im_save) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L7166–L7185` |
| `_ComputeAPIUnitTestMixIn.test_get_instance_in_cell` | method | (self, mock_get_inst, mock_get_build_req, mock_get_inst_map, mock_save_uid) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_api.py:L7191–L7217` |
| `_ComputeAPIUnitTestMixIn._list_of_instances` | method | (self, length=1) | private | `instances` (src/nova/tests/unit/compute/test_api.py:L7226) | 2/8 | `src/nova/tests/unit/compute/test_api.py:L7219–L7226` |
| `_ComputeAPIUnitTestMixIn.test_get_all_includes_build_requests` | method | (self, mock_cell_mapping_get, mock_buildreq_get) | public | not declared | 3/25 | `src/nova/tests/unit/compute/test_api.py:L7231–L7260` |
| `_ComputeAPIUnitTestMixIn.test_get_all_includes_build_requests_filter_dupes` | method | (self, mock_cell_mapping_get, mock_buildreq_get) | public | not declared | 3/25 | `src/nova/tests/unit/compute/test_api.py:L7265–L7295` |
| `_ComputeAPIUnitTestMixIn.test_get_all_build_requests_decrement_limit` | method | (self, mock_cell_mapping_get, mock_buildreq_get) | public | not declared | 3/26 | `src/nova/tests/unit/compute/test_api.py:L7300–L7330` |
| `_ComputeAPIUnitTestMixIn.test_get_all_includes_build_request_cell0` | method | (self, mock_cm_get_all, mock_cell_mapping_get, mock_buildreq_get, mock_target_cell) | public | not declared | 4/28 | `src/nova/tests/unit/compute/test_api.py:L7336–L7369` |
| `_ComputeAPIUnitTestMixIn.test_update_existing_instance_not_in_cell` | method | (self, mock_instmap_get, mock_buildreq_get) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L7373–L7388` |
| `_ComputeAPIUnitTestMixIn.test_update_existing_instance_in_cell` | method | (self, mock_instmap_get, mock_buildreq_get) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L7392–L7407` |
| `_ComputeAPIUnitTestMixIn.test_update_future_instance_with_buildreq` | method | (self, mock_buildreq_get) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L7410–L7432` |
| `_ComputeAPIUnitTestMixIn.test_update_instance_in_cell_in_transition_state` | method | (self, mock_buildreq_get, mock_instmap_get, mock_inst_get, mock_target_cell) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_api.py:L7438–L7472` |
| `_ComputeAPIUnitTestMixIn.test_update_instance_not_in_cell_in_transition_state` | method | (self, mock_buildreq_get, mock_instmap_get) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_api.py:L7476–L7506` |
| `_ComputeAPIUnitTestMixIn.test_populate_instance_for_create_neutron_secgroups` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L7508–L7521` |
| `_ComputeAPIUnitTestMixIn.test_retrieve_trusted_certs_object` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L7523–L7529` |
| `_ComputeAPIUnitTestMixIn.test_retrieve_trusted_certs_object_conf` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L7531–L7541` |
| `_ComputeAPIUnitTestMixIn.test_retrieve_trusted_certs_object_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L7543–L7547` |
| `_ComputeAPIUnitTestMixIn.test_retrieve_trusted_certs_object_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L7549–L7552` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_host` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L7558–L7566` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_invalid_host` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L7572–L7583` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_host_and_node` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm, mock_target_cell) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L7590–L7601` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_invalid_host_and_node` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm, mock_target_cell) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_api.py:L7608–L7623` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_node` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L7629–L7638` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_invalid_node` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_api.py:L7644–L7657` |
| `_ComputeAPIUnitTestMixIn.test__validate_host_or_node_with_rp_500_exception` | method | (self, mock_get_provider_by_name, mock_get_host_node, mock_get_hm) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_api.py:L7663–L7676` |
| `ComputeAPIUnitTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_api.py:L7682–L8967` |
| `ComputeAPIUnitTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L7683–L7685` |
| `ComputeAPIUnitTestCase.test_resize_same_flavor_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L7687–L7689` |
| `ComputeAPIUnitTestCase.test_find_service_in_cell_error_case` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L7691–L7693` |
| `ComputeAPIUnitTestCase.test_find_service_in_cell_targets` | method | (self, mock_get_service) | public | not declared | 3/14 | `src/nova/tests/unit/compute/test_api.py:L7696–L7712` |
| `ComputeAPIUnitTestCase.test_find_service_in_cell_targets.fake_target` | function | (context, cell) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L7702–L7703` |
| `ComputeAPIUnitTestCase.test__validate_numa_rebuild_non_numa` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L7714–L7726` |
| `ComputeAPIUnitTestCase.test__validate_numa_rebuild_no_conflict` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L7728–L7744` |
| `ComputeAPIUnitTestCase.test__validate_numa_rebuild_add_numa_topology` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L7746–L7767` |
| `ComputeAPIUnitTestCase.test__validate_numa_rebuild_remove_numa_topology` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L7769–L7798` |
| `ComputeAPIUnitTestCase.test__validate_numa_rebuild_alter_numa_topology` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_api.py:L7800–L7832` |
| `ComputeAPIUnitTestCase.test_pci_validated` | method | (self, mock_request) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L7835–L7844` |
| `ComputeAPIUnitTestCase.test_check_support_vnic_accelerator_version_before_57` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L7846–L7855` |
| `ComputeAPIUnitTestCase.test_check_support_vnic_accelerator_version_after_57` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L7857–L7861` |
| `ComputeAPIUnitTestCase.test_check_support_vnic_remote_managed_version_before_61` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L7869–L7879` |
| `ComputeAPIUnitTestCase.test_check_support_vnic_remote_managed_version_61` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L7887–L7892` |
| `ComputeAPIUnitTestCase.test_validate_and_build_base_options_translate_neutron_secgroup` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_api.py:L7894–L7933` |
| `ComputeAPIUnitTestCase.test_tagged_interface_attach` | method | (self, mock_attach, mock_record) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L7937–L7945` |
| `ComputeAPIUnitTestCase.test_attach_interface_qos_aware_port_old_compute` | method | (self, mock_record, mock_get_service) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_api.py:L7957–L7979` |
| `ComputeAPIUnitTestCase.test_attach_interface_qos_aware_port` | method | (self, mock_record, mock_get_service, mock_attach) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_api.py:L7992–L8021` |
| `ComputeAPIUnitTestCase.test_attach_interface_extended_qos_port_old_compute` | method | (self, mock_record, mock_get_service) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_api.py:L8033–L8063` |
| `ComputeAPIUnitTestCase.test_attach_interface_extended_qos_port` | method | (self, mock_record, mock_get_service, mock_attach) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_api.py:L8076–L8108` |
| `ComputeAPIUnitTestCase.test_detach_interface` | method | (self, mock_detach, mock_record) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_api.py:L8112–L8124` |
| `ComputeAPIUnitTestCase.test_attach_volume_shelved_offloaded_fails` | method | (self, volume_get) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8128–L8140` |
| `ComputeAPIUnitTestCase.test_validate_bdm_check_volume_type_raise_not_found` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L8142–L8160` |
| `ComputeAPIUnitTestCase.test_get_all_ip_filter` | method | (self, mock_buildreq_get, mock_list_port, mock_check_ext) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_api.py:L8166–L8188` |
| `ComputeAPIUnitTestCase.test_get_all_ip6_filter` | method | (self, mock_buildreq_get, mock_list_port, mock_check_ext) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_api.py:L8194–L8216` |
| `ComputeAPIUnitTestCase.test_get_all_ip_and_ip6_filter` | method | (self, mock_buildreq_get, mock_list_port, mock_check_ext) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_api.py:L8222–L8250` |
| `ComputeAPIUnitTestCase.test_get_all_ip6_filter_exc` | method | (self, mock_list_port, mock_check_ext) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L8254–L8265` |
| `ComputeAPIUnitTestCase._test_delete_volume_backed_instance` | method | (self, vm_state, mock_record, mock_instance_destroy, bdm_destroy, notify_about_instance_usage, mock_save, mock_elevated, bdm_get_by_instance_uuid, mock_lookup, _mock_del_booting, notify_about_instance_action) | private | not declared | 1/34 | `src/nova/tests/unit/compute/test_api.py:L8278–L8315` |
| `ComputeAPIUnitTestCase.test_delete_volume_backed_instance_in_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L8317–L8318` |
| `ComputeAPIUnitTestCase.test_delete_volume_backed_instance_in_shelved_offloaded` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_api.py:L8320–L8321` |
| `ComputeAPIUnitTestCase.test_compute_api_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_api.py:L8323–L8325` |
| `ComputeAPIUnitTestCase.test_placement_client_init` | method | (self, mock_report_client) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_api.py:L8328–L8334` |
| `ComputeAPIUnitTestCase.test_validate_host_for_cold_migrate_same_host_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_api.py:L8336–L8344` |
| `ComputeAPIUnitTestCase.test_validate_host_for_cold_migrate_diff_host_no_cross_cell` | method | (self, mock_cn_get) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L8348–L8358` |
| `ComputeAPIUnitTestCase.test_validate_host_for_cold_migrate_cross_cell_host_mapping_not_found` | method | (self, mock_hm_get) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L8362–L8372` |
| `ComputeAPIUnitTestCase.test_validate_host_for_cold_migrate_cross_cell` | method | (self, mock_cn_get, mock_target_cell, mock_hm_get) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L8380–L8395` |
| `ComputeAPIUnitTestCase._test_get_migrations_sorted_filter_duplicates` | method | (self, migrations, expected) | private | not declared | 1/18 | `src/nova/tests/unit/compute/test_api.py:L8397–L8418` |
| `ComputeAPIUnitTestCase.test_get_migrations_sorted_filter_duplicates` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_api.py:L8420–L8436` |
| `ComputeAPIUnitTestCase.test_get_migrations_sorted_filter_duplicates_using_created_at` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L8438–L8458` |
| `ComputeAPIUnitTestCase.test_confirm_resize_cross_cell_move_true` | method | (self, mock_migration_get, mock_service_is_up) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_api.py:L8462–L8491` |
| `ComputeAPIUnitTestCase.test_allow_cross_cell_resize_default_false` | method | (self, mock_get_min_ver) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L8495–L8506` |
| `ComputeAPIUnitTestCase.test_allow_cross_cell_resize_false_old_version` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8508–L8520` |
| `ComputeAPIUnitTestCase.test_allow_cross_cell_resize_false_port_with_resource_req` | method | (self, mock_get_res_req) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_api.py:L8526–L8539` |
| `ComputeAPIUnitTestCase.test_allow_cross_cell_resize_true` | method | (self, mock_get_res_req) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8545–L8557` |
| `ComputeAPIUnitTestCase._test_block_accelerators` | method | (self, instance, args_info, until_service=None) | private | `expected_args, kwargs` (src/nova/tests/unit/compute/test_api.py:L8572) | 1/9 | `src/nova/tests/unit/compute/test_api.py:L8559–L8572` |
| `ComputeAPIUnitTestCase._test_block_accelerators.myfunc` | function | (self, context, instance, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L8562–L8564` |
| `ComputeAPIUnitTestCase.test_block_accelerators_no_device_profile` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_api.py:L8574–L8581` |
| `ComputeAPIUnitTestCase.test_block_accelerators_with_device_profile` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L8583–L8593` |
| `ComputeAPIUnitTestCase.test_block_accelerators_until_service` | method | (self, mock_get_min) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L8597–L8608` |
| `ComputeAPIUnitTestCase.test_block_accelerators_until_service_forbidden` | method | (self, mock_get_min) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L8612–L8624` |
| `ComputeAPIUnitTestCase._test_block_port_accelerators` | method | (self, instance, args_info) | private | `expected_args, kwargs` (src/nova/tests/unit/compute/test_api.py:L8636) | 1/8 | `src/nova/tests/unit/compute/test_api.py:L8626–L8636` |
| `ComputeAPIUnitTestCase._test_block_port_accelerators.myfunc` | function | (self, context, instance, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L8628–L8630` |
| `ComputeAPIUnitTestCase.test_block_port_accelerators_no_ACCELERATOR_DIRECT` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L8638–L8646` |
| `ComputeAPIUnitTestCase.test_block_port_accelerators_with_ACCELERATOR_DIRECT` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8648–L8657` |
| `ComputeAPIUnitTestCase.test_block_port_accelerators_with_ACCELERATOR_DIRECT_PHYSICAL` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8659–L8668` |
| `ComputeAPIUnitTestCase.test_get_arqs_in_shelve` | method | (self, mock_create_img, mock_get_arq_uuids) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_api.py:L8673–L8702` |
| `ComputeAPIUnitTestCase.test_shelve_with_unsupport_accelerators` | method | (self, mock_create_img, mock_get_arq_uuids) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_api.py:L8707–L8739` |
| `ComputeAPIUnitTestCase.test_shelve_with_unsupport_port_accelerators` | method | (self, mock_create_img, mock_get_arq_uuids) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_api.py:L8744–L8764` |
| `ComputeAPIUnitTestCase.test_shelve_until_service_forbidden` | method | (self, mock_get_min, mock_get_arq_uuuids) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_api.py:L8770–L8781` |
| `ComputeAPIUnitTestCase.test_get_arqs_in_shelve_offload` | method | (self, mock_create_img, mock_get_arq_uuids) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_api.py:L8786–L8814` |
| `ComputeAPIUnitTestCase.test__check_compute_service_for_mixed_instance_fails` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8817–L8830` |
| `ComputeAPIUnitTestCase.test__check_compute_service_for_mixed_instance_passes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_api.py:L8833–L8845` |
| `ComputeAPIUnitTestCase.test_volume_detach_while_compute_down` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_api.py:L8849–L8856` |
| `ComputeAPIUnitTestCase.get_fake_share_mapping` | method | (self) | public | `share_mapping` (src/nova/tests/unit/compute/test_api.py:L8867) | 1/10 | `src/nova/tests/unit/compute/test_api.py:L8858–L8867` |
| `ComputeAPIUnitTestCase.test_allow_share` | method | (self, mock_cast, mock_rec_action) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L8871–L8890` |
| `ComputeAPIUnitTestCase.test_deny_share` | method | (self, mock_cast, mock_rec_action) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_api.py:L8894–L8913` |
| `ComputeAPIUnitTestCase.test_reject_legacy_vtpm_live_migration` | method | (self, secret_security) | public | not declared | 3/20 | `src/nova/tests/unit/compute/test_api.py:L8917–L8944` |
| `ComputeAPIUnitTestCase.test_reject_legacy_vtpm_live_migration.fake_compute_api_method` | function | (api_self, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L8924–L8925` |
| `ComputeAPIUnitTestCase.test_reject_legacy_vtpm_live_migration_service_version` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_api.py:L8947–L8967` |
| `ComputeAPIUnitTestCase.test_reject_legacy_vtpm_live_migration_service_version.fake_compute_api_method` | function | (api_self, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_api.py:L8953–L8954` |

## Dependencies

- `import contextlib` (src/nova/tests/unit/compute/test_api.py:L16)
- `import datetime` (src/nova/tests/unit/compute/test_api.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_api.py:L18)
- `import ddt` (src/nova/tests/unit/compute/test_api.py:L20)
- `import fixtures` (src/nova/tests/unit/compute/test_api.py:L21)
- `import os_traits as ot` (src/nova/tests/unit/compute/test_api.py:L22)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/tests/unit/compute/test_api.py:L23)
- `oslo_messaging`: imports `exceptions as oslo_exceptions` (src/nova/tests/unit/compute/test_api.py:L24)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/compute/test_api.py:L25)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/compute/test_api.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_api.py:L27)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/compute/test_api.py:L28)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/compute/test_api.py:L29)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/compute/test_api.py:L31)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/compute/test_api.py:L32)
- `nova.compute`: imports `instance_actions` (src/nova/tests/unit/compute/test_api.py:L33)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/compute/test_api.py:L34)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/compute/test_api.py:L35)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/compute/test_api.py:L36)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/compute/test_api.py:L37)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/compute/test_api.py:L38)
- `nova`: imports `conductor` (src/nova/tests/unit/compute/test_api.py:L39)
- `import nova.conf` (src/nova/tests/unit/compute/test_api.py:L40)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_api.py:L41)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/compute/test_api.py:L42)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_api.py:L43)
- `nova.image`: imports `glance as image_api` (src/nova/tests/unit/compute/test_api.py:L44)
- `nova.limit`: imports `placement as placement_limit` (src/nova/tests/unit/compute/test_api.py:L45)
- `nova.network`: imports `constants` (src/nova/tests/unit/compute/test_api.py:L46)
- `nova.network`: imports `model` (src/nova/tests/unit/compute/test_api.py:L47)
- `nova.network`: imports `neutron as neutron_api` (src/nova/tests/unit/compute/test_api.py:L48)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_api.py:L49)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/compute/test_api.py:L50)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/compute/test_api.py:L51)
- `nova.objects`: imports `fields as fields_obj` (src/nova/tests/unit/compute/test_api.py:L52)
- `nova.objects`: imports `image_meta as image_meta_obj` (src/nova/tests/unit/compute/test_api.py:L53)
- `nova.objects`: imports `quotas as quotas_obj` (src/nova/tests/unit/compute/test_api.py:L54)
- `nova.objects`: imports `security_group as secgroup_obj` (src/nova/tests/unit/compute/test_api.py:L55)
- `nova.servicegroup`: imports `api as servicegroup_api` (src/nova/tests/unit/compute/test_api.py:L56)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_api.py:L57)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/compute/test_api.py:L58)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/compute/test_api.py:L59)
- `nova.tests.unit`: imports `fake_build_request` (src/nova/tests/unit/compute/test_api.py:L60)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_api.py:L61)
- `nova.tests.unit`: imports `fake_request_spec` (src/nova/tests/unit/compute/test_api.py:L62)
- `nova.tests.unit`: imports `fake_volume` (src/nova/tests/unit/compute/test_api.py:L63)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/compute/test_api.py:L64)
- `nova.tests.unit.objects`: imports `test_flavor` (src/nova/tests/unit/compute/test_api.py:L65)
- `nova.tests.unit.objects`: imports `test_migration` (src/nova/tests/unit/compute/test_api.py:L66)
- `nova`: imports `utils` (src/nova/tests/unit/compute/test_api.py:L67)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/compute/test_api.py:L68)

## Side Effects

- **network**: mock_save_im, mock_image_delete, mock_mig_get, mock_notify, **attrs (src/nova/tests/unit/compute/test_api.py:L956)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_api.py:L1113)
- **network**: _mock_notify, _mock_save, mock_bdm_get, mock_lookup, (src/nova/tests/unit/compute/test_api.py:L1198)
- **network**: mock_elevated, mock_service_get, _mock_notify, _mock_save, (src/nova/tests/unit/compute/test_api.py:L1229)
- **network**: mock_notify_legacy, mock_notify): (src/nova/tests/unit/compute/test_api.py:L1262)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_api.py:L1301)
- **network**: mock_notify_legacy, mock_detach, mock_bdm_destroy, mock_notify): (src/nova/tests/unit/compute/test_api.py:L1321)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_api.py:L1344)
- **network**: mock_bdm_destroy, mock_notify): (src/nova/tests/unit/compute/test_api.py:L1368)
- **network**: @mock.patch('oslo_messaging.rpc.client._BaseCallContext.cast') (src/nova/tests/unit/compute/test_api.py:L8870)
- **network**: @mock.patch('oslo_messaging.rpc.client._BaseCallContext.cast') (src/nova/tests/unit/compute/test_api.py:L8893)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/compute/test_api.py:L71)
- **global-mutation**: NODENAME = 'fakenode1' (src/nova/tests/unit/compute/test_api.py:L73)
- **global-mutation**: SHELVED_IMAGE = 'fake-shelved-image' (src/nova/tests/unit/compute/test_api.py:L74)
- **global-mutation**: SHELVED_IMAGE_NOT_FOUND = 'fake-shelved-image-notfound' (src/nova/tests/unit/compute/test_api.py:L75)
- **global-mutation**: SHELVED_IMAGE_NOT_AUTHORIZED = 'fake-shelved-image-not-authorized' (src/nova/tests/unit/compute/test_api.py:L76)
- **global-mutation**: SHELVED_IMAGE_EXCEPTION = 'fake-shelved-image-exception' (src/nova/tests/unit/compute/test_api.py:L77)

## Security Surface

- **sink** (`db-write`): flavor.update(updates) (src/nova/tests/unit/compute/test_api.py:L141)
- **sink** (`db-write`): instance.metadata.update(params.pop('metadata', {})) (src/nova/tests/unit/compute/test_api.py:L163)
- **sink** (`db-write`): instance.update(params) (src/nova/tests/unit/compute/test_api.py:L200)
- **sink** (`db-write`): inst.update(updates) (src/nova/tests/unit/compute/test_api.py:L794)
- **sink** (`db-write`): inst.update(attrs) (src/nova/tests/unit/compute/test_api.py:L962)
- **sink** (`db-write`): inst.update({'task_state': None}) (src/nova/tests/unit/compute/test_api.py:L975)
- **sink** (`db-write`): updates.update({'vm_state': state, (src/nova/tests/unit/compute/test_api.py:L1034)
- **sink** (`db-write`): instance.update(instance_update) (src/nova/tests/unit/compute/test_api.py:L3032)
- **sink** (`db-write`): volumes[volume_update['target']].update(volume_update['value']) (src/nova/tests/unit/compute/test_api.py:L3034)
- **sink** (`db-write`): expect_meta['properties']['block_device_mapping'].insert(0, (src/nova/tests/unit/compute/test_api.py:L3747)
- **sink** (`db-write`): name='power-update', (src/nova/tests/unit/compute/test_api.py:L4929)
- **sink** (`db-write`): name='power-update', (src/nova/tests/unit/compute/test_api.py:L4933)
- **sink** (`db-write`): name='power-update', (src/nova/tests/unit/compute/test_api.py:L4974)
- **sink** (`db-write`): name='power-update', (src/nova/tests/unit/compute/test_api.py:L4978)

