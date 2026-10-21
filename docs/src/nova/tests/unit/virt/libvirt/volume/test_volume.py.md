# src/nova/tests/unit/virt/libvirt/volume/test_volume.py

## Overview

This file implements the `test_volume` module, defining 5 classs, 1 constant, 27 methods, 10 imports, 1 side effect, 1 security surface entry.

Lines: total 446, code 363, comment 27, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SECRET_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L29–L29` |
| `FakeSecret` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L32–L52` |
| `FakeSecret.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L34–L35` |
| `FakeSecret.getUUIDString` | method | (self) | public | `self.uuid` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L38) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L37–L38` |
| `FakeSecret.UUIDString` | method | (self) | public | `self.uuid` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L41) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L40–L41` |
| `FakeSecret.setValue` | method | (self, value) | public | `0` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L45) | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L43–L45` |
| `FakeSecret.getValue` | method | (self, value) | public | `self.value` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L48) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L47–L48` |
| `FakeSecret.undefine` | method | (self) | public | `0` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L52) | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L50–L52` |
| `LibvirtBaseVolumeDriverSubclassSignatureTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L55–L63` |
| `LibvirtBaseVolumeDriverSubclassSignatureTestCase._get_base_class` | method | (self) | private | `volume.LibvirtBaseVolumeDriver` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L63) | 1/4 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L57–L63` |
| `LibvirtVolumeBaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L66–L95` |
| `LibvirtVolumeBaseTestCase.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L69–L91` |
| `LibvirtVolumeBaseTestCase._assertFileTypeEquals` | method | (self, tree, file_path) | private | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L93–L95` |
| `LibvirtISCSIVolumeBaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L98–L135` |
| `LibvirtISCSIVolumeBaseTestCase.iscsi_connection` | method | (self, volume, location, iqn, auth=False, transport=None) | public | `ret` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L135) | 3/32 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L101–L135` |
| `LibvirtVolumeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L139–L446` |
| `LibvirtVolumeTestCase._assertDiskInfoEquals` | method | (self, tree, disk_info) | private | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L141–L144` |
| `LibvirtVolumeTestCase._test_libvirt_volume_driver_disk_info` | method | (self) | private | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L146–L157` |
| `LibvirtVolumeTestCase.test_libvirt_volume_disk_info_type` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L159–L161` |
| `LibvirtVolumeTestCase.test_libvirt_volume_disk_info_dev` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L163–L165` |
| `LibvirtVolumeTestCase.test_libvirt_volume_disk_info_bus` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L167–L169` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_serial` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L171–L185` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_blockio` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L187–L207` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_blockio_not_for_lun` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L209–L237` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_iotune` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L239–L276` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_readonly` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L278–L306` |
| `LibvirtVolumeTestCase.test_libvirt_volume_multiattach` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L308–L333` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_discard_true` | method | (self, mock_has_min_version) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L336–L353` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_discard_false` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L355–L369` |
| `LibvirtVolumeTestCase.test_libvirt_volume_alias` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L371–L386` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_encryption` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L388–L409` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_encryption_missing_secret` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L411–L428` |
| `LibvirtVolumeTestCase.test_libvirt_volume_driver_address_tag_scsi_unit` | method | (self, disk_unit) | public | not declared | 3/14 | `src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L431–L446` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L16)
- `import ddt` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L23)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L24)
- `nova.virt.libvirt`: imports `driver` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L25)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L26)
- `nova.virt.libvirt.volume`: imports `volume` (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L27)

## Side Effects

- **global-mutation**: SECRET_UUID = '2a0a0d6c-babf-454d-b93e-9ac9957b95e0' (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L29)

## Security Surface

- **sink** (`db-write`): connection_info['data'].update(dict(qos_specs=specs)) (src/nova/tests/unit/virt/libvirt/volume/test_volume.py:L268)

