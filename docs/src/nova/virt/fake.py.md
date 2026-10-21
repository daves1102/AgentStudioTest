# src/nova/virt/fake.py

## Overview

This file implements the `fake` module, defining 28 classs, 8 constants, 26 fields, 101 methods, 27 imports, 8 side effects, 3 security surface entries.

Lines: total 1179, code 885, comment 105, blank 189

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/fake.py:L56–L56` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/fake.py:L58–L58` |
| `FakeInstance` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L61–L69` |
| `FakeInstance.__init__` | method | (self, name, state, uuid) | public | not declared | 1/4 | `src/nova/virt/fake.py:L63–L66` |
| `FakeInstance.__getitem__` | method | (self, key) | public | `getattr(self, key)` (src/nova/virt/fake.py:L69) | 1/2 | `src/nova/virt/fake.py:L68–L69` |
| `Resources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L72–L103` |
| `Resources.vcpus` | field | — | public | not declared | — | `src/nova/virt/fake.py:L73–L73` |
| `Resources.memory_mb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L74–L74` |
| `Resources.local_gb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L75–L75` |
| `Resources.vcpus_used` | field | — | public | not declared | — | `src/nova/virt/fake.py:L76–L76` |
| `Resources.memory_mb_used` | field | — | public | not declared | — | `src/nova/virt/fake.py:L77–L77` |
| `Resources.local_gb_used` | field | — | public | not declared | — | `src/nova/virt/fake.py:L78–L78` |
| `Resources.__init__` | method | (self, vcpus=8, memory_mb=8000, local_gb=500) | public | not declared | 1/4 | `src/nova/virt/fake.py:L80–L83` |
| `Resources.claim` | method | (self, vcpus=0, mem=0, disk=0) | public | not declared | 1/4 | `src/nova/virt/fake.py:L85–L88` |
| `Resources.release` | method | (self, vcpus=0, mem=0, disk=0) | public | not declared | 1/4 | `src/nova/virt/fake.py:L90–L93` |
| `Resources.dump` | method | (self) | public | `{ 'vcpus': self.vcpus, 'memory_mb': self.memory_mb, 'local_gb': self.local_gb, 'vcpus_used': self.vcpus_used, 'memory_mb_used': self.memory_mb_used, 'local_gb_used': self.local_gb_used }` (src/nova/virt/fake.py:L96) | 1/9 | `src/nova/virt/fake.py:L95–L103` |
| `FakeDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L106–L693` |
| `FakeDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/fake.py:L109–L132` |
| `FakeDriver.vcpus` | field | — | public | not declared | — | `src/nova/virt/fake.py:L136–L136` |
| `FakeDriver.memory_mb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L137–L137` |
| `FakeDriver.local_gb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L138–L138` |
| `FakeDriver.__init__` | method | (self, virtapi, read_only=False) | public | not declared | 1/24 | `src/nova/virt/fake.py:L142–L165` |
| `FakeDriver.init_host` | method | (self, host) | public | not declared | 2/4 | `src/nova/virt/fake.py:L167–L172` |
| `FakeDriver._set_nodes` | method | (self, nodes) | private | not declared | 1/2 | `src/nova/virt/fake.py:L174–L178` |
| `FakeDriver.list_instances` | method | (self) | public | `[self.instances[uuid].name for uuid in self.instances.keys()]` (src/nova/virt/fake.py:L181) | 2/2 | `src/nova/virt/fake.py:L180–L181` |
| `FakeDriver.list_instance_uuids` | method | (self) | public | `list(self.instances.keys())` (src/nova/virt/fake.py:L184) | 1/2 | `src/nova/virt/fake.py:L183–L184` |
| `FakeDriver.plug_vifs` | method | (self, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/fake.py:L186–L188` |
| `FakeDriver.unplug_vifs` | method | (self, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/fake.py:L190–L192` |
| `FakeDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 4/16 | `src/nova/virt/fake.py:L194–L215` |
| `FakeDriver.snapshot` | method | (self, context, instance, image_id, update_task_state) | public | not declared | 2/4 | `src/nova/virt/fake.py:L217–L220` |
| `FakeDriver.reboot` | method | (self, context, instance, network_info, reboot_type, block_device_info=None, bad_volumes_callback=None, accel_info=None, share_info=None) | public | not declared | 3/12 | `src/nova/virt/fake.py:L222–L236` |
| `FakeDriver.get_host_ip_addr` | method | (self) | public | `'192.168.0.1'` (src/nova/virt/fake.py:L239) | 1/2 | `src/nova/virt/fake.py:L238–L239` |
| `FakeDriver.set_admin_password` | method | (self, instance, new_pass) | public | not declared | 1/2 | `src/nova/virt/fake.py:L241–L242` |
| `FakeDriver.resume_state_on_host_boot` | method | (self, context, instance, network_info, share_info, block_device_info=None) | public | not declared | 1/3 | `src/nova/virt/fake.py:L244–L246` |
| `FakeDriver.rescue` | method | (self, context, instance, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | 1/3 | `src/nova/virt/fake.py:L248–L250` |
| `FakeDriver.unrescue` | method | (self, context, instance) | public | not declared | 1/6 | `src/nova/virt/fake.py:L252–L257` |
| `FakeDriver.poll_rebooting_instances` | method | (self, timeout, instances) | public | not declared | 1/2 | `src/nova/virt/fake.py:L259–L260` |
| `FakeDriver.migrate_disk_and_power_off` | method | (self, context, instance, dest, flavor, network_info, block_device_info=None, timeout=0, retry_interval=0) | public | not declared | 1/5 | `src/nova/virt/fake.py:L262–L266` |
| `FakeDriver.finish_revert_migration` | method | (self, context, instance, network_info, migration, block_device_info=None, power_on=True, share_info=None) | public | not declared | 2/6 | `src/nova/virt/fake.py:L268–L273` |
| `FakeDriver.post_live_migration_at_destination` | method | (self, context, instance, network_info, block_migration=False, block_device_info=None) | public | not declared | 1/7 | `src/nova/virt/fake.py:L275–L283` |
| `FakeDriver.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | not declared | 2/5 | `src/nova/virt/fake.py:L285–L289` |
| `FakeDriver.power_on` | method | (self, context, instance, network_info, block_device_info=None, accel_info=None, share_info=None) | public | not declared | 4/9 | `src/nova/virt/fake.py:L291–L299` |
| `FakeDriver.mount_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/2 | `src/nova/virt/fake.py:L301–L302` |
| `FakeDriver.umount_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/2 | `src/nova/virt/fake.py:L304–L305` |
| `FakeDriver.is_share_mounted` | method | (self, share_mapping) | public | `False` (src/nova/virt/fake.py:L308) | 1/2 | `src/nova/virt/fake.py:L307–L308` |
| `FakeDriver.trigger_crash_dump` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/fake.py:L310–L311` |
| `FakeDriver.soft_delete` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/fake.py:L313–L314` |
| `FakeDriver.restore` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/fake.py:L316–L317` |
| `FakeDriver.pause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/fake.py:L319–L320` |
| `FakeDriver.unpause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/fake.py:L322–L323` |
| `FakeDriver.suspend` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/fake.py:L325–L326` |
| `FakeDriver.resume` | method | (self, context, instance, network_info, block_device_info=None, share_info=None) | public | not declared | 1/9 | `src/nova/virt/fake.py:L328–L336` |
| `FakeDriver.destroy` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, destroy_secrets=True) | public | not declared | 2/14 | `src/nova/virt/fake.py:L338–L351` |
| `FakeDriver.cleanup` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, migrate_data=None, destroy_vifs=True, destroy_secrets=True) | public | not declared | 2/6 | `src/nova/virt/fake.py:L353–L359` |
| `FakeDriver.attach_volume` | method | (self, context, connection_info, instance, mountpoint, disk_bus=None, device_type=None, encryption=None) | public | not declared | 2/6 | `src/nova/virt/fake.py:L361–L367` |
| `FakeDriver.detach_volume` | method | (self, context, connection_info, instance, mountpoint, encryption=None) | public | not declared | 2/6 | `src/nova/virt/fake.py:L369–L375` |
| `FakeDriver.swap_volume` | method | (self, context, old_connection_info, new_connection_info, instance, mountpoint, resize_to) | public | not declared | 2/6 | `src/nova/virt/fake.py:L377–L383` |
| `FakeDriver.extend_volume` | method | (self, context, connection_info, instance, requested_size) | public | not declared | 1/3 | `src/nova/virt/fake.py:L385–L388` |
| `FakeDriver.attach_interface` | method | (self, context, instance, image_meta, vif) | public | not declared | 2/5 | `src/nova/virt/fake.py:L390–L394` |
| `FakeDriver.detach_interface` | method | (self, context, instance, vif) | public | not declared | 2/6 | `src/nova/virt/fake.py:L396–L401` |
| `FakeDriver.get_info` | method | (self, instance, use_cache=True) | public | `hardware.InstanceInfo(state=i.state)` (src/nova/virt/fake.py:L407) | 2/5 | `src/nova/virt/fake.py:L403–L407` |
| `FakeDriver.get_diagnostics` | method | (self, instance) | public | `{'cpu0_time': 17300000000, 'memory': 524288, 'vda_errors': -1, 'vda_read': 262144, 'vda_read_req': 112, 'vda_write': 5778432, 'vda_write_req': 488, 'vnet1_rx': 2070139, 'vnet1_rx_drop': 0, 'vnet1_rx_e` (src/nova/virt/fake.py:L410) | 1/17 | `src/nova/virt/fake.py:L409–L425` |
| `FakeDriver.get_instance_diagnostics` | method | (self, instance) | public | `diags` (src/nova/virt/fake.py:L450) | 1/24 | `src/nova/virt/fake.py:L427–L450` |
| `FakeDriver.get_all_volume_usage` | method | (self, context, compute_host_bdms) | public | `volusage` (src/nova/virt/fake.py:L466) | 2/11 | `src/nova/virt/fake.py:L452–L466` |
| `FakeDriver.get_host_cpu_stats` | method | (self) | public | `stats` (src/nova/virt/fake.py:L474) | 1/7 | `src/nova/virt/fake.py:L468–L474` |
| `FakeDriver.block_stats` | method | (self, instance, disk_id) | public | `[0, 0, 0, 0, None]` (src/nova/virt/fake.py:L477) | 1/2 | `src/nova/virt/fake.py:L476–L477` |
| `FakeDriver.get_console_output` | method | (self, context, instance) | public | `'FAKE CONSOLE OUTPUT\nANOTHER\nLAST LINE'` (src/nova/virt/fake.py:L480) | 1/2 | `src/nova/virt/fake.py:L479–L480` |
| `FakeDriver.get_vnc_console` | method | (self, context, instance) | public | `ctype.ConsoleVNC( internal_access_path=uuids.vnc_access_path, host='fakevncconsole.com', port=6969)` (src/nova/virt/fake.py:L483) | 1/5 | `src/nova/virt/fake.py:L482–L486` |
| `FakeDriver.get_spice_console` | method | (self, context, instance) | public | `ctype.ConsoleSpice( internal_access_path=uuids.spice_access_path, host='fakespiceconsole.com', port=6969, tlsPort=6970)` (src/nova/virt/fake.py:L489) | 1/6 | `src/nova/virt/fake.py:L488–L493` |
| `FakeDriver.get_serial_console` | method | (self, context, instance) | public | `ctype.ConsoleSerial( internal_access_path=uuids.serial_access_path, host='fakerdpconsole.com', port=6969)` (src/nova/virt/fake.py:L496) | 1/5 | `src/nova/virt/fake.py:L495–L499` |
| `FakeDriver.get_mks_console` | method | (self, context, instance) | public | `ctype.ConsoleMKS( internal_access_path=uuids.mks_access_path, host='fakemksconsole.com', port=6969)` (src/nova/virt/fake.py:L502) | 1/5 | `src/nova/virt/fake.py:L501–L505` |
| `FakeDriver.get_available_resource` | method | (self, nodename) | public | `{}` (src/nova/virt/fake.py:L525); `host_status` (src/nova/virt/fake.py:L539) | 2/22 | `src/nova/virt/fake.py:L507–L539` |
| `FakeDriver.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 1/30 | `src/nova/virt/fake.py:L541–L574` |
| `FakeDriver.get_instance_disk_info` | method | (self, instance, block_device_info=None) | public | `` (src/nova/virt/fake.py:L577) | 1/2 | `src/nova/virt/fake.py:L576–L577` |
| `FakeDriver.live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | public | `` (src/nova/virt/fake.py:L584) | 1/6 | `src/nova/virt/fake.py:L579–L584` |
| `FakeDriver.live_migration_force_complete` | method | (self, instance) | public | `` (src/nova/virt/fake.py:L587) | 1/2 | `src/nova/virt/fake.py:L586–L587` |
| `FakeDriver.live_migration_abort` | method | (self, instance) | public | `` (src/nova/virt/fake.py:L590) | 1/2 | `src/nova/virt/fake.py:L589–L590` |
| `FakeDriver.cleanup_live_migration_destination_check` | method | (self, context, dest_check_data) | public | `` (src/nova/virt/fake.py:L594) | 1/3 | `src/nova/virt/fake.py:L592–L594` |
| `FakeDriver.check_can_live_migrate_destination` | method | (self, context, instance, src_compute_info, dst_compute_info, block_migration=False, disk_over_commit=False) | public | `data` (src/nova/virt/fake.py:L616) | 3/18 | `src/nova/virt/fake.py:L596–L616` |
| `FakeDriver.check_can_live_migrate_source` | method | (self, context, instance, dest_check_data, block_device_info=None) | public | `dest_check_data` (src/nova/virt/fake.py:L620) | 1/3 | `src/nova/virt/fake.py:L618–L620` |
| `FakeDriver.finish_migration` | method | (self, context, migration, instance, disk_info, network_info, image_meta, resize_instance, allocations, block_device_info=None, power_on=True, share_info=None) | public | not declared | 1/8 | `src/nova/virt/fake.py:L622–L632` |
| `FakeDriver.confirm_migration` | method | (self, context, migration, instance, network_info) | public | not declared | 2/3 | `src/nova/virt/fake.py:L634–L639` |
| `FakeDriver.pre_live_migration` | method | (self, context, instance, block_device_info, network_info, disk_info, migrate_data) | public | `migrate_data` (src/nova/virt/fake.py:L643) | 1/3 | `src/nova/virt/fake.py:L641–L643` |
| `FakeDriver.rollback_live_migration_at_destination` | method | (self, context, instance, network_info, block_device_info, destroy_disks=True, migrate_data=None) | public | `` (src/nova/virt/fake.py:L650) | 1/6 | `src/nova/virt/fake.py:L645–L650` |
| `FakeDriver._test_remove_vm` | method | (self, instance_uuid) | private | not declared | 1/2 | `src/nova/virt/fake.py:L652–L654` |
| `FakeDriver.host_power_action` | method | (self, action) | public | `action` (src/nova/virt/fake.py:L658) | 1/2 | `src/nova/virt/fake.py:L656–L658` |
| `FakeDriver.host_maintenance_mode` | method | (self, host, mode) | public | `'off_maintenance'` (src/nova/virt/fake.py:L665); `'on_maintenance'` (src/nova/virt/fake.py:L666) | 2/4 | `src/nova/virt/fake.py:L660–L666` |
| `FakeDriver.set_host_enabled` | method | (self, enabled) | public | `'enabled'` (src/nova/virt/fake.py:L671); `'disabled'` (src/nova/virt/fake.py:L672) | 2/4 | `src/nova/virt/fake.py:L668–L672` |
| `FakeDriver.get_volume_connector` | method | (self, instance) | public | `{'ip': CONF.my_block_storage_ip, 'initiator': 'fake', 'host': self._host}` (src/nova/virt/fake.py:L675) | 1/4 | `src/nova/virt/fake.py:L674–L677` |
| `FakeDriver.get_available_nodes` | method | (self, refresh=False) | public | `self._nodes` (src/nova/virt/fake.py:L680) | 1/2 | `src/nova/virt/fake.py:L679–L680` |
| `FakeDriver.get_nodenames_by_uuid` | method | (self, refresh=False) | public | `{str(getattr(uuids, 'node_%s' % n)): n for n in self.get_available_nodes()}` (src/nova/virt/fake.py:L683) | 2/3 | `src/nova/virt/fake.py:L682–L684` |
| `FakeDriver.instance_on_disk` | method | (self, instance) | public | `False` (src/nova/virt/fake.py:L687) | 1/2 | `src/nova/virt/fake.py:L686–L687` |
| `FakeDriver.quiesce` | method | (self, context, instance, image_meta) | public | not declared | 1/2 | `src/nova/virt/fake.py:L689–L690` |
| `FakeDriver.unquiesce` | method | (self, context, instance, image_meta) | public | not declared | 1/2 | `src/nova/virt/fake.py:L692–L693` |
| `FakeVirtAPI` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L696–L709` |
| `FakeVirtAPI.wait_for_instance_event` | method | (self, instance, event_names, timeout=300, error_callback=None) | public | not declared | 1/3 | `src/nova/virt/fake.py:L698–L702` |
| `FakeVirtAPI.exit_wait_early` | method | (self, events) | public | not declared | 1/2 | `src/nova/virt/fake.py:L704–L706` |
| `FakeVirtAPI.update_compute_provider_status` | method | (self, context, rp_uuid, enabled) | public | not declared | 1/2 | `src/nova/virt/fake.py:L708–L709` |
| `SmallFakeDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L712–L721` |
| `SmallFakeDriver.vcpus` | field | — | public | not declared | — | `src/nova/virt/fake.py:L719–L719` |
| `SmallFakeDriver.memory_mb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L720–L720` |
| `SmallFakeDriver.local_gb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L721–L721` |
| `MediumFakeDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L724–L730` |
| `MediumFakeDriver.vcpus` | field | — | public | not declared | — | `src/nova/virt/fake.py:L728–L728` |
| `MediumFakeDriver.memory_mb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L729–L729` |
| `MediumFakeDriver.local_gb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L730–L730` |
| `SameHostColdMigrateDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L733–L736` |
| `SameHostColdMigrateDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/fake.py:L735–L736` |
| `RescueBFVDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L739–L740` |
| `RescueBFVDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/fake.py:L740–L740` |
| `PowerUpdateFakeDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L743–L752` |
| `PowerUpdateFakeDriver.__init__` | method | (self, virtapi) | public | not declared | 1/3 | `src/nova/virt/fake.py:L746–L748` |
| `PowerUpdateFakeDriver.power_update_event` | method | (self, instance, target_power_state) | public | not declared | 1/2 | `src/nova/virt/fake.py:L750–L752` |
| `MediumFakeDriverWithNestedCustomResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L755–L786` |
| `MediumFakeDriverWithNestedCustomResources.vcpus` | field | — | public | not declared | — | `src/nova/virt/fake.py:L758–L758` |
| `MediumFakeDriverWithNestedCustomResources.memory_mb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L759–L759` |
| `MediumFakeDriverWithNestedCustomResources.local_gb` | field | — | public | not declared | — | `src/nova/virt/fake.py:L760–L760` |
| `MediumFakeDriverWithNestedCustomResources.child_resources` | field | — | public | not declared | — | `src/nova/virt/fake.py:L761–L770` |
| `MediumFakeDriverWithNestedCustomResources.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 2/13 | `src/nova/virt/fake.py:L772–L786` |
| `FakeFinishMigrationFailDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L789–L793` |
| `FakeFinishMigrationFailDriver.finish_migration` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/virt/fake.py:L792–L793` |
| `PredictableNodeUUIDDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L796–L807` |
| `PredictableNodeUUIDDriver.get_available_resource` | method | (self, nodename) | public | `resources` (src/nova/virt/fake.py:L807) | 1/5 | `src/nova/virt/fake.py:L801–L807` |
| `FakeRescheduleDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L810–L830` |
| `FakeRescheduleDriver.rescheduled` | field | — | public | not declared | — | `src/nova/virt/fake.py:L817–L817` |
| `FakeRescheduleDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 2/11 | `src/nova/virt/fake.py:L819–L830` |
| `FakeRescheduleDriverWithNestedCustomResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L833–L835` |
| `FakeBuildAbortDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L838–L847` |
| `FakeBuildAbortDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 1/5 | `src/nova/virt/fake.py:L843–L847` |
| `FakeBuildAbortDriverWithNestedCustomResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L850–L852` |
| `FakeUnshelveSpawnFailDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L855–L870` |
| `FakeUnshelveSpawnFailDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 2/10 | `src/nova/virt/fake.py:L860–L870` |
| `FakeUnshelveSpawnFailDriverWithNestedCustomResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L873–L875` |
| `FakeLiveMigrateDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L878–L924` |
| `FakeLiveMigrateDriver.__init__` | method | (self, virtapi, read_only=False) | public | not declared | 1/4 | `src/nova/virt/fake.py:L887–L890` |
| `FakeLiveMigrateDriver.live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | public | not declared | 4/15 | `src/nova/virt/fake.py:L892–L907` |
| `FakeLiveMigrateDriver.live_migration_force_complete` | method | (self, instance) | public | not declared | 2/4 | `src/nova/virt/fake.py:L909–L912` |
| `FakeLiveMigrateDriver.live_migration_abort` | method | (self, instance) | public | not declared | 1/3 | `src/nova/virt/fake.py:L914–L916` |
| `FakeLiveMigrateDriver.post_live_migration` | method | (self, context, instance, block_device_info, migrate_data=None) | public | not declared | 1/4 | `src/nova/virt/fake.py:L918–L924` |
| `FakeLiveMigrateDriverWithNestedCustomResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L927–L929` |
| `FakeDriverWithPciResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L932–L1116` |
| `FakeDriverWithPciResources.PCI_ADDR_PF1` | constant | — | public | not declared | — | `src/nova/virt/fake.py:L964–L964` |
| `FakeDriverWithPciResources.PCI_ADDR_PF1_VF1` | constant | — | public | not declared | — | `src/nova/virt/fake.py:L965–L965` |
| `FakeDriverWithPciResources.PCI_ADDR_PF2` | constant | — | public | not declared | — | `src/nova/virt/fake.py:L966–L966` |
| `FakeDriverWithPciResources.PCI_ADDR_PF2_VF1` | constant | — | public | not declared | — | `src/nova/virt/fake.py:L967–L967` |
| `FakeDriverWithPciResources.PCI_ADDR_PF3` | constant | — | public | not declared | — | `src/nova/virt/fake.py:L968–L968` |
| `FakeDriverWithPciResources.PCI_ADDR_PF3_VF1` | constant | — | public | not declared | — | `src/nova/virt/fake.py:L969–L969` |
| `FakeDriverWithPciResources.FakeDriverWithPciResourcesConfigFixture` | class | — | public | not declared | — | `src/nova/virt/fake.py:L974–L1038` |
| `FakeDriverWithPciResources.FakeDriverWithPciResourcesConfigFixture.setUp` | method | (self) | public | not declared | 1/42 | `src/nova/virt/fake.py:L975–L1038` |
| `FakeDriverWithPciResources.get_available_resource` | method | (self, nodename) | public | `host_status` (src/nova/virt/fake.py:L1116) | 1/69 | `src/nova/virt/fake.py:L1040–L1116` |
| `FakeLiveMigrateDriverWithPciResources` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L1119–L1127` |
| `FakeDriverWithCaching` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L1130–L1140` |
| `FakeDriverWithCaching.__init__` | method | (self, *a, **k) | public | not declared | 1/3 | `src/nova/virt/fake.py:L1131–L1133` |
| `FakeDriverWithCaching.cache_image` | method | (self, context, image_id) | public | `False` (src/nova/virt/fake.py:L1137); `True` (src/nova/virt/fake.py:L1140) | 2/6 | `src/nova/virt/fake.py:L1135–L1140` |
| `EphEncryptionDriver` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L1143–L1146` |
| `EphEncryptionDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/fake.py:L1144–L1146` |
| `EphEncryptionDriverLUKS` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L1149–L1153` |
| `EphEncryptionDriverLUKS.capabilities` | field | — | public | not declared | — | `src/nova/virt/fake.py:L1150–L1153` |
| `EphEncryptionDriverPLAIN` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L1156–L1160` |
| `EphEncryptionDriverPLAIN.capabilities` | field | — | public | not declared | — | `src/nova/virt/fake.py:L1157–L1160` |
| `FakeDriverWithoutFakeNodes` | class | — | exported | not declared | — | `src/nova/virt/fake.py:L1163–L1179` |
| `FakeDriverWithoutFakeNodes.get_available_resource` | method | (self, nodename) | public | `resources` (src/nova/virt/fake.py:L1174) | 1/4 | `src/nova/virt/fake.py:L1171–L1174` |
| `FakeDriverWithoutFakeNodes.get_nodenames_by_uuid` | method | (self, refresh=False) | public | `{ nova.virt.node.get_local_node_uuid(): self.get_available_nodes()[0] }` (src/nova/virt/fake.py:L1177) | 1/4 | `src/nova/virt/fake.py:L1176–L1179` |

## Dependencies

- `import collections` (src/nova/virt/fake.py:L26)
- `import contextlib` (src/nova/virt/fake.py:L27)
- `import time` (src/nova/virt/fake.py:L28)
- `import uuid` (src/nova/virt/fake.py:L29)
- `import fixtures` (src/nova/virt/fake.py:L31)
- `import os_resource_classes as orc` (src/nova/virt/fake.py:L32)
- `import os_traits` (src/nova/virt/fake.py:L33)
- `oslo_log`: imports `log as logging` (src/nova/virt/fake.py:L34)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/fake.py:L35)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/virt/fake.py:L36)
- `oslo_utils`: imports `versionutils` (src/nova/virt/fake.py:L37)
- `nova.compute`: imports `power_state` (src/nova/virt/fake.py:L39)
- `nova.compute`: imports `task_states` (src/nova/virt/fake.py:L40)
- `nova.compute`: imports `vm_states` (src/nova/virt/fake.py:L41)
- `import nova.conf` (src/nova/virt/fake.py:L42)
- `nova.console`: imports `type as ctype` (src/nova/virt/fake.py:L43)
- `nova`: imports `context as nova_context` (src/nova/virt/fake.py:L44)
- `nova`: imports `exception` (src/nova/virt/fake.py:L45)
- `nova`: imports `objects` (src/nova/virt/fake.py:L46)
- `nova.objects`: imports `diagnostics as diagnostics_obj` (src/nova/virt/fake.py:L47)
- `nova.objects`: imports `fields as obj_fields` (src/nova/virt/fake.py:L48)
- `nova.objects`: imports `migrate_data` (src/nova/virt/fake.py:L49)
- `nova.virt`: imports `driver` (src/nova/virt/fake.py:L50)
- `nova.virt`: imports `hardware` (src/nova/virt/fake.py:L51)
- `nova.virt.ironic`: imports `driver as ironic` (src/nova/virt/fake.py:L52)
- `import nova.virt.node` (src/nova/virt/fake.py:L53)
- `nova.virt`: imports `virtapi` (src/nova/virt/fake.py:L54)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/fake.py:L56)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/fake.py:L58)
- **global-mutation**: PCI_ADDR_PF1 = '0000:01:00.0' (src/nova/virt/fake.py:L964)
- **global-mutation**: PCI_ADDR_PF1_VF1 = '0000:01:00.1' (src/nova/virt/fake.py:L965)
- **global-mutation**: PCI_ADDR_PF2 = '0000:02:00.0' (src/nova/virt/fake.py:L966)
- **global-mutation**: PCI_ADDR_PF2_VF1 = '0000:02:00.1' (src/nova/virt/fake.py:L967)
- **global-mutation**: PCI_ADDR_PF3 = '0000:03:00.0' (src/nova/virt/fake.py:L968)
- **global-mutation**: PCI_ADDR_PF3_VF1 = '0000:03:00.1' (src/nova/virt/fake.py:L969)

## Security Surface

- **sink** (`db-write`): host_status.update(self.resources.dump()) (src/nova/virt/fake.py:L528)
- **sink** (`db-write`): """Update power state of the specified instance in the nova DB.""" (src/nova/virt/fake.py:L751)
- **sink** (`db-write`): update entities according to the host specific addresses (e.g. pci_slot of (src/nova/virt/fake.py:L936)

