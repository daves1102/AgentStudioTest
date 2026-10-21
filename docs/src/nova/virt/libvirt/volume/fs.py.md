# src/nova/virt/libvirt/volume/fs.py

## Overview

This file implements the `fs` module, defining 2 classs, 9 methods, 5 imports, 4 side effects.

Lines: total 130, code 83, comment 17, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtBaseFileSystemVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/fs.py:L23–L93` |
| `LibvirtBaseFileSystemVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/fs.py:L27–L29` |
| `LibvirtBaseFileSystemVolumeDriver._get_mount_point_base` | method | (self) | private | not declared | 1/2 | `src/nova/virt/libvirt/volume/fs.py:L32–L39` |
| `LibvirtBaseFileSystemVolumeDriver._normalize_export` | method | (self, export) | private | `export` (src/nova/virt/libvirt/volume/fs.py:L51) | 1/2 | `src/nova/virt/libvirt/volume/fs.py:L41–L51` |
| `LibvirtBaseFileSystemVolumeDriver._get_mount_path` | method | (self, connection_info) | private | `os.path.join(self._get_mount_point_base(), utils.get_hash_str(share))` (src/nova/virt/libvirt/volume/fs.py:L71) | 1/4 | `src/nova/virt/libvirt/volume/fs.py:L53–L72` |
| `LibvirtBaseFileSystemVolumeDriver._get_device_path` | method | (self, connection_info) | private | `os.path.join(mount_path, connection_info['data']['name'])` (src/nova/virt/libvirt/volume/fs.py:L93) | 1/3 | `src/nova/virt/libvirt/volume/fs.py:L74–L93` |
| `LibvirtMountedFileSystemVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/fs.py:L96–L130` |
| `LibvirtMountedFileSystemVolumeDriver.__init__` | method | (self, host, fstype) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/fs.py:L102–L105` |
| `LibvirtMountedFileSystemVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/8 | `src/nova/virt/libvirt/volume/fs.py:L107–L117` |
| `LibvirtMountedFileSystemVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | `mount.umount(vol_name, mountpoint, instance)` (src/nova/virt/libvirt/volume/fs.py:L124) | 1/4 | `src/nova/virt/libvirt/volume/fs.py:L119–L124` |
| `LibvirtMountedFileSystemVolumeDriver._mount_options` | method | (self, connection_info) | private | not declared | 1/2 | `src/nova/virt/libvirt/volume/fs.py:L127–L130` |

## Dependencies

- `import abc` (src/nova/virt/libvirt/volume/fs.py:L15)
- `import os` (src/nova/virt/libvirt/volume/fs.py:L16)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/fs.py:L18)
- `nova.virt.libvirt.volume`: imports `mount` (src/nova/virt/libvirt/volume/fs.py:L19)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/fs.py:L20)

## Side Effects

- **file-io**: return os.path.join(self._get_mount_point_base(), (src/nova/virt/libvirt/volume/fs.py:L71)
- **file-io**: return os.path.join(mount_path, connection_info['data']['name']) (src/nova/virt/libvirt/volume/fs.py:L93)
- **syscall**: mount.mount(self.fstype, export, vol_name, mountpoint, instance, (src/nova/virt/libvirt/volume/fs.py:L113)
- **syscall**: return mount.umount(vol_name, mountpoint, instance) (src/nova/virt/libvirt/volume/fs.py:L124)

