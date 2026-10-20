# src/nova/compute/rpcapi.py

## Overview

This file implements the `rpcapi` module, defining 1 class, 7 constants, 2 functions, 79 methods, 1 property, 1 staticmethod, 1 variable, 13 imports, 14 side effects, 17 security surface entries.

Lines: total 1738, code 1410, comment 157, blank 171

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L33–L33` |
| `RPC_TOPIC` | constant | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L34–L34` |
| `RPC_TOPIC_ALT` | constant | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L42–L42` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L44–L44` |
| `LAST_VERSION` | constant | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L45–L45` |
| `NO_COMPUTES_WARNING` | constant | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L46–L46` |
| `_ROUTER` | variable | — | unexported | not declared | — | `src/nova/compute/rpcapi.py:L48–L48` |
| `reset_globals` | function | — | exported | not declared | 1/7 | `src/nova/compute/rpcapi.py:L51–L58` |
| `_compute_host` | function | (host, instance) | unexported | `host` (src/nova/compute/rpcapi.py:L71); `instance.host` (src/nova/compute/rpcapi.py:L77) | 4/9 | `src/nova/compute/rpcapi.py:L61–L77` |
| `ComputeAPI` | class | — | exported | not declared | — | `src/nova/compute/rpcapi.py:L81–L1738` |
| `ComputeAPI.VERSION_ALIASES` | constant | — | public | not declared | — | `src/nova/compute/rpcapi.py:L420–L447` |
| `ComputeAPI.router` | method | (self) | public | `_ROUTER` (src/nova/compute/rpcapi.py:L477) | 4/18 | `src/nova/compute/rpcapi.py:L450–L477` |
| `ComputeAPI._ver` | method | (self, ctxt, old) | private | `'6.0'` (src/nova/compute/rpcapi.py:L491); `old` (src/nova/compute/rpcapi.py:L493) | 2/6 | `src/nova/compute/rpcapi.py:L479–L493` |
| `ComputeAPI._determine_version_cap` | method | (target) | private | `LAST_VERSION` (src/nova/compute/rpcapi.py:L500); `history[service_obj.SERVICE_VERSION]['compute_rpc']` (src/nova/compute/rpcapi.py:L539); `target.version` (src/nova/compute/rpcapi.py:L554); `version_cap` (src/nova/compute/rpcapi.py:L560) | 8/48 | `src/nova/compute/rpcapi.py:L496–L560` |
| `ComputeAPI.get_client` | method | (self, target, version_cap, serializer) | public | `rpc.get_client(target, version_cap=version_cap, serializer=serializer, call_monitor_timeout=cmt)` (src/nova/compute/rpcapi.py:L573) | 2/9 | `src/nova/compute/rpcapi.py:L562–L576` |
| `ComputeAPI.prepare_for_alt_rpcserver` | method | (self, client, server, version, **kwargs) | public | `client.prepare(**params)` (src/nova/compute/rpcapi.py:L603) | 2/15 | `src/nova/compute/rpcapi.py:L578–L603` |
| `ComputeAPI.add_fixed_ip_to_instance` | method | (self, ctxt, instance, network_id) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L605–L610` |
| `ComputeAPI.attach_interface` | method | (self, ctxt, instance, network_id, port_id, requested_ip, tag=None) | public | `cctxt.call(ctxt, 'attach_interface', **kw)` (src/nova/compute/rpcapi.py:L621) | 1/10 | `src/nova/compute/rpcapi.py:L612–L621` |
| `ComputeAPI.attach_volume` | method | (self, ctxt, instance, bdm) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L623–L627` |
| `ComputeAPI.check_can_live_migrate_destination` | method | (self, ctxt, instance, destination, block_migration, disk_over_commit, migration, limits) | public | `cctxt.call(ctxt, 'check_can_live_migrate_destination', **kwargs)` (src/nova/compute/rpcapi.py:L654) | 2/20 | `src/nova/compute/rpcapi.py:L629–L654` |
| `ComputeAPI.check_can_live_migrate_source` | method | (self, ctxt, instance, dest_check_data) | public | `cctxt.call(ctxt, 'check_can_live_migrate_source', instance=instance, dest_check_data=dest_check_data)` (src/nova/compute/rpcapi.py:L665) | 1/8 | `src/nova/compute/rpcapi.py:L656–L667` |
| `ComputeAPI.check_instance_shared_storage` | method | (self, ctxt, data, instance=None, host=None) | public | `cctxt.call(ctxt, 'check_instance_shared_storage', **msg_args)` (src/nova/compute/rpcapi.py:L686) | 2/11 | `src/nova/compute/rpcapi.py:L669–L686` |
| `ComputeAPI.confirm_resize` | method | (self, ctxt, instance, migration, host, cast=True) | public | `rpc_method(ctxt, 'confirm_resize', instance=instance, migration=migration)` (src/nova/compute/rpcapi.py:L695) | 2/9 | `src/nova/compute/rpcapi.py:L688–L696` |
| `ComputeAPI.confirm_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration) | public | `cctxt.call( ctxt, 'confirm_snapshot_based_resize_at_source', instance=instance, migration=migration)` (src/nova/compute/rpcapi.py:L729) | 2/13 | `src/nova/compute/rpcapi.py:L698–L731` |
| `ComputeAPI.detach_interface` | method | (self, ctxt, instance, port_id) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L733–L738` |
| `ComputeAPI.detach_volume` | method | (self, ctxt, instance, volume_id, attachment_id=None) | public | not declared | 1/8 | `src/nova/compute/rpcapi.py:L740–L747` |
| `ComputeAPI.finish_resize` | method | (self, ctxt, instance, migration, image, disk_info, host, request_spec) | public | not declared | 2/18 | `src/nova/compute/rpcapi.py:L749–L772` |
| `ComputeAPI.finish_revert_resize` | method | (self, ctxt, instance, migration, host, request_spec) | public | not declared | 2/15 | `src/nova/compute/rpcapi.py:L774–L797` |
| `ComputeAPI.finish_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration, snapshot_id, request_spec) | public | `cctxt.call( ctxt, 'finish_snapshot_based_resize_at_dest', **msg_args)` (src/nova/compute/rpcapi.py:L844) | 3/18 | `src/nova/compute/rpcapi.py:L799–L845` |
| `ComputeAPI.finish_revert_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration) | public | `cctxt.call( ctxt, 'finish_revert_snapshot_based_resize_at_source', instance=instance, migration=migration)` (src/nova/compute/rpcapi.py:L885) | 2/15 | `src/nova/compute/rpcapi.py:L847–L887` |
| `ComputeAPI.get_console_output` | method | (self, ctxt, instance, tail_length) | public | `cctxt.call(ctxt, 'get_console_output', instance=instance, tail_length=tail_length)` (src/nova/compute/rpcapi.py:L893) | 1/6 | `src/nova/compute/rpcapi.py:L889–L894` |
| `ComputeAPI.get_diagnostics` | method | (self, ctxt, instance) | public | `cctxt.call(ctxt, 'get_diagnostics', instance=instance)` (src/nova/compute/rpcapi.py:L900) | 1/5 | `src/nova/compute/rpcapi.py:L896–L900` |
| `ComputeAPI.get_instance_diagnostics` | method | (self, ctxt, instance) | public | `cctxt.call(ctxt, 'get_instance_diagnostics', instance=instance)` (src/nova/compute/rpcapi.py:L907) | 1/6 | `src/nova/compute/rpcapi.py:L902–L907` |
| `ComputeAPI.get_vnc_console` | method | (self, ctxt, instance, console_type) | public | `cctxt.call(ctxt, 'get_vnc_console', instance=instance, console_type=console_type)` (src/nova/compute/rpcapi.py:L913) | 1/6 | `src/nova/compute/rpcapi.py:L909–L914` |
| `ComputeAPI.get_spice_console` | method | (self, ctxt, instance, console_type) | public | `cctxt.call(ctxt, 'get_spice_console', instance=instance, console_type=console_type)` (src/nova/compute/rpcapi.py:L920) | 1/6 | `src/nova/compute/rpcapi.py:L916–L921` |
| `ComputeAPI.get_mks_console` | method | (self, ctxt, instance, console_type) | public | `cctxt.call(ctxt, 'get_mks_console', instance=instance, console_type=console_type)` (src/nova/compute/rpcapi.py:L927) | 1/6 | `src/nova/compute/rpcapi.py:L923–L928` |
| `ComputeAPI.get_serial_console` | method | (self, ctxt, instance, console_type) | public | `cctxt.call(ctxt, 'get_serial_console', instance=instance, console_type=console_type)` (src/nova/compute/rpcapi.py:L934) | 1/6 | `src/nova/compute/rpcapi.py:L930–L935` |
| `ComputeAPI.validate_console_port` | method | (self, ctxt, instance, port, console_type) | public | `cctxt.call(ctxt, 'validate_console_port', instance=instance, port=port, console_type=console_type)` (src/nova/compute/rpcapi.py:L947) | 1/9 | `src/nova/compute/rpcapi.py:L937–L949` |
| `ComputeAPI.host_maintenance_mode` | method | (self, ctxt, host, host_param, mode) | public | `cctxt.call(ctxt, 'host_maintenance_mode', host=host_param, mode=mode)` (src/nova/compute/rpcapi.py:L963) | 1/6 | `src/nova/compute/rpcapi.py:L951–L964` |
| `ComputeAPI.host_power_action` | method | (self, ctxt, host, action) | public | `cctxt.call(ctxt, 'host_power_action', action=action)` (src/nova/compute/rpcapi.py:L970) | 1/5 | `src/nova/compute/rpcapi.py:L966–L970` |
| `ComputeAPI.inject_network_info` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L972–L976` |
| `ComputeAPI.live_migration` | method | (self, ctxt, instance, dest, block_migration, host, migration, migrate_data=None) | public | not declared | 1/9 | `src/nova/compute/rpcapi.py:L978–L991` |
| `ComputeAPI.live_migration_force_complete` | method | (self, ctxt, instance, migration) | public | not declared | 1/7 | `src/nova/compute/rpcapi.py:L993–L999` |
| `ComputeAPI.live_migration_abort` | method | (self, ctxt, instance, migration_id) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1001–L1006` |
| `ComputeAPI.pause_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1008–L1012` |
| `ComputeAPI.post_live_migration_at_destination` | method | (self, ctxt, instance, block_migration, host) | public | `cctxt.call(ctxt, 'post_live_migration_at_destination', instance=instance, block_migration=block_migration)` (src/nova/compute/rpcapi.py:L1026) | 1/11 | `src/nova/compute/rpcapi.py:L1014–L1027` |
| `ComputeAPI.pre_live_migration` | method | (self, ctxt, instance, block_migration, disk, host, migrate_data) | public | `cctxt.call(ctxt, 'pre_live_migration', instance=instance, disk=disk, migrate_data=migrate_data, **msg_args)` (src/nova/compute/rpcapi.py:L1048) | 2/17 | `src/nova/compute/rpcapi.py:L1031–L1051` |
| `ComputeAPI.prep_resize` | method | (self, ctxt, instance, image, flavor, host, migration, request_spec, filter_properties, node, clean_shutdown, host_list) | public | not declared | 3/25 | `src/nova/compute/rpcapi.py:L1054–L1088` |
| `ComputeAPI.prep_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, flavor, nodename, migration, limits, request_spec, destination) | public | `cctxt.call(ctxt, 'prep_snapshot_based_resize_at_dest', **msg_args)` (src/nova/compute/rpcapi.py:L1142) | 3/19 | `src/nova/compute/rpcapi.py:L1090–L1143` |
| `ComputeAPI.prep_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration, snapshot_id=None) | public | `cctxt.call( ctxt, 'prep_snapshot_based_resize_at_source', instance=instance, migration=migration, snapshot_id=snapshot_id)` (src/nova/compute/rpcapi.py:L1186) | 2/15 | `src/nova/compute/rpcapi.py:L1145–L1188` |
| `ComputeAPI.reboot_instance` | method | (self, ctxt, instance, block_device_info, reboot_type) | public | not declared | 1/9 | `src/nova/compute/rpcapi.py:L1190–L1198` |
| `ComputeAPI.rebuild_instance` | method | (self, ctxt, instance, new_pass, injected_files, image_ref, orig_image_ref, orig_sys_metadata, bdms, recreate, on_shared_storage, host, node, preserve_ephemeral, migration, limits, request_spec, accel_uuids, reimage_boot_volume, target_state) | public | not declared | 7/48 | `src/nova/compute/rpcapi.py:L1200–L1250` |
| `ComputeAPI.remove_fixed_ip_from_instance` | method | (self, ctxt, instance, address) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1252–L1257` |
| `ComputeAPI.remove_volume_connection` | method | (self, ctxt, instance, volume_id, host, delete_attachment=False) | public | `cctxt.call(ctxt, 'remove_volume_connection', **kwargs)` (src/nova/compute/rpcapi.py:L1279) | 2/17 | `src/nova/compute/rpcapi.py:L1259–L1279` |
| `ComputeAPI.rescue_instance` | method | (self, ctxt, instance, rescue_password, rescue_image_ref=None, clean_shutdown=True) | public | not declared | 1/11 | `src/nova/compute/rpcapi.py:L1281–L1291` |
| `ComputeAPI.resize_instance` | method | (self, ctxt, instance, migration, image, flavor, request_spec, clean_shutdown=True) | public | not declared | 3/22 | `src/nova/compute/rpcapi.py:L1293–L1321` |
| `ComputeAPI.resume_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1323–L1327` |
| `ComputeAPI.revert_resize` | method | (self, ctxt, instance, migration, host, request_spec) | public | not declared | 2/14 | `src/nova/compute/rpcapi.py:L1329–L1351` |
| `ComputeAPI.revert_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration) | public | `cctxt.call( ctxt, 'revert_snapshot_based_resize_at_dest', instance=instance, migration=migration)` (src/nova/compute/rpcapi.py:L1385) | 2/12 | `src/nova/compute/rpcapi.py:L1353–L1387` |
| `ComputeAPI.rollback_live_migration_at_destination` | method | (self, ctxt, instance, host, destroy_disks, migrate_data) | public | not declared | 1/10 | `src/nova/compute/rpcapi.py:L1389–L1402` |
| `ComputeAPI.supports_numa_live_migration` | method | (self, ctxt) | public | `client.can_send_version(version)` (src/nova/compute/rpcapi.py:L1410) | 1/4 | `src/nova/compute/rpcapi.py:L1405–L1410` |
| `ComputeAPI.drop_move_claim_at_destination` | method | (self, ctxt, instance, host) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1412–L1429` |
| `ComputeAPI.set_admin_password` | method | (self, ctxt, instance, new_pass) | public | `cctxt.call(ctxt, 'set_admin_password', instance=instance, new_pass=new_pass)` (src/nova/compute/rpcapi.py:L1435) | 1/6 | `src/nova/compute/rpcapi.py:L1431–L1436` |
| `ComputeAPI.set_host_enabled` | method | (self, ctxt, host, enabled) | public | `cctxt.call(ctxt, 'set_host_enabled', enabled=enabled)` (src/nova/compute/rpcapi.py:L1444) | 1/7 | `src/nova/compute/rpcapi.py:L1438–L1444` |
| `ComputeAPI.swap_volume` | method | (self, ctxt, instance, old_volume_id, new_volume_id, new_attachment_id) | public | not declared | 1/11 | `src/nova/compute/rpcapi.py:L1446–L1456` |
| `ComputeAPI.get_host_uptime` | method | (self, ctxt, host) | public | `cctxt.call(ctxt, 'get_host_uptime')` (src/nova/compute/rpcapi.py:L1462) | 1/5 | `src/nova/compute/rpcapi.py:L1458–L1462` |
| `ComputeAPI.reserve_block_device_name` | method | (self, ctxt, instance, device, volume_id, disk_bus, device_type, tag, multiattach) | public | `cctxt.call(ctxt, 'reserve_block_device_name', **kw)` (src/nova/compute/rpcapi.py:L1477) | 1/14 | `src/nova/compute/rpcapi.py:L1464–L1477` |
| `ComputeAPI.backup_instance` | method | (self, ctxt, instance, image_id, backup_type, rotation) | public | not declared | 1/10 | `src/nova/compute/rpcapi.py:L1479–L1488` |
| `ComputeAPI.snapshot_instance` | method | (self, ctxt, instance, image_id) | public | not declared | 1/7 | `src/nova/compute/rpcapi.py:L1490–L1496` |
| `ComputeAPI.start_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1498–L1502` |
| `ComputeAPI.stop_instance` | method | (self, ctxt, instance, do_cast=True, clean_shutdown=True) | public | `rpc_method(ctxt, 'stop_instance', **msg_args)` (src/nova/compute/rpcapi.py:L1511) | 2/8 | `src/nova/compute/rpcapi.py:L1504–L1511` |
| `ComputeAPI.suspend_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1513–L1517` |
| `ComputeAPI.terminate_instance` | method | (self, ctxt, instance, bdms) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1519–L1524` |
| `ComputeAPI.unpause_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1526–L1530` |
| `ComputeAPI.unrescue_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1532–L1536` |
| `ComputeAPI.soft_delete_instance` | method | (self, ctxt, instance) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1538–L1543` |
| `ComputeAPI.restore_instance` | method | (self, ctxt, instance) | public | not declared | 1/5 | `src/nova/compute/rpcapi.py:L1545–L1549` |
| `ComputeAPI.shelve_instance` | method | (self, ctxt, instance, image_id=None, clean_shutdown=True, accel_uuids=None) | public | not declared | 3/21 | `src/nova/compute/rpcapi.py:L1551–L1571` |
| `ComputeAPI.shelve_offload_instance` | method | (self, ctxt, instance, clean_shutdown=True, accel_uuids=None) | public | not declared | 2/15 | `src/nova/compute/rpcapi.py:L1573–L1587` |
| `ComputeAPI.unshelve_instance` | method | (self, ctxt, instance, host, request_spec, image=None, filter_properties=None, node=None, accel_uuids=None) | public | not declared | 3/20 | `src/nova/compute/rpcapi.py:L1589–L1611` |
| `ComputeAPI.volume_snapshot_create` | method | (self, ctxt, instance, volume_id, create_info) | public | not declared | 1/7 | `src/nova/compute/rpcapi.py:L1613–L1619` |
| `ComputeAPI.volume_snapshot_delete` | method | (self, ctxt, instance, volume_id, snapshot_id, delete_info) | public | not declared | 1/8 | `src/nova/compute/rpcapi.py:L1621–L1628` |
| `ComputeAPI.allow_share` | method | (self, ctxt, instance, share_mapping) | public | not declared | 2/15 | `src/nova/compute/rpcapi.py:L1630–L1644` |
| `ComputeAPI.deny_share` | method | (self, ctxt, instance, share_mapping) | public | not declared | 2/15 | `src/nova/compute/rpcapi.py:L1646–L1660` |
| `ComputeAPI.external_instance_event` | method | (self, ctxt, instances, events, host=None) | public | not declared | 1/10 | `src/nova/compute/rpcapi.py:L1662–L1674` |
| `ComputeAPI.build_and_run_instance` | method | (self, ctxt, instance, host, image, request_spec, filter_properties, admin_password=None, injected_files=None, requested_networks=None, security_groups=None, block_device_mapping=None, node=None, limits=None, host_list=None, accel_uuids=None) | public | not declared | 3/28 | `src/nova/compute/rpcapi.py:L1676–L1704` |
| `ComputeAPI.quiesce_instance` | method | (self, ctxt, instance) | public | `cctxt.call(ctxt, 'quiesce_instance', instance=instance)` (src/nova/compute/rpcapi.py:L1710) | 1/5 | `src/nova/compute/rpcapi.py:L1706–L1710` |
| `ComputeAPI.unquiesce_instance` | method | (self, ctxt, instance, mapping=None) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1712–L1717` |
| `ComputeAPI.trigger_crash_dump` | method | (self, ctxt, instance) | public | not declared | 1/6 | `src/nova/compute/rpcapi.py:L1719–L1724` |
| `ComputeAPI.cache_images` | method | (self, ctxt, host, image_ids) | public | `cctxt.call(ctxt, 'cache_images', image_ids=image_ids)` (src/nova/compute/rpcapi.py:L1738) | 2/10 | `src/nova/compute/rpcapi.py:L1726–L1738` |
| `ComputeAPI.router` | property | — | public | not declared | — | `src/nova/compute/rpcapi.py:L449–L477` |
| `ComputeAPI._determine_version_cap` | staticmethod | — | private | not declared | — | `src/nova/compute/rpcapi.py:L495–L560` |

## Dependencies

- `oslo_concurrency`: imports `lockutils` (src/nova/compute/rpcapi.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/compute/rpcapi.py:L19)
- `import oslo_messaging as messaging` (src/nova/compute/rpcapi.py:L20)
- `oslo_utils`: imports `excutils` (src/nova/compute/rpcapi.py:L21)
- `import nova.conf` (src/nova/compute/rpcapi.py:L23)
- `nova`: imports `context` (src/nova/compute/rpcapi.py:L24)
- `nova`: imports `exception` (src/nova/compute/rpcapi.py:L25)
- `nova.i18n`: imports `_` (src/nova/compute/rpcapi.py:L26)
- `nova`: imports `objects` (src/nova/compute/rpcapi.py:L27)
- `nova.objects`: imports `base as objects_base` (src/nova/compute/rpcapi.py:L28)
- `nova.objects`: imports `service as service_obj` (src/nova/compute/rpcapi.py:L29)
- `nova`: imports `profiler` (src/nova/compute/rpcapi.py:L30)
- `nova`: imports `rpc` (src/nova/compute/rpcapi.py:L31)

## Side Effects

- **network**: rpc.get_client(target, version_cap, serializer) (src/nova/compute/rpcapi.py:L472)
- **network**: default_client = self.get_client(target, version_cap, (src/nova/compute/rpcapi.py:L474)
- **network**: return rpc.get_client(target, (src/nova/compute/rpcapi.py:L573)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/rpcapi.py:L33)
- **global-mutation**: RPC_TOPIC = "compute" (src/nova/compute/rpcapi.py:L34)
- **global-mutation**: RPC_TOPIC_ALT = "compute-alt" (src/nova/compute/rpcapi.py:L42)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/rpcapi.py:L44)
- **global-mutation**: LAST_VERSION = None (src/nova/compute/rpcapi.py:L45)
- **global-mutation**: NO_COMPUTES_WARNING = False (src/nova/compute/rpcapi.py:L46)
- **global-mutation**: NO_COMPUTES_WARNING = False (src/nova/compute/rpcapi.py:L56)
- **global-mutation**: LAST_VERSION = None (src/nova/compute/rpcapi.py:L57)
- **global-mutation**: VERSION_ALIASES = { (src/nova/compute/rpcapi.py:L420)
- **global-mutation**: NO_COMPUTES_WARNING = True (src/nova/compute/rpcapi.py:L538)
- **global-mutation**: LAST_VERSION = version_cap (src/nova/compute/rpcapi.py:L555)

## Security Surface

- **sink** (`db-write`): * 3.1 - Update get_spice_console() to take an instance object (src/nova/compute/rpcapi.py:L241)
- **sink** (`db-write`): * 3.2 - Update get_vnc_console() to take an instance object (src/nova/compute/rpcapi.py:L242)
- **sink** (`db-write`): * 3.3 - Update validate_console_port() to take an instance object (src/nova/compute/rpcapi.py:L243)
- **sink** (`db-write`): * 3.4 - Update rebuild_instance() to take an instance object (src/nova/compute/rpcapi.py:L244)
- **sink** (`db-write`): * 3.7 - Update change_instance_metadata() to take an instance object (src/nova/compute/rpcapi.py:L247)
- **sink** (`db-write`): * 3.8 - Update set_admin_password() to take an instance object (src/nova/compute/rpcapi.py:L248)
- **sink** (`db-write`): * 3.9 - Update rescue_instance() to take an instance object (src/nova/compute/rpcapi.py:L249)
- **sink** (`db-write`): * 3.11 - Update unrescue_instance() to take an object (src/nova/compute/rpcapi.py:L251)
- **sink** (`db-write`): * 3.12 - Update add_fixed_ip_to_instance() to take an object (src/nova/compute/rpcapi.py:L252)
- **sink** (`db-write`): * 3.13 - Update remove_fixed_ip_from_instance() to take an object (src/nova/compute/rpcapi.py:L253)
- **sink** (`db-write`): * 3.14 - Update post_live_migration_at_destination() to take an object (src/nova/compute/rpcapi.py:L254)
- **sink** (`db-write`): * 3.17 - Update attach_interface and detach_interface to take an object (src/nova/compute/rpcapi.py:L259)
- **sink** (`db-write`): * 3.18 - Update get_diagnostics() to take an instance object (src/nova/compute/rpcapi.py:L260)
- **sink** (`db-write`): * 3.19 - Update pre_live_migration to take instance object (src/nova/compute/rpcapi.py:L262)
- **sink** (`db-write`): * 3.24 - Update rescue_instance() to take optional rescue_image_ref (src/nova/compute/rpcapi.py:L274)
- **sink** (`db-write`): * 3.28 - Update get_console_output() to accept a new-world object (src/nova/compute/rpcapi.py:L280)
- **sink** (`db-write`): params.update(kwargs) (src/nova/compute/rpcapi.py:L602)

