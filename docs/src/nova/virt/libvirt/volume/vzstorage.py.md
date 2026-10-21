# src/nova/virt/libvirt/volume/vzstorage.py

## Overview

This file implements the `vzstorage` module, defining 1 class, 4 constants, 1 function, 7 methods, 1 variable, 11 imports, 4 side effects.

Lines: total 139, code 90, comment 22, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L27–L27` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L28–L28` |
| `VzShare` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L30–L31` |
| `LibvirtVZStorageVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L34–L139` |
| `LibvirtVZStorageVolumeDriver.SHARE_FORMAT_REGEX` | constant | — | public | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L37–L37` |
| `LibvirtVZStorageVolumeDriver.SHARE_LOCK_NAME` | constant | — | public | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L38–L38` |
| `LibvirtVZStorageVolumeDriver.__init__` | method | (self, connection) | public | not declared | 2/15 | `src/nova/virt/libvirt/volume/vzstorage.py:L40–L67` |
| `LibvirtVZStorageVolumeDriver._get_mount_point_base` | method | (self) | private | `CONF.libvirt.vzstorage_mount_point_base` (src/nova/virt/libvirt/volume/vzstorage.py:L70) | 1/2 | `src/nova/virt/libvirt/volume/vzstorage.py:L69–L70` |
| `LibvirtVZStorageVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/vzstorage.py:L81) | 1/8 | `src/nova/virt/libvirt/volume/vzstorage.py:L72–L81` |
| `LibvirtVZStorageVolumeDriver._parse_vz_share` | method | (self, vz_share) | private | `VzShare(cluster_name=m.group(2), mds_list=mds_list, password=m.group(3))` (src/nova/virt/libvirt/volume/vzstorage.py:L95) | 3/13 | `src/nova/virt/libvirt/volume/vzstorage.py:L83–L97` |
| `LibvirtVZStorageVolumeDriver._get_mount_opts` | method | (self, vz_share) | private | `' '.join(mount_opts)` (src/nova/virt/libvirt/volume/vzstorage.py:L115) | 2/12 | `src/nova/virt/libvirt/volume/vzstorage.py:L99–L115` |
| `LibvirtVZStorageVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | `_connect_volume(connection_info, instance)` (src/nova/virt/libvirt/volume/vzstorage.py:L131) | 1/6 | `src/nova/virt/libvirt/volume/vzstorage.py:L117–L131` |
| `LibvirtVZStorageVolumeDriver.connect_volume._connect_volume` | function | (connection_info, instance) | private | not declared | — | `src/nova/virt/libvirt/volume/vzstorage.py:L123–L129` |
| `LibvirtVZStorageVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 1/6 | `src/nova/virt/libvirt/volume/vzstorage.py:L133–L139` |

## Dependencies

- `import collections` (src/nova/virt/libvirt/volume/vzstorage.py:L13)
- `import re` (src/nova/virt/libvirt/volume/vzstorage.py:L14)
- `import warnings` (src/nova/virt/libvirt/volume/vzstorage.py:L15)
- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/vzstorage.py:L17)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/vzstorage.py:L18)
- `oslo_config`: imports `cfg` (src/nova/virt/libvirt/volume/vzstorage.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/vzstorage.py:L20)
- `nova`: imports `exception` (src/nova/virt/libvirt/volume/vzstorage.py:L22)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/volume/vzstorage.py:L23)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/vzstorage.py:L24)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/volume/vzstorage.py:L25)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/vzstorage.py:L27)
- **global-mutation**: CONF = cfg.CONF (src/nova/virt/libvirt/volume/vzstorage.py:L28)
- **global-mutation**: SHARE_FORMAT_REGEX = r'(?:(\S+):/)?([a-zA-Z0-9_-]+)(?::(\S+))?$' (src/nova/virt/libvirt/volume/vzstorage.py:L37)
- **global-mutation**: SHARE_LOCK_NAME = "vz_share-%s" (src/nova/virt/libvirt/volume/vzstorage.py:L38)

