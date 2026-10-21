# src/nova/tests/unit/virt/vmwareapi/test_vmops.py

## Overview

This file implements the `test_vmops` module, defining 2 classs, 11 functions, 158 methods, 29 imports.

Lines: total 2980, code 2633, comment 44, blank 303

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DsPathMatcher` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L49–L54` |
| `DsPathMatcher.__init__` | method | (self, expected_ds_path_str) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L50–L51` |
| `DsPathMatcher.__eq__` | method | (self, ds_path_param) | public | `str(ds_path_param) == self.expected_ds_path_str` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L54) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L53–L54` |
| `VMwareVMOpsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L57–L2980` |
| `VMwareVMOpsTestCase.setUp` | method | (self) | public | not declared | 1/120 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L58–L179` |
| `VMwareVMOpsTestCase.test_get_machine_id_str` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L181–L187` |
| `VMwareVMOpsTestCase._setup_create_folder_mocks` | method | (self) | private | `ds_name, ds_ref, ops, path, dc_ref` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L200) | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L189–L200` |
| `VMwareVMOpsTestCase.test_create_folder_if_missing` | method | (self, mock_mkdir) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L203–L206` |
| `VMwareVMOpsTestCase.test_create_folder_if_missing_exception` | method | (self, mock_mkdir) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L209–L213` |
| `VMwareVMOpsTestCase.test_get_valid_vms_from_retrieve_result` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L215–L225` |
| `VMwareVMOpsTestCase.test_get_valid_vms_from_retrieve_result_with_invalid` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L227–L248` |
| `VMwareVMOpsTestCase.test_delete_vm_snapshot` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L250–L265` |
| `VMwareVMOpsTestCase.test_delete_vm_snapshot.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_remove_snapshot_task'` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L256) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L251–L256` |
| `VMwareVMOpsTestCase.test_create_vm_snapshot` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L267–L293` |
| `VMwareVMOpsTestCase.test_create_vm_snapshot.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_snapshot_task'` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L278); `task_info` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L283) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L271–L283` |
| `VMwareVMOpsTestCase.test_update_instance_progress` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L295–L300` |
| `VMwareVMOpsTestCase.test_get_info` | method | (self, mock_get_vm_ref) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L304–L317` |
| `VMwareVMOpsTestCase.test_get_info_when_ds_unavailable` | method | (self, mock_get_vm_ref) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L320–L331` |
| `VMwareVMOpsTestCase.test_get_info_instance_deleted` | method | (self, mock_get_vm_ref) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L334–L354` |
| `VMwareVMOpsTestCase.test_get_info_instance_deleted.mock_call_method` | function | (module, method, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L345–L346` |
| `VMwareVMOpsTestCase._test_get_datacenter_ref_and_name` | method | (self, ds_ref_exists=False) | private | not declared | 3/21 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L356–L378` |
| `VMwareVMOpsTestCase.test_get_datacenter_ref_and_name` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L380–L381` |
| `VMwareVMOpsTestCase.test_get_datacenter_ref_and_name_with_no_datastore` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L383–L384` |
| `VMwareVMOpsTestCase.test_rescue` | method | (self, mock_get_ds_by_ref, mock_power_on, mock_reconfigure, mock_get_boot_spec, mock_find_rescue, mock_get_vm_ref, mock_disk_copy, mock_power_off, mock_glance) | public | not declared | 1/50 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L395–L448` |
| `VMwareVMOpsTestCase.test_unrescue_power_on` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L450–L451` |
| `VMwareVMOpsTestCase.test_unrescue_power_off` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L453–L454` |
| `VMwareVMOpsTestCase._test_unrescue` | method | (self, power_on) | private | not declared | 2/26 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L456–L487` |
| `VMwareVMOpsTestCase._test_unrescue.fake_call_method` | function | (module, method, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L461–L464` |
| `VMwareVMOpsTestCase._test_clean_shutdown` | method | (self, mock_sleep, timeout, retry_interval, returns_on, returns_off, vmware_tools_status, succeeds) | private | not declared | 7/39 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L490–L549` |
| `VMwareVMOpsTestCase._test_clean_shutdown.fake_call_method` | function | (module, method, *args, **kwargs) | public | `props` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L535); `` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L537) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L530–L537` |
| `VMwareVMOpsTestCase.test_clean_shutdown_first_time` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L551–L557` |
| `VMwareVMOpsTestCase.test_clean_shutdown_second_time` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L559–L565` |
| `VMwareVMOpsTestCase.test_clean_shutdown_timeout` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L567–L573` |
| `VMwareVMOpsTestCase.test_clean_shutdown_already_off` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L575–L581` |
| `VMwareVMOpsTestCase.test_clean_shutdown_no_vmwaretools` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L583–L589` |
| `VMwareVMOpsTestCase._test_finish_migration` | method | (self, power_on=True, resize_instance=False) | private | not declared | 2/33 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L591–L624` |
| `VMwareVMOpsTestCase.test_finish_migration_power_on` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L626–L627` |
| `VMwareVMOpsTestCase.test_finish_migration_power_off` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L629–L630` |
| `VMwareVMOpsTestCase.test_finish_migration_power_on_resize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L632–L633` |
| `VMwareVMOpsTestCase._test_resize_create_ephemerals` | method | (self, vmdk, datastore, mock_get_vmdk_info, mock_get_datastore_by_ref, mock_create_ephemeral, mock_create_swap) | private | not declared | 2/28 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L640–L667` |
| `VMwareVMOpsTestCase.test_resize_create_ephemerals` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L669–L680` |
| `VMwareVMOpsTestCase.test_resize_create_ephemerals_no_root` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L682–L684` |
| `VMwareVMOpsTestCase._test_finish_revert_migration` | method | (self, fake_power_on, fake_get_vm_ref, fake_power_off, fake_resize_spec, fake_reconfigure_vm, fake_get_browser, fake_original_exists, fake_disk_move, fake_disk_delete, fake_remove_ephemerals_and_swap, fake_resize_create_ephemerals_and_swap, fake_get_extra_specs, power_on) | private | not declared | 2/95 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L701–L800` |
| `VMwareVMOpsTestCase.test_finish_revert_migration_power_on` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L802–L803` |
| `VMwareVMOpsTestCase.test_finish_revert_migration_power_off` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L805–L806` |
| `VMwareVMOpsTestCase._test_find_esx_host` | method | (self, cluster_hosts, ds_hosts) | private | `self._vmops._find_esx_host('fake_cluster', 'fake_ds')` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L821) | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L808–L821` |
| `VMwareVMOpsTestCase._test_find_esx_host.mock_call_method` | function | (module, method, *args, **kwargs) | public | `ret` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L813); `ret` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L817) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L809–L817` |
| `VMwareVMOpsTestCase.test_find_esx_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L823–L831` |
| `VMwareVMOpsTestCase.test_find_esx_host_none` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L833–L841` |
| `VMwareVMOpsTestCase.test_find_datastore_for_migration` | method | (self, mock_get_ds, mock_get_vmdk) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L845–L866` |
| `VMwareVMOpsTestCase.test_find_datastore_for_migration.mock_call_method` | function | (module, method, *args, **kwargs) | public | `ret` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L852) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L846–L852` |
| `VMwareVMOpsTestCase.test_find_datastore_for_migration_other` | method | (self, mock_get_ds, mock_get_vmdk) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L870–L893` |
| `VMwareVMOpsTestCase.test_find_datastore_for_migration_other.mock_call_method` | function | (module, method, *args, **kwargs) | public | `ret` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L878) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L872–L878` |
| `VMwareVMOpsTestCase.test_live_migration` | method | (self, mock_find_host, mock_find_datastore, mock_get_respool, mock_get_cluster, mock_get_vm, mock_relocate) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L903–L925` |
| `VMwareVMOpsTestCase.test_resize_vm` | method | (self, fake_resize_spec, fake_reconfigure, fake_get_extra_specs, fake_get_metadata) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L932–L950` |
| `VMwareVMOpsTestCase.test_resize_disk` | method | (self, fake_disk_copy, fake_disk_move, fake_get_extra_specs, fake_extend) | public | not declared | 1/46 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L956–L1003` |
| `VMwareVMOpsTestCase.test_remove_ephemerals_and_swap` | method | (self, get_ephemerals, get_swap, detach_devices) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1008–L1018` |
| `VMwareVMOpsTestCase.test_confirm_migration` | method | (self, fake_get_vm_ref, fake_get_browser, fake_original_exists, fake_disk_delete) | public | not declared | 1/35 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1026–L1061` |
| `VMwareVMOpsTestCase.test_migrate_disk_and_power_off` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1063–L1065` |
| `VMwareVMOpsTestCase.test_migrate_disk_and_power_off_zero_disk_flavor` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1067–L1069` |
| `VMwareVMOpsTestCase.test_migrate_disk_and_power_off_disk_shrink` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1071–L1074` |
| `VMwareVMOpsTestCase._test_migrate_disk_and_power_off` | method | (self, fake_get_vm_ref, fake_progress, fake_power_off, fake_resize_vm, fake_resize_disk, fake_get_vmdk_info, fake_remove_ephemerals_and_swap, flavor_root_gb) | private | not declared | 2/30 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1083–L1114` |
| `VMwareVMOpsTestCase.test_configure_config_drive` | method | (self, mock_create_config_drive, mock_attach_cdrom_to_vm, mock_get_inventory_path) | public | not declared | 1/21 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1119–L1140` |
| `VMwareVMOpsTestCase.test_prepare_for_spawn_invalid_ram` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1142–L1148` |
| `VMwareVMOpsTestCase.test_spawn_mask_block_device_info_password` | method | (self, mock_lock, mock_build_virtual_machine, mock_get_vm_config_info, mock_fetch_image_if_missing, mock_debug, mock_glance) | public | not declared | 2/28 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1156–L1200` |
| `VMwareVMOpsTestCase.test_spawn_mask_block_device_info_password.fake_debug` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1170–L1173` |
| `VMwareVMOpsTestCase._get_metadata` | method | (self, is_image_used=True) | private | `("name:fake_display_name\n" "userid:fake_user\n" "username:None\n" "projectid:fake_project\n" "projectname:None\n" "flavor:name:m1.small\n" "flavor:memory_mb:512\n" "flavor:vcpus:1\n" "flavor:ephemera` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1203) | 2/16 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1202–L1217` |
| `VMwareVMOpsTestCase.test_spawn_non_root_block_device` | method | (self, from_image, get_extra_specs, get_vm_config_info, build_virtual_machine, enlist_image, fetch_image, use_disk_image, power_on_instance, create_folders, rename_vm) | public | not declared | 1/50 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1231–L1282` |
| `VMwareVMOpsTestCase.test_spawn_with_no_image_and_block_devices` | method | (self, from_image, get_extra_specs, get_vm_config_info, build_virtual_machine, power_on_instance, create_folders, rename_vm) | public | not declared | 1/50 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1292–L1345` |
| `VMwareVMOpsTestCase.test_spawn_unsupported_hardware` | method | (self, from_image, get_extra_specs, get_vm_config_info, build_virtual_machine, power_on_instance, create_folders) | public | not declared | 1/33 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1354–L1389` |
| `VMwareVMOpsTestCase.test_get_ds_browser` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1391–L1403` |
| `VMwareVMOpsTestCase._test_use_disk_image_as_linked_clone` | method | (self, mock_copy_virtual_disk, mock_extend_virtual_disk, mock_sized_image_exists, flavor_fits_image=False) | private | not declared | 3/37 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1409–L1452` |
| `VMwareVMOpsTestCase.test_use_disk_image_as_linked_clone` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1454–L1455` |
| `VMwareVMOpsTestCase.test_use_disk_image_as_linked_clone_flavor_fits_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1457–L1458` |
| `VMwareVMOpsTestCase._test_use_disk_image_as_full_clone` | method | (self, mock_copy_virtual_disk, mock_extend_virtual_disk, flavor_fits_image=False) | private | not declared | 3/34 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1462–L1501` |
| `VMwareVMOpsTestCase.test_use_disk_image_as_full_clone` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1503–L1504` |
| `VMwareVMOpsTestCase.test_use_disk_image_as_full_clone_image_too_big` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1506–L1507` |
| `VMwareVMOpsTestCase._test_use_iso_image` | method | (self, mock_create_virtual_disk, mock_attach_cdrom, with_root_disk) | private | not declared | 2/35 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1511–L1550` |
| `VMwareVMOpsTestCase.test_use_iso_image_with_root_disk` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1552–L1553` |
| `VMwareVMOpsTestCase.test_use_iso_image_without_root_disk` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1555–L1556` |
| `VMwareVMOpsTestCase._verify_spawn_method_calls` | method | (self, mock_call_method, extras=None) | private | not declared | 3/15 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1558–L1578` |
| `VMwareVMOpsTestCase._test_spawn` | method | (self, mock_copy_virtual_disk, mock_power_on_instance, mock_get_and_set_vnc_config, mock_enlist_image, mock_set_machine_id, mock_mkdir, mock_create_vm, mock_get_create_spec, mock_get_vif_info, mock_get_datacenter_ref_and_name, mock_get_datastore, mock_configure_config_drive, mock_update_vnic_index, mock_create_folders, block_device_info=None, extra_specs=None, config_drive=False) | private | not declared | 12/144 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1604–L1761` |
| `VMwareVMOpsTestCase._test_get_spawn_vm_config_info` | method | (self, mock_get_datacenter_ref_and_name, mock_get_datastore, image_size_bytes=0) | private | not declared | 1/25 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1765–L1793` |
| `VMwareVMOpsTestCase.test_get_spawn_vm_config_info` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1795–L1797` |
| `VMwareVMOpsTestCase.test_get_spawn_vm_config_info_image_too_big` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1799–L1803` |
| `VMwareVMOpsTestCase.test_spawn` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1805–L1806` |
| `VMwareVMOpsTestCase.test_spawn_config_drive_enabled` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1808–L1810` |
| `VMwareVMOpsTestCase.test_spawn_with_block_device_info` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1812–L1818` |
| `VMwareVMOpsTestCase.test_spawn_with_block_device_info_with_config_drive` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1820–L1828` |
| `VMwareVMOpsTestCase._spawn_with_block_device_info_ephemerals` | method | (self, ephemerals) | private | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1830–L1832` |
| `VMwareVMOpsTestCase.test_spawn_with_block_device_info_ephemerals` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1834–L1839` |
| `VMwareVMOpsTestCase.test_spawn_with_block_device_info_ephemerals_no_disk_bus` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1841–L1846` |
| `VMwareVMOpsTestCase.test_spawn_with_block_device_info_swap` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1848–L1852` |
| `VMwareVMOpsTestCase.test_spawn_with_ephemerals_and_swap` | method | (self, from_image, get_extra_specs, get_vm_config_info, build_virtual_machine, enlist_image, fetch_image, use_disk_image, create_and_attach_thin_disk, power_on_instance, rename_vm) | public | not declared | 1/73 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1865–L1944` |
| `VMwareVMOpsTestCase._get_fake_vi` | method | (self) | private | `vi` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1954) | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1946–L1954` |
| `VMwareVMOpsTestCase.test_create_and_attach_thin_disk` | method | (self, mock_create) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1957–L1974` |
| `VMwareVMOpsTestCase.test_create_ephemeral_with_bdi` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1976–L1994` |
| `VMwareVMOpsTestCase._test_create_ephemeral_from_instance` | method | (self, bdi) | private | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L1996–L2009` |
| `VMwareVMOpsTestCase.test_create_ephemeral_with_bdi_but_no_ephemerals` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2011–L2014` |
| `VMwareVMOpsTestCase.test_create_ephemeral_with_no_bdi` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2016–L2018` |
| `VMwareVMOpsTestCase._test_create_swap_from_instance` | method | (self, bdi) | private | not declared | 2/19 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2020–L2038` |
| `VMwareVMOpsTestCase.test_create_swap_with_bdi` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2040–L2044` |
| `VMwareVMOpsTestCase.test_create_swap_with_no_bdi` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2046–L2047` |
| `VMwareVMOpsTestCase.test_build_virtual_machine` | method | (self, mock_create_folder) | public | not declared | 5/36 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2051–L2098` |
| `VMwareVMOpsTestCase.test_spawn_cpu_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2100–L2103` |
| `VMwareVMOpsTestCase.test_spawn_cpu_reservation` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2105–L2108` |
| `VMwareVMOpsTestCase.test_spawn_cpu_allocations` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2110–L2114` |
| `VMwareVMOpsTestCase.test_spawn_cpu_shares_level` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2116–L2119` |
| `VMwareVMOpsTestCase.test_spawn_cpu_shares_custom` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2121–L2125` |
| `VMwareVMOpsTestCase.test_spawn_memory_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2127–L2130` |
| `VMwareVMOpsTestCase.test_spawn_memory_reservation` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2132–L2135` |
| `VMwareVMOpsTestCase.test_spawn_memory_allocations` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2137–L2141` |
| `VMwareVMOpsTestCase.test_spawn_memory_shares_level` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2143–L2146` |
| `VMwareVMOpsTestCase.test_spawn_memory_shares_custom` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2148–L2152` |
| `VMwareVMOpsTestCase.test_spawn_vif_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2154–L2157` |
| `VMwareVMOpsTestCase.test_spawn_vif_reservation` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2159–L2162` |
| `VMwareVMOpsTestCase.test_spawn_vif_shares_level` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2164–L2167` |
| `VMwareVMOpsTestCase.test_spawn_vif_shares_custom` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2169–L2173` |
| `VMwareVMOpsTestCase._validate_extra_specs` | method | (self, expected, actual) | private | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2175–L2183` |
| `VMwareVMOpsTestCase._validate_flavor_extra_specs` | method | (self, flavor_extra_specs, expected) | private | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2185–L2195` |
| `VMwareVMOpsTestCase.test_video_ram` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2203–L2211` |
| `VMwareVMOpsTestCase.test_video_ram_if_none` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2219–L2225` |
| `VMwareVMOpsTestCase.test_max_video_ram_none` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2233–L2249` |
| `VMwareVMOpsTestCase.test_success_video_ram` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2258–L2267` |
| `VMwareVMOpsTestCase.test_zero_video_ram` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2275–L2281` |
| `VMwareVMOpsTestCase._calculate_expected_fake_video_ram` | method | (self, amount) | private | `amount * units.Mi / units.Ki` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2284) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2283–L2284` |
| `VMwareVMOpsTestCase._get_image_and_flavor_for_test_video` | method | (self, meta_dict) | private | `image_meta, flavor` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2298) | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2286–L2298` |
| `VMwareVMOpsTestCase.test_extra_specs_cpu_limit` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2300–L2304` |
| `VMwareVMOpsTestCase.test_extra_specs_cpu_reservations` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2306–L2310` |
| `VMwareVMOpsTestCase.test_extra_specs_cpu_allocations` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2312–L2318` |
| `VMwareVMOpsTestCase.test_extra_specs_cpu_shares_level` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2320–L2324` |
| `VMwareVMOpsTestCase.test_extra_specs_cpu_shares_custom` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2326–L2332` |
| `VMwareVMOpsTestCase.test_extra_specs_vif_shares_custom_pos01` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2334–L2340` |
| `VMwareVMOpsTestCase.test_extra_specs_vif_shares_with_invalid_level` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2342–L2349` |
| `VMwareVMOpsTestCase._make_vm_config_info` | method | (self, is_iso=False, is_sparse_disk=False, vsphere_location=None) | private | `vi` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2371) | 3/20 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2351–L2371` |
| `VMwareVMOpsTestCase._test_fetch_image_if_missing` | method | (self, mock_update_image_size, mock_delete_datastore_file, mock_cache_flat_image, mock_cache_sparse_image, mock_cache_iso_image, mock_prepare_flat_image, mock_prepare_sparse_image, mock_prepare_iso_image, mock_fetch_image_as_file, mock_check_cache_folder, is_iso=False, is_sparse_disk=False) | private | not declared | 4/37 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2383–L2422` |
| `VMwareVMOpsTestCase.test_fetch_image_if_missing` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2424–L2425` |
| `VMwareVMOpsTestCase.test_fetch_image_if_missing_with_sparse` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2427–L2429` |
| `VMwareVMOpsTestCase.test_fetch_image_if_missing_with_iso` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2431–L2433` |
| `VMwareVMOpsTestCase.test_get_esx_host_and_cookies` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2435–L2455` |
| `VMwareVMOpsTestCase.test_get_esx_host_and_cookies.fake_invoke` | function | (module, method, *args, **kwargs) | public | `ticket` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2444); `'fira-host'` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2446) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2440–L2446` |
| `VMwareVMOpsTestCase.test_fetch_vsphere_image` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2457–L2483` |
| `VMwareVMOpsTestCase.test_fetch_image_as_file` | method | (self, mock_get_esx_host_and_cookies, mock_fetch_image) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2487–L2509` |
| `VMwareVMOpsTestCase.test_fetch_image_as_file_exception` | method | (self, mock_get_esx_host_and_cookies, mock_fetch_image, mock_get_inventory_path) | public | not declared | 1/24 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2514–L2537` |
| `VMwareVMOpsTestCase.test_fetch_image_as_vapp` | method | (self, mock_fetch_image) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2541–L2554` |
| `VMwareVMOpsTestCase.test_fetch_image_as_ova` | method | (self, mock_fetch_image) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2557–L2570` |
| `VMwareVMOpsTestCase.test_prepare_iso_image` | method | (self, mock_generate_uuid) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2573–L2582` |
| `VMwareVMOpsTestCase.test_prepare_sparse_image` | method | (self, mock_mkdir, mock_generate_uuid) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2586–L2598` |
| `VMwareVMOpsTestCase.test_prepare_flat_image` | method | (self, mock_generate_uuid, mock_delete_datastore_file, mock_create_virtual_disk, mock_mkdir) | public | not declared | 1/29 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2604–L2636` |
| `VMwareVMOpsTestCase.test_cache_iso_image` | method | (self, mock_file_move) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2639–L2648` |
| `VMwareVMOpsTestCase.test_cache_flat_image` | method | (self, mock_file_move) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2651–L2660` |
| `VMwareVMOpsTestCase.test_cache_stream_optimized_image` | method | (self, mock_mkdir, mock_disk_move) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2664–L2677` |
| `VMwareVMOpsTestCase.test_cache_sparse_image` | method | (self, mock_delete_datastore_file, mock_copy_virtual_disk, mock_file_move) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2682–L2700` |
| `VMwareVMOpsTestCase.test_get_storage_policy_none` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2702–L2713` |
| `VMwareVMOpsTestCase.test_get_storage_policy_extra_specs` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2715–L2727` |
| `VMwareVMOpsTestCase.test_get_base_folder_not_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2729–L2732` |
| `VMwareVMOpsTestCase.test_get_base_folder_host_ip` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2734–L2738` |
| `VMwareVMOpsTestCase.test_get_base_folder_cache_prefix` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2740–L2744` |
| `VMwareVMOpsTestCase._test_reboot_vm` | method | (self, reboot_type="SOFT", tool_status=True) | private | not declared | 3/20 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2746–L2779` |
| `VMwareVMOpsTestCase._test_reboot_vm.fake_call_method` | function | (module, method, *args, **kwargs) | public | `{ "runtime.powerState": "poweredOn", "summary.guest.toolsStatus": "toolsOk", "summary.guest.toolsRunningStatus": "guestToolsRunning"}` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2758); `{"runtime.powerState": "poweredOn"}` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2763); `'fake-task'` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2765) | — | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2754–L2765` |
| `VMwareVMOpsTestCase.test_reboot_vm_soft` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2781–L2782` |
| `VMwareVMOpsTestCase.test_reboot_vm_hard_toolstatus` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2784–L2785` |
| `VMwareVMOpsTestCase.test_reboot_vm_hard` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2787–L2788` |
| `VMwareVMOpsTestCase.test_get_instance_metadata` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2790–L2817` |
| `VMwareVMOpsTestCase.test_get_instance_metadata_flavor` | method | (self) | public | not declared | 3/18 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2819–L2841` |
| `VMwareVMOpsTestCase.test_attach_interface` | method | (self, mock_get_vm_ref, mock_get_attach_port_index, mock_get_network_attach_config_spec, mock_reconfigure_vm, mock_extra_specs) | public | not declared | 1/24 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2849–L2873` |
| `VMwareVMOpsTestCase.test_detach_interface` | method | (self, mock_get_vm_ref, mock_get_detach_port_index, mock_get_network_detach_config_spec, mock_reconfigure_vm, mock_get_network_device) | public | not declared | 1/21 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2881–L2902` |
| `VMwareVMOpsTestCase.test_get_mks_console` | method | (self, mock_get_vm_ref) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2905–L2920` |
| `VMwareVMOpsTestCase.test_get_cores_per_socket` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2922–L2932` |
| `VMwareVMOpsTestCase.test_get_folder_name` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2934–L2945` |
| `VMwareVMOpsTestCase.test_attach_interface_with_limits` | method | (self, mock_get_vm_ref, mock_get_attach_port_index, mock_get_network_attach_config_spec, mock_reconfigure_vm, mock_extra_specs) | public | not declared | 1/27 | `src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L2953–L2980` |

## Dependencies

- `import time` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L20)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L21)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L22)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L23)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L24)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L25)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L27)
- `nova`: imports `context` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L29)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L30)
- `nova`: imports `objects` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L31)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L32)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L33)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L34)
- `nova.tests.unit.virt.vmwareapi`: imports `fake as vmwareapi_fake` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L35)
- `nova.tests.unit.virt.vmwareapi`: imports `stubs` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L36)
- `nova`: imports `version` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L37)
- `nova.virt`: imports `hardware` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L38)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L39)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L40)
- `nova.virt.vmwareapi`: imports `images` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L41)
- `nova.virt.vmwareapi`: imports `session` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L42)
- `nova.virt.vmwareapi`: imports `vif` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L43)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L44)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L45)
- `nova.virt.vmwareapi`: imports `vmops` (src/nova/tests/unit/virt/vmwareapi/test_vmops.py:L46)

