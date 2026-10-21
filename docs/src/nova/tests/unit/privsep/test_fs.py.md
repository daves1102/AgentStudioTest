# src/nova/tests/unit/privsep/test_fs.py

## Overview

This file implements the `test_fs` module, defining 2 classs, 3 constants, 36 methods, 4 imports, 56 side effects, 52 security surface entries.

Lines: total 288, code 230, comment 15, blank 43

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PrivsepFilesystemHelpersTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_fs.py:L24–L203` |
| `PrivsepFilesystemHelpersTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_fs.py:L27–L29` |
| `PrivsepFilesystemHelpersTestCase.test_mount_simple` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_fs.py:L32–L34` |
| `PrivsepFilesystemHelpersTestCase.test_mount_less_simple` | method | (self, mock_execute) | public | not declared | 1/6 | `src/nova/tests/unit/privsep/test_fs.py:L37–L42` |
| `PrivsepFilesystemHelpersTestCase.test_umount` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L45–L48` |
| `PrivsepFilesystemHelpersTestCase.test_lvcreate_simple` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_fs.py:L51–L55` |
| `PrivsepFilesystemHelpersTestCase.test_lvcreate_preallocated` | method | (self, mock_execute) | public | not declared | 1/14 | `src/nova/tests/unit/privsep/test_fs.py:L58–L71` |
| `PrivsepFilesystemHelpersTestCase.test_vginfo` | method | (self, mock_execute) | public | not declared | 1/6 | `src/nova/tests/unit/privsep/test_fs.py:L74–L79` |
| `PrivsepFilesystemHelpersTestCase.test_lvlist` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_fs.py:L82–L86` |
| `PrivsepFilesystemHelpersTestCase.test_lvinfo` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L89–L92` |
| `PrivsepFilesystemHelpersTestCase.test_lvremove` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L95–L98` |
| `PrivsepFilesystemHelpersTestCase.test_blockdev_size` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L101–L104` |
| `PrivsepFilesystemHelpersTestCase.test_blockdev_flush` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L107–L110` |
| `PrivsepFilesystemHelpersTestCase.test_clear_simple` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L113–L116` |
| `PrivsepFilesystemHelpersTestCase.test_clear_with_shred` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L119–L122` |
| `PrivsepFilesystemHelpersTestCase.test_loopsetup` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L125–L128` |
| `PrivsepFilesystemHelpersTestCase.test_loopremove` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L131–L134` |
| `PrivsepFilesystemHelpersTestCase.test_nbd_connect` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L137–L140` |
| `PrivsepFilesystemHelpersTestCase.test_nbd_disconnect` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_fs.py:L143–L145` |
| `PrivsepFilesystemHelpersTestCase.test_create_device_maps` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_fs.py:L148–L150` |
| `PrivsepFilesystemHelpersTestCase.test_remove_device_maps` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_fs.py:L153–L155` |
| `PrivsepFilesystemHelpersTestCase.test_privileged_e2fsck` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L158–L161` |
| `PrivsepFilesystemHelpersTestCase.test_privileged_e2fsck_with_flags` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L164–L167` |
| `PrivsepFilesystemHelpersTestCase.test_unprivileged_e2fsck` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L170–L173` |
| `PrivsepFilesystemHelpersTestCase.test_unprivileged_e2fsck_with_flags` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L176–L179` |
| `PrivsepFilesystemHelpersTestCase.test_privileged_resize2fs` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L182–L185` |
| `PrivsepFilesystemHelpersTestCase.test_privileged_resize2fs_with_size` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L188–L191` |
| `PrivsepFilesystemHelpersTestCase.test_unprivileged_resize2fs` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L194–L197` |
| `PrivsepFilesystemHelpersTestCase.test_unprivileged_resize2fs_with_size` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L200–L203` |
| `MkfsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_fs.py:L206–L288` |
| `MkfsTestCase.test_mkfs_ext4` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L208–L211` |
| `MkfsTestCase.test_mkfs_msdos` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L214–L217` |
| `MkfsTestCase.test_mkfs_swap` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_fs.py:L220–L222` |
| `MkfsTestCase.test_mkfs_ext4_withlabel` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_fs.py:L225–L228` |
| `MkfsTestCase.test_mkfs_msdos_withlabel` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_fs.py:L231–L235` |
| `MkfsTestCase.test_mkfs_swap_withlabel` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_fs.py:L238–L242` |
| `MkfsTestCase.HASH_VFAT` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_fs.py:L244–L245` |
| `MkfsTestCase.HASH_EXT4` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_fs.py:L246–L247` |
| `MkfsTestCase.HASH_NTFS` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_fs.py:L248–L249` |
| `MkfsTestCase.test_get_file_extension_for_os_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/privsep/test_fs.py:L251–L260` |
| `MkfsTestCase.test_get_file_extension_for_os_type_with_overrides` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/privsep/test_fs.py:L262–L288` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_fs.py:L17)
- `import nova.privsep.fs` (src/nova/tests/unit/privsep/test_fs.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_fs.py:L20)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/privsep/test_fs.py:L21)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/tests/unit/privsep/test_fs.py:L19)
- **process-spawn**: nova.privsep.fs.mount(None, '/dev/nosuch', '/fake/path', None) (src/nova/tests/unit/privsep/test_fs.py:L33)
- **process-spawn**: nova.privsep.fs.mount('ext4', '/dev/nosuch', '/fake/path', (src/nova/tests/unit/privsep/test_fs.py:L38)
- **syscall**: def test_umount(self, mock_execute): (src/nova/tests/unit/privsep/test_fs.py:L45)
- **process-spawn**: nova.privsep.fs.umount('/fake/path') (src/nova/tests/unit/privsep/test_fs.py:L46)
- **process-spawn**: nova.privsep.fs.lvcreate(1024, "lv", "vg") (src/nova/tests/unit/privsep/test_fs.py:L52)
- **process-spawn**: nova.privsep.fs.lvcreate(1024, "lv", "vg", preallocated=512) (src/nova/tests/unit/privsep/test_fs.py:L59)
- **process-spawn**: nova.privsep.fs.vginfo('vg') (src/nova/tests/unit/privsep/test_fs.py:L75)
- **process-spawn**: nova.privsep.fs.lvlist('vg') (src/nova/tests/unit/privsep/test_fs.py:L83)
- **process-spawn**: nova.privsep.fs.lvinfo('/path/to/lv') (src/nova/tests/unit/privsep/test_fs.py:L90)
- **process-spawn**: nova.privsep.fs.lvremove('/path/to/lv') (src/nova/tests/unit/privsep/test_fs.py:L96)
- **process-spawn**: nova.privsep.fs.blockdev_size('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L102)
- **process-spawn**: nova.privsep.fs.blockdev_flush('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L108)
- **process-spawn**: nova.privsep.fs.clear('/dev/nosuch', 1024) (src/nova/tests/unit/privsep/test_fs.py:L114)
- **process-spawn**: nova.privsep.fs.clear('/dev/nosuch', 1024, shred=True) (src/nova/tests/unit/privsep/test_fs.py:L120)
- **process-spawn**: nova.privsep.fs.loopsetup('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L126)
- **process-spawn**: nova.privsep.fs.loopremove('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L132)
- **process-spawn**: nova.privsep.fs.nbd_connect('/dev/nosuch', '/fake/path') (src/nova/tests/unit/privsep/test_fs.py:L138)
- **process-spawn**: nova.privsep.fs.nbd_disconnect('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L144)
- **process-spawn**: nova.privsep.fs.create_device_maps('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L149)
- **process-spawn**: nova.privsep.fs.remove_device_maps('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L154)
- **process-spawn**: nova.privsep.fs.e2fsck('/path/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L159)
- **process-spawn**: nova.privsep.fs.e2fsck('/path/nosuch', flags='festive') (src/nova/tests/unit/privsep/test_fs.py:L165)
- **process-spawn**: nova.privsep.fs.unprivileged_e2fsck('/path/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L171)
- **process-spawn**: nova.privsep.fs.unprivileged_e2fsck('/path/nosuch', flags='festive') (src/nova/tests/unit/privsep/test_fs.py:L177)
- **process-spawn**: nova.privsep.fs.resize2fs('/path/nosuch', [0, 1, 2]) (src/nova/tests/unit/privsep/test_fs.py:L183)
- **process-spawn**: nova.privsep.fs.resize2fs('/path/nosuch', [0, 1, 2], 1024) (src/nova/tests/unit/privsep/test_fs.py:L189)
- **process-spawn**: nova.privsep.fs.unprivileged_resize2fs('/path/nosuch', [0, 1, 2]) (src/nova/tests/unit/privsep/test_fs.py:L195)
- **process-spawn**: nova.privsep.fs.unprivileged_resize2fs('/path/nosuch', [0, 1, 2], 1024) (src/nova/tests/unit/privsep/test_fs.py:L201)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs('ext4', '/my/block/dev') (src/nova/tests/unit/privsep/test_fs.py:L209)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs('msdos', '/my/msdos/block/dev') (src/nova/tests/unit/privsep/test_fs.py:L215)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs('swap', '/my/swap/block/dev') (src/nova/tests/unit/privsep/test_fs.py:L221)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs('ext4', '/my/block/dev', 'ext4-vol') (src/nova/tests/unit/privsep/test_fs.py:L226)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs( (src/nova/tests/unit/privsep/test_fs.py:L232)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs( (src/nova/tests/unit/privsep/test_fs.py:L239)
- **process-spawn**: HASH_VFAT = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L244)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_VFAT)[:7] (src/nova/tests/unit/privsep/test_fs.py:L245)
- **process-spawn**: HASH_EXT4 = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L246)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_EXT4)[:7] (src/nova/tests/unit/privsep/test_fs.py:L247)
- **process-spawn**: HASH_NTFS = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L248)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_NTFS)[:7] (src/nova/tests/unit/privsep/test_fs.py:L249)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L253)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L256)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L259)
- **process-spawn**: with mock.patch('nova.privsep.fs._DEFAULT_MKFS_COMMAND', (src/nova/tests/unit/privsep/test_fs.py:L263)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L266)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L269)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L272)
- **process-spawn**: with mock.patch.dict(nova.privsep.fs._MKFS_COMMAND, (src/nova/tests/unit/privsep/test_fs.py:L275)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L278)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L281)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L284)
- **process-spawn**: nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L287)
- **global-mutation**: HASH_VFAT = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L244)
- **global-mutation**: HASH_EXT4 = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L246)
- **global-mutation**: HASH_NTFS = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L248)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/tests/unit/privsep/test_fs.py:L19)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.mount(None, '/dev/nosuch', '/fake/path', None) (src/nova/tests/unit/privsep/test_fs.py:L33)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.mount('ext4', '/dev/nosuch', '/fake/path', (src/nova/tests/unit/privsep/test_fs.py:L38)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.umount('/fake/path') (src/nova/tests/unit/privsep/test_fs.py:L46)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvcreate(1024, "lv", "vg") (src/nova/tests/unit/privsep/test_fs.py:L52)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvcreate(1024, "lv", "vg", preallocated=512) (src/nova/tests/unit/privsep/test_fs.py:L59)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.vginfo('vg') (src/nova/tests/unit/privsep/test_fs.py:L75)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvlist('vg') (src/nova/tests/unit/privsep/test_fs.py:L83)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvinfo('/path/to/lv') (src/nova/tests/unit/privsep/test_fs.py:L90)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvremove('/path/to/lv') (src/nova/tests/unit/privsep/test_fs.py:L96)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.blockdev_size('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L102)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.blockdev_flush('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L108)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.clear('/dev/nosuch', 1024) (src/nova/tests/unit/privsep/test_fs.py:L114)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.clear('/dev/nosuch', 1024, shred=True) (src/nova/tests/unit/privsep/test_fs.py:L120)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.loopsetup('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L126)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.loopremove('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L132)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.nbd_connect('/dev/nosuch', '/fake/path') (src/nova/tests/unit/privsep/test_fs.py:L138)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.nbd_disconnect('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L144)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.create_device_maps('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L149)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.remove_device_maps('/dev/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L154)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.e2fsck('/path/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L159)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.e2fsck('/path/nosuch', flags='festive') (src/nova/tests/unit/privsep/test_fs.py:L165)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_e2fsck('/path/nosuch') (src/nova/tests/unit/privsep/test_fs.py:L171)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_e2fsck('/path/nosuch', flags='festive') (src/nova/tests/unit/privsep/test_fs.py:L177)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.resize2fs('/path/nosuch', [0, 1, 2]) (src/nova/tests/unit/privsep/test_fs.py:L183)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.resize2fs('/path/nosuch', [0, 1, 2], 1024) (src/nova/tests/unit/privsep/test_fs.py:L189)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_resize2fs('/path/nosuch', [0, 1, 2]) (src/nova/tests/unit/privsep/test_fs.py:L195)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_resize2fs('/path/nosuch', [0, 1, 2], 1024) (src/nova/tests/unit/privsep/test_fs.py:L201)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs('ext4', '/my/block/dev') (src/nova/tests/unit/privsep/test_fs.py:L209)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs('msdos', '/my/msdos/block/dev') (src/nova/tests/unit/privsep/test_fs.py:L215)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs('swap', '/my/swap/block/dev') (src/nova/tests/unit/privsep/test_fs.py:L221)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs('ext4', '/my/block/dev', 'ext4-vol') (src/nova/tests/unit/privsep/test_fs.py:L226)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs( (src/nova/tests/unit/privsep/test_fs.py:L232)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs( (src/nova/tests/unit/privsep/test_fs.py:L239)
- **privilege** (`privsep-entrypoint`): HASH_VFAT = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L244)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_VFAT)[:7] (src/nova/tests/unit/privsep/test_fs.py:L245)
- **privilege** (`privsep-entrypoint`): HASH_EXT4 = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L246)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_EXT4)[:7] (src/nova/tests/unit/privsep/test_fs.py:L247)
- **privilege** (`privsep-entrypoint`): HASH_NTFS = nova.privsep.fs._get_hash_str( (src/nova/tests/unit/privsep/test_fs.py:L248)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_NTFS)[:7] (src/nova/tests/unit/privsep/test_fs.py:L249)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L253)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L256)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L259)
- **privilege** (`privsep-entrypoint`): with mock.patch('nova.privsep.fs._DEFAULT_MKFS_COMMAND', (src/nova/tests/unit/privsep/test_fs.py:L263)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L266)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L269)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L272)
- **privilege** (`privsep-entrypoint`): with mock.patch.dict(nova.privsep.fs._MKFS_COMMAND, (src/nova/tests/unit/privsep/test_fs.py:L275)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L278)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L281)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L284)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.get_file_extension_for_os_type( (src/nova/tests/unit/privsep/test_fs.py:L287)

## Notes

- KB `sideEffects` entries at L45 have targets that appear to be code fragments rather than resource paths; documented as recorded.

