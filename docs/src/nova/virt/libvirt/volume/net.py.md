# src/nova/virt/libvirt/volume/net.py

## Overview

This file implements the `net` module, defining 1 class, 2 constants, 6 methods, 3 imports, 2 side effects.

Lines: total 100, code 54, comment 34, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/net.py:L19–L19` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/net.py:L20–L20` |
| `LibvirtNetVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/net.py:L23–L100` |
| `LibvirtNetVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/4 | `src/nova/virt/libvirt/volume/net.py:L26–L29` |
| `LibvirtNetVolumeDriver._set_auth_config_rbd` | method | (self, conf, netdisk_properties) | private | not declared | 4/20 | `src/nova/virt/libvirt/volume/net.py:L31–L70` |
| `LibvirtNetVolumeDriver._get_block_config` | method | (self, conf, connection_info) | private | `conf` (src/nova/virt/libvirt/volume/net.py:L76) | 1/5 | `src/nova/virt/libvirt/volume/net.py:L72–L76` |
| `LibvirtNetVolumeDriver._get_net_config` | method | (self, conf, connection_info) | private | `conf` (src/nova/virt/libvirt/volume/net.py:L87) | 2/10 | `src/nova/virt/libvirt/volume/net.py:L78–L87` |
| `LibvirtNetVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `self._get_net_config(conf, connection_info)` (src/nova/virt/libvirt/volume/net.py:L94) | 1/5 | `src/nova/virt/libvirt/volume/net.py:L89–L94` |
| `LibvirtNetVolumeDriver.extend_volume` | method | (self, connection_info, instance, requested_size) | public | `requested_size` (src/nova/virt/libvirt/volume/net.py:L100) | 1/2 | `src/nova/virt/libvirt/volume/net.py:L96–L100` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/net.py:L13)
- `import nova.conf` (src/nova/virt/libvirt/volume/net.py:L15)
- `nova.virt.libvirt.volume`: imports `volume as libvirt_volume` (src/nova/virt/libvirt/volume/net.py:L16)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/net.py:L19)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/net.py:L20)

