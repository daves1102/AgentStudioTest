# src/nova/virt/vmwareapi/vm_util.py

## Overview

This file implements the `vm_util` module, defining 3 classs, 5 constants, 90 functions, 6 methods, 4 variables, 16 imports, 5 side effects.

Lines: total 1669, code 1272, comment 96, blank 301

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L41–L41` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L43–L43` |
| `ALL_SUPPORTED_NETWORK_DEVICES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L45–L47` |
| `CONTROLLER_TO_ADAPTER_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L49–L55` |
| `_FOLDER_PATH_REF_MAPPING` | variable | — | unexported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L59–L59` |
| `_VM_REFS_CACHE` | variable | — | unexported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L66–L66` |
| `Limits` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L69–L95` |
| `Limits.__init__` | method | (self, limit=None, reservation=None, shares_level=None, shares_share=None) | public | not declared | 1/6 | `src/nova/virt/vmwareapi/vm_util.py:L71–L77` |
| `Limits.validate` | method | (self) | public | `` (src/nova/virt/vmwareapi/vm_util.py:L85); `` (src/nova/virt/vmwareapi/vm_util.py:L87) | 5/12 | `src/nova/virt/vmwareapi/vm_util.py:L79–L90` |
| `Limits.has_limits` | method | (self) | public | `bool(self.limit or self.reservation or self.shares_level)` (src/nova/virt/vmwareapi/vm_util.py:L93) | 3/4 | `src/nova/virt/vmwareapi/vm_util.py:L92–L95` |
| `ExtraSpecs` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L98–L113` |
| `ExtraSpecs.__init__` | method | (self, cpu_limits=None, hw_version=None, storage_policy=None, cores_per_socket=None, memory_limits=None, disk_io_limits=None, vif_limits=None, firmware=None, hw_video_ram=None) | public | not declared | 5/13 | `src/nova/virt/vmwareapi/vm_util.py:L100–L113` |
| `vm_refs_cache_reset` | function | — | exported | not declared | 1/3 | `src/nova/virt/vmwareapi/vm_util.py:L116–L118` |
| `vm_ref_cache_delete` | function | (id_) | exported | not declared | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L121–L122` |
| `vm_ref_cache_update` | function | (id_, vm_ref) | exported | not declared | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L125–L126` |
| `vm_ref_cache_get` | function | (id_) | exported | `_VM_REFS_CACHE.get(id_)` (src/nova/virt/vmwareapi/vm_util.py:L130) | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L129–L130` |
| `VNC_CONFIG_KEY` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L134–L134` |
| `VmdkInfo` | variable | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L136–L139` |
| `_iface_id_option_value` | function | (client_factory, iface_id, port_index) | unexported | `opt` (src/nova/virt/vmwareapi/vm_util.py:L146) | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L142–L146` |
| `_get_allocation_info` | function | (client_factory, limits, allocation_type) | unexported | `allocation` (src/nova/virt/vmwareapi/vm_util.py:L177) | 7/26 | `src/nova/virt/vmwareapi/vm_util.py:L149–L177` |
| `get_vm_create_spec` | function | (client_factory, instance, data_store_name, vif_infos, extra_specs, os_type=constants.DEFAULT_OS_TYPE, profile_spec=None, metadata=None) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L289) | 15/81 | `src/nova/virt/vmwareapi/vm_util.py:L180–L289` |
| `create_video_card_spec` | function | (client_factory, extra_specs) | exported | `virtual_device_config_spec` (src/nova/virt/vmwareapi/vm_util.py:L301) | 2/10 | `src/nova/virt/vmwareapi/vm_util.py:L292–L301` |
| `create_serial_port_spec` | function | (client_factory) | exported | `` (src/nova/virt/vmwareapi/vm_util.py:L307); `dev_spec` (src/nova/virt/vmwareapi/vm_util.py:L328) | 2/20 | `src/nova/virt/vmwareapi/vm_util.py:L304–L328` |
| `get_vm_boot_spec` | function | (client_factory, device) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L344) | 1/9 | `src/nova/virt/vmwareapi/vm_util.py:L331–L344` |
| `get_vm_resize_spec` | function | (client_factory, vcpus, memory_mb, extra_specs, metadata=None) | exported | `resize_spec` (src/nova/virt/vmwareapi/vm_util.py:L358) | 2/11 | `src/nova/virt/vmwareapi/vm_util.py:L347–L358` |
| `create_controller_spec` | function | (client_factory, key, adapter_type=constants.DEFAULT_ADAPTER_TYPE, bus_number=0) | exported | `virtual_device_config` (src/nova/virt/vmwareapi/vm_util.py:L388) | 4/23 | `src/nova/virt/vmwareapi/vm_util.py:L361–L388` |
| `convert_vif_model` | function | (name) | exported | `'VirtualE1000'` (src/nova/virt/vmwareapi/vm_util.py:L394); `'VirtualE1000e'` (src/nova/virt/vmwareapi/vm_util.py:L396); `'VirtualPCNet32'` (src/nova/virt/vmwareapi/vm_util.py:L398); `'VirtualSriovEthernetCard'` (src/nova/virt/vmwareapi/vm_util.py:L400); `'VirtualVmxnet'` (src/nova/virt/vmwareapi/vm_util.py:L402); `'VirtualVmxnet3'` (src/nova/virt/vmwareapi/vm_util.py:L404); `name` (src/nova/virt/vmwareapi/vm_util.py:L408) | 8/17 | `src/nova/virt/vmwareapi/vm_util.py:L391–L408` |
| `_create_vif_spec` | function | (client_factory, vif_info, vif_limits=None, offset=0) | unexported | `network_spec` (src/nova/virt/vmwareapi/vm_util.py:L489) | 11/58 | `src/nova/virt/vmwareapi/vm_util.py:L411–L489` |
| `get_network_attach_config_spec` | function | (client_factory, vif_info, index, vif_limits=None) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L502) | 2/10 | `src/nova/virt/vmwareapi/vm_util.py:L492–L502` |
| `get_network_detach_config_spec` | function | (client_factory, device, port_index) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L522) | 1/11 | `src/nova/virt/vmwareapi/vm_util.py:L505–L522` |
| `update_vif_spec` | function | (client_factory, vif_info, device) | exported | `network_spec` (src/nova/virt/vmwareapi/vm_util.py:L560) | 7/34 | `src/nova/virt/vmwareapi/vm_util.py:L525–L560` |
| `get_storage_profile_spec` | function | (session, storage_policy) | exported | `storage_profile_spec` (src/nova/virt/vmwareapi/vm_util.py:L571) | 2/8 | `src/nova/virt/vmwareapi/vm_util.py:L563–L571` |
| `get_vmdk_attach_config_spec` | function | (client_factory, disk_type=constants.DEFAULT_DISK_TYPE, file_path=None, disk_size=None, linked_clone=False, controller_key=None, unit_number=None, device_name=None, disk_io_limits=None) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L595) | 1/18 | `src/nova/virt/vmwareapi/vm_util.py:L574–L595` |
| `get_cdrom_attach_config_spec` | function | (client_factory, datastore, file_path, controller_key, cdrom_unit_number) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L616) | 1/15 | `src/nova/virt/vmwareapi/vm_util.py:L598–L616` |
| `get_vmdk_detach_config_spec` | function | (client_factory, device, destroy_disk=False) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L632) | 1/10 | `src/nova/virt/vmwareapi/vm_util.py:L619–L632` |
| `get_vm_extra_config_spec` | function | (client_factory, extra_opts) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L646) | 2/10 | `src/nova/virt/vmwareapi/vm_util.py:L635–L646` |
| `_get_device_capacity` | function | (device) | unexported | `device.capacityInBytes` (src/nova/virt/vmwareapi/vm_util.py:L654); `device.capacityInKB * units.Ki` (src/nova/virt/vmwareapi/vm_util.py:L656) | 2/5 | `src/nova/virt/vmwareapi/vm_util.py:L649–L656` |
| `_get_device_disk_type` | function | (device) | unexported | `constants.DISK_TYPE_THIN` (src/nova/virt/vmwareapi/vm_util.py:L661); `constants.DISK_TYPE_EAGER_ZEROED_THICK` (src/nova/virt/vmwareapi/vm_util.py:L664); `constants.DEFAULT_DISK_TYPE` (src/nova/virt/vmwareapi/vm_util.py:L666) | 3/8 | `src/nova/virt/vmwareapi/vm_util.py:L659–L666` |
| `get_hardware_devices` | function | (session, vm_ref) | exported | `vim_util.get_array_items(hardware_devices)` (src/nova/virt/vmwareapi/vm_util.py:L674) | 1/6 | `src/nova/virt/vmwareapi/vm_util.py:L669–L674` |
| `_is_before_in_boot_order` | function | (disk1, disk2) | unexported | `(disk1.controllerKey < disk2.controllerKey or disk1.controllerKey == disk2.controllerKey and disk1.unitNumber < disk2.unitNumber)` (src/nova/virt/vmwareapi/vm_util.py:L678) | 3/4 | `src/nova/virt/vmwareapi/vm_util.py:L677–L680` |
| `get_vmdk_info` | function | (session, vm_ref) | exported | `VmdkInfo(vmdk_file_path, adapter_type, disk_type, capacity_in_bytes, lowest_disk_device)` (src/nova/virt/vmwareapi/vm_util.py:L726) | 8/26 | `src/nova/virt/vmwareapi/vm_util.py:L683–L727` |
| `scsi_controller_classes` | variable | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L730–L735` |
| `get_scsi_adapter_type` | function | (hardware_devices) | exported | `scsi_controller_classes[device.__class__.__name__]` (src/nova/virt/vmwareapi/vm_util.py:L747) | 4/7 | `src/nova/virt/vmwareapi/vm_util.py:L738–L749` |
| `_find_controller_slot` | function | (controller_keys, taken, max_unit_number) | unexported | `controller_key, unit_number` (src/nova/virt/vmwareapi/vm_util.py:L756) | 4/5 | `src/nova/virt/vmwareapi/vm_util.py:L752–L756` |
| `_is_ide_controller` | function | (device) | unexported | `device.__class__.__name__ == 'VirtualIDEController'` (src/nova/virt/vmwareapi/vm_util.py:L760) | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L759–L760` |
| `_is_scsi_controller` | function | (device) | unexported | `device.__class__.__name__ in ['VirtualLsiLogicController', 'VirtualLsiLogicSASController', 'VirtualBusLogicController', 'ParaVirtualSCSIController']` (src/nova/virt/vmwareapi/vm_util.py:L764) | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L763–L767` |
| `_find_allocated_slots` | function | (devices) | unexported | `taken` (src/nova/virt/vmwareapi/vm_util.py:L783) | 5/10 | `src/nova/virt/vmwareapi/vm_util.py:L770–L783` |
| `_get_bus_number_for_scsi_controller` | function | (devices) | unexported | `i` (src/nova/virt/vmwareapi/vm_util.py:L793) | 5/8 | `src/nova/virt/vmwareapi/vm_util.py:L786–L796` |
| `allocate_controller_key_and_unit_number` | function | (client_factory, devices, adapter_type) | exported | `ret[0], ret[1], None` (src/nova/virt/vmwareapi/vm_util.py:L818); `controller_key, 0, controller_spec` (src/nova/virt/vmwareapi/vm_util.py:L830) | 10/21 | `src/nova/virt/vmwareapi/vm_util.py:L799–L830` |
| `get_rdm_disk` | function | (hardware_devices, uuid) | exported | `device` (src/nova/virt/vmwareapi/vm_util.py:L840) | 5/7 | `src/nova/virt/vmwareapi/vm_util.py:L833–L840` |
| `get_vmdk_create_spec` | function | (client_factory, size_in_kb, adapter_type=constants.DEFAULT_ADAPTER_TYPE, disk_type=constants.DEFAULT_DISK_TYPE) | exported | `create_vmdk_spec` (src/nova/virt/vmwareapi/vm_util.py:L851) | 1/8 | `src/nova/virt/vmwareapi/vm_util.py:L843–L851` |
| `create_virtual_cdrom_spec` | function | (client_factory, datastore, controller_key, file_path, cdrom_unit_number) | exported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L884) | 1/24 | `src/nova/virt/vmwareapi/vm_util.py:L854–L884` |
| `_create_virtual_disk_spec` | function | (client_factory, controller_key, disk_type=constants.DEFAULT_DISK_TYPE, file_path=None, disk_size=None, linked_clone=False, unit_number=None, device_name=None, disk_io_limits=None) | unexported | `virtual_device_config` (src/nova/virt/vmwareapi/vm_util.py:L952) | 15/52 | `src/nova/virt/vmwareapi/vm_util.py:L887–L952` |
| `detach_virtual_disk_spec` | function | (client_factory, device, destroy_disk=False) | exported | `virtual_device_config` (src/nova/virt/vmwareapi/vm_util.py:L965) | 2/8 | `src/nova/virt/vmwareapi/vm_util.py:L955–L965` |
| `clone_vm_spec` | function | (client_factory, location, power_on=False, snapshot=None, template=False, config=None) | exported | `clone_spec` (src/nova/virt/vmwareapi/vm_util.py:L979) | 3/11 | `src/nova/virt/vmwareapi/vm_util.py:L968–L979` |
| `relocate_vm_spec` | function | (client_factory, res_pool=None, datastore=None, host=None, disk_move_type="moveAllDiskBackingsAndAllowSharing", devices=None) | exported | `rel_spec` (src/nova/virt/vmwareapi/vm_util.py:L992) | 2/11 | `src/nova/virt/vmwareapi/vm_util.py:L982–L992` |
| `relocate_vm` | function | (session, vm_ref, res_pool=None, datastore=None, host=None, disk_move_type="moveAllDiskBackingsAndAllowSharing", devices=None) | exported | not declared | 1/9 | `src/nova/virt/vmwareapi/vm_util.py:L995–L1003` |
| `get_machine_id_change_spec` | function | (client_factory, machine_id_str) | exported | `virtual_machine_config_spec` (src/nova/virt/vmwareapi/vm_util.py:L1015) | 1/8 | `src/nova/virt/vmwareapi/vm_util.py:L1006–L1015` |
| `get_vnc_config_spec` | function | (client_factory, port) | exported | `virtual_machine_config_spec` (src/nova/virt/vmwareapi/vm_util.py:L1036) | 1/15 | `src/nova/virt/vmwareapi/vm_util.py:L1018–L1036` |
| `get_vnc_port` | function | (session) | exported | `port` (src/nova/virt/vmwareapi/vm_util.py:L1047) | 3/10 | `src/nova/virt/vmwareapi/vm_util.py:L1039–L1049` |
| `_get_allocated_vnc_ports` | function | (session) | unexported | `vnc_ports` (src/nova/virt/vmwareapi/vm_util.py:L1067) | 4/13 | `src/nova/virt/vmwareapi/vm_util.py:L1052–L1067` |
| `_get_object_for_value` | function | (objects, value) | unexported | `object.obj` (src/nova/virt/vmwareapi/vm_util.py:L1073) | 3/4 | `src/nova/virt/vmwareapi/vm_util.py:L1070–L1073` |
| `_get_object_for_optionvalue` | function | (objects, value) | unexported | `object.obj` (src/nova/virt/vmwareapi/vm_util.py:L1080) | 5/5 | `src/nova/virt/vmwareapi/vm_util.py:L1076–L1080` |
| `_get_object_from_results` | function | (session, results, value, func) | unexported | `func(objects, value)` (src/nova/virt/vmwareapi/vm_util.py:L1085) | 1/3 | `src/nova/virt/vmwareapi/vm_util.py:L1083–L1085` |
| `_get_vm_ref_from_name` | function | (session, vm_name) | unexported | `_get_object_from_results(session, vms, vm_name, _get_object_for_value)` (src/nova/virt/vmwareapi/vm_util.py:L1097) | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L1088–L1098` |
| `_get_vm_ref_from_vm_uuid` | function | (session, instance_uuid) | unexported | `vm_refs[0]` (src/nova/virt/vmwareapi/vm_util.py:L1117) | 2/10 | `src/nova/virt/vmwareapi/vm_util.py:L1101–L1117` |
| `_get_vm_ref_from_extraconfig` | function | (session, instance_uuid) | unexported | `_get_object_from_results(session, vms, instance_uuid, _get_object_for_optionvalue)` (src/nova/virt/vmwareapi/vm_util.py:L1124) | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L1120–L1125` |
| `VmMoRefProxy` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/vm_util.py:L1128–L1137` |
| `VmMoRefProxy.__init__` | method | (self, ref, uuid) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/vm_util.py:L1129–L1131` |
| `VmMoRefProxy.fetch_moref` | method | (self, session) | public | not declared | 2/5 | `src/nova/virt/vmwareapi/vm_util.py:L1133–L1137` |
| `get_vm_ref` | function | (session, instance) | exported | `stable_ref` (src/nova/virt/vmwareapi/vm_util.py:L1146) | 2/6 | `src/nova/virt/vmwareapi/vm_util.py:L1140–L1146` |
| `search_vm_ref_by_identifier` | function | (session, identifier) | exported | `vm_ref` (src/nova/virt/vmwareapi/vm_util.py:L1159) | 2/4 | `src/nova/virt/vmwareapi/vm_util.py:L1149–L1159` |
| `get_host_ref_for_vm` | function | (session, instance) | exported | `session._call_method(vutil, "get_object_property", vm_ref, "runtime.host")` (src/nova/virt/vmwareapi/vm_util.py:L1166) | 1/4 | `src/nova/virt/vmwareapi/vm_util.py:L1162–L1167` |
| `get_host_name_for_vm` | function | (session, instance) | exported | `session._call_method(vutil, "get_object_property", host_ref, "name")` (src/nova/virt/vmwareapi/vm_util.py:L1174) | 1/4 | `src/nova/virt/vmwareapi/vm_util.py:L1170–L1175` |
| `get_vm_state` | function | (session, instance) | exported | `constants.POWER_STATES[vm_state]` (src/nova/virt/vmwareapi/vm_util.py:L1182) | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L1178–L1182` |
| `get_stats_from_cluster` | function | (session, cluster) | exported | `stats` (src/nova/virt/vmwareapi/vm_util.py:L1229) | 6/41 | `src/nova/virt/vmwareapi/vm_util.py:L1185–L1229` |
| `get_host_ref` | function | (session, cluster=None) | exported | `host_mor` (src/nova/virt/vmwareapi/vm_util.py:L1248) | 4/15 | `src/nova/virt/vmwareapi/vm_util.py:L1232–L1248` |
| `propset_dict` | function | (propset) | exported | `{}` (src/nova/virt/vmwareapi/vm_util.py:L1266); `{prop.name: prop.val for prop in propset}` (src/nova/virt/vmwareapi/vm_util.py:L1268) | 3/4 | `src/nova/virt/vmwareapi/vm_util.py:L1251–L1268` |
| `get_vmdk_backed_disk_device` | function | (hardware_devices, uuid) | exported | `device` (src/nova/virt/vmwareapi/vm_util.py:L1277) | 5/7 | `src/nova/virt/vmwareapi/vm_util.py:L1271–L1277` |
| `get_vmdk_volume_disk` | function | (hardware_devices, path=None) | exported | `device` (src/nova/virt/vmwareapi/vm_util.py:L1284) | 5/5 | `src/nova/virt/vmwareapi/vm_util.py:L1280–L1284` |
| `get_res_pool_ref` | function | (session, cluster) | exported | `res_pool_ref` (src/nova/virt/vmwareapi/vm_util.py:L1294) | 1/6 | `src/nova/virt/vmwareapi/vm_util.py:L1287–L1294` |
| `get_all_cluster_mors` | function | (session) | exported | `list(objects)` (src/nova/virt/vmwareapi/vm_util.py:L1303) | 2/8 | `src/nova/virt/vmwareapi/vm_util.py:L1297–L1305` |
| `get_cluster_ref_by_name` | function | (session, cluster_name) | exported | `cluster.obj` (src/nova/virt/vmwareapi/vm_util.py:L1314) | 5/6 | `src/nova/virt/vmwareapi/vm_util.py:L1308–L1314` |
| `get_vmdk_adapter_type` | function | (adapter_type) | exported | `vmdk_adapter_type` (src/nova/virt/vmwareapi/vm_util.py:L1329) | 2/7 | `src/nova/virt/vmwareapi/vm_util.py:L1317–L1329` |
| `create_vm` | function | (session, instance, vm_folder, config_spec, res_pool_ref) | exported | `task_info.result` (src/nova/virt/vmwareapi/vm_util.py:L1360) | 3/17 | `src/nova/virt/vmwareapi/vm_util.py:L1335–L1360` |
| `destroy_vm` | function | (session, instance, vm_ref=None) | exported | not declared | 3/11 | `src/nova/virt/vmwareapi/vm_util.py:L1363–L1374` |
| `create_virtual_disk` | function | (session, dc_ref, adapter_type, disk_type, virtual_disk_path, size_in_kb) | exported | not declared | 1/24 | `src/nova/virt/vmwareapi/vm_util.py:L1377–L1407` |
| `copy_virtual_disk` | function | (session, dc_ref, source, dest) | exported | not declared | 1/14 | `src/nova/virt/vmwareapi/vm_util.py:L1410–L1435` |
| `reconfigure_vm` | function | (session, vm_ref, config_spec) | exported | not declared | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L1438–L1443` |
| `power_on_instance` | function | (session, instance, vm_ref=None) | exported | not declared | 3/12 | `src/nova/virt/vmwareapi/vm_util.py:L1446–L1460` |
| `_get_vm_port_indices` | function | (session, vm_ref) | unexported | `ports` (src/nova/virt/vmwareapi/vm_util.py:L1475) | 5/13 | `src/nova/virt/vmwareapi/vm_util.py:L1463–L1475` |
| `get_attach_port_index` | function | (session, vm_ref) | exported | `0` (src/nova/virt/vmwareapi/vm_util.py:L1483); `port_index` (src/nova/virt/vmwareapi/vm_util.py:L1489); `configured_ports_len` (src/nova/virt/vmwareapi/vm_util.py:L1490) | 4/10 | `src/nova/virt/vmwareapi/vm_util.py:L1478–L1490` |
| `get_vm_detach_port_index` | function | (session, vm_ref, iface_id) | exported | `int(option.key.split('.')[2])` (src/nova/virt/vmwareapi/vm_util.py:L1503) | 5/11 | `src/nova/virt/vmwareapi/vm_util.py:L1493–L1503` |
| `power_off_instance` | function | (session, instance, vm_ref=None) | exported | not declared | 3/11 | `src/nova/virt/vmwareapi/vm_util.py:L1506–L1519` |
| `find_rescue_device` | function | (hardware_devices, instance) | exported | `device` (src/nova/virt/vmwareapi/vm_util.py:L1536) | 5/9 | `src/nova/virt/vmwareapi/vm_util.py:L1522–L1539` |
| `get_ephemeral_name` | function | (id_) | exported | `'ephemeral_%d.vmdk' % id_` (src/nova/virt/vmwareapi/vm_util.py:L1543) | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L1542–L1543` |
| `_detach_and_delete_devices_config_spec` | function | (client_factory, devices) | unexported | `config_spec` (src/nova/virt/vmwareapi/vm_util.py:L1557) | 2/12 | `src/nova/virt/vmwareapi/vm_util.py:L1546–L1557` |
| `detach_devices_from_vm` | function | (session, vm_ref, devices) | exported | not declared | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L1560–L1565` |
| `get_ephemerals` | function | (session, vm_ref) | exported | `devices` (src/nova/virt/vmwareapi/vm_util.py:L1578) | 5/10 | `src/nova/virt/vmwareapi/vm_util.py:L1568–L1578` |
| `get_swap` | function | (session, vm_ref) | exported | `device` (src/nova/virt/vmwareapi/vm_util.py:L1589) | 5/8 | `src/nova/virt/vmwareapi/vm_util.py:L1581–L1589` |
| `create_folder` | function | (session, parent_folder_ref, name) | exported | `folder` (src/nova/virt/vmwareapi/vm_util.py:L1614) | 2/17 | `src/nova/virt/vmwareapi/vm_util.py:L1592–L1614` |
| `folder_ref_cache_update` | function | (path, folder_ref) | exported | not declared | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L1617–L1618` |
| `folder_ref_cache_get` | function | (path) | exported | `_FOLDER_PATH_REF_MAPPING.get(path)` (src/nova/virt/vmwareapi/vm_util.py:L1622) | 1/2 | `src/nova/virt/vmwareapi/vm_util.py:L1621–L1622` |
| `_get_vm_name` | function | (display_name, id_) | unexported | `'%s (%s)' % (display_name[:41], id_[:36])` (src/nova/virt/vmwareapi/vm_util.py:L1627); `id_[:36]` (src/nova/virt/vmwareapi/vm_util.py:L1629) | 2/4 | `src/nova/virt/vmwareapi/vm_util.py:L1625–L1629` |
| `rename_vm` | function | (session, vm_ref, instance) | exported | not declared | 1/5 | `src/nova/virt/vmwareapi/vm_util.py:L1632–L1636` |
| `_create_fcd_id_obj` | function | (client_factory, fcd_id) | unexported | `id_obj` (src/nova/virt/vmwareapi/vm_util.py:L1642) | 1/4 | `src/nova/virt/vmwareapi/vm_util.py:L1639–L1642` |
| `attach_fcd` | function | (session, vm_ref, fcd_id, ds_ref_val, controller_key, unit_number) | exported | not declared | 1/15 | `src/nova/virt/vmwareapi/vm_util.py:L1645–L1659` |
| `detach_fcd` | function | (session, vm_ref, fcd_id) | exported | not declared | 1/8 | `src/nova/virt/vmwareapi/vm_util.py:L1662–L1669` |

## Dependencies

- `import collections` (src/nova/virt/vmwareapi/vm_util.py:L21)
- `import copy` (src/nova/virt/vmwareapi/vm_util.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/vm_util.py:L24)
- `oslo_service`: imports `loopingcall` (src/nova/virt/vmwareapi/vm_util.py:L25)
- `oslo_utils`: imports `excutils` (src/nova/virt/vmwareapi/vm_util.py:L26)
- `oslo_utils`: imports `units` (src/nova/virt/vmwareapi/vm_util.py:L27)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/vm_util.py:L28)
- `oslo_vmware`: imports `pbm` (src/nova/virt/vmwareapi/vm_util.py:L29)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/vm_util.py:L30)
- `import nova.conf` (src/nova/virt/vmwareapi/vm_util.py:L33)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/vm_util.py:L34)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/vm_util.py:L35)
- `nova.network`: imports `model as network_model` (src/nova/virt/vmwareapi/vm_util.py:L36)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/vm_util.py:L37)
- `nova.virt.vmwareapi`: imports `session` (src/nova/virt/vmwareapi/vm_util.py:L38)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/virt/vmwareapi/vm_util.py:L39)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/vm_util.py:L41)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/vm_util.py:L43)
- **global-mutation**: ALL_SUPPORTED_NETWORK_DEVICES = ['VirtualE1000', 'VirtualE1000e', (src/nova/virt/vmwareapi/vm_util.py:L45)
- **global-mutation**: CONTROLLER_TO_ADAPTER_TYPE = { (src/nova/virt/vmwareapi/vm_util.py:L49)
- **global-mutation**: VNC_CONFIG_KEY = 'config.extraConfig["RemoteDisplay.vnc.port"]' (src/nova/virt/vmwareapi/vm_util.py:L134)

