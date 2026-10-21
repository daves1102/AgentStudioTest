# src/nova/virt/libvirt/blockinfo.py

## Overview

This file implements the `blockinfo` module, defining 4 constants, 25 functions, 14 imports, 4 side effects, 3 security surface entries.

Lines: total 783, code 573, comment 46, blank 164

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/blockinfo.py:L90–L90` |
| `BOOT_DEV_FOR_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/blockinfo.py:L92–L93` |
| `SUPPORTED_DEVICE_BUSES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/blockinfo.py:L96–L105` |
| `SUPPORTED_DEVICE_TYPES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/blockinfo.py:L106–L106` |
| `has_disk_dev` | function | (mapping, disk_dev) | exported | `True` (src/nova/virt/libvirt/blockinfo.py:L122); `False` (src/nova/virt/libvirt/blockinfo.py:L123) | 3/6 | `src/nova/virt/libvirt/blockinfo.py:L109–L123` |
| `get_dev_prefix_for_disk_bus` | function | (disk_bus) | exported | `CONF.libvirt.disk_prefix` (src/nova/virt/libvirt/blockinfo.py:L139); `"hd"` (src/nova/virt/libvirt/blockinfo.py:L141); `"vd"` (src/nova/virt/libvirt/blockinfo.py:L143); `"sd"` (src/nova/virt/libvirt/blockinfo.py:L145); `"sd"` (src/nova/virt/libvirt/blockinfo.py:L147); `"fd"` (src/nova/virt/libvirt/blockinfo.py:L149); `None` (src/nova/virt/libvirt/blockinfo.py:L151); `"sd"` (src/nova/virt/libvirt/blockinfo.py:L153) | 9/21 | `src/nova/virt/libvirt/blockinfo.py:L126–L157` |
| `get_dev_count_for_disk_bus` | function | (disk_bus) | exported | `4` (src/nova/virt/libvirt/blockinfo.py:L171); `None` (src/nova/virt/libvirt/blockinfo.py:L174); `CONF.compute.max_disk_devices_to_attach` (src/nova/virt/libvirt/blockinfo.py:L175) | 3/7 | `src/nova/virt/libvirt/blockinfo.py:L160–L175` |
| `find_disk_dev_for_disk_bus` | function | (mapping, bus, assigned_devices=None) | exported | `None` (src/nova/virt/libvirt/blockinfo.py:L193); `disk_dev` (src/nova/virt/libvirt/blockinfo.py:L207) | 8/18 | `src/nova/virt/libvirt/blockinfo.py:L178–L210` |
| `is_disk_bus_valid_for_virt` | function | (virt_type, disk_bus) | exported | `disk_bus in SUPPORTED_DEVICE_BUSES[virt_type]` (src/nova/virt/libvirt/blockinfo.py:L216) | 2/4 | `src/nova/virt/libvirt/blockinfo.py:L213–L216` |
| `get_disk_bus_for_device_type` | function | (instance, virt_type, image_meta, device_type="disk") | exported | `disk_bus` (src/nova/virt/libvirt/blockinfo.py:L245); `"scsi"` (src/nova/virt/libvirt/blockinfo.py:L259); `"sata"` (src/nova/virt/libvirt/blockinfo.py:L267); `"ide"` (src/nova/virt/libvirt/blockinfo.py:L269); `"virtio"` (src/nova/virt/libvirt/blockinfo.py:L271); `"fdc"` (src/nova/virt/libvirt/blockinfo.py:L273); `"lxc"` (src/nova/virt/libvirt/blockinfo.py:L275); `"ide"` (src/nova/virt/libvirt/blockinfo.py:L278); `"scsi"` (src/nova/virt/libvirt/blockinfo.py:L280); `None` (src/nova/virt/libvirt/blockinfo.py:L285) | 15/45 | `src/nova/virt/libvirt/blockinfo.py:L219–L285` |
| `get_disk_bus_for_disk_dev` | function | (virt_type, disk_dev) | exported | `"ide"` (src/nova/virt/libvirt/blockinfo.py:L299); `"scsi"` (src/nova/virt/libvirt/blockinfo.py:L304); `"virtio"` (src/nova/virt/libvirt/blockinfo.py:L306); `"fdc"` (src/nova/virt/libvirt/blockinfo.py:L308) | 5/12 | `src/nova/virt/libvirt/blockinfo.py:L288–L311` |
| `get_next_disk_info` | function | (mapping, disk_bus, device_type='disk', boot_index=None, assigned_devices=None) | exported | `info` (src/nova/virt/libvirt/blockinfo.py:L337) | 3/13 | `src/nova/virt/libvirt/blockinfo.py:L314–L337` |
| `get_eph_disk` | function | (index) | exported | `'disk.eph' + str(index)` (src/nova/virt/libvirt/blockinfo.py:L341) | 1/2 | `src/nova/virt/libvirt/blockinfo.py:L340–L341` |
| `get_config_drive_type` | function | — | exported | `config_drive_type` (src/nova/virt/libvirt/blockinfo.py:L361) | 3/9 | `src/nova/virt/libvirt/blockinfo.py:L344–L361` |
| `get_info_from_bdm` | function | (instance, virt_type, image_meta, bdm, mapping=None, disk_bus=None, dev_type=None, allowed_types=None, assigned_devices=None) | exported | `bdm_info` (src/nova/virt/libvirt/blockinfo.py:L416) | 16/42 | `src/nova/virt/libvirt/blockinfo.py:L364–L416` |
| `get_device_name` | function | (bdm) | exported | `bdm.device_name` (src/nova/virt/libvirt/blockinfo.py:L422); `bdm.get('device_name') or bdm.get('mount_device')` (src/nova/virt/libvirt/blockinfo.py:L424) | 3/5 | `src/nova/virt/libvirt/blockinfo.py:L419–L424` |
| `get_root_info` | function | (instance, virt_type, image_meta, root_bdm, disk_bus, cdrom_bus, root_device_name=None) | exported | `{'bus': root_device_bus, 'type': root_device_type, 'dev': block_device.strip_dev(root_device_name), 'boot_index': '1'}` (src/nova/virt/libvirt/blockinfo.py:L444); `get_info_from_bdm( instance, virt_type, image_meta, root_bdm_copy, {}, disk_bus, )` (src/nova/virt/libvirt/blockinfo.py:L458) | 8/25 | `src/nova/virt/libvirt/blockinfo.py:L427–L460` |
| `default_device_names` | function | (virt_type, context, instance, block_device_info, image_meta) | exported | not declared | 3/11 | `src/nova/virt/libvirt/blockinfo.py:L463–L474` |
| `get_default_ephemeral_info` | function | (instance, disk_bus, block_device_info, mapping) | exported | `None` (src/nova/virt/libvirt/blockinfo.py:L480); `None` (src/nova/virt/libvirt/blockinfo.py:L484); `info` (src/nova/virt/libvirt/blockinfo.py:L485) | 5/9 | `src/nova/virt/libvirt/blockinfo.py:L477–L485` |
| `update_bdm` | function | (bdm, info) | exported | not declared | 3/9 | `src/nova/virt/libvirt/blockinfo.py:L488–L497` |
| `get_disk_mapping` | function | (virt_type, instance, disk_bus, cdrom_bus, image_meta, block_device_info=None, rescue=False, rescue_image_meta=None) | exported | `_get_rescue_disk_mapping( virt_type, instance, disk_bus, image_meta)` (src/nova/virt/libvirt/blockinfo.py:L514); `_get_stable_device_rescue_mapping( virt_type, instance, disk_bus, cdrom_bus, image_meta, block_device_info, rescue_image_meta)` (src/nova/virt/libvirt/blockinfo.py:L520); `_get_disk_mapping( virt_type, instance, disk_bus, cdrom_bus, image_meta, block_device_info)` (src/nova/virt/libvirt/blockinfo.py:L525) | 5/13 | `src/nova/virt/libvirt/blockinfo.py:L500–L527` |
| `_get_rescue_disk_mapping` | function | (virt_type, instance, disk_bus, image_meta) | unexported | `mapping` (src/nova/virt/libvirt/blockinfo.py:L564) | 2/20 | `src/nova/virt/libvirt/blockinfo.py:L530–L564` |
| `_get_disk_mapping` | function | (virt_type, instance, disk_bus, cdrom_bus, image_meta, block_device_info) | unexported | `mapping` (src/nova/virt/libvirt/blockinfo.py:L670) | 16/75 | `src/nova/virt/libvirt/blockinfo.py:L567–L670` |
| `_get_stable_device_rescue_mapping` | function | (virt_type, instance, disk_bus, cdrom_bus, image_meta, block_device_info, rescue_image_meta) | unexported | `mapping` (src/nova/virt/libvirt/blockinfo.py:L699) | 1/12 | `src/nova/virt/libvirt/blockinfo.py:L673–L699` |
| `get_disk_info` | function | (virt_type, instance, image_meta, block_device_info=None, rescue=False, rescue_image_meta=None) | exported | `{'disk_bus': disk_bus, 'cdrom_bus': cdrom_bus, 'mapping': mapping}` (src/nova/virt/libvirt/blockinfo.py:L728) | 1/15 | `src/nova/virt/libvirt/blockinfo.py:L702–L730` |
| `get_boot_order` | function | (disk_info) | exported | `uniq(boot_devs_dup)` (src/nova/virt/libvirt/blockinfo.py:L744) | 5/8 | `src/nova/virt/libvirt/blockinfo.py:L733–L744` |
| `get_boot_order.uniq` | function | (lst) | public | `[el for el in lst if el not in s and not s.add(el)]` (src/nova/virt/libvirt/blockinfo.py:L742) | — | `src/nova/virt/libvirt/blockinfo.py:L740–L742` |
| `get_rescue_device` | function | (rescue_image_meta) | exported | `rescue_device` (src/nova/virt/libvirt/blockinfo.py:L760) | 2/6 | `src/nova/virt/libvirt/blockinfo.py:L747–L760` |
| `get_rescue_bus` | function | (instance, virt_type, rescue_image_meta, rescue_device) | exported | `rescue_bus` (src/nova/virt/libvirt/blockinfo.py:L778); `get_disk_bus_for_device_type(instance, virt_type, rescue_image_meta, device_type=rescue_device)` (src/nova/virt/libvirt/blockinfo.py:L782) | 3/10 | `src/nova/virt/libvirt/blockinfo.py:L763–L783` |

## Dependencies

- `import copy` (src/nova/virt/libvirt/blockinfo.py:L72)
- `import itertools` (src/nova/virt/libvirt/blockinfo.py:L73)
- `import operator` (src/nova/virt/libvirt/blockinfo.py:L74)
- `oslo_config`: imports `cfg` (src/nova/virt/libvirt/blockinfo.py:L76)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/libvirt/blockinfo.py:L77)
- `nova`: imports `block_device` (src/nova/virt/libvirt/blockinfo.py:L80)
- `nova`: imports `exception` (src/nova/virt/libvirt/blockinfo.py:L81)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/blockinfo.py:L82)
- `nova.objects`: imports `base as obj_base` (src/nova/virt/libvirt/blockinfo.py:L83)
- `nova.objects`: imports `fields as obj_fields` (src/nova/virt/libvirt/blockinfo.py:L84)
- `nova.virt`: imports `configdrive` (src/nova/virt/libvirt/blockinfo.py:L85)
- `nova.virt`: imports `driver` (src/nova/virt/libvirt/blockinfo.py:L86)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/virt/libvirt/blockinfo.py:L87)
- `nova.virt`: imports `osinfo` (src/nova/virt/libvirt/blockinfo.py:L88)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/virt/libvirt/blockinfo.py:L90)
- **global-mutation**: BOOT_DEV_FOR_TYPE = {'disk': 'hd', 'cdrom': 'cdrom', 'floppy': 'fd', (src/nova/virt/libvirt/blockinfo.py:L92)
- **global-mutation**: SUPPORTED_DEVICE_BUSES = { (src/nova/virt/libvirt/blockinfo.py:L96)
- **global-mutation**: SUPPORTED_DEVICE_TYPES = ('disk', 'cdrom', 'floppy', 'lun') (src/nova/virt/libvirt/blockinfo.py:L106)

## Security Surface

- **sink** (`db-write`): padded_mapping.update(mapping) (src/nova/virt/libvirt/blockinfo.py:L387)
- **sink** (`db-write`): bdm_info.update({'format': bdm_format}) (src/nova/virt/libvirt/blockinfo.py:L399)
- **sink** (`db-write`): bdm.update(dict(zip((device_name_field, (src/nova/virt/libvirt/blockinfo.py:L493)

