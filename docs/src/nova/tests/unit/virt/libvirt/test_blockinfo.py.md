# src/nova/tests/unit/virt/libvirt/test_blockinfo.py

## Overview

This file implements the `test_blockinfo` module, defining 2 classs, 1 function, 75 methods, 16 imports.

Lines: total 1671, code 1415, comment 80, blank 176

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtBlockInfoTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L36–L1473` |
| `LibvirtBlockInfoTest.setUp` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L38–L72` |
| `LibvirtBlockInfoTest._test_block_device_info` | method | (self, with_eph=True, with_swap=True, with_bdms=True) | private | `{'root_device_name': '/dev/vda', 'swap': swap if with_swap else {}, 'image': image, 'ephemerals': ephemerals if with_eph else [], 'block_device_mapping': block_device_mapping if with_bdms else []}` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L86) | 4/18 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L74–L91` |
| `LibvirtBlockInfoTest.test_volume_in_mapping` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L93–L109` |
| `LibvirtBlockInfoTest.test_volume_in_mapping._assert_volume_in_mapping` | function | (device_name, true_or_false) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L96–L100` |
| `LibvirtBlockInfoTest.test_find_disk_dev` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L111–L132` |
| `LibvirtBlockInfoTest.test_find_disk_dev_for_disk_bus_no_free_error` | method | (self, has_disk_dev_mock) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L135–L148` |
| `LibvirtBlockInfoTest.test_get_next_disk_dev` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L150–L166` |
| `LibvirtBlockInfoTest.test_get_next_disk_dev_boot_index` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L168–L175` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L177–L204` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple_rootdev` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L206–L227` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_rescue` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L229–L247` |
| `LibvirtBlockInfoTest._test_get_disk_mapping_rescue_with_config` | method | (self, expect_disk_config_rescue) | private | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L249–L276` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_rescue_with_config__x86_64` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L280–L283` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_rescue_with_config__aarch64` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L287–L290` |
| `LibvirtBlockInfoTest._test_get_disk_mapping_stable_rescue` | method | (self, rescue_props, expected, block_device_info, with_local=False) | private | not declared | 2/12 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L292–L311` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_virtio_disk` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L313–L326` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_ide_disk` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L328–L341` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_usb_disk` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L343–L356` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_ide_cdrom` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L360–L373` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_virtio_disk_with_local` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L375–L391` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_virtio_disk_with_eph` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L393–L416` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_virtio_disk_with_swap` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L418–L438` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_virtio_disk_with_bdm` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L440–L462` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_stable_rescue_virtio_disk_with_everything` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L464–L492` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_lxc` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L494–L513` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple_iso` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L515–L532` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple_swap` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L534–L558` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_volumes_swap` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L560–L596` |
| `LibvirtBlockInfoTest._test_get_disk_mapping_simple_configdrive` | method | (self, expect_bus, expect_dev) | private | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L598–L638` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple_configdrive__x86_64` | method | (self, mock_get_arch) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L643–L645` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple_configdrive__ppc64` | method | (self, mock_get_arch) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L650–L652` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_simple_configdrive__aarch64` | method | (self, mock_get_arch) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L657–L659` |
| `LibvirtBlockInfoTest._test_get_disk_mapping_cdrom_configdrive` | method | (self, expect_bus, expect_dev) | private | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L661–L697` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_cdrom_configdrive__x86_64` | method | (self, mock_get_arch) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L702–L704` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_cdrom_configdrive__ppc64` | method | (self, mock_get_arch) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L709–L711` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_cdrom_configdrive__aarch64` | method | (self, mock_get_arch) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L716–L718` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_disk_configdrive` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L720–L746` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_ephemeral` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L748–L783` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_custom_swap` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L785–L809` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_blockdev_root` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L811–L838` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_blockdev_root_on_spawn` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L840–L867` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_blockdev_eph` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L869–L894` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_blockdev_many` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L896–L933` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_complex` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L935–L975` |
| `LibvirtBlockInfoTest.test_get_disk_mapping_updates_original` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L977–L1024` |
| `LibvirtBlockInfoTest.test_get_disk_bus` | method | (self) | public | not declared | 5/54 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1026–L1081` |
| `LibvirtBlockInfoTest.test_get_disk_bus_with_osinfo` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1083–L1092` |
| `LibvirtBlockInfoTest.test_success_get_disk_bus_for_disk_dev` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1094–L1102` |
| `LibvirtBlockInfoTest.test_fail_get_disk_bus_for_disk_dev_unsupported_virt_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1104–L1109` |
| `LibvirtBlockInfoTest.test_fail_get_disk_bus_for_disk_dev` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1111–L1113` |
| `LibvirtBlockInfoTest.test_get_disk_bus_for_device_type_cdrom_with_q35_get_arch` | method | (self, mock_get_arch, mock_get_machine_type) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1117–L1127` |
| `LibvirtBlockInfoTest.test_get_disk_bus_for_device_type_cdrom_with_q35_image_meta` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1129–L1138` |
| `LibvirtBlockInfoTest.test_get_config_drive_type_default` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1140–L1142` |
| `LibvirtBlockInfoTest.test_get_config_drive_type_cdrom` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1144–L1147` |
| `LibvirtBlockInfoTest.test_get_config_drive_type_disk` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1149–L1152` |
| `LibvirtBlockInfoTest.test_get_info_from_bdm` | method | (self) | public | not declared | 2/82 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1154–L1242` |
| `LibvirtBlockInfoTest.test_get_device_name` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1244–L1262` |
| `LibvirtBlockInfoTest.test_get_root_info_no_bdm` | method | (self, mock_find_dev) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1266–L1273` |
| `LibvirtBlockInfoTest.test_get_root_info_no_bdm_empty_image_meta` | method | (self, mock_find_dev) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1277–L1288` |
| `LibvirtBlockInfoTest.test_get_root_info_bdm_with_iso_image` | method | (self, mock_get_info) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1291–L1300` |
| `LibvirtBlockInfoTest.test_get_root_info_bdm` | method | (self, mock_get_info) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1303–L1332` |
| `LibvirtBlockInfoTest.test_get_root_info_bdm_with_deepcopy` | method | (self, mock_get_info) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1335–L1371` |
| `LibvirtBlockInfoTest.test_get_boot_order_simple` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1373–L1385` |
| `LibvirtBlockInfoTest.test_get_boot_order_complex` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1387–L1407` |
| `LibvirtBlockInfoTest.test_get_boot_order_overlapping` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1409–L1425` |
| `LibvirtBlockInfoTest.test_get_boot_order_lun` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1427–L1439` |
| `LibvirtBlockInfoTest._get_rescue_image_meta` | method | (self, props_dict) | private | `objects.ImageMeta.from_dict(meta_dict)` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1444) | 1/4 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1441–L1444` |
| `LibvirtBlockInfoTest.test_get_rescue_device` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1446–L1459` |
| `LibvirtBlockInfoTest.test_get_rescue_bus` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1461–L1473` |
| `DefaultDeviceNamesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1476–L1671` |
| `DefaultDeviceNamesTestCase.setUp` | method | (self) | public | not declared | 2/91 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1477–L1572` |
| `DefaultDeviceNamesTestCase.tearDown` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1574–L1577` |
| `DefaultDeviceNamesTestCase._test_default_device_names` | method | (self, eph, swap, bdm, mock_get_arch) | private | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1582–L1591` |
| `DefaultDeviceNamesTestCase.test_only_block_device_mapping` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1593–L1608` |
| `DefaultDeviceNamesTestCase.test_with_ephemerals` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1610–L1624` |
| `DefaultDeviceNamesTestCase.test_with_swap` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1626–L1642` |
| `DefaultDeviceNamesTestCase.test_all_together` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L1644–L1671` |

## Dependencies

- `import copy` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L17)
- `import fixtures` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L20)
- `nova`: imports `block_device` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L25)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L27)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L28)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L29)
- `nova.tests.unit.virt`: imports `fakelibosinfo` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L30)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L31)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L32)
- `nova.virt.libvirt`: imports `blockinfo` (src/nova/tests/unit/virt/libvirt/test_blockinfo.py:L33)

