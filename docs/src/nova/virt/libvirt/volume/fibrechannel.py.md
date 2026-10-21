# src/nova/virt/libvirt/volume/fibrechannel.py

## Overview

This file implements the `fibrechannel` module, defining 1 class, 2 constants, 5 methods, 6 imports, 2 side effects.

Lines: total 87, code 52, comment 18, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/fibrechannel.py:L21–L21` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/fibrechannel.py:L23–L23` |
| `LibvirtFibreChannelVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/fibrechannel.py:L26–L87` |
| `LibvirtFibreChannelVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/8 | `src/nova/virt/libvirt/volume/fibrechannel.py:L29–L39` |
| `LibvirtFibreChannelVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/fibrechannel.py:L50) | 2/8 | `src/nova/virt/libvirt/volume/fibrechannel.py:L41–L50` |
| `LibvirtFibreChannelVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 2/8 | `src/nova/virt/libvirt/volume/fibrechannel.py:L52–L62` |
| `LibvirtFibreChannelVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/8 | `src/nova/virt/libvirt/volume/fibrechannel.py:L64–L79` |
| `LibvirtFibreChannelVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `new_size` (src/nova/virt/libvirt/volume/fibrechannel.py:L87) | 1/6 | `src/nova/virt/libvirt/volume/fibrechannel.py:L81–L87` |

## Dependencies

- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/fibrechannel.py:L13)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/fibrechannel.py:L14)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/fibrechannel.py:L15)
- `import nova.conf` (src/nova/virt/libvirt/volume/fibrechannel.py:L17)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/fibrechannel.py:L18)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/fibrechannel.py:L19)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/fibrechannel.py:L21)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/fibrechannel.py:L23)

