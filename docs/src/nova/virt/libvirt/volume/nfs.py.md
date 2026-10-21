# src/nova/virt/libvirt/volume/nfs.py

## Overview

This file implements the `nfs` module, defining 1 class, 1 constant, 5 methods, 2 imports, 1 side effect.

Lines: total 56, code 29, comment 14, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/nfs.py:L17–L17` |
| `LibvirtNFSVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/nfs.py:L20–L56` |
| `LibvirtNFSVolumeDriver.__init__` | method | (self, connection) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/nfs.py:L23–L24` |
| `LibvirtNFSVolumeDriver._get_mount_point_base` | method | (self) | private | `CONF.libvirt.nfs_mount_point_base` (src/nova/virt/libvirt/volume/nfs.py:L27) | 1/2 | `src/nova/virt/libvirt/volume/nfs.py:L26–L27` |
| `LibvirtNFSVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/nfs.py:L39) | 2/9 | `src/nova/virt/libvirt/volume/nfs.py:L29–L39` |
| `LibvirtNFSVolumeDriver._mount_options` | method | (self, connection_info) | private | `options` (src/nova/virt/libvirt/volume/nfs.py:L50) | 3/8 | `src/nova/virt/libvirt/volume/nfs.py:L41–L50` |
| `LibvirtNFSVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `requested_size` (src/nova/virt/libvirt/volume/nfs.py:L56) | 1/2 | `src/nova/virt/libvirt/volume/nfs.py:L52–L56` |

## Dependencies

- `import nova.conf` (src/nova/virt/libvirt/volume/nfs.py:L14)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/volume/nfs.py:L15)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/nfs.py:L17)

