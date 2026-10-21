# src/nova/storage/rbd_utils.py

## Overview

This file implements the `rbd_utils` module, defining 4 classs, 3 constants, 1 function, 35 methods, 1 property, 2 variables, 15 imports, 3 side effects.

Lines: total 513, code 386, comment 48, blank 79

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `rados` | variable | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L35–L35` |
| `rbd` | variable | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L36–L36` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L38–L38` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L40–L40` |
| `RESIZE_SNAPSHOT_NAME` | constant | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L42–L42` |
| `RbdProxy` | class | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L45–L57` |
| `RbdProxy.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/storage/rbd_utils.py:L53–L54` |
| `RbdProxy.__getattr__` | method | (self, attr) | public | `getattr(self._rbd, attr)` (src/nova/storage/rbd_utils.py:L57) | 1/2 | `src/nova/storage/rbd_utils.py:L56–L57` |
| `RBDVolumeProxy` | class | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L60–L99` |
| `RBDVolumeProxy.__init__` | method | (self, driver, name, pool=None, snapshot=None, read_only=False) | public | not declared | 3/17 | `src/nova/storage/rbd_utils.py:L70–L87` |
| `RBDVolumeProxy.__enter__` | method | (self) | public | `self` (src/nova/storage/rbd_utils.py:L90) | 1/2 | `src/nova/storage/rbd_utils.py:L89–L90` |
| `RBDVolumeProxy.__exit__` | method | (self, type_, value, traceback) | public | not declared | 2/5 | `src/nova/storage/rbd_utils.py:L92–L96` |
| `RBDVolumeProxy.__getattr__` | method | (self, attrib) | public | `getattr(self.volume, attrib)` (src/nova/storage/rbd_utils.py:L99) | 1/2 | `src/nova/storage/rbd_utils.py:L98–L99` |
| `RADOSClient` | class | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L102–L120` |
| `RADOSClient.__init__` | method | (self, driver, pool=None) | public | not declared | 1/3 | `src/nova/storage/rbd_utils.py:L105–L107` |
| `RADOSClient.__enter__` | method | (self) | public | `self` (src/nova/storage/rbd_utils.py:L110) | 1/2 | `src/nova/storage/rbd_utils.py:L109–L110` |
| `RADOSClient.__exit__` | method | (self, type_, value, traceback) | public | not declared | 1/2 | `src/nova/storage/rbd_utils.py:L112–L113` |
| `RADOSClient.features` | method | (self) | public | `int(features)` (src/nova/storage/rbd_utils.py:L120) | 3/5 | `src/nova/storage/rbd_utils.py:L116–L120` |
| `RBDDriver` | class | — | exported | not declared | — | `src/nova/storage/rbd_utils.py:L123–L513` |
| `RBDDriver.__init__` | method | (self, pool=None, user=None, ceph_conf=None, connect_timeout=None) | public | not declared | 5/8 | `src/nova/storage/rbd_utils.py:L125–L137` |
| `RBDDriver._check_for_import_failure` | method | (self) | private | not declared | 4/9 | `src/nova/storage/rbd_utils.py:L139–L154` |
| `RBDDriver._connect_to_rados` | method | (self, pool=None) | private | `client, ioctx` (src/nova/storage/rbd_utils.py:L167) | 3/11 | `src/nova/storage/rbd_utils.py:L156–L171` |
| `RBDDriver._disconnect_from_rados` | method | (self, client, ioctx) | private | not declared | 1/3 | `src/nova/storage/rbd_utils.py:L173–L176` |
| `RBDDriver.ceph_args` | method | (self) | public | `args` (src/nova/storage/rbd_utils.py:L188) | 3/7 | `src/nova/storage/rbd_utils.py:L178–L188` |
| `RBDDriver.get_mon_addrs` | method | (self, strip_brackets=True) | public | `hosts, ports` (src/nova/storage/rbd_utils.py:L207) | 5/18 | `src/nova/storage/rbd_utils.py:L190–L207` |
| `RBDDriver.parse_url` | method | (self, url) | public | `pieces` (src/nova/storage/rbd_utils.py:L222) | 5/14 | `src/nova/storage/rbd_utils.py:L209–L222` |
| `RBDDriver.get_fsid` | method | (self) | public | `encodeutils.safe_decode(client.cluster.get_fsid())` (src/nova/storage/rbd_utils.py:L226) | 1/3 | `src/nova/storage/rbd_utils.py:L224–L226` |
| `RBDDriver.is_cloneable` | method | (self, image_location, image_meta) | public | `False` (src/nova/storage/rbd_utils.py:L234); `False` (src/nova/storage/rbd_utils.py:L240); `False` (src/nova/storage/rbd_utils.py:L246); `self.exists(image, pool=pool, snapshot=snapshot)` (src/nova/storage/rbd_utils.py:L250); `False` (src/nova/storage/rbd_utils.py:L254) | 5/23 | `src/nova/storage/rbd_utils.py:L228–L254` |
| `RBDDriver.clone` | method | (self, image_location, dest_name, dest_pool=None) | public | not declared | 2/19 | `src/nova/storage/rbd_utils.py:L256–L274` |
| `RBDDriver.size` | method | (self, name) | public | `vol.size()` (src/nova/storage/rbd_utils.py:L278) | 1/3 | `src/nova/storage/rbd_utils.py:L276–L278` |
| `RBDDriver.resize` | method | (self, name, size) | public | not declared | 1/4 | `src/nova/storage/rbd_utils.py:L280–L288` |
| `RBDDriver.parent_info` | method | (self, volume, pool=None) | public | `vol.parent_info()` (src/nova/storage/rbd_utils.py:L300) | 2/8 | `src/nova/storage/rbd_utils.py:L290–L303` |
| `RBDDriver.flatten` | method | (self, volume, pool=None) | public | not declared | 1/4 | `src/nova/storage/rbd_utils.py:L305–L314` |
| `RBDDriver.exists` | method | (self, name, pool=None, snapshot=None) | public | `True` (src/nova/storage/rbd_utils.py:L322); `False` (src/nova/storage/rbd_utils.py:L324) | 2/9 | `src/nova/storage/rbd_utils.py:L316–L324` |
| `RBDDriver.remove_image` | method | (self, name) | public | not declared | 3/12 | `src/nova/storage/rbd_utils.py:L326–L341` |
| `RBDDriver.import_image` | method | (self, base, name) | public | not declared | 1/5 | `src/nova/storage/rbd_utils.py:L343–L358` |
| `RBDDriver.export_image` | method | (self, base, name, snap, pool=None) | public | not declared | 2/7 | `src/nova/storage/rbd_utils.py:L360–L377` |
| `RBDDriver._destroy_volume` | method | (self, client, volume, pool=None) | private | not declared | 3/12 | `src/nova/storage/rbd_utils.py:L379–L409` |
| `RBDDriver._destroy_volume._cleanup_vol` | function | (ioctx, volume, retryctx) | private | not declared | — | `src/nova/storage/rbd_utils.py:L382–L394` |
| `RBDDriver.cleanup_volumes` | method | (self, filter_fn) | public | not declared | 2/5 | `src/nova/storage/rbd_utils.py:L411–L415` |
| `RBDDriver.get_pool_info` | method | (self) | public | `{'total': stats['stats']['total_bytes'], 'free': pool_stats['max_avail'], 'used': pool_stats['bytes_used']}` (src/nova/storage/rbd_utils.py:L448) | 5/19 | `src/nova/storage/rbd_utils.py:L417–L450` |
| `RBDDriver.create_snap` | method | (self, volume, name, pool=None, protect=False) | public | not declared | 3/7 | `src/nova/storage/rbd_utils.py:L452–L465` |
| `RBDDriver.remove_snap` | method | (self, volume, name, ignore_errors=False, pool=None, force=False) | public | `` (src/nova/storage/rbd_utils.py:L486) | 7/19 | `src/nova/storage/rbd_utils.py:L467–L493` |
| `RBDDriver.rollback_to_snap` | method | (self, volume, name) | public | not declared | 3/8 | `src/nova/storage/rbd_utils.py:L495–L507` |
| `RBDDriver.destroy_volume` | method | (self, volume, pool=None) | public | not declared | 1/3 | `src/nova/storage/rbd_utils.py:L509–L513` |
| `RADOSClient.features` | property | — | public | not declared | — | `src/nova/storage/rbd_utils.py:L115–L120` |

## Dependencies

- `import urllib` (src/nova/storage/rbd_utils.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/storage/rbd_utils.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/storage/rbd_utils.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/storage/rbd_utils.py:L21)
- `oslo_service`: imports `loopingcall` (src/nova/storage/rbd_utils.py:L22)
- `oslo_utils`: imports `encodeutils` (src/nova/storage/rbd_utils.py:L23)
- `oslo_utils`: imports `excutils` (src/nova/storage/rbd_utils.py:L24)
- `import nova.conf` (src/nova/storage/rbd_utils.py:L26)
- `nova`: imports `exception` (src/nova/storage/rbd_utils.py:L27)
- `nova.i18n`: imports `_` (src/nova/storage/rbd_utils.py:L28)
- `nova`: imports `utils` (src/nova/storage/rbd_utils.py:L29)
- `import rados` (src/nova/storage/rbd_utils.py:L32)
- `import rbd` (src/nova/storage/rbd_utils.py:L33)
- `import rados` (src/nova/storage/rbd_utils.py:L149)
- `import rbd` (src/nova/storage/rbd_utils.py:L150)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/storage/rbd_utils.py:L38)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/storage/rbd_utils.py:L40)
- **global-mutation**: RESIZE_SNAPSHOT_NAME = 'nova-resize' (src/nova/storage/rbd_utils.py:L42)

