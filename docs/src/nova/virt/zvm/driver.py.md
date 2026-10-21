# src/nova/virt/zvm/driver.py

## Overview

This file implements the `driver` module, defining 1 class, 3 constants, 1 field, 26 methods, 3 staticmethods, 18 imports, 7 side effects, 1 security surface entry.

Lines: total 457, code 359, comment 26, blank 72

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/zvm/driver.py:L37–L37` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/zvm/driver.py:L38–L38` |
| `DEFAULT_EPH_DISK_FMT` | constant | — | exported | not declared | — | `src/nova/virt/zvm/driver.py:L41–L41` |
| `ZVMDriver` | class | — | exported | not declared | — | `src/nova/virt/zvm/driver.py:L44–L457` |
| `ZVMDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/zvm/driver.py:L46–L67` |
| `ZVMDriver.__init__` | method | (self, virtapi) | public | not declared | 1/6 | `src/nova/virt/zvm/driver.py:L69–L77` |
| `ZVMDriver._validate_options` | method | — | private | not declared | 4/17 | `src/nova/virt/zvm/driver.py:L80–L100` |
| `ZVMDriver.init_host` | method | (self, host) | public | not declared | 1/2 | `src/nova/virt/zvm/driver.py:L102–L103` |
| `ZVMDriver.list_instances` | method | (self) | public | `self._hypervisor.list_names()` (src/nova/virt/zvm/driver.py:L106) | 1/2 | `src/nova/virt/zvm/driver.py:L105–L106` |
| `ZVMDriver.instance_exists` | method | (self, instance) | public | `self._hypervisor.guest_exists(instance)` (src/nova/virt/zvm/driver.py:L111) | 1/2 | `src/nova/virt/zvm/driver.py:L108–L111` |
| `ZVMDriver.get_available_resource` | method | (self, nodename=None) | public | `res` (src/nova/virt/zvm/driver.py:L141) | 1/26 | `src/nova/virt/zvm/driver.py:L113–L141` |
| `ZVMDriver.get_available_nodes` | method | (self, refresh=False) | public | `self._hypervisor.get_available_nodes(refresh=refresh)` (src/nova/virt/zvm/driver.py:L144) | 1/2 | `src/nova/virt/zvm/driver.py:L143–L144` |
| `ZVMDriver.get_info` | method | (self, instance, use_cache=True) | public | `_guest.get_info()` (src/nova/virt/zvm/driver.py:L148) | 1/3 | `src/nova/virt/zvm/driver.py:L146–L148` |
| `ZVMDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 7/47 | `src/nova/virt/zvm/driver.py:L150–L210` |
| `ZVMDriver._get_image_info` | method | (self, context, image_meta_id, os_distro) | private | `res[0]['imagename']` (src/nova/virt/zvm/driver.py:L224) | 3/10 | `src/nova/virt/zvm/driver.py:L213–L224` |
| `ZVMDriver._set_disk_list` | method | (self, instance, image_name, block_device_info) | private | `disk_list, eph_list` (src/nova/virt/zvm/driver.py:L250) | 5/22 | `src/nova/virt/zvm/driver.py:L226–L250` |
| `ZVMDriver._setup_network` | method | (self, vm_name, os_distro, network_info, instance) | private | not declared | 3/14 | `src/nova/virt/zvm/driver.py:L252–L266` |
| `ZVMDriver._get_neutron_event` | method | (network_info) | private | `[('network-vif-plugged', vif['id']) for vif in network_info if vif.get('active') is False]` (src/nova/virt/zvm/driver.py:L271); `[]` (src/nova/virt/zvm/driver.py:L274) | 4/5 | `src/nova/virt/zvm/driver.py:L269–L274` |
| `ZVMDriver._neutron_failed_callback` | method | (self, event_name, instance) | private | not declared | 2/5 | `src/nova/virt/zvm/driver.py:L277–L281` |
| `ZVMDriver._wait_vif_plug_events` | method | (self, vm_name, os_distro, network_info, instance) | private | not declared | 4/18 | `src/nova/virt/zvm/driver.py:L283–L300` |
| `ZVMDriver._import_spawn_image` | method | (self, context, image_meta_id, image_os_version) | private | not declared | 2/10 | `src/nova/virt/zvm/driver.py:L302–L311` |
| `ZVMDriver.destroy` | method | (self, context, instance, network_info=None, block_device_info=None, destroy_disks=False) | public | not declared | 4/14 | `src/nova/virt/zvm/driver.py:L313–L326` |
| `ZVMDriver.get_host_uptime` | method | (self) | public | `self._hypervisor.get_host_uptime()` (src/nova/virt/zvm/driver.py:L329) | 1/2 | `src/nova/virt/zvm/driver.py:L328–L329` |
| `ZVMDriver.snapshot` | method | (self, context, instance, image_id, update_task_state) | public | not declared | 5/52 | `src/nova/virt/zvm/driver.py:L331–L393` |
| `ZVMDriver.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | not declared | 3/6 | `src/nova/virt/zvm/driver.py:L395–L400` |
| `ZVMDriver.power_on` | method | (self, context, instance, network_info, block_device_info=None, accel_info=None, share_info=None) | public | not declared | 1/3 | `src/nova/virt/zvm/driver.py:L402–L404` |
| `ZVMDriver.pause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/zvm/driver.py:L406–L407` |
| `ZVMDriver.unpause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/zvm/driver.py:L409–L410` |
| `ZVMDriver.reboot` | method | (self, context, instance, network_info, reboot_type, block_device_info=None, bad_volumes_callback=None, accel_info=None, share_info=None) | public | not declared | 2/7 | `src/nova/virt/zvm/driver.py:L412–L419` |
| `ZVMDriver.get_console_output` | method | (self, context, instance) | public | `self._hypervisor.guest_get_console_output(instance.name)` (src/nova/virt/zvm/driver.py:L422) | 1/2 | `src/nova/virt/zvm/driver.py:L421–L422` |
| `ZVMDriver.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 1/31 | `src/nova/virt/zvm/driver.py:L424–L457` |
| `ZVMDriver._validate_options` | staticmethod | — | private | not declared | — | `src/nova/virt/zvm/driver.py:L79–L100` |
| `ZVMDriver._get_neutron_event` | staticmethod | — | private | not declared | — | `src/nova/virt/zvm/driver.py:L268–L274` |
| `ZVMDriver._neutron_failed_callback` | staticmethod | — | private | not declared | — | `src/nova/virt/zvm/driver.py:L276–L281` |

## Dependencies

- `import os` (src/nova/virt/zvm/driver.py:L15)
- `import time` (src/nova/virt/zvm/driver.py:L16)
- `import os_resource_classes as orc` (src/nova/virt/zvm/driver.py:L18)
- `oslo_concurrency`: imports `lockutils` (src/nova/virt/zvm/driver.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/zvm/driver.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/zvm/driver.py:L21)
- `oslo_utils`: imports `excutils` (src/nova/virt/zvm/driver.py:L22)
- `nova.compute`: imports `task_states` (src/nova/virt/zvm/driver.py:L24)
- `nova`: imports `conf` (src/nova/virt/zvm/driver.py:L25)
- `nova`: imports `exception` (src/nova/virt/zvm/driver.py:L26)
- `nova.i18n`: imports `_` (src/nova/virt/zvm/driver.py:L27)
- `nova.image`: imports `glance` (src/nova/virt/zvm/driver.py:L28)
- `nova.objects`: imports `fields as obj_fields` (src/nova/virt/zvm/driver.py:L29)
- `nova.virt`: imports `driver` (src/nova/virt/zvm/driver.py:L30)
- `nova.virt`: imports `images` (src/nova/virt/zvm/driver.py:L31)
- `nova.virt.zvm`: imports `guest` (src/nova/virt/zvm/driver.py:L32)
- `nova.virt.zvm`: imports `hypervisor` (src/nova/virt/zvm/driver.py:L33)
- `nova.virt.zvm`: imports `utils as zvmutils` (src/nova/virt/zvm/driver.py:L34)

## Side Effects

- **file-io**: image_path = os.path.join(os.path.normpath(CONF.zvm.image_tmp_path), (src/nova/virt/zvm/driver.py:L305)
- **file-io**: if not os.path.exists(image_path): (src/nova/virt/zvm/driver.py:L307)
- **file-io**: image_path = os.path.join(os.path.normpath( (src/nova/virt/zvm/driver.py:L349)
- **file-io**: with open(image_path, 'r') as image_file: (src/nova/virt/zvm/driver.py:L380)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/zvm/driver.py:L37)
- **global-mutation**: CONF = conf.CONF (src/nova/virt/zvm/driver.py:L38)
- **global-mutation**: DEFAULT_EPH_DISK_FMT = 'ext3' (src/nova/virt/zvm/driver.py:L41)

## Security Surface

- **sink** (`db-write`): image_service.update(context, (src/nova/virt/zvm/driver.py:L381)

