# src/nova/virt/driver.py

## Overview

This file implements the `driver` module, defining 6 classs, 1 classmethod, 3 constants, 32 fields, 10 functions, 112 methods, 3 staticmethods, 20 imports, 4 side effects, 5 security surface entries.

Lines: total 2117, code 1680, comment 57, blank 380

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/driver.py:L46–L46` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/driver.py:L47–L47` |
| `FlavorMeta` | class | — | exported | not declared | — | `src/nova/virt/driver.py:L51–L59` |
| `FlavorMeta.name` | field | — | public | not declared | — | `src/nova/virt/driver.py:L52–L52` |
| `FlavorMeta.flavorid` | field | — | public | not declared | — | `src/nova/virt/driver.py:L53–L53` |
| `FlavorMeta.memory_mb` | field | — | public | not declared | — | `src/nova/virt/driver.py:L54–L54` |
| `FlavorMeta.vcpus` | field | — | public | not declared | — | `src/nova/virt/driver.py:L55–L55` |
| `FlavorMeta.root_gb` | field | — | public | not declared | — | `src/nova/virt/driver.py:L56–L56` |
| `FlavorMeta.ephemeral_gb` | field | — | public | not declared | — | `src/nova/virt/driver.py:L57–L57` |
| `FlavorMeta.extra_specs` | field | — | public | not declared | — | `src/nova/virt/driver.py:L58–L58` |
| `FlavorMeta.swap` | field | — | public | not declared | — | `src/nova/virt/driver.py:L59–L59` |
| `ImageMeta` | class | — | exported | not declared | — | `src/nova/virt/driver.py:L63–L97` |
| `ImageMeta.id` | field | — | public | not declared | — | `src/nova/virt/driver.py:L64–L64` |
| `ImageMeta.name` | field | — | public | not declared | — | `src/nova/virt/driver.py:L65–L65` |
| `ImageMeta.container_format` | field | — | public | not declared | — | `src/nova/virt/driver.py:L66–L66` |
| `ImageMeta.disk_format` | field | — | public | not declared | — | `src/nova/virt/driver.py:L67–L67` |
| `ImageMeta.min_disk` | field | — | public | not declared | — | `src/nova/virt/driver.py:L68–L68` |
| `ImageMeta.min_ram` | field | — | public | not declared | — | `src/nova/virt/driver.py:L69–L69` |
| `ImageMeta.properties` | field | — | public | not declared | — | `src/nova/virt/driver.py:L70–L70` |
| `ImageMeta.from_instance` | method | (instance) | public | `ImageMeta( id=instance.image_ref, name=instance.system_metadata.get('image_name'), container_format=( image_meta.container_format if image_meta.obj_attr_is_set('container_format') else None), disk_for` (src/nova/virt/driver.py:L77) | 5/25 | `src/nova/virt/driver.py:L73–L97` |
| `NovaInstanceMeta` | class | — | exported | not declared | — | `src/nova/virt/driver.py:L101–L103` |
| `NovaInstanceMeta.name` | field | — | public | not declared | — | `src/nova/virt/driver.py:L102–L102` |
| `NovaInstanceMeta.uuid` | field | — | public | not declared | — | `src/nova/virt/driver.py:L103–L103` |
| `OwnerMeta` | class | — | exported | not declared | — | `src/nova/virt/driver.py:L107–L111` |
| `OwnerMeta.userid` | field | — | public | not declared | — | `src/nova/virt/driver.py:L108–L108` |
| `OwnerMeta.username` | field | — | public | not declared | — | `src/nova/virt/driver.py:L109–L109` |
| `OwnerMeta.projectid` | field | — | public | not declared | — | `src/nova/virt/driver.py:L110–L110` |
| `OwnerMeta.projectname` | field | — | public | not declared | — | `src/nova/virt/driver.py:L111–L111` |
| `InstanceDriverMetadata` | class | — | exported | not declared | — | `src/nova/virt/driver.py:L115–L125` |
| `InstanceDriverMetadata.root_type` | field | — | public | not declared | — | `src/nova/virt/driver.py:L116–L116` |
| `InstanceDriverMetadata.root_id` | field | — | public | not declared | — | `src/nova/virt/driver.py:L117–L117` |
| `InstanceDriverMetadata.instance_meta` | field | — | public | not declared | — | `src/nova/virt/driver.py:L118–L118` |
| `InstanceDriverMetadata.owner` | field | — | public | not declared | — | `src/nova/virt/driver.py:L119–L119` |
| `InstanceDriverMetadata.image` | field | — | public | not declared | — | `src/nova/virt/driver.py:L120–L120` |
| `InstanceDriverMetadata.flavor` | field | — | public | not declared | — | `src/nova/virt/driver.py:L121–L121` |
| `InstanceDriverMetadata.network_info` | field | — | public | not declared | — | `src/nova/virt/driver.py:L122–L122` |
| `InstanceDriverMetadata.nova_package` | field | — | public | not declared | — | `src/nova/virt/driver.py:L123–L124` |
| `InstanceDriverMetadata.creation_time` | field | — | public | not declared | — | `src/nova/virt/driver.py:L125–L125` |
| `get_block_device_info` | function | (instance, block_device_mapping) | exported | `{ 'root_device_name': instance.root_device_name, 'image': virt_block_device.convert_local_images( block_device_mapping), 'ephemerals': virt_block_device.convert_ephemerals( block_device_mapping), 'blo` (src/nova/virt/driver.py:L144) | 1/14 | `src/nova/virt/driver.py:L128–L155` |
| `block_device_info_get_root_device` | function | (block_device_info) | exported | `block_device_info.get('root_device_name')` (src/nova/virt/driver.py:L160) | 2/3 | `src/nova/virt/driver.py:L158–L160` |
| `block_device_info_get_swap` | function | (block_device_info) | exported | `block_device_info.get('swap') or {'device_name': None, 'swap_size': 0}` (src/nova/virt/driver.py:L165) | 3/4 | `src/nova/virt/driver.py:L163–L166` |
| `swap_is_usable` | function | (swap) | exported | `swap and swap['device_name'] and swap['swap_size'] > 0` (src/nova/virt/driver.py:L170) | 3/2 | `src/nova/virt/driver.py:L169–L170` |
| `block_device_info_get_image` | function | (block_device_info) | exported | `image` (src/nova/virt/driver.py:L178) | 3/4 | `src/nova/virt/driver.py:L173–L178` |
| `block_device_info_get_ephemerals` | function | (block_device_info) | exported | `ephemerals` (src/nova/virt/driver.py:L184) | 3/4 | `src/nova/virt/driver.py:L181–L184` |
| `block_device_info_get_mapping` | function | (block_device_info) | exported | `block_device_mapping` (src/nova/virt/driver.py:L190) | 3/4 | `src/nova/virt/driver.py:L187–L190` |
| `block_device_info_get_encrypted_disks` | function | (block_device_info) | exported | `[ driver_bdm for driver_bdm in itertools.chain( block_device_info.get('image', []), block_device_info.get('ephemerals', []), swap, ) if driver_bdm.get('encrypted') ]` (src/nova/virt/driver.py:L202) | 5/14 | `src/nova/virt/driver.py:L193–L209` |
| `CAPABILITY_TRAITS_MAP` | constant | — | exported | not declared | — | `src/nova/virt/driver.py:L219–L259` |
| `_check_image_type_exclude_list` | function | (capability, supported) | unexported | `(supported and image_type not in CONF.compute.image_type_exclude_list)` (src/nova/virt/driver.py:L272) | 2/4 | `src/nova/virt/driver.py:L262–L273` |
| `ComputeDriver` | class | — | exported | not declared | — | `src/nova/virt/driver.py:L276–L2079` |
| `ComputeDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/driver.py:L310–L350` |
| `ComputeDriver.rebalances_nodes` | field | — | public | not declared | — | `src/nova/virt/driver.py:L355–L355` |
| `ComputeDriver.__init__` | method | (self, virtapi) | public | not declared | 1/3 | `src/nova/virt/driver.py:L357–L359` |
| `ComputeDriver.init_host` | method | (self, host) | public | not declared | 1/2 | `src/nova/virt/driver.py:L361–L366` |
| `ComputeDriver.process_instances_at_startup` | method | (self, context, instances) | public | `instances` (src/nova/virt/driver.py:L379) | 1/2 | `src/nova/virt/driver.py:L368–L379` |
| `ComputeDriver.cleanup_host` | method | (self, host) | public | not declared | 1/2 | `src/nova/virt/driver.py:L381–L391` |
| `ComputeDriver.get_info` | method | (self, instance, use_cache=True) | public | not declared | 1/2 | `src/nova/virt/driver.py:L393–L405` |
| `ComputeDriver.get_instance_driver_metadata` | method | (cls, instance, network_info) | public | `meta` (src/nova/virt/driver.py:L458) | 3/38 | `src/nova/virt/driver.py:L408–L458` |
| `ComputeDriver.get_num_instances` | method | (self) | public | `len(self.list_instances())` (src/nova/virt/driver.py:L473) | 1/2 | `src/nova/virt/driver.py:L460–L473` |
| `ComputeDriver.instance_exists` | method | (self, instance) | public | `instance.uuid in self.list_instance_uuids()` (src/nova/virt/driver.py:L491); `instance.name in self.list_instances()` (src/nova/virt/driver.py:L493) | 2/5 | `src/nova/virt/driver.py:L475–L493` |
| `ComputeDriver.list_instances` | method | (self) | public | not declared | 1/2 | `src/nova/virt/driver.py:L495–L500` |
| `ComputeDriver.list_instance_uuids` | method | (self) | public | not declared | 1/2 | `src/nova/virt/driver.py:L502–L506` |
| `ComputeDriver.rebuild` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, bdms, detach_block_devices, attach_block_devices, network_info=None, evacuate=False, block_device_info=None, preserve_ephemeral=False, accel_uuids=None, reimage_boot_volume=False) | public | not declared | 1/7 | `src/nova/virt/driver.py:L508–L553` |
| `ComputeDriver.prepare_for_spawn` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L555–L565` |
| `ComputeDriver.failed_spawn_cleanup` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L567–L581` |
| `ComputeDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 1/4 | `src/nova/virt/driver.py:L583–L629` |
| `ComputeDriver.destroy` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, destroy_secrets=True) | public | not declared | 1/3 | `src/nova/virt/driver.py:L631–L647` |
| `ComputeDriver.cleanup` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, migrate_data=None, destroy_vifs=True, destroy_secrets=True) | public | not declared | 1/4 | `src/nova/virt/driver.py:L649–L667` |
| `ComputeDriver.reboot` | method | (self, context, instance, network_info, reboot_type, block_device_info=None, bad_volumes_callback=None, accel_info=None, share_info=None) | public | not declared | 1/4 | `src/nova/virt/driver.py:L669–L689` |
| `ComputeDriver.get_console_output` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L691–L697` |
| `ComputeDriver.get_vnc_console` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L699–L707` |
| `ComputeDriver.get_spice_console` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L709–L717` |
| `ComputeDriver.get_serial_console` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L719–L727` |
| `ComputeDriver.get_mks_console` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L729–L737` |
| `ComputeDriver.get_diagnostics` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L739–L750` |
| `ComputeDriver.get_instance_diagnostics` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L752–L762` |
| `ComputeDriver.get_all_volume_usage` | method | (self, context, compute_host_bdms) | public | not declared | 1/2 | `src/nova/virt/driver.py:L764–L768` |
| `ComputeDriver.get_host_ip_addr` | method | (self) | public | not declared | 1/2 | `src/nova/virt/driver.py:L770–L774` |
| `ComputeDriver.attach_volume` | method | (self, context, connection_info, instance, mountpoint, disk_bus=None, device_type=None, encryption=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L776–L783` |
| `ComputeDriver.detach_volume` | method | (self, context, connection_info, instance, mountpoint, encryption=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L785–L788` |
| `ComputeDriver.swap_volume` | method | (self, context, old_connection_info, new_connection_info, instance, mountpoint, resize_to) | public | not declared | 1/3 | `src/nova/virt/driver.py:L790–L812` |
| `ComputeDriver.extend_volume` | method | (self, context, connection_info, instance, requested_size) | public | not declared | 1/3 | `src/nova/virt/driver.py:L814–L828` |
| `ComputeDriver.prepare_networks_before_block_device_mapping` | method | (self, instance, network_info) | public | not declared | 1/3 | `src/nova/virt/driver.py:L830–L842` |
| `ComputeDriver.clean_networks_preparation` | method | (self, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/driver.py:L844–L855` |
| `ComputeDriver.attach_interface` | method | (self, context, instance, image_meta, vif) | public | not declared | 1/2 | `src/nova/virt/driver.py:L857–L874` |
| `ComputeDriver.detach_interface` | method | (self, context, instance, vif) | public | not declared | 1/2 | `src/nova/virt/driver.py:L876–L891` |
| `ComputeDriver.migrate_disk_and_power_off` | method | (self, context, instance, dest, flavor, network_info, block_device_info=None, timeout=0, retry_interval=0) | public | not declared | 1/5 | `src/nova/virt/driver.py:L893–L918` |
| `ComputeDriver.snapshot` | method | (self, context, instance, image_id, update_task_state) | public | not declared | 1/2 | `src/nova/virt/driver.py:L920–L934` |
| `ComputeDriver.finish_migration` | method | (self, context, migration, instance, disk_info, network_info, image_meta, resize_instance, allocations, block_device_info=None, power_on=True, share_info=None) | public | not declared | 1/5 | `src/nova/virt/driver.py:L936–L959` |
| `ComputeDriver.confirm_migration` | method | (self, context, migration, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/driver.py:L961–L966` |
| `ComputeDriver.finish_revert_migration` | method | (self, context, instance, network_info, migration, block_device_info=None, power_on=True, share_info=None) | public | not declared | 1/4 | `src/nova/virt/driver.py:L968–L982` |
| `ComputeDriver.pause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L984–L999` |
| `ComputeDriver.unpause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1001–L1015` |
| `ComputeDriver.suspend` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1017–L1032` |
| `ComputeDriver.resume` | method | (self, context, instance, network_info, block_device_info=None, share_info=None) | public | not declared | 1/9 | `src/nova/virt/driver.py:L1034–L1062` |
| `ComputeDriver.resume_state_on_host_boot` | method | (self, context, instance, network_info, share_info, block_device_info=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1064–L1075` |
| `ComputeDriver.rescue` | method | (self, context, instance, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1077–L1095` |
| `ComputeDriver.unrescue` | method | (self, context, instance) | public | not declared | 1/6 | `src/nova/virt/driver.py:L1097–L1107` |
| `ComputeDriver.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1109–L1117` |
| `ComputeDriver.power_on` | method | (self, context, instance, network_info, block_device_info=None, accel_info=None, share_info=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1119–L1131` |
| `ComputeDriver.mount_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1133–L1141` |
| `ComputeDriver.umount_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1143–L1152` |
| `ComputeDriver.is_share_mounted` | method | (self, share_mapping) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1154–L1161` |
| `ComputeDriver.power_update_event` | method | (self, instance, target_power_state) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1163–L1174` |
| `ComputeDriver.trigger_crash_dump` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1176–L1187` |
| `ComputeDriver.soft_delete` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1189–L1201` |
| `ComputeDriver.restore` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1203–L1215` |
| `ComputeDriver._get_reserved_host_disk_gb_from_config` | method | — | private | `compute_utils.convert_mb_to_ceil_gb(CONF.reserved_host_disk_mb)` (src/nova/virt/driver.py:L1220) | 1/3 | `src/nova/virt/driver.py:L1218–L1220` |
| `ComputeDriver._get_allocation_ratios` | method | (inventory) | private | `result` (src/nova/virt/driver.py:L1255) | 4/15 | `src/nova/virt/driver.py:L1223–L1255` |
| `ComputeDriver.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1257–L1337` |
| `ComputeDriver.capabilities_as_traits` | method | (self) | public | `traits` (src/nova/virt/driver.py:L1358) | 4/9 | `src/nova/virt/driver.py:L1339–L1358` |
| `ComputeDriver.get_available_resource` | method | (self, nodename) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1360–L1371` |
| `ComputeDriver.is_node_deleted` | method | (self, nodename) | public | `False` (src/nova/virt/driver.py:L1391) | 1/2 | `src/nova/virt/driver.py:L1373–L1391` |
| `ComputeDriver.pre_live_migration` | method | (self, context, instance, block_device_info, network_info, disk_info, migrate_data) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1393–L1407` |
| `ComputeDriver.live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | public | not declared | 1/4 | `src/nova/virt/driver.py:L1409–L1429` |
| `ComputeDriver.live_migration_force_complete` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1431–L1437` |
| `ComputeDriver.live_migration_abort` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1439–L1445` |
| `ComputeDriver.rollback_live_migration_at_source` | method | (self, context, instance, migrate_data) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1447–L1455` |
| `ComputeDriver.rollback_live_migration_at_destination` | method | (self, context, instance, network_info, block_device_info, destroy_disks=True, migrate_data=None) | public | not declared | 1/6 | `src/nova/virt/driver.py:L1457–L1473` |
| `ComputeDriver.post_live_migration` | method | (self, context, instance, block_device_info, migrate_data=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1475–L1484` |
| `ComputeDriver.post_live_migration_at_source` | method | (self, context, instance, network_info) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1486–L1494` |
| `ComputeDriver.post_live_migration_at_destination` | method | (self, context, instance, network_info, block_migration=False, block_device_info=None) | public | not declared | 1/5 | `src/nova/virt/driver.py:L1496–L1507` |
| `ComputeDriver.check_instance_shared_storage_local` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1509–L1518` |
| `ComputeDriver.check_instance_shared_storage_remote` | method | (self, context, data) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1520–L1526` |
| `ComputeDriver.check_instance_shared_storage_cleanup` | method | (self, context, data) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1528–L1534` |
| `ComputeDriver.check_can_live_migrate_destination` | method | (self, context, instance, src_compute_info, dst_compute_info, block_migration=False, disk_over_commit=False) | public | not declared | 1/5 | `src/nova/virt/driver.py:L1536–L1553` |
| `ComputeDriver.check_source_migrate_data_at_dest` | method | (self, ctxt, instance, migrate_data, migration, limits, allocs) | public | `migrate_data` (src/nova/virt/driver.py:L1569) | 1/3 | `src/nova/virt/driver.py:L1555–L1569` |
| `ComputeDriver.post_claim_migrate_data` | method | (self, context, instance, migrate_data, claim) | public | `migrate_data` (src/nova/virt/driver.py:L1585) | 1/2 | `src/nova/virt/driver.py:L1571–L1585` |
| `ComputeDriver.cleanup_live_migration_destination_check` | method | (self, context, dest_check_data) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1587–L1594` |
| `ComputeDriver.check_can_live_migrate_source` | method | (self, context, instance, dest_check_data, block_device_info=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1596–L1609` |
| `ComputeDriver.get_instance_disk_info` | method | (self, instance, block_device_info=None) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1611–L1630` |
| `ComputeDriver.set_admin_password` | method | (self, instance, new_pass) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1632–L1638` |
| `ComputeDriver.inject_network_info` | method | (self, instance, nw_info) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1640–L1643` |
| `ComputeDriver.poll_rebooting_instances` | method | (self, timeout, instances) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1645–L1661` |
| `ComputeDriver.host_power_action` | method | (self, action) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1663–L1674` |
| `ComputeDriver.host_maintenance_mode` | method | (self, host, mode) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1676–L1693` |
| `ComputeDriver.set_host_enabled` | method | (self, enabled) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1695–L1708` |
| `ComputeDriver.get_host_uptime` | method | (self) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1710–L1718` |
| `ComputeDriver.plug_vifs` | method | (self, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1720–L1734` |
| `ComputeDriver.unplug_vifs` | method | (self, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1736–L1748` |
| `ComputeDriver.get_host_cpu_stats` | method | (self) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1750–L1770` |
| `ComputeDriver.block_stats` | method | (self, instance, disk_id) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1772–L1795` |
| `ComputeDriver.manage_image_cache` | method | (self, context, all_instances) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1797–L1807` |
| `ComputeDriver.cache_image` | method | (self, context, image_id) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1809–L1823` |
| `ComputeDriver.get_volume_connector` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1825–L1839` |
| `ComputeDriver.get_available_nodes` | method | (self, refresh=False) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1841–L1849` |
| `ComputeDriver.get_nodenames_by_uuid` | method | (self, refresh=False) | public | `{nova.virt.node.get_local_node_uuid(): nodename}` (src/nova/virt/driver.py:L1854) | 1/3 | `src/nova/virt/driver.py:L1851–L1854` |
| `ComputeDriver.node_is_available` | method | (self, nodename) | public | `True` (src/nova/virt/driver.py:L1859); `nodename in self.get_available_nodes(refresh=True)` (src/nova/virt/driver.py:L1861) | 2/4 | `src/nova/virt/driver.py:L1856–L1861` |
| `ComputeDriver.instance_on_disk` | method | (self, instance) | public | `False` (src/nova/virt/driver.py:L1875) | 1/2 | `src/nova/virt/driver.py:L1863–L1875` |
| `ComputeDriver.register_event_listener` | method | (self, callback) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1877–L1886` |
| `ComputeDriver.emit_event` | method | (self, event) | public | `` (src/nova/virt/driver.py:L1898) | 4/13 | `src/nova/virt/driver.py:L1888–L1909` |
| `ComputeDriver.delete_instance_files` | method | (self, instance) | public | `True` (src/nova/virt/driver.py:L1917) | 1/2 | `src/nova/virt/driver.py:L1911–L1917` |
| `ComputeDriver.volume_snapshot_create` | method | (self, context, instance, volume_id, create_info) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1919–L1939` |
| `ComputeDriver.volume_snapshot_delete` | method | (self, context, instance, volume_id, snapshot_id, delete_info) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1941–L1963` |
| `ComputeDriver.default_root_device_name` | method | (self, instance, image_meta, root_bdm) | public | not declared | 1/2 | `src/nova/virt/driver.py:L1965–L1977` |
| `ComputeDriver.default_device_names_for_instance` | method | (self, instance, root_device_name, *block_device_lists) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1979–L1986` |
| `ComputeDriver.get_device_name_for_instance` | method | (self, instance, bdms, block_device_obj) | public | not declared | 1/3 | `src/nova/virt/driver.py:L1988–L2005` |
| `ComputeDriver.is_supported_fs_format` | method | (self, fs_type) | public | `False` (src/nova/virt/driver.py:L2017) | 1/2 | `src/nova/virt/driver.py:L2007–L2017` |
| `ComputeDriver.quiesce` | method | (self, context, instance, image_meta) | public | not declared | 1/2 | `src/nova/virt/driver.py:L2019–L2031` |
| `ComputeDriver.unquiesce` | method | (self, context, instance, image_meta) | public | not declared | 1/2 | `src/nova/virt/driver.py:L2033–L2045` |
| `ComputeDriver.network_binding_host_id` | method | (self, context, instance) | public | `instance.get('host')` (src/nova/virt/driver.py:L2055) | 1/2 | `src/nova/virt/driver.py:L2047–L2055` |
| `ComputeDriver.manages_network_binding_host_id` | method | (self) | public | `False` (src/nova/virt/driver.py:L2068) | 1/2 | `src/nova/virt/driver.py:L2057–L2068` |
| `ComputeDriver.cleanup_lingering_instance_resources` | method | (self, instance) | public | `True` (src/nova/virt/driver.py:L2079) | 1/2 | `src/nova/virt/driver.py:L2070–L2079` |
| `load_compute_driver` | function | (virtapi, compute_driver=None) | exported | `driver` (src/nova/virt/driver.py:L2109) | 6/21 | `src/nova/virt/driver.py:L2082–L2117` |
| `ImageMeta.from_instance` | staticmethod | — | public | not declared | — | `src/nova/virt/driver.py:L72–L97` |
| `ComputeDriver.get_instance_driver_metadata` | classmethod | — | public | not declared | — | `src/nova/virt/driver.py:L407–L458` |
| `ComputeDriver._get_reserved_host_disk_gb_from_config` | staticmethod | — | private | not declared | — | `src/nova/virt/driver.py:L1217–L1220` |
| `ComputeDriver._get_allocation_ratios` | staticmethod | — | private | not declared | — | `src/nova/virt/driver.py:L1222–L1255` |

## Dependencies

- `collections.abc`: imports `Mapping` (src/nova/virt/driver.py:L23)
- `import dataclasses` (src/nova/virt/driver.py:L24)
- `import itertools` (src/nova/virt/driver.py:L25)
- `import sys` (src/nova/virt/driver.py:L26)
- `import time` (src/nova/virt/driver.py:L27)
- `import typing as ty` (src/nova/virt/driver.py:L28)
- `import os_resource_classes as orc` (src/nova/virt/driver.py:L30)
- `import os_traits` (src/nova/virt/driver.py:L31)
- `oslo_log`: imports `log as logging` (src/nova/virt/driver.py:L33)
- `oslo_utils`: imports `importutils` (src/nova/virt/driver.py:L34)
- `import nova.conf` (src/nova/virt/driver.py:L36)
- `import nova.virt.node` (src/nova/virt/driver.py:L37)
- `nova`: imports `context as nova_context` (src/nova/virt/driver.py:L39)
- `nova.i18n`: imports `_` (src/nova/virt/driver.py:L40)
- `nova.network`: imports `model as network_model` (src/nova/virt/driver.py:L41)
- `nova`: imports `objects` (src/nova/virt/driver.py:L42)
- `nova`: imports `version` (src/nova/virt/driver.py:L43)
- `nova.virt`: imports `event as virtevent` (src/nova/virt/driver.py:L44)
- `nova.virt`: imports `block_device as virt_block_device` (src/nova/virt/driver.py:L143)
- `import nova.compute.utils as compute_utils` (src/nova/virt/driver.py:L1219)

## Side Effects

- **network**: https://docs.openstack.org/nova/latest/reference/update-provider-tree.html   # noqa (src/nova/virt/driver.py:L1277)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/driver.py:L46)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/driver.py:L47)
- **global-mutation**: CAPABILITY_TRAITS_MAP = { (src/nova/virt/driver.py:L219)

## Security Surface

- **sink** (`db-write`): Virt drivers can override this to validate or update the local, (src/nova/virt/driver.py:L371)
- **sink** (`db-write`): :param update_task_state: Callback function to update the task_state (src/nova/virt/driver.py:L927)
- **sink** (`db-write`): """Update power, vm and task states of the specified instance. (src/nova/virt/driver.py:L1164)
- **sink** (`db-write`): """Update a ProviderTree object with current resource provider and (src/nova/virt/driver.py:L1258)
- **sink** (`db-write`): https://docs.openstack.org/nova/latest/reference/update-provider-tree.html   # noqa (src/nova/virt/driver.py:L1277)

