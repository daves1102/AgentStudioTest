# src/nova/virt/libvirt/volume/lightos.py

## Overview

This file implements the `lightos` module, defining 1 class, 3 constants, 4 methods, 6 imports, 3 side effects.

Lines: total 64, code 40, comment 15, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/lightos.py:L25–L25` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/lightos.py:L26–L26` |
| `LibvirtLightOSVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/lightos.py:L29–L64` |
| `LibvirtLightOSVolumeDriver.VERSION` | constant | — | public | not declared | — | `src/nova/virt/libvirt/volume/lightos.py:L31–L31` |
| `LibvirtLightOSVolumeDriver.__init__` | method | (self, connection) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/lightos.py:L33–L38` |
| `LibvirtLightOSVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/4 | `src/nova/virt/libvirt/volume/lightos.py:L40–L43` |
| `LibvirtLightOSVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/8 | `src/nova/virt/libvirt/volume/lightos.py:L45–L53` |
| `LibvirtLightOSVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `new_size` (src/nova/virt/libvirt/volume/lightos.py:L64) | 1/9 | `src/nova/virt/libvirt/volume/lightos.py:L55–L64` |

## Dependencies

- `import nova.conf` (src/nova/virt/libvirt/volume/lightos.py:L17)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/lightos.py:L18)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/lightos.py:L19)
- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/lightos.py:L20)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/lightos.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/lightos.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/lightos.py:L25)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/lightos.py:L26)
- **global-mutation**: VERSION = '2.3.12' (src/nova/virt/libvirt/volume/lightos.py:L31)

