# src/nova/virt/libvirt/volume/volume.py

## Overview

This file implements the `volume` module, defining 3 classs, 2 constants, 9 methods, 6 imports, 2 side effects.

Lines: total 189, code 123, comment 34, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/volume.py:L27–L27` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/volume.py:L28–L28` |
| `LibvirtBaseVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/volume.py:L32–L156` |
| `LibvirtBaseVolumeDriver.__init__` | method | (self, host, is_block_dev) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/volume.py:L35–L37` |
| `LibvirtBaseVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/volume.py:L133) | 19/65 | `src/nova/virt/libvirt/volume/volume.py:L39–L133` |
| `LibvirtBaseVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/volume.py:L135–L137` |
| `LibvirtBaseVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/volume.py:L139–L141` |
| `LibvirtBaseVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/volume.py:L143–L156` |
| `LibvirtVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/volume.py:L159–L172` |
| `LibvirtVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/volume.py:L162–L164` |
| `LibvirtVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/volume.py:L172) | 1/6 | `src/nova/virt/libvirt/volume/volume.py:L166–L172` |
| `LibvirtFakeVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/volume.py:L175–L189` |
| `LibvirtFakeVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/volume.py:L178–L180` |
| `LibvirtFakeVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/volume.py:L189) | 1/7 | `src/nova/virt/libvirt/volume/volume.py:L182–L189` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/volume.py:L19)
- `import nova.conf` (src/nova/virt/libvirt/volume/volume.py:L21)
- `nova`: imports `exception` (src/nova/virt/libvirt/volume/volume.py:L22)
- `nova`: imports `profiler` (src/nova/virt/libvirt/volume/volume.py:L23)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/virt/libvirt/volume/volume.py:L24)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/volume/volume.py:L25)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/volume.py:L27)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/volume.py:L28)

