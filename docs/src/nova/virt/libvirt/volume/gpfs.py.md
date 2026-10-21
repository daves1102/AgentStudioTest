# src/nova/virt/libvirt/volume/gpfs.py

## Overview

This file implements the `gpfs` module, defining 1 class, 2 methods, 1 import.

Lines: total 28, code 12, comment 11, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtGPFSVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/gpfs.py:L16–L28` |
| `LibvirtGPFSVolumeDriver._get_mount_point_base` | method | (self) | private | `''` (src/nova/virt/libvirt/volume/gpfs.py:L20) | 1/2 | `src/nova/virt/libvirt/volume/gpfs.py:L19–L20` |
| `LibvirtGPFSVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/gpfs.py:L28) | 1/6 | `src/nova/virt/libvirt/volume/gpfs.py:L22–L28` |

## Dependencies

- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/volume/gpfs.py:L13)

