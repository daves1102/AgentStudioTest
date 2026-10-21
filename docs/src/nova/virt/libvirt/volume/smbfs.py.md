# src/nova/virt/libvirt/volume/smbfs.py

## Overview

This file implements the `smbfs` module, defining 1 class, 2 constants, 6 methods, 6 imports, 2 side effects.

Lines: total 77, code 49, comment 12, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/smbfs.py:L21–L21` |
| `USERNAME_REGEX` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/smbfs.py:L23–L23` |
| `LibvirtSMBFSVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/smbfs.py:L26–L77` |
| `LibvirtSMBFSVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/4 | `src/nova/virt/libvirt/volume/smbfs.py:L29–L32` |
| `LibvirtSMBFSVolumeDriver._get_mount_point_base` | method | (self) | private | `CONF.libvirt.smbfs_mount_point_base` (src/nova/virt/libvirt/volume/smbfs.py:L35) | 1/2 | `src/nova/virt/libvirt/volume/smbfs.py:L34–L35` |
| `LibvirtSMBFSVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/smbfs.py:L46) | 1/8 | `src/nova/virt/libvirt/volume/smbfs.py:L37–L46` |
| `LibvirtSMBFSVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 2/9 | `src/nova/virt/libvirt/volume/smbfs.py:L48–L59` |
| `LibvirtSMBFSVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/4 | `src/nova/virt/libvirt/volume/smbfs.py:L61–L65` |
| `LibvirtSMBFSVolumeDriver._parse_mount_options` | method | (self, connection_info) | private | `mount_options.strip(", ").split(' ')` (src/nova/virt/libvirt/volume/smbfs.py:L77) | 3/9 | `src/nova/virt/libvirt/volume/smbfs.py:L67–L77` |

## Dependencies

- `import re` (src/nova/virt/libvirt/volume/smbfs.py:L13)
- `import warnings` (src/nova/virt/libvirt/volume/smbfs.py:L14)
- `import nova.conf` (src/nova/virt/libvirt/volume/smbfs.py:L16)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/virt/libvirt/volume/smbfs.py:L17)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/volume/smbfs.py:L18)
- `nova.virt.libvirt.volume`: imports `remotefs` (src/nova/virt/libvirt/volume/smbfs.py:L19)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/smbfs.py:L21)
- **global-mutation**: USERNAME_REGEX = re.compile(r"(user(?:name)?)=(?:[^ ,]+\\)?([^ ,]+)") (src/nova/virt/libvirt/volume/smbfs.py:L23)

