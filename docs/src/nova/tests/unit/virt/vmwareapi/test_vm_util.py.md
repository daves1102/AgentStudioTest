# src/nova/tests/unit/virt/vmwareapi/test_vm_util.py

## Overview

This file implements the `test_vm_util` module, defining 4 classs, 4 functions, 105 methods, 18 imports, 10 side effects.

Lines: total 2068, code 1758, comment 43, blank 267

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `partialObject` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L39–L42` |
| `partialObject.__init__` | method | (self, path='fake-path') | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L40–L42` |
| `VMwareVMUtilTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L45–L2027` |
| `VMwareVMUtilTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L46–L56` |
| `VMwareVMUtilTestCase._test_get_stats_from_cluster` | method | (self, connection_state="connected", maintenance_mode=False) | private | not declared | 3/55 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L58–L127` |
| `VMwareVMUtilTestCase._test_get_stats_from_cluster.fake_call_method` | function | (*args) | public | `prop_dict` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L108); `fake_objects` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L110) | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L106–L112` |
| `VMwareVMUtilTestCase.test_get_stats_from_cluster_hosts_connected_and_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L129–L130` |
| `VMwareVMUtilTestCase.test_get_stats_from_cluster_hosts_disconnected_and_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L132–L133` |
| `VMwareVMUtilTestCase.test_get_stats_from_cluster_hosts_connected_and_maintenance` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L135–L136` |
| `VMwareVMUtilTestCase.test_get_host_ref_no_hosts_in_cluster` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L138–L141` |
| `VMwareVMUtilTestCase.test_get_resize_spec` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L143–L161` |
| `VMwareVMUtilTestCase.test_get_resize_spec_with_limits` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L163–L183` |
| `VMwareVMUtilTestCase.test_update_vif_spec_opaque_net` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L185–L204` |
| `VMwareVMUtilTestCase.test_update_vif_spec_dvpg` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L206–L226` |
| `VMwareVMUtilTestCase.test_update_vif_spec_network` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L228–L244` |
| `VMwareVMUtilTestCase.test_get_cdrom_attach_config_spec` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L246–L274` |
| `VMwareVMUtilTestCase.test_lsilogic_controller_spec` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L276–L281` |
| `VMwareVMUtilTestCase.test_paravirtual_controller_spec` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L283–L288` |
| `VMwareVMUtilTestCase.test_create_controller_spec_with_specific_bus_number` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L290–L295` |
| `VMwareVMUtilTestCase._vmdk_path_and_adapter_type_devices` | method | (self, filename, parent=None) | private | `devices` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L320) | 2/22 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L297–L320` |
| `VMwareVMUtilTestCase.test_get_vmdk_path_and_adapter_type` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L322–L332` |
| `VMwareVMUtilTestCase.test_get_vmdk_adapter_type` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L334–L348` |
| `VMwareVMUtilTestCase.test_get_scsi_adapter_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L350–L360` |
| `VMwareVMUtilTestCase.test_get_scsi_adapter_type_with_error` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L362–L376` |
| `VMwareVMUtilTestCase.test_find_allocated_slots` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L378–L389` |
| `VMwareVMUtilTestCase.test_get_bus_number_for_scsi_controller` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L391–L397` |
| `VMwareVMUtilTestCase.test_get_bus_number_for_scsi_controller_buses_used_up` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L399–L410` |
| `VMwareVMUtilTestCase.test_allocate_controller_key_and_unit_number_ide_default` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L412–L427` |
| `VMwareVMUtilTestCase.test_allocate_controller_key_and_unit_number_ide` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L429–L447` |
| `VMwareVMUtilTestCase.test_allocate_controller_key_and_unit_number_scsi` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L449–L464` |
| `VMwareVMUtilTestCase.test_allocate_controller_key_and_unit_number_scsi_new_controller` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L466–L481` |
| `VMwareVMUtilTestCase.test_get_vnc_config_spec` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L483–L505` |
| `VMwareVMUtilTestCase._create_fake_vms` | method | (self) | private | `fake_vms` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L515) | 2/9 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L507–L515` |
| `VMwareVMUtilTestCase.test_get_vnc_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L517–L523` |
| `VMwareVMUtilTestCase.test_get_vnc_port_exhausted` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L525–L531` |
| `VMwareVMUtilTestCase.test_get_cluster_ref_by_name_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L533–L537` |
| `VMwareVMUtilTestCase.test_get_cluster_ref_by_name_exists` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L539–L545` |
| `VMwareVMUtilTestCase.test_get_cluster_ref_by_name_missing` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L547–L552` |
| `VMwareVMUtilTestCase.test_propset_dict_simple` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L554–L561` |
| `VMwareVMUtilTestCase.test_propset_dict_complex` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L563–L578` |
| `VMwareVMUtilTestCase._test_detach_virtual_disk_spec` | method | (self, destroy_disk=False) | private | not declared | 2/13 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L580–L592` |
| `VMwareVMUtilTestCase.test_detach_virtual_disk_spec` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L594–L595` |
| `VMwareVMUtilTestCase.test_detach_virtual_disk_destroy_spec` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L597–L598` |
| `VMwareVMUtilTestCase._create_vm_config_spec` | method | (self) | private | `spec` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L634) | 1/31 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L600–L634` |
| `VMwareVMUtilTestCase.test_get_vm_extra_config_spec` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L636–L644` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L646–L655` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_serial_port` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L657–L671` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_allocations` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L673–L722` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_limit` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L724–L774` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_share` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L776–L827` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_share_custom` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L829–L878` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_metadata` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L880–L923` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_firmware` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L925–L965` |
| `VMwareVMUtilTestCase.test_create_vm` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L967–L999` |
| `VMwareVMUtilTestCase.test_create_vm.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_create_vm_task'` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L971) | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L969–L973` |
| `VMwareVMUtilTestCase.test_create_vm.fake_wait_for_task` | function | (self, *args) | public | `task_info` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L977) | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L975–L977` |
| `VMwareVMUtilTestCase.test_create_vm_invalid_guestid` | method | (self, mock_log_warn) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1002–L1029` |
| `VMwareVMUtilTestCase.test_create_vm_invalid_guestid.fake_log_warn` | function | (msg, values) | public | `` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1013) | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1011–L1015` |
| `VMwareVMUtilTestCase.test_convert_vif_model` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1031–L1045` |
| `VMwareVMUtilTestCase.test_power_on_instance_with_vm_ref` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1047–L1059` |
| `VMwareVMUtilTestCase.test_power_on_instance_without_vm_ref` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1061–L1075` |
| `VMwareVMUtilTestCase.test_power_on_instance_with_exception` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1077–L1092` |
| `VMwareVMUtilTestCase.test_power_on_instance_with_power_state_exception` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1094–L1108` |
| `VMwareVMUtilTestCase.test_create_virtual_disk` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1110–L1134` |
| `VMwareVMUtilTestCase.test_copy_virtual_disk` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1136–L1153` |
| `VMwareVMUtilTestCase._create_fake_vm_objects` | method | (self) | private | `fake_objects` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1158) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1155–L1158` |
| `VMwareVMUtilTestCase.test_reconfigure_vm` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1160–L1171` |
| `VMwareVMUtilTestCase._get_network_attach_config_spec_opaque` | method | (self, network_ref, vc6_onwards=False) | private | not declared | 3/45 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1173–L1221` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_opaque_integration_bridge` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1223–L1228` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_opaque` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1230–L1235` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_opaque_vc6_onwards` | method | (self, mock_object) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1238–L1252` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_opaque_vc6_onwards.FakeVirtualE1000` | class | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1241–L1244` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_opaque_vc6_onwards.FakeVirtualE1000.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1242–L1244` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_dvs` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1254–L1300` |
| `VMwareVMUtilTestCase.test_get_network_attach_config_spec_dvs_with_limits` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1302–L1363` |
| `VMwareVMUtilTestCase._get_create_vif_spec` | method | (self, fake_factory, vif_info) | private | `vm_util._create_vif_spec(fake_factory, vif_info, limits)` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1371) | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1365–L1371` |
| `VMwareVMUtilTestCase._construct_vif_spec` | method | (self, fake_factory, vif_info) | private | `device_change` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1409) | 2/32 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1373–L1409` |
| `VMwareVMUtilTestCase.test_get_create_vif_spec` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1411–L1422` |
| `VMwareVMUtilTestCase.test_get_create_vif_spec_dvs_port_key` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1424–L1436` |
| `VMwareVMUtilTestCase.test_get_network_detach_config_spec` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1438–L1456` |
| `VMwareVMUtilTestCase.test_power_off_instance` | method | (self, fake_get_ref) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1459–L1471` |
| `VMwareVMUtilTestCase.test_power_off_instance_no_vm_ref` | method | (self, fake_get_ref) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1474–L1486` |
| `VMwareVMUtilTestCase.test_power_off_instance_with_exception` | method | (self, fake_get_ref) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1489–L1504` |
| `VMwareVMUtilTestCase.test_power_off_instance_power_state_exception` | method | (self, fake_get_ref) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1507–L1521` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_updated_hw_version` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1523–L1529` |
| `VMwareVMUtilTestCase.test_vm_create_spec_with_profile_spec` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1531–L1539` |
| `VMwareVMUtilTestCase.test_vm_create_spec_with_multi_vifs` | method | (self) | public | not declared | 1/75 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1541–L1629` |
| `VMwareVMUtilTestCase.test_get_storage_profile_spec` | method | (self, mock_retrieve_profile_id) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1632–L1640` |
| `VMwareVMUtilTestCase.test_storage_spec_empty_profile` | method | (self, mock_retrieve_profile_id) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1643–L1647` |
| `VMwareVMUtilTestCase.test_get_ephemeral_name` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1649–L1651` |
| `VMwareVMUtilTestCase.test_detach_and_delete_devices_config_spec` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1653–L1671` |
| `VMwareVMUtilTestCase.test_detach_devices_from_vm` | method | (self, mock_reconfigure) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1674–L1680` |
| `VMwareVMUtilTestCase.test_get_vm_boot_spec` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1682–L1695` |
| `VMwareVMUtilTestCase._get_devices` | method | (self, filename) | private | `self._vmdk_path_and_adapter_type_devices(filename)` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1698) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1697–L1698` |
| `VMwareVMUtilTestCase.test_find_rescue_device` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1700–L1704` |
| `VMwareVMUtilTestCase.test_find_rescue_device_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1706–L1712` |
| `VMwareVMUtilTestCase.test_validate_limits` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1714–L1721` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_console_delay` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1723–L1769` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_cores_per_socket` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1771–L1811` |
| `VMwareVMUtilTestCase.test_get_vm_create_spec_with_memory_allocations` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1813–L1862` |
| `VMwareVMUtilTestCase.test_get_swap` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1864–L1892` |
| `VMwareVMUtilTestCase.test_create_folder` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1894–L1909` |
| `VMwareVMUtilTestCase.test_create_folder_duplicate_name` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1911–L1928` |
| `VMwareVMUtilTestCase.test_folder_path_ref_cache` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1930–L1934` |
| `VMwareVMUtilTestCase.test_get_vm_name` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1936–L1951` |
| `VMwareVMUtilTestCase.test_rename_vm` | method | (self, mock_get_name) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1954–L1967` |
| `VMwareVMUtilTestCase.test_create_fcd_id_obj` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1969–L1978` |
| `VMwareVMUtilTestCase.test_attach_fcd` | method | (self, get_moref, create_fcd_id_obj) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1982–L2008` |
| `VMwareVMUtilTestCase.test_detach_fcd` | method | (self, create_fcd_id_obj) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L2011–L2027` |
| `VMwareVMUtilGetHostRefTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L2032–L2068` |
| `VMwareVMUtilGetHostRefTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L2039–L2048` |
| `VMwareVMUtilGetHostRefTestCase.test_get_host_ref_for_vm` | method | (self, mock_get_vm_ref) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L2051–L2057` |
| `VMwareVMUtilGetHostRefTestCase.test_get_host_name_for_vm` | method | (self, mock_get_vm_ref) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L2060–L2068` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L18)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L21)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L22)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L23)
- `oslo_vmware`: imports `pbm` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L24)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L27)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L29)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L30)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L31)
- `nova.tests.unit.virt.vmwareapi`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L32)
- `nova.tests.unit.virt.vmwareapi`: imports `stubs` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L33)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L34)
- `nova.virt.vmwareapi`: imports `session as vmware_session` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L35)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L36)

## Side Effects

- **network**: spec.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L625)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L702)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L752)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L807)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L858)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L913)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L956)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1759)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1799)
- **network**: expected.managedBy.extensionKey = 'org.openstack.compute' (src/nova/tests/unit/virt/vmwareapi/test_vm_util.py:L1842)

