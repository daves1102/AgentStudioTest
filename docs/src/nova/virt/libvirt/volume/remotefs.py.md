# src/nova/virt/libvirt/volume/remotefs.py

## Overview

This file implements the `remotefs` module, defining 4 classs, 2 constants, 2 functions, 23 methods, 2 staticmethods, 9 imports, 21 side effects, 3 security surface entries.

Lines: total 316, code 230, comment 30, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L28–L28` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L30–L30` |
| `mount_share` | function | (mount_path, export_path, export_type, options=None) | exported | not declared | 3/10 | `src/nova/virt/libvirt/volume/remotefs.py:L33–L50` |
| `unmount_share` | function | (mount_path, export_path) | exported | not declared | 3/8 | `src/nova/virt/libvirt/volume/remotefs.py:L53–L65` |
| `RemoteFilesystem` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L68–L106` |
| `RemoteFilesystem.__init__` | method | (self) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/remotefs.py:L71–L75` |
| `RemoteFilesystem.create_file` | method | (self, host, dst_path, on_execute=None, on_completion=None) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/remotefs.py:L77–L81` |
| `RemoteFilesystem.remove_file` | method | (self, host, dst_path, on_execute=None, on_completion=None) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/remotefs.py:L83–L87` |
| `RemoteFilesystem.create_dir` | method | (self, host, dst_path, on_execute=None, on_completion=None) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/remotefs.py:L89–L93` |
| `RemoteFilesystem.remove_dir` | method | (self, host, dst_path, on_execute=None, on_completion=None) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/remotefs.py:L95–L99` |
| `RemoteFilesystem.copy_file` | method | (self, src, dst, on_execute=None, on_completion=None, compression=True) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/remotefs.py:L101–L106` |
| `RemoteFilesystemDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L109–L169` |
| `RemoteFilesystemDriver.create_file` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/1 | `src/nova/virt/libvirt/volume/remotefs.py:L111–L119` |
| `RemoteFilesystemDriver.remove_file` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/1 | `src/nova/virt/libvirt/volume/remotefs.py:L122–L130` |
| `RemoteFilesystemDriver.create_dir` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/1 | `src/nova/virt/libvirt/volume/remotefs.py:L133–L141` |
| `RemoteFilesystemDriver.remove_dir` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/1 | `src/nova/virt/libvirt/volume/remotefs.py:L144–L152` |
| `RemoteFilesystemDriver.copy_file` | method | (self, src, dst, on_execute, on_completion, compression) | public | not declared | 1/1 | `src/nova/virt/libvirt/volume/remotefs.py:L155–L169` |
| `SshDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L172–L197` |
| `SshDriver.create_file` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/remotefs.py:L174–L176` |
| `SshDriver.remove_file` | method | (self, host, dst, on_execute, on_completion) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/remotefs.py:L178–L180` |
| `SshDriver.create_dir` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/remotefs.py:L182–L184` |
| `SshDriver.remove_dir` | method | (self, host, dst, on_execute, on_completion) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/remotefs.py:L186–L188` |
| `SshDriver.copy_file` | method | (self, src, dst, on_execute, on_completion, compression) | public | not declared | 2/7 | `src/nova/virt/libvirt/volume/remotefs.py:L190–L197` |
| `RsyncDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L200–L316` |
| `RsyncDriver.create_file` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/17 | `src/nova/virt/libvirt/volume/remotefs.py:L202–L222` |
| `RsyncDriver.remove_file` | method | (self, host, dst, on_execute, on_completion) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/remotefs.py:L224–L228` |
| `RsyncDriver.create_dir` | method | (self, host, dst_path, on_execute, on_completion) | public | not declared | 1/12 | `src/nova/virt/libvirt/volume/remotefs.py:L230–L243` |
| `RsyncDriver.remove_dir` | method | (self, host, dst, on_execute, on_completion) | public | not declared | 1/10 | `src/nova/virt/libvirt/volume/remotefs.py:L245–L257` |
| `RsyncDriver._remove_object` | method | (src, host, dst, on_execute, on_completion) | private | not declared | 1/9 | `src/nova/virt/libvirt/volume/remotefs.py:L260–L277` |
| `RsyncDriver._synchronize_object` | method | (src, host, dst, on_execute, on_completion) | private | not declared | 1/9 | `src/nova/virt/libvirt/volume/remotefs.py:L280–L308` |
| `RsyncDriver.copy_file` | method | (self, src, dst, on_execute, on_completion, compression) | public | not declared | 2/6 | `src/nova/virt/libvirt/volume/remotefs.py:L310–L316` |
| `RsyncDriver._remove_object` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L259–L277` |
| `RsyncDriver._synchronize_object` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/volume/remotefs.py:L279–L308` |

## Dependencies

- `import abc` (src/nova/virt/libvirt/volume/remotefs.py:L16)
- `import os` (src/nova/virt/libvirt/volume/remotefs.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/volume/remotefs.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/remotefs.py:L20)
- `oslo_utils`: imports `fileutils` (src/nova/virt/libvirt/volume/remotefs.py:L21)
- `oslo_utils`: imports `importutils` (src/nova/virt/libvirt/volume/remotefs.py:L22)
- `import nova.conf` (src/nova/virt/libvirt/volume/remotefs.py:L24)
- `import nova.privsep.fs` (src/nova/virt/libvirt/volume/remotefs.py:L25)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/remotefs.py:L26)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/libvirt/volume/remotefs.py:L25)
- **file-io**: fileutils.ensure_tree(mount_path) (src/nova/virt/libvirt/volume/remotefs.py:L42)
- **process-spawn**: nova.privsep.fs.mount(export_type, export_path, mount_path, options) (src/nova/virt/libvirt/volume/remotefs.py:L45)
- **process-spawn**: nova.privsep.fs.umount(mount_path) (src/nova/virt/libvirt/volume/remotefs.py:L60)
- **file-io**: dir_path = os.path.dirname(os.path.normpath(dst_path)) (src/nova/virt/libvirt/volume/remotefs.py:L204)
- **file-io**: local_tmp_dir = os.path.join(tempdir, (src/nova/virt/libvirt/volume/remotefs.py:L207)
- **file-io**: dir_path.strip(os.path.sep)) (src/nova/virt/libvirt/volume/remotefs.py:L208)
- **file-io**: file_name = os.path.basename(os.path.normpath(dst_path)) (src/nova/virt/libvirt/volume/remotefs.py:L214)
- **file-io**: local_tmp_file = os.path.join(local_tmp_dir, file_name) (src/nova/virt/libvirt/volume/remotefs.py:L215)
- **file-io**: dir_path = os.path.normpath(dst_path) (src/nova/virt/libvirt/volume/remotefs.py:L232)
- **file-io**: local_tmp_dir = os.path.join(tempdir, (src/nova/virt/libvirt/volume/remotefs.py:L235)
- **file-io**: dir_path.strip(os.path.sep)) (src/nova/virt/libvirt/volume/remotefs.py:L236)
- **file-io**: tempdir + os.path.sep, (src/nova/virt/libvirt/volume/remotefs.py:L249)
- **file-io**: '--include', os.path.basename(os.path.normpath(dst)), (src/nova/virt/libvirt/volume/remotefs.py:L272)
- **file-io**: os.path.normpath(src) + os.path.sep, (src/nova/virt/libvirt/volume/remotefs.py:L274)
- **file-io**: os.path.dirname(os.path.normpath(dst))), (src/nova/virt/libvirt/volume/remotefs.py:L276)
- **file-io**: relative_tmp_file_path = os.path.join( (src/nova/virt/libvirt/volume/remotefs.py:L299)
- **file-io**: os.path.normpath(dst).strip(os.path.sep)) (src/nova/virt/libvirt/volume/remotefs.py:L301)
- **file-io**: utils.format_remote_path(host, os.path.sep), (src/nova/virt/libvirt/volume/remotefs.py:L307)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/remotefs.py:L28)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/remotefs.py:L30)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/libvirt/volume/remotefs.py:L25)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.mount(export_type, export_path, mount_path, options) (src/nova/virt/libvirt/volume/remotefs.py:L45)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.umount(mount_path) (src/nova/virt/libvirt/volume/remotefs.py:L60)

