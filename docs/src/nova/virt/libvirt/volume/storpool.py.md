# src/nova/virt/libvirt/volume/storpool.py

## Overview

This file implements the `storpool` module, defining 1 class, 1 constant, 5 methods, 5 imports, 1 side effect.

Lines: total 65, code 40, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/storpool.py:L23–L23` |
| `LibvirtStorPoolVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/storpool.py:L26–L65` |
| `LibvirtStorPoolVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/4 | `src/nova/virt/libvirt/volume/storpool.py:L29–L33` |
| `LibvirtStorPoolVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/storpool.py:L40) | 1/5 | `src/nova/virt/libvirt/volume/storpool.py:L35–L40` |
| `LibvirtStorPoolVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/7 | `src/nova/virt/libvirt/volume/storpool.py:L42–L48` |
| `LibvirtStorPoolVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/storpool.py:L50–L55` |
| `LibvirtStorPoolVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `new_size` (src/nova/virt/libvirt/volume/storpool.py:L65) | 1/8 | `src/nova/virt/libvirt/volume/storpool.py:L57–L65` |

## Dependencies

- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/storpool.py:L16)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/storpool.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/storpool.py:L18)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/storpool.py:L20)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/storpool.py:L21)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/storpool.py:L23)

