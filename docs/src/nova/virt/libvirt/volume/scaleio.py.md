# src/nova/virt/libvirt/volume/scaleio.py

## Overview

This file implements the `scaleio` module, defining 1 class, 2 constants, 5 methods, 6 imports, 2 side effects.

Lines: total 75, code 46, comment 14, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/scaleio.py:L26–L26` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/scaleio.py:L28–L28` |
| `LibvirtScaleIOVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/scaleio.py:L31–L75` |
| `LibvirtScaleIOVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/scaleio.py:L38–L43` |
| `LibvirtScaleIOVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/scaleio.py:L52) | 1/7 | `src/nova/virt/libvirt/volume/scaleio.py:L45–L52` |
| `LibvirtScaleIOVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/5 | `src/nova/virt/libvirt/volume/scaleio.py:L54–L58` |
| `LibvirtScaleIOVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/scaleio.py:L60–L66` |
| `LibvirtScaleIOVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `new_size` (src/nova/virt/libvirt/volume/scaleio.py:L75) | 1/8 | `src/nova/virt/libvirt/volume/scaleio.py:L68–L75` |

## Dependencies

- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/scaleio.py:L18)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/scaleio.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/scaleio.py:L20)
- `import nova.conf` (src/nova/virt/libvirt/volume/scaleio.py:L22)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/scaleio.py:L23)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/scaleio.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/scaleio.py:L26)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/scaleio.py:L28)

