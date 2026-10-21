# src/nova/virt/libvirt/volume/cephfs.py

## Overview

This file implements the `cephfs` module, defining 1 class, 1 constant, 5 methods, 2 imports, 1 side effect, 1 security surface entry.

Lines: total 52, code 26, comment 15, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/cephfs.py:L21–L21` |
| `LibvirtCEPHFSVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/cephfs.py:L24–L52` |
| `LibvirtCEPHFSVolumeDriver.__init__` | method | (self, connection) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/cephfs.py:L27–L28` |
| `LibvirtCEPHFSVolumeDriver._get_mount_point_base` | method | (self) | private | `CONF.libvirt.ceph_mount_point_base` (src/nova/virt/libvirt/volume/cephfs.py:L31) | 1/2 | `src/nova/virt/libvirt/volume/cephfs.py:L30–L31` |
| `LibvirtCEPHFSVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/cephfs.py:L33–L34` |
| `LibvirtCEPHFSVolumeDriver._mount_options` | method | (self, connection_info) | private | `options` (src/nova/virt/libvirt/volume/cephfs.py:L49) | 4/13 | `src/nova/virt/libvirt/volume/cephfs.py:L36–L49` |
| `LibvirtCEPHFSVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/cephfs.py:L51–L52` |

## Dependencies

- `import nova.conf` (src/nova/virt/libvirt/volume/cephfs.py:L18)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/volume/cephfs.py:L19)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/cephfs.py:L21)

## Security Surface

- **sink** (`db-write`): options.insert(0, '-o') (src/nova/virt/libvirt/volume/cephfs.py:L44)

