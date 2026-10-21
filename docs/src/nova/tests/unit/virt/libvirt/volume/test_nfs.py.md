# src/nova/tests/unit/virt/libvirt/volume/test_nfs.py

## Overview

This file implements the `test_nfs` module, defining 1 class, 7 methods, 8 imports, 8 side effects.

Lines: total 161, code 123, comment 11, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtNFSVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L25–L161` |
| `LibvirtNFSVolumeDriverTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L28–L38` |
| `LibvirtNFSVolumeDriverTestCase.test_libvirt_nfs_driver` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L40–L62` |
| `LibvirtNFSVolumeDriverTestCase.test_libvirt_nfs_driver_get_config` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L64–L78` |
| `LibvirtNFSVolumeDriverTestCase.test_libvirt_nfs_driver_get_config_default_aio_mode` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L80–L96` |
| `LibvirtNFSVolumeDriverTestCase.test_libvirt_nfs_driver_with_opts` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L98–L119` |
| `LibvirtNFSVolumeDriverTestCase.test_libvirt_nfs_driver_with_conf` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L121–L147` |
| `LibvirtNFSVolumeDriverTestCase.test_extend_volume` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L149–L161` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L16)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_mount` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L18)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L19)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L20)
- `nova.virt.libvirt.volume`: imports `mount` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L21)
- `nova.virt.libvirt.volume`: imports `nfs` (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L22)

## Side Effects

- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L44)
- **file-io**: device_path = os.path.join(export_mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L55)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L67)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L69)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L85)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L87)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L102)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_nfs.py:L129)

