# src/nova/tests/unit/compute/test_utils.py

## Overview

This file implements the `test_utils` module, defining 14 classs, 2 constants, 5 functions, 101 methods, 1 staticmethod, 36 imports, 2 side effects, 5 security surface entries.

Lines: total 1812, code 1507, comment 61, blank 244

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_IMAGE_REF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L59–L59` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L61–L61` |
| `create_instance` | function | (context, user_id='fake', project_id='fake', params=None) | exported | `inst` (src/nova/tests/unit/compute/test_utils.py:L86) | 2/22 | `src/nova/tests/unit/compute/test_utils.py:L64–L86` |
| `ComputeValidateDeviceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L89–L201` |
| `ComputeValidateDeviceTestCase.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_utils.py:L90–L103` |
| `ComputeValidateDeviceTestCase._validate_device` | method | (self, device=None) | private | `compute_utils.get_device_name_for_instance( self.instance, bdms, device)` (src/nova/tests/unit/compute/test_utils.py:L110) | 1/7 | `src/nova/tests/unit/compute/test_utils.py:L105–L111` |
| `ComputeValidateDeviceTestCase._fake_bdm` | method | (device) | private | `fake_block_device.FakeDbBlockDeviceDict({ 'source_type': 'volume', 'destination_type': 'volume', 'device_name': device, 'no_device': None, 'volume_id': 'fake', 'snapshot_id': None, 'guest_format': Non` (src/nova/tests/unit/compute/test_utils.py:L115) | 1/10 | `src/nova/tests/unit/compute/test_utils.py:L114–L123` |
| `ComputeValidateDeviceTestCase.test_wrap` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/compute/test_utils.py:L125–L130` |
| `ComputeValidateDeviceTestCase.test_wrap_plus_one` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_utils.py:L132–L138` |
| `ComputeValidateDeviceTestCase.test_later` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L140–L147` |
| `ComputeValidateDeviceTestCase.test_gap` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_utils.py:L149–L155` |
| `ComputeValidateDeviceTestCase.test_no_bdms` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L157–L160` |
| `ComputeValidateDeviceTestCase.test_lxc_names_work` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L162–L167` |
| `ComputeValidateDeviceTestCase.test_name_conversion` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L169–L176` |
| `ComputeValidateDeviceTestCase.test_invalid_device_prefix` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L178–L180` |
| `ComputeValidateDeviceTestCase.test_device_in_use` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L182–L185` |
| `ComputeValidateDeviceTestCase.test_swap` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L187–L190` |
| `ComputeValidateDeviceTestCase.test_swap_no_ephemeral` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_utils.py:L192–L196` |
| `ComputeValidateDeviceTestCase.test_no_dev_root_device_name_get_next_name` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L198–L201` |
| `DefaultDeviceNamesForInstanceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L204–L357` |
| `DefaultDeviceNamesForInstanceTestCase.setUp` | method | (self) | public | not declared | 2/60 | `src/nova/tests/unit/compute/test_utils.py:L206–L268` |
| `DefaultDeviceNamesForInstanceTestCase.tearDown` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/compute/test_utils.py:L270–L273` |
| `DefaultDeviceNamesForInstanceTestCase._test_default_device_names` | method | (self, *block_device_lists) | private | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L275–L278` |
| `DefaultDeviceNamesForInstanceTestCase.test_only_block_device_mapping` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/compute/test_utils.py:L280–L294` |
| `DefaultDeviceNamesForInstanceTestCase.test_with_ephemerals` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_utils.py:L296–L310` |
| `DefaultDeviceNamesForInstanceTestCase.test_with_swap` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_utils.py:L312–L328` |
| `DefaultDeviceNamesForInstanceTestCase.test_all_together` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_utils.py:L330–L357` |
| `UsageInfoTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L360–L992` |
| `UsageInfoTestCase.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_utils.py:L362–L379` |
| `UsageInfoTestCase.test_notify_usage_exists` | method | (self) | public | not declared | 2/34 | `src/nova/tests/unit/compute/test_utils.py:L381–L416` |
| `UsageInfoTestCase.test_notify_usage_exists_emits_versioned` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/compute/test_utils.py:L418–L443` |
| `UsageInfoTestCase.test_notify_usage_exists_deleted_instance` | method | (self) | public | not declared | 2/32 | `src/nova/tests/unit/compute/test_utils.py:L445–L478` |
| `UsageInfoTestCase.test_notify_about_instance_action_best_effort` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_utils.py:L480–L503` |
| `UsageInfoTestCase.test_notify_about_instance_action` | method | (self) | public | not declared | 2/45 | `src/nova/tests/unit/compute/test_utils.py:L505–L556` |
| `UsageInfoTestCase.test_notify_about_instance_create` | method | (self) | public | not declared | 2/38 | `src/nova/tests/unit/compute/test_utils.py:L558–L603` |
| `UsageInfoTestCase.test_notify_about_instance_create_without_keypair` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/compute/test_utils.py:L605–L637` |
| `UsageInfoTestCase.test_notify_about_instance_create_with_tags` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/compute/test_utils.py:L639–L678` |
| `UsageInfoTestCase.test_notify_about_volume_swap` | method | (self) | public | not declared | 2/28 | `src/nova/tests/unit/compute/test_utils.py:L680–L715` |
| `UsageInfoTestCase.test_notify_about_volume_swap_with_error` | method | (self) | public | not declared | 3/41 | `src/nova/tests/unit/compute/test_utils.py:L717–L768` |
| `UsageInfoTestCase.test_notify_about_instance_rescue_action` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/compute/test_utils.py:L770–L803` |
| `UsageInfoTestCase.test_notify_about_resize_prep_instance` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/compute/test_utils.py:L805–L838` |
| `UsageInfoTestCase.test_notify_usage_exists_instance_not_found` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/compute/test_utils.py:L840–L866` |
| `UsageInfoTestCase.test_notify_about_volume_usage` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_utils.py:L868–L904` |
| `UsageInfoTestCase.test_notify_about_instance_usage_best_effort` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_utils.py:L906–L922` |
| `UsageInfoTestCase.test_notify_about_instance_usage` | method | (self) | public | not declared | 2/34 | `src/nova/tests/unit/compute/test_utils.py:L924–L958` |
| `UsageInfoTestCase.test_notify_about_aggregate_update_with_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_utils.py:L960–L971` |
| `UsageInfoTestCase.test_notify_about_aggregate_update_with_name` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_utils.py:L973–L984` |
| `UsageInfoTestCase.test_notify_about_aggregate_update_without_name_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L986–L992` |
| `ComputeUtilsGetValFromSysMetadata` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L995–L1014` |
| `ComputeUtilsGetValFromSysMetadata.test_get_value_from_system_metadata` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_utils.py:L997–L1014` |
| `ComputeUtilsRefreshInfoCacheForInstance` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1017–L1031` |
| `ComputeUtilsRefreshInfoCacheForInstance.test_instance_info_cache_not_found` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_utils.py:L1018–L1031` |
| `ComputeUtilsGetRebootTypes` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1034–L1055` |
| `ComputeUtilsGetRebootTypes.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1035–L1037` |
| `ComputeUtilsGetRebootTypes.test_get_reboot_type_started_soft` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L1039–L1042` |
| `ComputeUtilsGetRebootTypes.test_get_reboot_type_pending_soft` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L1044–L1047` |
| `ComputeUtilsGetRebootTypes.test_get_reboot_type_hard` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1049–L1051` |
| `ComputeUtilsGetRebootTypes.test_get_reboot_not_running_hard` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1053–L1055` |
| `ComputeUtilsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1058–L1297` |
| `ComputeUtilsTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_utils.py:L1060–L1066` |
| `ComputeUtilsTestCase.test_wrap_instance_event_without_host` | method | (self, mock_event) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1069–L1080` |
| `ComputeUtilsTestCase.test_wrap_instance_event_without_host.fake_event` | function | (self, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1073–L1074` |
| `ComputeUtilsTestCase.test_wrap_instance_event` | method | (self, mock_finish, mock_start) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_utils.py:L1085–L1095` |
| `ComputeUtilsTestCase.test_wrap_instance_event.fake_event` | function | (self, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1089–L1090` |
| `ComputeUtilsTestCase.test_wrap_instance_event_return` | method | (self, mock_finish, mock_start) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1100–L1111` |
| `ComputeUtilsTestCase.test_wrap_instance_event_return.fake_event` | function | (self, context, instance) | public | `True` (src/nova/tests/unit/compute/test_utils.py:L1105) | — | `src/nova/tests/unit/compute/test_utils.py:L1104–L1105` |
| `ComputeUtilsTestCase.test_wrap_instance_event_log_exception` | method | (self, mock_finish, mock_start) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_utils.py:L1116–L1129` |
| `ComputeUtilsTestCase.test_wrap_instance_event_log_exception.fake_event` | function | (self2, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1120–L1121` |
| `ComputeUtilsTestCase._test_event_reporter_graceful_exit` | method | (self, error, mock_event_finish, mock_event_start) | private | not declared | 1/12 | `src/nova/tests/unit/compute/test_utils.py:L1133–L1144` |
| `ComputeUtilsTestCase.test_event_reporter_graceful_exit_action_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L1146–L1152` |
| `ComputeUtilsTestCase.test_event_reporter_graceful_exit_unexpected_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L1154–L1160` |
| `ComputeUtilsTestCase.test_get_machine_ips` | method | (self, mock_addrs) | public | not declared | 2/26 | `src/nova/tests/unit/compute/test_utils.py:L1163–L1190` |
| `ComputeUtilsTestCase.test_notify_about_instance_delete` | method | (self, mock_instance_destroy, mock_notify_usage, mock_notify_action) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_utils.py:L1195–L1217` |
| `ComputeUtilsTestCase.test_get_stashed_volume_connector_none` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_utils.py:L1219–L1237` |
| `ComputeUtilsTestCase.test_may_have_ports_or_volumes` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/compute/test_utils.py:L1239–L1247` |
| `ComputeUtilsTestCase.test_heal_reqspec_is_bfv_no_update` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L1249–L1254` |
| `ComputeUtilsTestCase.test_heal_reqspec_is_bfv_with_update` | method | (self, mock_save) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1257–L1264` |
| `ComputeUtilsTestCase.test_delete_image` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_utils.py:L1266–L1271` |
| `ComputeUtilsTestCase.test_delete_image_not_found` | method | (self, mock_log_exception) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1274–L1283` |
| `ComputeUtilsTestCase.test_delete_image_unknown_error` | method | (self, mock_log_exception) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_utils.py:L1286–L1297` |
| `ServerGroupTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1300–L1374` |
| `ServerGroupTestCase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_utils.py:L1301–L1315` |
| `ServerGroupTestCase.test_notify_about_server_group_action` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_utils.py:L1317–L1342` |
| `ServerGroupTestCase.test_notify_about_server_group_add_member` | method | (self, mock_get_by_uuid) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_utils.py:L1345–L1374` |
| `ComputeUtilsQuotaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1377–L1461` |
| `ComputeUtilsQuotaTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1378–L1380` |
| `ComputeUtilsQuotaTestCase.test_upsize_quota_delta` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_utils.py:L1382–L1392` |
| `ComputeUtilsQuotaTestCase.test_check_instance_quota_exceeds_with_multiple_resources` | method | (self, mock_count) | public | not declared | 2/27 | `src/nova/tests/unit/compute/test_utils.py:L1395–L1421` |
| `ComputeUtilsQuotaTestCase.test_check_num_instances_omits_user_if_no_user_quota` | method | (self, mock_check, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_utils.py:L1425–L1438` |
| `ComputeUtilsQuotaTestCase.test_check_num_instances_passes_user_if_user_quota` | method | (self, mock_check, mock_get) | public | not declared | 2/16 | `src/nova/tests/unit/compute/test_utils.py:L1442–L1461` |
| `IsVolumeBackedInstanceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1464–L1577` |
| `IsVolumeBackedInstanceTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L1465–L1470` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_no_bdm_no_image` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_utils.py:L1472–L1477` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_empty_bdm_with_image` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_utils.py:L1479–L1488` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_bdm_volume_no_image` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_utils.py:L1490–L1506` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_bdm_local_no_image` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_utils.py:L1508–L1534` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_bdm_volume_with_image` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_utils.py:L1536–L1550` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_bdm_snapshot` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_utils.py:L1552–L1567` |
| `IsVolumeBackedInstanceTestCase.test_is_volume_backed_instance_empty_bdm_by_uuid` | method | (self, mock_bdms) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1570–L1577` |
| `ComputeUtilsImageFunctionsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1580–L1616` |
| `ComputeUtilsImageFunctionsTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1581–L1583` |
| `ComputeUtilsImageFunctionsTestCase.test_initialize_instance_snapshot_metadata_no_metadata` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L1585–L1591` |
| `ComputeUtilsImageFunctionsTestCase.test_initialize_instance_snapshot_metadata_removed_metadata` | method | (self) | public | not declared | 3/23 | `src/nova/tests/unit/compute/test_utils.py:L1593–L1616` |
| `PciRequestUpdateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1619–L1730` |
| `PciRequestUpdateTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1620–L1622` |
| `PciRequestUpdateTestCase.test_no_pci_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_utils.py:L1624–L1628` |
| `PciRequestUpdateTestCase.test_pci_request_from_flavor_no_mapping` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_utils.py:L1630–L1645` |
| `PciRequestUpdateTestCase.test_pci_request_from_flavor_with_mapping` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_utils.py:L1647–L1667` |
| `PciRequestUpdateTestCase.test_pci_request_has_no_mapping` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L1669–L1675` |
| `PciRequestUpdateTestCase.test_pci_request_ambiguous_mapping` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_utils.py:L1677–L1690` |
| `PciRequestUpdateTestCase.test_unexpected_provider_name` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_utils.py:L1692–L1712` |
| `PciRequestUpdateTestCase.test_pci_request_updated` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_utils.py:L1714–L1730` |
| `AcceleratorRequestTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1733–L1792` |
| `AcceleratorRequestTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1734–L1736` |
| `AcceleratorRequestTestCase.test_delete_with_device_profile` | method | (self, mock_del_arq) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L1739–L1744` |
| `AcceleratorRequestTestCase.test_delete_with_no_device_profile` | method | (self, mock_del_arq, mock_get_client) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1748–L1757` |
| `AcceleratorRequestTestCase.test_delete_with_device_profile_exception` | method | (self, mock_del_arq, mock_log_exc) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_utils.py:L1761–L1773` |
| `AcceleratorRequestTestCase.test_delete_with_arq_uuid` | method | (self, mock_del_arq) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_utils.py:L1776–L1781` |
| `AcceleratorRequestTestCase.test_delete_with_arq_uuid_and_dp` | method | (self, mock_del_inst, mock_del_uuid) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_utils.py:L1785–L1792` |
| `CheckAttachAndReserverVolumeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L1795–L1812` |
| `CheckAttachAndReserverVolumeTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_utils.py:L1796–L1798` |
| `CheckAttachAndReserverVolumeTestCase.test_check_attach_and_reserve_volume_multiattach_old_version` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_utils.py:L1800–L1812` |
| `ComputeValidateDeviceTestCase._fake_bdm` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/compute/test_utils.py:L113–L123` |

## Dependencies

- `import collections` (src/nova/tests/unit/compute/test_utils.py:L19)
- `import copy` (src/nova/tests/unit/compute/test_utils.py:L20)
- `import datetime` (src/nova/tests/unit/compute/test_utils.py:L21)
- `import socket` (src/nova/tests/unit/compute/test_utils.py:L22)
- `import string` (src/nova/tests/unit/compute/test_utils.py:L23)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_utils.py:L24)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/compute/test_utils.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_utils.py:L27)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/compute/test_utils.py:L28)
- `nova.accelerator.cyborg`: imports `_CyborgClient as cyborgclient` (src/nova/tests/unit/compute/test_utils.py:L30)
- `nova.compute`: imports `manager` (src/nova/tests/unit/compute/test_utils.py:L31)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/compute/test_utils.py:L32)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/compute/test_utils.py:L33)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/compute/test_utils.py:L34)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/compute/test_utils.py:L35)
- `import nova.conf` (src/nova/tests/unit/compute/test_utils.py:L36)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_utils.py:L37)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_utils.py:L38)
- `nova.image`: imports `glance` (src/nova/tests/unit/compute/test_utils.py:L39)
- `nova.network`: imports `model` (src/nova/tests/unit/compute/test_utils.py:L40)
- `nova.notifications.objects`: imports `base as notifications_objects_base` (src/nova/tests/unit/compute/test_utils.py:L41)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_utils.py:L42)
- `nova.objects`: imports `base` (src/nova/tests/unit/compute/test_utils.py:L43)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/compute/test_utils.py:L44)
- `nova.objects`: imports `fields` (src/nova/tests/unit/compute/test_utils.py:L45)
- `nova`: imports `rpc` (src/nova/tests/unit/compute/test_utils.py:L46)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/compute/test_utils.py:L47)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_utils.py:L48)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/compute/test_utils.py:L49)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/compute/test_utils.py:L50)
- `nova.tests.unit`: imports `fake_crypto` (src/nova/tests/unit/compute/test_utils.py:L51)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_utils.py:L52)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/unit/compute/test_utils.py:L53)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/unit/compute/test_utils.py:L54)
- `nova.tests.unit.objects`: imports `test_flavor` (src/nova/tests/unit/compute/test_utils.py:L55)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/compute/test_utils.py:L56)

## Side Effects

- **global-mutation**: FAKE_IMAGE_REF = uuids.image_ref (src/nova/tests/unit/compute/test_utils.py:L59)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/compute/test_utils.py:L61)

## Security Surface

- **sink** (`db-write`): inst.update(params) (src/nova/tests/unit/compute/test_utils.py:L84)
- **sink** (`db-write`): instance.system_metadata.update(sys_metadata) (src/nova/tests/unit/compute/test_utils.py:L388)
- **sink** (`db-write`): instance.system_metadata.update(sys_metadata) (src/nova/tests/unit/compute/test_utils.py:L452)
- **sink** (`db-write`): instance.system_metadata.update(sys_metadata) (src/nova/tests/unit/compute/test_utils.py:L912)
- **sink** (`db-write`): instance.system_metadata.update(sys_metadata) (src/nova/tests/unit/compute/test_utils.py:L930)

