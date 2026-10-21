# src/nova/virt/libvirt/volume/iscsi.py

## Overview

This file implements the `iscsi` module, defining 1 class, 2 constants, 6 methods, 7 imports, 2 side effects.

Lines: total 92, code 61, comment 13, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/iscsi.py:L23–L23` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/iscsi.py:L25–L25` |
| `LibvirtISCSIVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/iscsi.py:L28–L92` |
| `LibvirtISCSIVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/9 | `src/nova/virt/libvirt/volume/iscsi.py:L31–L42` |
| `LibvirtISCSIVolumeDriver._get_transport` | method | (self) | private | `transport` (src/nova/virt/libvirt/volume/iscsi.py:L50) | 2/6 | `src/nova/virt/libvirt/volume/iscsi.py:L44–L50` |
| `LibvirtISCSIVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/iscsi.py:L60) | 2/8 | `src/nova/virt/libvirt/volume/iscsi.py:L52–L60` |
| `LibvirtISCSIVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/iscsi.py:L62–L69` |
| `LibvirtISCSIVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | `` (src/nova/virt/libvirt/volume/iscsi.py:L80) | 2/11 | `src/nova/virt/libvirt/volume/iscsi.py:L71–L84` |
| `LibvirtISCSIVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `new_size` (src/nova/virt/libvirt/volume/iscsi.py:L92) | 1/6 | `src/nova/virt/libvirt/volume/iscsi.py:L86–L92` |

## Dependencies

- `os_brick`: imports `exception as os_brick_exception` (src/nova/virt/libvirt/volume/iscsi.py:L14)
- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/iscsi.py:L15)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/iscsi.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/iscsi.py:L17)
- `import nova.conf` (src/nova/virt/libvirt/volume/iscsi.py:L19)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/iscsi.py:L20)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/iscsi.py:L21)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/iscsi.py:L23)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/iscsi.py:L25)

