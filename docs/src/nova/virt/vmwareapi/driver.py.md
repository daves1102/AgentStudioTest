# src/nova/virt/vmwareapi/driver.py

## Overview

This file implements the `driver` module, defining 1 class, 4 constants, 1 field, 64 methods, 30 imports, 8 side effects, 3 security surface entries.

Lines: total 744, code 573, comment 68, blank 103

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/driver.py:L55–L55` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/driver.py:L57–L57` |
| `TIME_BETWEEN_API_CALL_RETRIES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/driver.py:L59–L59` |
| `MAX_CONSOLE_BYTES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/driver.py:L60–L60` |
| `VMwareVCDriver` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/driver.py:L63–L744` |
| `VMwareVCDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/vmwareapi/driver.py:L66–L94` |
| `VMwareVCDriver.__init__` | method | (self, virtapi, scheme="https") | public | not declared | 8/42 | `src/nova/virt/vmwareapi/driver.py:L103–L153` |
| `VMwareVCDriver._check_min_version` | method | (self) | private | not declared | 3/18 | `src/nova/virt/vmwareapi/driver.py:L155–L172` |
| `VMwareVCDriver._update_pbm_location` | method | (self) | private | not declared | 2/7 | `src/nova/virt/vmwareapi/driver.py:L174–L180` |
| `VMwareVCDriver._validate_configuration` | method | (self) | private | not declared | 5/11 | `src/nova/virt/vmwareapi/driver.py:L182–L192` |
| `VMwareVCDriver.init_host` | method | (self, host) | public | not declared | 2/11 | `src/nova/virt/vmwareapi/driver.py:L194–L205` |
| `VMwareVCDriver.cleanup_host` | method | (self, host) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L207–L208` |
| `VMwareVCDriver._register_openstack_extension` | method | (self) | private | not declared | 4/18 | `src/nova/virt/vmwareapi/driver.py:L210–L228` |
| `VMwareVCDriver.cleanup` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, migrate_data=None, destroy_vifs=True, destroy_secrets=True) | public | not declared | 1/4 | `src/nova/virt/vmwareapi/driver.py:L230–L234` |
| `VMwareVCDriver.resume_state_on_host_boot` | method | (self, context, instance, network_info, share_info, block_device_info=None) | public | `` (src/nova/virt/vmwareapi/driver.py:L244) | 2/8 | `src/nova/virt/vmwareapi/driver.py:L236–L249` |
| `VMwareVCDriver.list_instance_uuids` | method | (self) | public | `self._vmops.list_instances()` (src/nova/virt/vmwareapi/driver.py:L253) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L251–L253` |
| `VMwareVCDriver.list_instances` | method | (self) | public | `self._vmops.list_instances()` (src/nova/virt/vmwareapi/driver.py:L257) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L255–L257` |
| `VMwareVCDriver.migrate_disk_and_power_off` | method | (self, context, instance, dest, flavor, network_info, block_device_info=None, timeout=0, retry_interval=0) | public | `self._vmops.migrate_disk_and_power_off(context, instance, dest, flavor)` (src/nova/virt/vmwareapi/driver.py:L267) | 1/6 | `src/nova/virt/vmwareapi/driver.py:L259–L268` |
| `VMwareVCDriver.confirm_migration` | method | (self, context, migration, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L270–L272` |
| `VMwareVCDriver.finish_revert_migration` | method | (self, context, instance, network_info, migration, block_device_info=None, power_on=True, share_info=None) | public | not declared | 1/5 | `src/nova/virt/vmwareapi/driver.py:L274–L279` |
| `VMwareVCDriver.finish_migration` | method | (self, context, migration, instance, disk_info, network_info, image_meta, resize_instance, allocations, block_device_info=None, power_on=True, share_info=None) | public | not declared | 1/7 | `src/nova/virt/vmwareapi/driver.py:L281–L288` |
| `VMwareVCDriver.pre_live_migration` | method | (self, context, instance, block_device_info, network_info, disk_info, migrate_data) | public | `migrate_data` (src/nova/virt/vmwareapi/driver.py:L292) | 1/3 | `src/nova/virt/vmwareapi/driver.py:L290–L292` |
| `VMwareVCDriver.post_live_migration_at_source` | method | (self, context, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L294–L295` |
| `VMwareVCDriver.post_live_migration_at_destination` | method | (self, context, instance, network_info, block_migration=False, block_device_info=None) | public | not declared | 1/5 | `src/nova/virt/vmwareapi/driver.py:L297–L301` |
| `VMwareVCDriver.cleanup_live_migration_destination_check` | method | (self, context, dest_check_data) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/driver.py:L303–L305` |
| `VMwareVCDriver.live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | public | not declared | 1/6 | `src/nova/virt/vmwareapi/driver.py:L307–L313` |
| `VMwareVCDriver.check_can_live_migrate_source` | method | (self, context, instance, dest_check_data, block_device_info=None) | public | `dest_check_data` (src/nova/virt/vmwareapi/driver.py:L328) | 3/14 | `src/nova/virt/vmwareapi/driver.py:L315–L328` |
| `VMwareVCDriver.check_can_live_migrate_destination` | method | (self, context, instance, src_compute_info, dst_compute_info, block_migration=False, disk_over_commit=False) | public | `data` (src/nova/virt/vmwareapi/driver.py:L339) | 1/8 | `src/nova/virt/vmwareapi/driver.py:L330–L339` |
| `VMwareVCDriver.rollback_live_migration_at_destination` | method | (self, context, instance, network_info, block_device_info, destroy_disks=True, migrate_data=None) | public | not declared | 1/6 | `src/nova/virt/vmwareapi/driver.py:L341–L347` |
| `VMwareVCDriver.get_instance_disk_info` | method | (self, instance, block_device_info=None) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L349–L350` |
| `VMwareVCDriver.get_vnc_console` | method | (self, context, instance) | public | `self._vmops.get_vnc_console(instance)` (src/nova/virt/vmwareapi/driver.py:L356) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L352–L356` |
| `VMwareVCDriver.get_mks_console` | method | (self, context, instance) | public | `self._vmops.get_mks_console(instance)` (src/nova/virt/vmwareapi/driver.py:L359) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L358–L359` |
| `VMwareVCDriver.get_console_output` | method | (self, context, instance) | public | `` (src/nova/virt/vmwareapi/driver.py:L364); `b""` (src/nova/virt/vmwareapi/driver.py:L370); `read_log_data` (src/nova/virt/vmwareapi/driver.py:L373) | 3/13 | `src/nova/virt/vmwareapi/driver.py:L361–L373` |
| `VMwareVCDriver._get_vcenter_uuid` | method | (self) | private | `about.instanceUuid` (src/nova/virt/vmwareapi/driver.py:L379) | 1/3 | `src/nova/virt/vmwareapi/driver.py:L375–L379` |
| `VMwareVCDriver._create_nodename` | method | (self, mo_id) | private | `'%s.%s' % (mo_id, self._vcenter_uuid)` (src/nova/virt/vmwareapi/driver.py:L390) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L381–L390` |
| `VMwareVCDriver._get_available_resources` | method | (self, host_stats) | private | `{'vcpus': host_stats['vcpus'], 'memory_mb': host_stats['host_memory_total'], 'local_gb': host_stats['disk_total'], 'vcpus_used': 0, 'memory_mb_used': host_stats['host_memory_total'] - host_stats['host` (src/nova/virt/vmwareapi/driver.py:L393) | 1/15 | `src/nova/virt/vmwareapi/driver.py:L392–L410` |
| `VMwareVCDriver.get_available_resource` | method | (self, nodename) | public | `stats_dict` (src/nova/virt/vmwareapi/driver.py:L423) | 1/4 | `src/nova/virt/vmwareapi/driver.py:L412–L423` |
| `VMwareVCDriver.get_available_nodes` | method | (self, refresh=False) | public | `[self._nodename]` (src/nova/virt/vmwareapi/driver.py:L430) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L425–L430` |
| `VMwareVCDriver.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 5/44 | `src/nova/virt/vmwareapi/driver.py:L432–L539` |
| `VMwareVCDriver.prepare_for_spawn` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L541–L543` |
| `VMwareVCDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 1/5 | `src/nova/virt/vmwareapi/driver.py:L545–L550` |
| `VMwareVCDriver.attach_volume` | method | (self, context, connection_info, instance, mountpoint, disk_bus=None, device_type=None, encryption=None) | public | `self._volumeops.attach_volume(connection_info, instance)` (src/nova/virt/vmwareapi/driver.py:L555) | 1/3 | `src/nova/virt/vmwareapi/driver.py:L552–L555` |
| `VMwareVCDriver.detach_volume` | method | (self, context, connection_info, instance, mountpoint, encryption=None) | public | `self._volumeops.detach_volume(connection_info, instance)` (src/nova/virt/vmwareapi/driver.py:L562) | 1/3 | `src/nova/virt/vmwareapi/driver.py:L557–L562` |
| `VMwareVCDriver.get_volume_connector` | method | (self, instance) | public | `self._volumeops.get_volume_connector(instance)` (src/nova/virt/vmwareapi/driver.py:L566) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L564–L566` |
| `VMwareVCDriver.get_host_ip_addr` | method | (self) | public | `CONF.vmware.host_ip` (src/nova/virt/vmwareapi/driver.py:L570) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L568–L570` |
| `VMwareVCDriver.snapshot` | method | (self, context, instance, image_id, update_task_state) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L572–L574` |
| `VMwareVCDriver.reboot` | method | (self, context, instance, network_info, reboot_type, block_device_info=None, bad_volumes_callback=None, accel_info=None, share_info=None) | public | not declared | 1/4 | `src/nova/virt/vmwareapi/driver.py:L576–L580` |
| `VMwareVCDriver._detach_instance_volumes` | method | (self, instance, block_device_info) | private | not declared | 5/21 | `src/nova/virt/vmwareapi/driver.py:L582–L608` |
| `VMwareVCDriver.destroy` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, destroy_secrets=True) | public | `` (src/nova/virt/vmwareapi/driver.py:L618); `` (src/nova/virt/vmwareapi/driver.py:L623) | 5/15 | `src/nova/virt/vmwareapi/driver.py:L610–L634` |
| `VMwareVCDriver.pause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L636–L638` |
| `VMwareVCDriver.unpause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L640–L642` |
| `VMwareVCDriver.suspend` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L644–L646` |
| `VMwareVCDriver.resume` | method | (self, context, instance, network_info, block_device_info=None, share_info=None) | public | not declared | 1/9 | `src/nova/virt/vmwareapi/driver.py:L648–L657` |
| `VMwareVCDriver.rescue` | method | (self, context, instance, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/driver.py:L659–L662` |
| `VMwareVCDriver.unrescue` | method | (self, context, instance) | public | not declared | 1/6 | `src/nova/virt/vmwareapi/driver.py:L664–L670` |
| `VMwareVCDriver.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L672–L674` |
| `VMwareVCDriver.power_on` | method | (self, context, instance, network_info, block_device_info=None, accel_info=None, share_info=None) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/driver.py:L676–L679` |
| `VMwareVCDriver.poll_rebooting_instances` | method | (self, timeout, instances) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L681–L683` |
| `VMwareVCDriver.get_info` | method | (self, instance, use_cache=True) | public | `self._vmops.get_info(instance)` (src/nova/virt/vmwareapi/driver.py:L687) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L685–L687` |
| `VMwareVCDriver.get_diagnostics` | method | (self, instance) | public | `self._vmops.get_diagnostics(instance)` (src/nova/virt/vmwareapi/driver.py:L691) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L689–L691` |
| `VMwareVCDriver.get_instance_diagnostics` | method | (self, instance) | public | `self._vmops.get_instance_diagnostics(instance)` (src/nova/virt/vmwareapi/driver.py:L695) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L693–L695` |
| `VMwareVCDriver.host_power_action` | method | (self, action) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L697–L702` |
| `VMwareVCDriver.host_maintenance_mode` | method | (self, host, mode) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L704–L709` |
| `VMwareVCDriver.set_host_enabled` | method | (self, enabled) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L711–L716` |
| `VMwareVCDriver.get_host_uptime` | method | (self) | public | not declared | 1/5 | `src/nova/virt/vmwareapi/driver.py:L718–L724` |
| `VMwareVCDriver.inject_network_info` | method | (self, instance, nw_info) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L726–L728` |
| `VMwareVCDriver.manage_image_cache` | method | (self, context, all_instances) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L730–L732` |
| `VMwareVCDriver.instance_exists` | method | (self, instance) | public | `self._vmops.instance_exists(instance)` (src/nova/virt/vmwareapi/driver.py:L736) | 1/2 | `src/nova/virt/vmwareapi/driver.py:L734–L736` |
| `VMwareVCDriver.attach_interface` | method | (self, context, instance, image_meta, vif) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L738–L740` |
| `VMwareVCDriver.detach_interface` | method | (self, context, instance, vif) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/driver.py:L742–L744` |

## Dependencies

- `import os` (src/nova/virt/vmwareapi/driver.py:L22)
- `import re` (src/nova/virt/vmwareapi/driver.py:L23)
- `import os_resource_classes as orc` (src/nova/virt/vmwareapi/driver.py:L25)
- `import os_traits as ot` (src/nova/virt/vmwareapi/driver.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/driver.py:L27)
- `oslo_utils`: imports `excutils` (src/nova/virt/vmwareapi/driver.py:L28)
- `oslo_utils`: imports `units` (src/nova/virt/vmwareapi/driver.py:L29)
- `oslo_utils`: imports `versionutils as v_utils` (src/nova/virt/vmwareapi/driver.py:L30)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/driver.py:L31)
- `oslo_vmware`: imports `pbm` (src/nova/virt/vmwareapi/driver.py:L32)
- `oslo_vmware`: imports `vim_util` (src/nova/virt/vmwareapi/driver.py:L33)
- `nova.compute`: imports `power_state` (src/nova/virt/vmwareapi/driver.py:L35)
- `nova.compute`: imports `task_states` (src/nova/virt/vmwareapi/driver.py:L36)
- `nova.compute`: imports `utils as compute_utils` (src/nova/virt/vmwareapi/driver.py:L37)
- `import nova.conf` (src/nova/virt/vmwareapi/driver.py:L38)
- `nova`: imports `context as nova_context` (src/nova/virt/vmwareapi/driver.py:L39)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/driver.py:L40)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/driver.py:L41)
- `nova`: imports `objects` (src/nova/virt/vmwareapi/driver.py:L42)
- `import nova.privsep.path` (src/nova/virt/vmwareapi/driver.py:L43)
- `nova.virt`: imports `driver` (src/nova/virt/vmwareapi/driver.py:L44)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/driver.py:L45)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/virt/vmwareapi/driver.py:L46)
- `nova.virt.vmwareapi`: imports `error_util` (src/nova/virt/vmwareapi/driver.py:L47)
- `nova.virt.vmwareapi`: imports `host` (src/nova/virt/vmwareapi/driver.py:L48)
- `nova.virt.vmwareapi`: imports `session` (src/nova/virt/vmwareapi/driver.py:L49)
- `nova.virt.vmwareapi`: imports `vim_util as nova_vim_util` (src/nova/virt/vmwareapi/driver.py:L50)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/driver.py:L51)
- `nova.virt.vmwareapi`: imports `vmops` (src/nova/virt/vmwareapi/driver.py:L52)
- `nova.virt.vmwareapi`: imports `volumeops` (src/nova/virt/vmwareapi/driver.py:L53)

## Side Effects

- **process-spawn**: import nova.privsep.path (src/nova/virt/vmwareapi/driver.py:L43)
- **file-io**: path = os.path.join(CONF.vmware.serial_log_dir, fname) (src/nova/virt/vmwareapi/driver.py:L366)
- **file-io**: if not os.path.exists(path): (src/nova/virt/vmwareapi/driver.py:L367)
- **process-spawn**: read_log_data, remaining = nova.privsep.path.last_bytes( (src/nova/virt/vmwareapi/driver.py:L371)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/driver.py:L55)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/driver.py:L57)
- **global-mutation**: TIME_BETWEEN_API_CALL_RETRIES = 1.0 (src/nova/virt/vmwareapi/driver.py:L59)
- **global-mutation**: MAX_CONSOLE_BYTES = 100 * units.Ki (src/nova/virt/vmwareapi/driver.py:L60)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/virt/vmwareapi/driver.py:L43)
- **privilege** (`privsep-entrypoint`): read_log_data, remaining = nova.privsep.path.last_bytes( (src/nova/virt/vmwareapi/driver.py:L371)
- **sink** (`db-write`): """Update a ProviderTree object with current resource provider, (src/nova/virt/vmwareapi/driver.py:L433)

