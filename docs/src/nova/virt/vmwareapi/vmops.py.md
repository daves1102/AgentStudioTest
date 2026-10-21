# src/nova/virt/vmwareapi/vmops.py

## Overview

This file implements the `vmops` module, defining 2 classs, 3 constants, 3 functions, 98 methods, 2 propertys, 1 staticmethod, 40 imports, 4 side effects, 3 security surface entries.

Lines: total 2159, code 1723, comment 179, blank 257

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L66–L66` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L68–L68` |
| `RESIZE_TOTAL_STEPS` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L70–L70` |
| `VirtualMachineInstanceConfigInfo` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L73–L104` |
| `VirtualMachineInstanceConfigInfo.__init__` | method | (self, instance, image_info, datastore, dc_info, image_cache, extra_specs=None) | public | not declared | 1/9 | `src/nova/virt/vmwareapi/vmops.py:L76–L89` |
| `VirtualMachineInstanceConfigInfo.cache_image_folder` | method | (self) | public | `` (src/nova/virt/vmwareapi/vmops.py:L94); `self._image_cache.get_image_cache_folder( self.datastore, self.ii.image_id)` (src/nova/virt/vmwareapi/vmops.py:L95) | 2/5 | `src/nova/virt/vmwareapi/vmops.py:L92–L96` |
| `VirtualMachineInstanceConfigInfo.cache_image_path` | method | (self) | public | `` (src/nova/virt/vmwareapi/vmops.py:L101); `self.cache_image_folder.join(cached_image_file_name)` (src/nova/virt/vmwareapi/vmops.py:L104) | 2/6 | `src/nova/virt/vmwareapi/vmops.py:L99–L104` |
| `_time_sleep_wrapper` | function | (delay) | unexported | not declared | 1/2 | `src/nova/virt/vmwareapi/vmops.py:L111–L112` |
| `retry_if_task_in_progress` | function | (f, *args, **kwargs) | exported | `` (src/nova/virt/vmwareapi/vmops.py:L125) | 4/12 | `src/nova/virt/vmwareapi/vmops.py:L116–L127` |
| `VMwareVMOps` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L130–L2159` |
| `VMwareVMOps.__init__` | method | (self, session, virtapi, volumeops, cluster=None, datastore_regex=None) | public | not declared | 1/16 | `src/nova/virt/vmwareapi/vmops.py:L133–L149` |
| `VMwareVMOps._get_base_folder` | method | (self) | private | `base_folder` (src/nova/virt/vmwareapi/vmops.py:L163) | 3/10 | `src/nova/virt/vmwareapi/vmops.py:L151–L163` |
| `VMwareVMOps._extend_virtual_disk` | method | (self, instance, requested_size, name, dc_ref) | private | not declared | 3/23 | `src/nova/virt/vmwareapi/vmops.py:L165–L189` |
| `VMwareVMOps._delete_datastore_file` | method | (self, datastore_path, dc_ref) | private | not declared | 2/11 | `src/nova/virt/vmwareapi/vmops.py:L191–L201` |
| `VMwareVMOps._extend_if_required` | method | (self, dc_info, image_info, instance, root_vmdk_path) | private | not declared | 2/6 | `src/nova/virt/vmwareapi/vmops.py:L203–L209` |
| `VMwareVMOps._configure_config_drive` | method | (self, context, instance, vm_ref, dc_info, datastore, injected_files, admin_password, network_info) | private | not declared | 1/20 | `src/nova/virt/vmwareapi/vmops.py:L211–L230` |
| `VMwareVMOps._get_instance_metadata` | method | (self, context, instance, flavor=None) | private | `''.join(['%s:%s\n' % (k, v) for k, v in metadata])` (src/nova/virt/vmwareapi/vmops.py:L249) | 3/17 | `src/nova/virt/vmwareapi/vmops.py:L232–L249` |
| `VMwareVMOps._create_folders` | method | (self, parent_folder, folder_path) | private | `folder_ref` (src/nova/virt/vmwareapi/vmops.py:L264) | 3/14 | `src/nova/virt/vmwareapi/vmops.py:L251–L264` |
| `VMwareVMOps._get_folder_name` | method | (self, name, id_) | private | `'%s (%s)' % (name[:40], id_[:36])` (src/nova/virt/vmwareapi/vmops.py:L270) | 1/2 | `src/nova/virt/vmwareapi/vmops.py:L266–L270` |
| `VMwareVMOps.build_virtual_machine` | method | (self, instance, image_info, dc_info, datastore, network_info, extra_specs, metadata) | public | `vm_ref` (src/nova/virt/vmwareapi/vmops.py:L305) | 2/29 | `src/nova/virt/vmwareapi/vmops.py:L272–L305` |
| `VMwareVMOps._get_extra_specs` | method | (self, flavor, image_meta=None) | private | `extra_specs` (src/nova/virt/vmwareapi/vmops.py:L347) | 11/38 | `src/nova/virt/vmwareapi/vmops.py:L307–L347` |
| `VMwareVMOps._get_esx_host_and_cookies` | method | (self, datastore, dc_path, file_path) | private | `host_name, [Cookie(name, value)]` (src/nova/virt/vmwareapi/vmops.py:L361) | 1/11 | `src/nova/virt/vmwareapi/vmops.py:L349–L361` |
| `VMwareVMOps._fetch_vsphere_image` | method | (self, context, vi, image_ds_loc) | private | not declared | 1/26 | `src/nova/virt/vmwareapi/vmops.py:L363–L393` |
| `VMwareVMOps._fetch_image_as_file` | method | (self, context, vi, image_ds_loc) | private | not declared | 2/28 | `src/nova/virt/vmwareapi/vmops.py:L395–L428` |
| `VMwareVMOps._fetch_image_as_vapp` | method | (self, context, vi, image_ds_loc) | private | not declared | 1/18 | `src/nova/virt/vmwareapi/vmops.py:L430–L456` |
| `VMwareVMOps._fetch_image_as_ova` | method | (self, context, vi, image_ds_loc) | private | not declared | 1/10 | `src/nova/virt/vmwareapi/vmops.py:L458–L475` |
| `VMwareVMOps._prepare_sparse_image` | method | (self, vi) | private | `tmp_dir_loc, tmp_image_ds_loc` (src/nova/virt/vmwareapi/vmops.py:L483) | 1/7 | `src/nova/virt/vmwareapi/vmops.py:L477–L483` |
| `VMwareVMOps._prepare_flat_image` | method | (self, vi) | private | `tmp_dir_loc, flat_vmdk_ds_loc` (src/nova/virt/vmwareapi/vmops.py:L501) | 1/17 | `src/nova/virt/vmwareapi/vmops.py:L485–L501` |
| `VMwareVMOps._prepare_stream_optimized_image` | method | (self, vi) | private | `tmp_dir_loc, tmp_image_ds_loc` (src/nova/virt/vmwareapi/vmops.py:L508) | 1/6 | `src/nova/virt/vmwareapi/vmops.py:L503–L508` |
| `VMwareVMOps._prepare_iso_image` | method | (self, vi) | private | `tmp_dir_loc, tmp_image_ds_loc` (src/nova/virt/vmwareapi/vmops.py:L515) | 1/6 | `src/nova/virt/vmwareapi/vmops.py:L510–L515` |
| `VMwareVMOps._move_to_cache` | method | (self, dc_ref, src_folder_ds_path, dst_folder_ds_path) | private | not declared | 2/8 | `src/nova/virt/vmwareapi/vmops.py:L517–L530` |
| `VMwareVMOps._cache_sparse_image` | method | (self, vi, tmp_image_ds_loc) | private | not declared | 1/13 | `src/nova/virt/vmwareapi/vmops.py:L532–L547` |
| `VMwareVMOps._cache_flat_image` | method | (self, vi, tmp_image_ds_loc) | private | not declared | 1/4 | `src/nova/virt/vmwareapi/vmops.py:L549–L552` |
| `VMwareVMOps._cache_stream_optimized_image` | method | (self, vi, tmp_image_ds_loc) | private | not declared | 2/8 | `src/nova/virt/vmwareapi/vmops.py:L554–L561` |
| `VMwareVMOps._cache_iso_image` | method | (self, vi, tmp_image_ds_loc) | private | not declared | 1/4 | `src/nova/virt/vmwareapi/vmops.py:L563–L566` |
| `VMwareVMOps._get_vm_config_info` | method | (self, instance, image_info, extra_specs) | private | `VirtualMachineInstanceConfigInfo(instance, image_info, datastore, dc_info, self._imagecache, extra_specs)` (src/nova/virt/vmwareapi/vmops.py:L586) | 3/21 | `src/nova/virt/vmwareapi/vmops.py:L568–L591` |
| `VMwareVMOps._get_image_callbacks` | method | (self, vi) | private | `image_prepare, image_fetch, image_cache` (src/nova/virt/vmwareapi/vmops.py:L620) | 8/26 | `src/nova/virt/vmwareapi/vmops.py:L593–L620` |
| `VMwareVMOps._fetch_image_if_missing` | method | (self, context, vi) | private | not declared | 3/22 | `src/nova/virt/vmwareapi/vmops.py:L622–L647` |
| `VMwareVMOps._create_and_attach_thin_disk` | method | (self, instance, vm_ref, dc_info, size, adapter_type, path) | private | not declared | 1/13 | `src/nova/virt/vmwareapi/vmops.py:L649–L662` |
| `VMwareVMOps._create_ephemeral` | method | (self, bdi, instance, vm_ref, dc_info, datastore, folder, adapter_type) | private | not declared | 6/20 | `src/nova/virt/vmwareapi/vmops.py:L664–L686` |
| `VMwareVMOps._create_swap` | method | (self, bdi, instance, vm_ref, dc_info, datastore, folder, adapter_type) | private | not declared | 5/17 | `src/nova/virt/vmwareapi/vmops.py:L688–L710` |
| `VMwareVMOps._update_vnic_index` | method | (self, context, instance, network_info) | private | not declared | 3/5 | `src/nova/virt/vmwareapi/vmops.py:L712–L716` |
| `VMwareVMOps._update_image_size` | method | (self, vi) | private | not declared | 2/7 | `src/nova/virt/vmwareapi/vmops.py:L718–L730` |
| `VMwareVMOps.prepare_for_spawn` | method | (self, instance) | public | not declared | 2/5 | `src/nova/virt/vmwareapi/vmops.py:L732–L736` |
| `VMwareVMOps.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, network_info, block_device_info=None) | public | not declared | 12/62 | `src/nova/virt/vmwareapi/vmops.py:L738–L836` |
| `VMwareVMOps._is_bdm_valid` | method | (self, block_device_mapping) | private | not declared | 4/11 | `src/nova/virt/vmwareapi/vmops.py:L838–L850` |
| `VMwareVMOps._create_config_drive` | method | (self, context, instance, injected_files, admin_password, network_info, data_store_name, dc_name, upload_folder, cookies) | private | `upload_iso_path` (src/nova/virt/vmwareapi/vmops.py:L884) | 4/35 | `src/nova/virt/vmwareapi/vmops.py:L852–L888` |
| `VMwareVMOps._attach_cdrom_to_vm` | method | (self, vm_ref, instance, datastore, file_path) | private | not declared | 2/19 | `src/nova/virt/vmwareapi/vmops.py:L890–L910` |
| `VMwareVMOps._create_vm_snapshot` | method | (self, instance, vm_ref) | private | `snapshot` (src/nova/virt/vmwareapi/vmops.py:L928) | 1/17 | `src/nova/virt/vmwareapi/vmops.py:L912–L928` |
| `VMwareVMOps._delete_vm_snapshot` | method | (self, instance, vm_ref, snapshot) | private | not declared | 1/8 | `src/nova/virt/vmwareapi/vmops.py:L931–L938` |
| `VMwareVMOps._create_linked_clone_from_snapshot` | method | (self, instance, vm_ref, snapshot_ref, dc_info) | private | `task_info.result` (src/nova/virt/vmwareapi/vmops.py:L969) | 1/27 | `src/nova/virt/vmwareapi/vmops.py:L940–L969` |
| `VMwareVMOps.snapshot` | method | (self, context, instance, image_id, update_task_state) | public | not declared | 3/21 | `src/nova/virt/vmwareapi/vmops.py:L971–L1033` |
| `VMwareVMOps.snapshot._get_vm_and_vmdk_attribs` | function | — | private | `(vmdk, datastores, os_type)` (src/nova/virt/vmwareapi/vmops.py:L1003) | — | `src/nova/virt/vmwareapi/vmops.py:L988–L1003` |
| `VMwareVMOps.reboot` | method | (self, instance, network_info, reboot_type="SOFT") | public | not declared | 5/27 | `src/nova/virt/vmwareapi/vmops.py:L1035–L1067` |
| `VMwareVMOps._destroy_instance` | method | (self, instance, destroy_disks=True) | private | not declared | 10/55 | `src/nova/virt/vmwareapi/vmops.py:L1069–L1131` |
| `VMwareVMOps.destroy` | method | (self, instance, destroy_disks=True) | public | not declared | 1/4 | `src/nova/virt/vmwareapi/vmops.py:L1133–L1143` |
| `VMwareVMOps.pause` | method | (self, instance) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/vmops.py:L1145–L1147` |
| `VMwareVMOps.unpause` | method | (self, instance) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/vmops.py:L1149–L1151` |
| `VMwareVMOps.suspend` | method | (self, instance) | public | not declared | 3/18 | `src/nova/virt/vmwareapi/vmops.py:L1153–L1173` |
| `VMwareVMOps.resume` | method | (self, instance) | public | not declared | 2/16 | `src/nova/virt/vmwareapi/vmops.py:L1175–L1191` |
| `VMwareVMOps._get_rescue_device` | method | (self, instance, vm_ref) | private | `vm_util.find_rescue_device(hardware_devices, instance)` (src/nova/virt/vmwareapi/vmops.py:L1195) | 1/4 | `src/nova/virt/vmwareapi/vmops.py:L1193–L1196` |
| `VMwareVMOps.rescue` | method | (self, context, instance, network_info, image_meta) | public | not declared | 1/28 | `src/nova/virt/vmwareapi/vmops.py:L1198–L1244` |
| `VMwareVMOps.unrescue` | method | (self, instance, power_on=True) | public | not declared | 3/13 | `src/nova/virt/vmwareapi/vmops.py:L1246–L1261` |
| `VMwareVMOps.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | `` (src/nova/virt/vmwareapi/vmops.py:L1275) | 3/6 | `src/nova/virt/vmwareapi/vmops.py:L1263–L1277` |
| `VMwareVMOps._clean_shutdown` | method | (self, instance, timeout, retry_interval) | private | `False` (src/nova/virt/vmwareapi/vmops.py:L1298); `True` (src/nova/virt/vmwareapi/vmops.py:L1317); `False` (src/nova/virt/vmwareapi/vmops.py:L1327) | 6/31 | `src/nova/virt/vmwareapi/vmops.py:L1279–L1327` |
| `VMwareVMOps._get_instance_props` | method | (self, vm_ref) | private | `self._session._call_method(vutil, "get_object_properties_dict", vm_ref, lst_properties)` (src/nova/virt/vmwareapi/vmops.py:L1333) | 1/7 | `src/nova/virt/vmwareapi/vmops.py:L1329–L1335` |
| `VMwareVMOps.power_on` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/vmops.py:L1337–L1338` |
| `VMwareVMOps._update_instance_progress` | method | (self, context, instance, step, total_steps) | private | not declared | 1/9 | `src/nova/virt/vmwareapi/vmops.py:L1340–L1357` |
| `VMwareVMOps._resize_vm` | method | (self, context, instance, vm_ref, flavor, image_meta) | private | not declared | 1/11 | `src/nova/virt/vmwareapi/vmops.py:L1359–L1370` |
| `VMwareVMOps._resize_disk` | method | (self, instance, vm_ref, vmdk, flavor) | private | not declared | 3/28 | `src/nova/virt/vmwareapi/vmops.py:L1372–L1400` |
| `VMwareVMOps._remove_ephemerals_and_swap` | method | (self, vm_ref) | private | not declared | 3/7 | `src/nova/virt/vmwareapi/vmops.py:L1402–L1409` |
| `VMwareVMOps._resize_create_ephemerals_and_swap` | method | (self, vm_ref, instance, block_device_info) | private | `` (src/nova/virt/vmwareapi/vmops.py:L1416) | 2/14 | `src/nova/virt/vmwareapi/vmops.py:L1411–L1424` |
| `VMwareVMOps.migrate_disk_and_power_off` | method | (self, context, instance, dest, flavor) | public | not declared | 4/29 | `src/nova/virt/vmwareapi/vmops.py:L1426–L1472` |
| `VMwareVMOps.confirm_migration` | method | (self, migration, instance, network_info) | public | `` (src/nova/virt/vmwareapi/vmops.py:L1479) | 3/17 | `src/nova/virt/vmwareapi/vmops.py:L1474–L1491` |
| `VMwareVMOps._revert_migration_update_disks` | method | (self, vm_ref, instance, vmdk, block_device_info) | private | not declared | 2/28 | `src/nova/virt/vmwareapi/vmops.py:L1493–L1521` |
| `VMwareVMOps.finish_revert_migration` | method | (self, context, instance, network_info, block_device_info, power_on=True) | public | not declared | 3/21 | `src/nova/virt/vmwareapi/vmops.py:L1523–L1548` |
| `VMwareVMOps.finish_migration` | method | (self, context, migration, instance, disk_info, network_info, image_meta, resize_instance=False, block_device_info=None, power_on=True) | public | not declared | 2/14 | `src/nova/virt/vmwareapi/vmops.py:L1550–L1569` |
| `VMwareVMOps._find_esx_host` | method | (self, cluster_ref, ds_ref) | private | `cluster_host` (src/nova/virt/vmwareapi/vmops.py:L1584) | 4/11 | `src/nova/virt/vmwareapi/vmops.py:L1571–L1584` |
| `VMwareVMOps._find_datastore_for_migration` | method | (self, instance, vm_ref, cluster_ref, datastore_regex) | private | `None` (src/nova/virt/vmwareapi/vmops.py:L1600); `ds` (src/nova/virt/vmwareapi/vmops.py:L1611); `ds_util.get_datastore(self._session, cluster_ref, datastore_regex)` (src/nova/virt/vmwareapi/vmops.py:L1613) | 6/22 | `src/nova/virt/vmwareapi/vmops.py:L1586–L1614` |
| `VMwareVMOps.live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration, migrate_data) | public | not declared | 5/47 | `src/nova/virt/vmwareapi/vmops.py:L1616–L1667` |
| `VMwareVMOps.poll_rebooting_instances` | method | (self, timeout, instances) | public | not declared | 3/10 | `src/nova/virt/vmwareapi/vmops.py:L1669–L1682` |
| `VMwareVMOps.get_info` | method | (self, instance) | public | `hardware.InstanceInfo( state=constants.POWER_STATES[vm_props['runtime.powerState']])` (src/nova/virt/vmwareapi/vmops.py:L1696) | 2/12 | `src/nova/virt/vmwareapi/vmops.py:L1684–L1697` |
| `VMwareVMOps._get_diagnostics` | method | (self, instance) | private | `data` (src/nova/virt/vmwareapi/vmops.py:L1714) | 2/14 | `src/nova/virt/vmwareapi/vmops.py:L1699–L1714` |
| `VMwareVMOps.get_diagnostics` | method | (self, instance) | public | `{'vmware:' + k: v for k, v in data.items()}` (src/nova/virt/vmwareapi/vmops.py:L1720) | 2/3 | `src/nova/virt/vmwareapi/vmops.py:L1716–L1720` |
| `VMwareVMOps.get_instance_diagnostics` | method | (self, instance) | public | `diags` (src/nova/virt/vmwareapi/vmops.py:L1739) | 2/16 | `src/nova/virt/vmwareapi/vmops.py:L1722–L1739` |
| `VMwareVMOps._get_vnc_console_connection` | method | (self, instance) | private | `{'port': port, 'internal_access_path': None}` (src/nova/virt/vmwareapi/vmops.py:L1753) | 2/12 | `src/nova/virt/vmwareapi/vmops.py:L1741–L1754` |
| `VMwareVMOps._get_machine_id_str` | method | (network_info) | private | `machine_id_str` (src/nova/virt/vmwareapi/vmops.py:L1782) | 13/22 | `src/nova/virt/vmwareapi/vmops.py:L1757–L1782` |
| `VMwareVMOps._set_machine_id` | method | (self, client_factory, instance, network_info, vm_ref=None) | private | not declared | 2/12 | `src/nova/virt/vmwareapi/vmops.py:L1784–L1800` |
| `VMwareVMOps._get_and_set_vnc_config` | method | (self, client_factory, instance, vm_ref) | private | not declared | 1/11 | `src/nova/virt/vmwareapi/vmops.py:L1803–L1815` |
| `VMwareVMOps._get_ds_browser` | method | (self, ds_ref) | private | `ds_browser` (src/nova/virt/vmwareapi/vmops.py:L1826) | 2/10 | `src/nova/virt/vmwareapi/vmops.py:L1817–L1826` |
| `VMwareVMOps._create_folder_if_missing` | method | (self, ds_name, ds_ref, folder) | private | not declared | 2/8 | `src/nova/virt/vmwareapi/vmops.py:L1828–L1849` |
| `VMwareVMOps.check_cache_folder` | method | (self, ds_name, ds_ref) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/vmops.py:L1851–L1853` |
| `VMwareVMOps.inject_network_info` | method | (self, instance, network_info) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/vmops.py:L1855–L1860` |
| `VMwareVMOps.manage_image_cache` | method | (self, context, instances) | public | `` (src/nova/virt/vmwareapi/vmops.py:L1865) | 3/12 | `src/nova/virt/vmwareapi/vmops.py:L1862–L1874` |
| `VMwareVMOps._get_valid_vms_from_retrieve_result` | method | (self, retrieve_result) | private | `lst_vm_names` (src/nova/virt/vmwareapi/vmops.py:L1896) | 7/17 | `src/nova/virt/vmwareapi/vmops.py:L1876–L1896` |
| `VMwareVMOps.instance_exists` | method | (self, instance) | public | `True` (src/nova/virt/vmwareapi/vmops.py:L1901); `False` (src/nova/virt/vmwareapi/vmops.py:L1903) | 2/6 | `src/nova/virt/vmwareapi/vmops.py:L1898–L1903` |
| `VMwareVMOps.attach_interface` | method | (self, context, instance, image_meta, vif) | public | not declared | 2/28 | `src/nova/virt/vmwareapi/vmops.py:L1905–L1937` |
| `VMwareVMOps.detach_interface` | method | (self, context, instance, vif) | public | not declared | 4/35 | `src/nova/virt/vmwareapi/vmops.py:L1939–L1978` |
| `VMwareVMOps._use_disk_image_as_full_clone` | method | (self, vm_ref, vi) | private | not declared | 1/18 | `src/nova/virt/vmwareapi/vmops.py:L1980–L2002` |
| `VMwareVMOps._sized_image_exists` | method | (self, sized_disk_ds_loc, ds_ref) | private | `ds_util.file_exists( self._session, ds_browser, sized_disk_ds_loc.parent, sized_disk_ds_loc.basename)` (src/nova/virt/vmwareapi/vmops.py:L2006) | 1/5 | `src/nova/virt/vmwareapi/vmops.py:L2004–L2008` |
| `VMwareVMOps._use_disk_image_as_linked_clone` | method | (self, vm_ref, vi) | private | not declared | 5/41 | `src/nova/virt/vmwareapi/vmops.py:L2010–L2075` |
| `VMwareVMOps._use_iso_image` | method | (self, vm_ref, vi) | private | not declared | 2/22 | `src/nova/virt/vmwareapi/vmops.py:L2077–L2106` |
| `VMwareVMOps.get_datacenter_ref_and_name` | method | (self, ds_ref) | public | `ds_util.get_dc_info(self._session, ds_ref)` (src/nova/virt/vmwareapi/vmops.py:L2110) | 1/2 | `src/nova/virt/vmwareapi/vmops.py:L2108–L2110` |
| `VMwareVMOps.list_instances` | method | (self) | public | `lst_vm_names` (src/nova/virt/vmwareapi/vmops.py:L2126) | 2/13 | `src/nova/virt/vmwareapi/vmops.py:L2112–L2126` |
| `VMwareVMOps.get_vnc_console` | method | (self, instance) | public | `ctype.ConsoleVNC(**vnc_console)` (src/nova/virt/vmwareapi/vmops.py:L2146) | 1/10 | `src/nova/virt/vmwareapi/vmops.py:L2128–L2146` |
| `VMwareVMOps.get_mks_console` | method | (self, instance) | public | `ctype.ConsoleMKS(ticket.host, ticket.port, internal_access_path)` (src/nova/virt/vmwareapi/vmops.py:L2159) | 1/12 | `src/nova/virt/vmwareapi/vmops.py:L2148–L2159` |
| `VirtualMachineInstanceConfigInfo.cache_image_folder` | property | — | public | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L91–L96` |
| `VirtualMachineInstanceConfigInfo.cache_image_path` | property | — | public | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L98–L104` |
| `VMwareVMOps._get_machine_id_str` | staticmethod | — | private | not declared | — | `src/nova/virt/vmwareapi/vmops.py:L1756–L1782` |

## Dependencies

- `import collections` (src/nova/virt/vmwareapi/vmops.py:L22)
- `import os` (src/nova/virt/vmwareapi/vmops.py:L23)
- `import re` (src/nova/virt/vmwareapi/vmops.py:L24)
- `import time` (src/nova/virt/vmwareapi/vmops.py:L25)
- `import decorator` (src/nova/virt/vmwareapi/vmops.py:L27)
- `oslo_concurrency`: imports `lockutils` (src/nova/virt/vmwareapi/vmops.py:L28)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/vmops.py:L29)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/vmwareapi/vmops.py:L30)
- `oslo_utils`: imports `excutils` (src/nova/virt/vmwareapi/vmops.py:L31)
- `oslo_utils`: imports `strutils` (src/nova/virt/vmwareapi/vmops.py:L32)
- `oslo_utils`: imports `units` (src/nova/virt/vmwareapi/vmops.py:L33)
- `oslo_utils`: imports `uuidutils` (src/nova/virt/vmwareapi/vmops.py:L34)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/vmops.py:L35)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/virt/vmwareapi/vmops.py:L36)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/vmops.py:L37)
- `nova.api.metadata`: imports `base as instance_metadata` (src/nova/virt/vmwareapi/vmops.py:L39)
- `nova.compute`: imports `api as compute` (src/nova/virt/vmwareapi/vmops.py:L40)
- `nova.compute`: imports `power_state` (src/nova/virt/vmwareapi/vmops.py:L41)
- `nova.compute`: imports `task_states` (src/nova/virt/vmwareapi/vmops.py:L42)
- `import nova.conf` (src/nova/virt/vmwareapi/vmops.py:L43)
- `nova.console`: imports `type as ctype` (src/nova/virt/vmwareapi/vmops.py:L44)
- `nova`: imports `context as nova_context` (src/nova/virt/vmwareapi/vmops.py:L45)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/vmops.py:L46)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/vmops.py:L47)
- `nova.network`: imports `neutron` (src/nova/virt/vmwareapi/vmops.py:L48)
- `nova`: imports `objects` (src/nova/virt/vmwareapi/vmops.py:L49)
- `nova.objects`: imports `fields` (src/nova/virt/vmwareapi/vmops.py:L50)
- `nova`: imports `utils` (src/nova/virt/vmwareapi/vmops.py:L51)
- `nova`: imports `version` (src/nova/virt/vmwareapi/vmops.py:L52)
- `nova.virt`: imports `configdrive` (src/nova/virt/vmwareapi/vmops.py:L53)
- `nova.virt`: imports `driver` (src/nova/virt/vmwareapi/vmops.py:L54)
- `nova.virt`: imports `hardware` (src/nova/virt/vmwareapi/vmops.py:L55)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/vmops.py:L56)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/virt/vmwareapi/vmops.py:L57)
- `nova.virt.vmwareapi`: imports `error_util` (src/nova/virt/vmwareapi/vmops.py:L58)
- `nova.virt.vmwareapi`: imports `imagecache` (src/nova/virt/vmwareapi/vmops.py:L59)
- `nova.virt.vmwareapi`: imports `images` (src/nova/virt/vmwareapi/vmops.py:L60)
- `nova.virt.vmwareapi`: imports `vif as vmwarevif` (src/nova/virt/vmwareapi/vmops.py:L61)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/virt/vmwareapi/vmops.py:L62)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/vmops.py:L63)

## Side Effects

- **file-io**: tmp_file = os.path.join(tmp_path, 'configdrive.iso') (src/nova/virt/vmwareapi/vmops.py:L872)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/vmops.py:L66)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/vmops.py:L68)
- **global-mutation**: RESIZE_TOTAL_STEPS = 6 (src/nova/virt/vmwareapi/vmops.py:L70)

## Security Surface

- **sink** (`db-write`): """Update instance progress percent to reflect current step number (src/nova/virt/vmwareapi/vmops.py:L1341)
- **sink** (`db-write`): data.update(prop_dict) (src/nova/virt/vmwareapi/vmops.py:L1713)
- **sink** (`db-write`): self._imagecache.update(context, instances, datastores_info) (src/nova/virt/vmwareapi/vmops.py:L1874)

## Notes

- 1 instruction-like text found in comments or strings at: L2133.

