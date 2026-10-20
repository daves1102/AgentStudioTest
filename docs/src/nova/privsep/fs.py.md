# src/nova/privsep/fs.py

## Overview

This file implements the `fs` module, defining 8 constants, 28 functions, 4 variables, 4 imports, 30 side effects, 20 security surface entries.

Lines: total 305, code 188, comment 42, blank 75

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L28–L28` |
| `mount` | function | (fstype, device, mountpoint, options) | exported | `processutils.execute(*mount_cmd)` (src/nova/privsep/fs.py:L39) | 3/8 | `src/nova/privsep/fs.py:L32–L39` |
| `umount` | function | (mountpoint) | exported | not declared | 1/2 | `src/nova/privsep/fs.py:L43–L44` |
| `lvcreate` | function | (size, lv, vg, preallocated=None) | exported | not declared | 2/10 | `src/nova/privsep/fs.py:L48–L58` |
| `vginfo` | function | (vg) | exported | `processutils.execute( 'vgs', '--noheadings', '--nosuffix', '--separator', '\|', '--units', 'b', '-o', 'vg_size,vg_free', vg, attempts=3, delay_on_retry=True, )` (src/nova/privsep/fs.py:L65) | 1/7 | `src/nova/privsep/fs.py:L62–L70` |
| `lvlist` | function | (vg) | exported | `processutils.execute( 'lvs', '--noheadings', '-o', 'lv_name', vg, attempts=3, delay_on_retry=True)` (src/nova/privsep/fs.py:L75) | 1/4 | `src/nova/privsep/fs.py:L74–L77` |
| `lvinfo` | function | (path) | exported | `processutils.execute('lvs', '-o', 'vg_all,lv_all', '--separator', '\|', path)` (src/nova/privsep/fs.py:L82) | 1/3 | `src/nova/privsep/fs.py:L81–L83` |
| `lvremove` | function | (path) | exported | not declared | 1/2 | `src/nova/privsep/fs.py:L87–L88` |
| `blockdev_size` | function | (path) | exported | `processutils.execute('blockdev', '--getsize64', path)` (src/nova/privsep/fs.py:L93) | 1/2 | `src/nova/privsep/fs.py:L92–L93` |
| `blockdev_flush` | function | (path) | exported | `processutils.execute('blockdev', '--flushbufs', path)` (src/nova/privsep/fs.py:L98) | 1/2 | `src/nova/privsep/fs.py:L97–L98` |
| `clear` | function | (path, volume_size, shred=False) | exported | not declared | 2/8 | `src/nova/privsep/fs.py:L102–L109` |
| `loopsetup` | function | (path) | exported | `processutils.execute('losetup', '--find', '--show', path)` (src/nova/privsep/fs.py:L114) | 1/2 | `src/nova/privsep/fs.py:L113–L114` |
| `loopremove` | function | (device) | exported | `processutils.execute('losetup', '--detach', device, attempts=3)` (src/nova/privsep/fs.py:L119) | 1/2 | `src/nova/privsep/fs.py:L118–L119` |
| `nbd_connect` | function | (device, image) | exported | `processutils.execute('qemu-nbd', '-c', device, image)` (src/nova/privsep/fs.py:L124) | 1/2 | `src/nova/privsep/fs.py:L123–L124` |
| `nbd_disconnect` | function | (device) | exported | `processutils.execute('qemu-nbd', '-d', device)` (src/nova/privsep/fs.py:L129) | 1/2 | `src/nova/privsep/fs.py:L128–L129` |
| `create_device_maps` | function | (device) | exported | `processutils.execute('kpartx', '-a', device)` (src/nova/privsep/fs.py:L134) | 1/2 | `src/nova/privsep/fs.py:L133–L134` |
| `remove_device_maps` | function | (device) | exported | `processutils.execute('kpartx', '-d', device)` (src/nova/privsep/fs.py:L139) | 1/2 | `src/nova/privsep/fs.py:L138–L139` |
| `e2fsck` | function | (image, flags='-fp') | exported | not declared | 1/2 | `src/nova/privsep/fs.py:L143–L144` |
| `unprivileged_e2fsck` | function | (image, flags='-fp') | exported | not declared | 1/2 | `src/nova/privsep/fs.py:L150–L151` |
| `resize2fs` | function | (image, check_exit_code, size=None) | exported | not declared | 1/2 | `src/nova/privsep/fs.py:L155–L156` |
| `unprivileged_resize2fs` | function | (image, check_exit_code, size=None) | exported | not declared | 2/6 | `src/nova/privsep/fs.py:L162–L168` |
| `_MKFS_COMMAND` | variable | — | unexported | not declared | — | `src/nova/privsep/fs.py:L181–L181` |
| `_DEFAULT_MKFS_COMMAND` | variable | — | unexported | not declared | — | `src/nova/privsep/fs.py:L182–L182` |
| `FS_FORMAT_EXT2` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L184–L184` |
| `FS_FORMAT_EXT3` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L185–L185` |
| `FS_FORMAT_EXT4` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L186–L186` |
| `FS_FORMAT_XFS` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L187–L187` |
| `FS_FORMAT_NTFS` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L188–L188` |
| `FS_FORMAT_VFAT` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L189–L189` |
| `SUPPORTED_FS_TO_EXTEND` | constant | — | exported | not declared | — | `src/nova/privsep/fs.py:L191–L194` |
| `_DEFAULT_FILE_SYSTEM` | variable | — | unexported | not declared | — | `src/nova/privsep/fs.py:L196–L196` |
| `_DEFAULT_FS_BY_OSTYPE` | variable | — | unexported | not declared | — | `src/nova/privsep/fs.py:L197–L198` |
| `load_mkfs_command` | function | (os_type, command) | exported | not declared | 2/5 | `src/nova/privsep/fs.py:L201–L206` |
| `get_fs_type_for_os_type` | function | (os_type) | exported | `os_type if _MKFS_COMMAND.get(os_type) else 'default'` (src/nova/privsep/fs.py:L210) | 2/2 | `src/nova/privsep/fs.py:L209–L210` |
| `_get_hash_str` | function | (base_str) | unexported | `hashlib.md5(base_str, usedforsecurity=False).hexdigest()` (src/nova/privsep/fs.py:L222) | 2/4 | `src/nova/privsep/fs.py:L215–L222` |
| `get_file_extension_for_os_type` | function | (os_type, default_ephemeral_format, specified_fs=None) | exported | `_get_hash_str(extension)[:7]` (src/nova/privsep/fs.py:L237) | 4/13 | `src/nova/privsep/fs.py:L225–L237` |
| `mkfs` | function | (fs, path, label=None) | exported | not declared | 1/2 | `src/nova/privsep/fs.py:L241–L242` |
| `unprivileged_mkfs` | function | (fs, path, label=None) | exported | not declared | 5/15 | `src/nova/privsep/fs.py:L248–L270` |
| `_inner_configurable_mkfs` | function | (os_type, fs_label, target) | unexported | not declared | 2/4 | `src/nova/privsep/fs.py:L274–L277` |
| `configurable_mkfs` | function | (os_type, fs_label, target, run_as_root, default_ephemeral_format, specified_fs=None) | exported | not declared | 7/19 | `src/nova/privsep/fs.py:L281–L305` |

## Dependencies

- `import hashlib` (src/nova/privsep/fs.py:L20)
- `oslo_concurrency`: imports `processutils` (src/nova/privsep/fs.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/privsep/fs.py:L23)
- `import nova.privsep` (src/nova/privsep/fs.py:L25)

## Side Effects

- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L31)
- **syscall**: def mount(fstype, device, mountpoint, options): (src/nova/privsep/fs.py:L32)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L42)
- **syscall**: def umount(mountpoint): (src/nova/privsep/fs.py:L43)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L47)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L61)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L73)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L80)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L86)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L91)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L96)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L101)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L112)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L117)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L122)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L127)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L132)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L137)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L142)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L154)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L240)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L273)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/privsep/fs.py:L28)
- **global-mutation**: FS_FORMAT_EXT2 = "ext2" (src/nova/privsep/fs.py:L184)
- **global-mutation**: FS_FORMAT_EXT3 = "ext3" (src/nova/privsep/fs.py:L185)
- **global-mutation**: FS_FORMAT_EXT4 = "ext4" (src/nova/privsep/fs.py:L186)
- **global-mutation**: FS_FORMAT_XFS = "xfs" (src/nova/privsep/fs.py:L187)
- **global-mutation**: FS_FORMAT_NTFS = "ntfs" (src/nova/privsep/fs.py:L188)
- **global-mutation**: FS_FORMAT_VFAT = "vfat" (src/nova/privsep/fs.py:L189)
- **global-mutation**: SUPPORTED_FS_TO_EXTEND = ( (src/nova/privsep/fs.py:L191)

## Security Surface

- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L31)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L42)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L47)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L61)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L73)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L80)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L86)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L91)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L96)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L101)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L112)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L117)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L122)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L127)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L132)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L137)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L142)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L154)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L240)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/fs.py:L273)

## Notes

- KB `sideEffects` entries at L32, L43 have targets that appear to be code fragments rather than resource paths; documented as recorded.

