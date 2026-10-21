# src/nova/virt/libvirt/volume/nvme.py

## Overview

This file implements the `nvme` module, defining 1 class, 2 constants, 4 methods, 6 imports, 2 side effects.

Lines: total 64, code 39, comment 11, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/nvme.py:L22–L22` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/nvme.py:L24–L24` |
| `LibvirtNVMEVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/nvme.py:L27–L64` |
| `LibvirtNVMEVolumeDriver.__init__` | method | (self, connection) | public | not declared | 1/8 | `src/nova/virt/libvirt/volume/nvme.py:L30–L38` |
| `LibvirtNVMEVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/nvme.py:L40–L47` |
| `LibvirtNVMEVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/nvme.py:L49–L55` |
| `LibvirtNVMEVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `new_size` (src/nova/virt/libvirt/volume/nvme.py:L64) | 1/7 | `src/nova/virt/libvirt/volume/nvme.py:L57–L64` |

## Dependencies

- `import nova.conf` (src/nova/virt/libvirt/volume/nvme.py:L13)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/nvme.py:L14)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/nvme.py:L15)
- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/nvme.py:L17)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/nvme.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/nvme.py:L20)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/nvme.py:L22)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/nvme.py:L24)

