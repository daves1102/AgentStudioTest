# src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py

## Overview

This file implements the `test_smbfs` module, defining 1 class, 5 methods, 6 imports, 12 side effects, 5 security surface entries.

Lines: total 113, code 84, comment 11, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtSMBFSVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L23–L113` |
| `LibvirtSMBFSVolumeDriverTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L26–L29` |
| `LibvirtSMBFSVolumeDriverTestCase.test_libvirt_smbfs_driver` | method | (self, mock_umount, mock_mount, mock_ensure_tree, mock_is_mounted) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L35–L54` |
| `LibvirtSMBFSVolumeDriverTestCase.test_libvirt_smbfs_driver_already_mounted` | method | (self, mock_umount, mock_is_mounted) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L58–L71` |
| `LibvirtSMBFSVolumeDriverTestCase.test_libvirt_smbfs_driver_get_config` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L73–L86` |
| `LibvirtSMBFSVolumeDriverTestCase.test_libvirt_smbfs_driver_with_opts` | method | (self, mock_umount, mock_mount, mock_ensure_tree, mock_is_mounted) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L92–L113` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L14)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L17)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L18)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L19)
- `nova.virt.libvirt.volume`: imports `smbfs` (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L20)

## Side Effects

- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L32)
- **process-spawn**: @mock.patch('nova.privsep.fs.mount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L33)
- **process-spawn**: @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L34)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L41)
- **process-spawn**: @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L57)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L62)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L76)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L78)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L89)
- **process-spawn**: @mock.patch('nova.privsep.fs.mount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L90)
- **process-spawn**: @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L91)
- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L99)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L33)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L34)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L57)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L90)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_smbfs.py:L91)

