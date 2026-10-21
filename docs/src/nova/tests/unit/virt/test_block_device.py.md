# src/nova/tests/unit/virt/test_block_device.py

## Overview

This file implements the `test_block_device` module, defining 8 classs, 2 constants, 19 fields, 2 functions, 78 methods, 19 imports, 2 side effects.

Lines: total 1727, code 1401, comment 93, blank 233

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ATTACHMENT_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L37–L37` |
| `TestDriverBlockDevice` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L41–L1635` |
| `TestDriverBlockDevice.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L44–L44` |
| `TestDriverBlockDevice.attachment_id` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L47–L47` |
| `TestDriverBlockDevice.driver_classes` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L49–L57` |
| `TestDriverBlockDevice.swap_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L59–L72` |
| `TestDriverBlockDevice.swap_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L74–L81` |
| `TestDriverBlockDevice.ephemeral_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L83–L97` |
| `TestDriverBlockDevice.ephemeral_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L99–L108` |
| `TestDriverBlockDevice.volume_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L110–L122` |
| `TestDriverBlockDevice.volume_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L124–L132` |
| `TestDriverBlockDevice.volume_bdm_dict_without_conn_info` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L134–L146` |
| `TestDriverBlockDevice.volume_driver_bdm_without_conn_info` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L148–L157` |
| `TestDriverBlockDevice.volsnapshot_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L159–L172` |
| `TestDriverBlockDevice.volsnapshot_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L174–L182` |
| `TestDriverBlockDevice.volimage_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L184–L197` |
| `TestDriverBlockDevice.volimage_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L199–L207` |
| `TestDriverBlockDevice.volblank_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L209–L221` |
| `TestDriverBlockDevice.volblank_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L223–L231` |
| `TestDriverBlockDevice.image_bdm_dict` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L233–L247` |
| `TestDriverBlockDevice.image_driver_bdm` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L249–L260` |
| `TestDriverBlockDevice.setUp` | method | (self) | public | not declared | 3/26 | `src/nova/tests/unit/virt/test_block_device.py:L262–L292` |
| `TestDriverBlockDevice.stub_volume_create` | method | (self, volume) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_block_device.py:L294–L301` |
| `TestDriverBlockDevice.test_driver_detach_passes_failed` | method | (self, enc, log) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_block_device.py:L305–L321` |
| `TestDriverBlockDevice.test_driver_detach_volume_api_raises_exception` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/test_block_device.py:L323–L345` |
| `TestDriverBlockDevice.test_no_device_raises` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/test_block_device.py:L347–L352` |
| `TestDriverBlockDevice._test_driver_device` | method | (self, name) | private | not declared | 12/49 | `src/nova/tests/unit/virt/test_block_device.py:L354–L456` |
| `TestDriverBlockDevice._test_driver_device.assign_fake_changed_value` | function | (test_bdm, field, alias=None) | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L404–L422` |
| `TestDriverBlockDevice._test_driver_device.check_save` | function | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L449–L450` |
| `TestDriverBlockDevice._test_driver_default_size` | method | (self, name) | private | not declared | 2/11 | `src/nova/tests/unit/virt/test_block_device.py:L458–L471` |
| `TestDriverBlockDevice.test_driver_swap_block_device` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L473–L474` |
| `TestDriverBlockDevice.test_driver_swap_default_size` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L476–L477` |
| `TestDriverBlockDevice.test_driver_image_block_device` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L479–L480` |
| `TestDriverBlockDevice.test_driver_image_default_size` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L482–L483` |
| `TestDriverBlockDevice.test_driver_image_block_device_destination_not_local` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L485–L491` |
| `TestDriverBlockDevice.test_driver_ephemeral_block_device` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L493–L494` |
| `TestDriverBlockDevice.test_driver_ephemeral_default_size` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L496–L497` |
| `TestDriverBlockDevice.test_driver_volume_block_device` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_block_device.py:L499–L509` |
| `TestDriverBlockDevice.test_driver_snapshot_block_device` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_block_device.py:L511–L520` |
| `TestDriverBlockDevice.test_driver_volume_image_block_device` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_block_device.py:L522–L530` |
| `TestDriverBlockDevice.test_driver_volume_image_block_device_destination_local` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L532–L538` |
| `TestDriverBlockDevice.test_driver_blank_block_device` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_block_device.py:L540–L548` |
| `TestDriverBlockDevice._test_call_wait_func` | method | (self, delete_on_termination, delete_fail=False) | private | not declared | 3/18 | `src/nova/tests/unit/virt/test_block_device.py:L550–L569` |
| `TestDriverBlockDevice.test_call_wait_delete_volume` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L571–L572` |
| `TestDriverBlockDevice.test_call_wait_delete_volume_fail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L574–L575` |
| `TestDriverBlockDevice.test_call_wait_no_delete_volume` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L577–L578` |
| `TestDriverBlockDevice.test_volume_delete_attachment` | method | (self, include_shared_targets=False, delete_attachment_raises=None) | public | not declared | 3/34 | `src/nova/tests/unit/virt/test_block_device.py:L580–L619` |
| `TestDriverBlockDevice.test_volume_delete_attachment_with_shared_targets` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L621–L622` |
| `TestDriverBlockDevice.test_volume_delete_attachment_raises_attachment_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_block_device.py:L624–L627` |
| `TestDriverBlockDevice._test_volume_attach` | method | (self, driver_bdm, bdm_dict, fake_volume, mock_save, mock_get_encry, fail_check_av_zone=False, driver_attach=False, fail_driver_attach=False, volume_attach=True, fail_volume_attach=False, access_mode='rw', availability_zone=None, multiattach=False, driver_multi_attach=False, fail_with_virt_driver=False, include_shared_targets=False, wait_func=None) | private | `instance.uuid` (src/nova/tests/unit/virt/test_block_device.py:L832) | 33/170 | `src/nova/tests/unit/virt/test_block_device.py:L631–L832` |
| `TestDriverBlockDevice.test_volume_attach` | method | (self, include_shared_targets=False) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L834–L841` |
| `TestDriverBlockDevice.test_volume_attach_with_shared_targets` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_block_device.py:L843–L844` |
| `TestDriverBlockDevice.test_volume_attach_ro` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L846–L852` |
| `TestDriverBlockDevice.test_volume_attach_update_size` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_block_device.py:L854–L862` |
| `TestDriverBlockDevice.test_volume_attach_check_av_zone_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L864–L870` |
| `TestDriverBlockDevice.test_volume_no_volume_attach` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L872–L879` |
| `TestDriverBlockDevice.test_volume_attach_no_check_driver_attach` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L881–L888` |
| `TestDriverBlockDevice.test_volume_attach_driver_attach_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L890–L896` |
| `TestDriverBlockDevice.test_volume_attach_volume_attach_fails` | method | (self, mock_get_encryption, mock_volume_api, mock_bdm_save) | public | not declared | 3/44 | `src/nova/tests/unit/virt/test_block_device.py:L902–L952` |
| `TestDriverBlockDevice.test_volume_attach_no_driver_attach_volume_attach_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L954–L961` |
| `TestDriverBlockDevice.test_refresh_connection` | method | (self, mock_save) | public | not declared | 3/28 | `src/nova/tests/unit/virt/test_block_device.py:L964–L994` |
| `TestDriverBlockDevice.test_snapshot_attach_no_volume` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/test_block_device.py:L996–L1027` |
| `TestDriverBlockDevice.test_snapshot_attach_no_volume_cinder_cross_az_attach_false` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_block_device.py:L1029–L1058` |
| `TestDriverBlockDevice.test_snapshot_attach_fail_volume` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/test_block_device.py:L1060–L1095` |
| `TestDriverBlockDevice.test_snapshot_attach_volume` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_block_device.py:L1097–L1113` |
| `TestDriverBlockDevice.test_snapshot_attach_no_volume_and_no_volume_type` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_block_device.py:L1115–L1140` |
| `TestDriverBlockDevice.test_image_attach_no_volume` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_block_device.py:L1142–L1168` |
| `TestDriverBlockDevice.test_image_attach_no_volume_cinder_cross_az_attach_false` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/test_block_device.py:L1170–L1195` |
| `TestDriverBlockDevice.test_image_attach_fail_volume` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/test_block_device.py:L1197–L1228` |
| `TestDriverBlockDevice.test_image_attach_volume` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_block_device.py:L1230–L1246` |
| `TestDriverBlockDevice.test_blank_attach_fail_volume` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/test_block_device.py:L1248–L1277` |
| `TestDriverBlockDevice.test_blank_attach_volume` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/test_block_device.py:L1279–L1309` |
| `TestDriverBlockDevice.test_blank_attach_volume_cinder_cross_az_attach_false` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_block_device.py:L1311–L1339` |
| `TestDriverBlockDevice.test_convert_block_devices` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L1341–L1346` |
| `TestDriverBlockDevice.test_convert_all_volumes` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_block_device.py:L1348–L1358` |
| `TestDriverBlockDevice.test_convert_volume` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L1360–L1366` |
| `TestDriverBlockDevice.test_convert_volume_without_connection_info` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_block_device.py:L1368–L1371` |
| `TestDriverBlockDevice.test_get_swap` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L1373–L1379` |
| `TestDriverBlockDevice.test_is_implemented` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/virt/test_block_device.py:L1381–L1384` |
| `TestDriverBlockDevice.test_is_block_device_mapping` | method | (self) | public | not declared | 3/14 | `src/nova/tests/unit/virt/test_block_device.py:L1386–L1401` |
| `TestDriverBlockDevice.test_get_volume_create_az_cinder_cross_az_attach_true` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_block_device.py:L1403–L1410` |
| `TestDriverBlockDevice.test_refresh_conn_infos` | method | (self) | public | not declared | 2/28 | `src/nova/tests/unit/virt/test_block_device.py:L1412–L1443` |
| `TestDriverBlockDevice.test_proxy_as_attr` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_block_device.py:L1445–L1473` |
| `TestDriverBlockDevice.test_proxy_as_attr.A` | class | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1446–L1450` |
| `TestDriverBlockDevice.test_proxy_as_attr.A._transform` | method | (self) | private | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1449–L1450` |
| `TestDriverBlockDevice.test_proxy_as_attr.B` | class | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1452–L1453` |
| `TestDriverBlockDevice.test_proxy_as_attr.C` | class | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1455–L1456` |
| `TestDriverBlockDevice.test_proxy_as_attr.D` | class | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1458–L1459` |
| `TestDriverBlockDevice.test_proxy_as_attr.E` | class | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1461–L1462` |
| `TestDriverBlockDevice._test_boot_from_volume_source_blank_volume_type` | method | (self, bdm, expected_volume_type) | private | not declared | 1/22 | `src/nova/tests/unit/virt/test_block_device.py:L1475–L1498` |
| `TestDriverBlockDevice.test_boot_from_volume_source_blank_with_unset_volume_type` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L1500–L1509` |
| `TestDriverBlockDevice.test_boot_from_volume_source_blank_with_volume_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L1511–L1517` |
| `TestDriverBlockDevice._test_boot_from_volume_source_image_volume_type` | method | (self, bdm, expected_volume_type) | private | not declared | 1/23 | `src/nova/tests/unit/virt/test_block_device.py:L1519–L1544` |
| `TestDriverBlockDevice.test_boot_from_volume_source_image_with_unset_volume_type` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_block_device.py:L1546–L1555` |
| `TestDriverBlockDevice.test_boot_from_volume_source_image_with_volume_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_block_device.py:L1557–L1564` |
| `TestDriverBlockDevice._test_boot_from_volume_source_snapshot_volume_type` | method | (self, bdm, expected_volume_type) | private | not declared | 1/24 | `src/nova/tests/unit/virt/test_block_device.py:L1566–L1594` |
| `TestDriverBlockDevice.test_boot_from_volume_source_snapshot_with_unset_volume_type` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_block_device.py:L1596–L1606` |
| `TestDriverBlockDevice.test_boot_from_volume_source_snapshot_with_volume_type` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_block_device.py:L1608–L1617` |
| `TestDriverBlockDevice.test__get_volume` | method | (self, microversions) | public | not declared | 3/13 | `src/nova/tests/unit/virt/test_block_device.py:L1620–L1635` |
| `TestDriverBlockDeviceNewFlow` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1638–L1702` |
| `TestDriverBlockDeviceNewFlow.attachment_id` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1642–L1642` |
| `TestDriverBlockDeviceNewFlow.test_volume_attach_multiattach` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_block_device.py:L1644–L1655` |
| `TestDriverBlockDeviceNewFlow.test_volume_attach_multiattach_no_virt_driver_support` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_block_device.py:L1657–L1669` |
| `TestDriverBlockDeviceNewFlow.test_refresh_connection_preserve_multiattach` | method | (self, mock_bdm_save) | public | not declared | 1/26 | `src/nova/tests/unit/virt/test_block_device.py:L1672–L1702` |
| `TestGetVolumeId` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_block_device.py:L1705–L1727` |
| `TestGetVolumeId.test_get_volume_id_none_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_block_device.py:L1707–L1710` |
| `TestGetVolumeId.test_get_volume_id_found_volume_id_no_serial` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_block_device.py:L1712–L1715` |
| `TestGetVolumeId.test_get_volume_id_found_no_volume_id_serial` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_block_device.py:L1717–L1720` |
| `TestGetVolumeId.test_get_volume_id_found_both` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_block_device.py:L1722–L1727` |

## Dependencies

- `cinderclient`: imports `exceptions as cinder_exception` (src/nova/tests/unit/virt/test_block_device.py:L15)
- `os_brick`: imports `encryptors` (src/nova/tests/unit/virt/test_block_device.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_block_device.py:L17)
- `import ddt` (src/nova/tests/unit/virt/test_block_device.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/virt/test_block_device.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/test_block_device.py:L21)
- `nova`: imports `block_device` (src/nova/tests/unit/virt/test_block_device.py:L23)
- `nova`: imports `context` (src/nova/tests/unit/virt/test_block_device.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/virt/test_block_device.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/virt/test_block_device.py:L26)
- `nova.objects`: imports `fields` (src/nova/tests/unit/virt/test_block_device.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_block_device.py:L28)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/virt/test_block_device.py:L29)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/test_block_device.py:L30)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/virt/test_block_device.py:L31)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/tests/unit/virt/test_block_device.py:L32)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/test_block_device.py:L33)
- `nova.virt`: imports `fake as fake_virt` (src/nova/tests/unit/virt/test_block_device.py:L34)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/virt/test_block_device.py:L35)

## Side Effects

- **global-mutation**: ATTACHMENT_ID = uuids.attachment_id (src/nova/tests/unit/virt/test_block_device.py:L37)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/virt/test_block_device.py:L44)

