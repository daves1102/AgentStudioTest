# src/nova/virt/libvirt/imagecache.py

## Overview

This file implements the `imagecache` module, defining 1 class, 2 constants, 2 functions, 21 methods, 1 property, 1 staticmethod, 13 imports, 33 side effects, 5 security surface entries.

Lines: total 418, code 291, comment 55, blank 72

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/imagecache.py:L39–L39` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/imagecache.py:L41–L41` |
| `get_cache_fname` | function | (image_id) | exported | `hashlib.sha1(image_id.encode('utf-8')).hexdigest()` (src/nova/virt/libvirt/imagecache.py:L52) | 1/2 | `src/nova/virt/libvirt/imagecache.py:L44–L52` |
| `ImageCacheManager` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagecache.py:L55–L418` |
| `ImageCacheManager.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/virt/libvirt/imagecache.py:L56–L59` |
| `ImageCacheManager._reset_state` | method | (self) | private | not declared | 1/11 | `src/nova/virt/libvirt/imagecache.py:L61–L76` |
| `ImageCacheManager._store_image` | method | (self, base_dir, ent, original=False) | private | not declared | 3/6 | `src/nova/virt/libvirt/imagecache.py:L78–L84` |
| `ImageCacheManager._store_swap_image` | method | (self, ent) | private | not declared | 5/6 | `src/nova/virt/libvirt/imagecache.py:L86–L92` |
| `ImageCacheManager._store_ephemeral_image` | method | (self, ent) | private | not declared | 7/7 | `src/nova/virt/libvirt/imagecache.py:L94–L101` |
| `ImageCacheManager._scan_base_images` | method | (self, base_dir) | private | not declared | 5/10 | `src/nova/virt/libvirt/imagecache.py:L103–L119` |
| `ImageCacheManager._list_backing_images` | method | (self) | private | `inuse_images` (src/nova/virt/libvirt/imagecache.py:L161) | 9/37 | `src/nova/virt/libvirt/imagecache.py:L121–L161` |
| `ImageCacheManager._find_base_file` | method | (self, base_dir, fingerprint) | private | not declared | 5/12 | `src/nova/virt/libvirt/imagecache.py:L163–L187` |
| `ImageCacheManager._get_age_of_file` | method | (base_file) | private | `(False, 0)` (src/nova/virt/libvirt/imagecache.py:L193); `(True, age)` (src/nova/virt/libvirt/imagecache.py:L198) | 2/7 | `src/nova/virt/libvirt/imagecache.py:L190–L198` |
| `ImageCacheManager._remove_old_enough_file` | method | (self, base_file, maxage, remove_lock=True) | private | `` (src/nova/virt/libvirt/imagecache.py:L204) | 5/22 | `src/nova/virt/libvirt/imagecache.py:L200–L245` |
| `ImageCacheManager._remove_old_enough_file._inner_remove_old_enough_file` | function | — | private | `` (src/nova/virt/libvirt/imagecache.py:L216) | — | `src/nova/virt/libvirt/imagecache.py:L210–L225` |
| `ImageCacheManager._remove_ephemeral_file` | method | (self, base_file) | private | not declared | 1/3 | `src/nova/virt/libvirt/imagecache.py:L247–L251` |
| `ImageCacheManager._remove_swap_file` | method | (self, base_file) | private | not declared | 1/3 | `src/nova/virt/libvirt/imagecache.py:L253–L257` |
| `ImageCacheManager._remove_base_file` | method | (self, base_file) | private | not declared | 2/6 | `src/nova/virt/libvirt/imagecache.py:L259–L266` |
| `ImageCacheManager._mark_in_use` | method | (self, img_id, base_file) | private | not declared | 2/9 | `src/nova/virt/libvirt/imagecache.py:L268–L281` |
| `ImageCacheManager._age_and_verify_ephemeral_images` | method | (self, context, base_dir) | private | not declared | 6/12 | `src/nova/virt/libvirt/imagecache.py:L283–L296` |
| `ImageCacheManager._age_and_verify_swap_images` | method | (self, context, base_dir) | private | not declared | 6/12 | `src/nova/virt/libvirt/imagecache.py:L298–L311` |
| `ImageCacheManager._age_and_verify_cached_images` | method | (self, context, all_instances, base_dir) | private | not declared | 10/27 | `src/nova/virt/libvirt/imagecache.py:L313–L350` |
| `ImageCacheManager._get_base` | method | (self) | private | `` (src/nova/virt/libvirt/imagecache.py:L369); `base_dir` (src/nova/virt/libvirt/imagecache.py:L370) | 2/8 | `src/nova/virt/libvirt/imagecache.py:L352–L370` |
| `ImageCacheManager.update` | method | (self, context, all_instances) | public | `` (src/nova/virt/libvirt/imagecache.py:L375) | 2/14 | `src/nova/virt/libvirt/imagecache.py:L372–L389` |
| `ImageCacheManager.get_disk_usage` | method | (self) | public | `0` (src/nova/virt/libvirt/imagecache.py:L397); `sum( os.stat(os.path.join(self.cache_dir, f)).st_blocks * 512 for f in os.listdir(self.cache_dir) if os.path.isfile(os.path.join(self.cache_dir, f)))` (src/nova/virt/libvirt/imagecache.py:L404); `0` (src/nova/virt/libvirt/imagecache.py:L413) | 5/11 | `src/nova/virt/libvirt/imagecache.py:L391–L413` |
| `ImageCacheManager.cache_dir` | method | (self) | public | `os.path.join( CONF.instances_path, CONF.image_cache.subdirectory_name)` (src/nova/virt/libvirt/imagecache.py:L417) | 1/3 | `src/nova/virt/libvirt/imagecache.py:L416–L418` |
| `ImageCacheManager._get_age_of_file` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/imagecache.py:L189–L198` |
| `ImageCacheManager.cache_dir` | property | — | public | not declared | — | `src/nova/virt/libvirt/imagecache.py:L415–L418` |

## Dependencies

- `import hashlib` (src/nova/virt/libvirt/imagecache.py:L23)
- `import os` (src/nova/virt/libvirt/imagecache.py:L24)
- `import re` (src/nova/virt/libvirt/imagecache.py:L25)
- `import time` (src/nova/virt/libvirt/imagecache.py:L26)
- `oslo_concurrency`: imports `lockutils` (src/nova/virt/libvirt/imagecache.py:L28)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/imagecache.py:L29)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/imagecache.py:L30)
- `oslo_utils`: imports `encodeutils` (src/nova/virt/libvirt/imagecache.py:L31)
- `import nova.conf` (src/nova/virt/libvirt/imagecache.py:L33)
- `import nova.privsep.path` (src/nova/virt/libvirt/imagecache.py:L34)
- `nova`: imports `utils` (src/nova/virt/libvirt/imagecache.py:L35)
- `nova.virt`: imports `imagecache` (src/nova/virt/libvirt/imagecache.py:L36)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/virt/libvirt/imagecache.py:L37)

## Side Effects

- **network**: http://wiki.openstack.org/nova-image-cache-management. (src/nova/virt/libvirt/imagecache.py:L19)
- **process-spawn**: import nova.privsep.path (src/nova/virt/libvirt/imagecache.py:L34)
- **file-io**: self.lock_path = os.path.join(CONF.instances_path, 'locks') (src/nova/virt/libvirt/imagecache.py:L58)
- **file-io**: entpath = os.path.join(base_dir, ent) (src/nova/virt/libvirt/imagecache.py:L80)
- **file-io**: if os.path.isfile(entpath): (src/nova/virt/libvirt/imagecache.py:L81)
- **file-io**: for ent in os.listdir(base_dir): (src/nova/virt/libvirt/imagecache.py:L110)
- **file-io**: for ent in os.listdir(CONF.instances_path): (src/nova/virt/libvirt/imagecache.py:L124)
- **file-io**: disk_path = os.path.join(CONF.instances_path, ent, 'disk') (src/nova/virt/libvirt/imagecache.py:L127)
- **file-io**: if os.path.exists(disk_path): (src/nova/virt/libvirt/imagecache.py:L128)
- **file-io**: if not os.path.exists(disk_path): (src/nova/virt/libvirt/imagecache.py:L135)
- **file-io**: backing_path = os.path.join( (src/nova/virt/libvirt/imagecache.py:L147)
- **file-io**: base_file = os.path.join(base_dir, fingerprint) (src/nova/virt/libvirt/imagecache.py:L173)
- **file-io**: if os.path.exists(base_file): (src/nova/virt/libvirt/imagecache.py:L174)
- **file-io**: base_file = os.path.join(base_dir, fingerprint + '_sm') (src/nova/virt/libvirt/imagecache.py:L178)
- **file-io**: if os.path.exists(base_file): (src/nova/virt/libvirt/imagecache.py:L179)
- **file-io**: if not os.path.exists(base_file): (src/nova/virt/libvirt/imagecache.py:L191)
- **file-io**: mtime = os.path.getmtime(base_file) (src/nova/virt/libvirt/imagecache.py:L195)
- **file-io**: lock_file = os.path.split(base_file)[-1] (src/nova/virt/libvirt/imagecache.py:L206)
- **process-spawn**: nova.privsep.path.utime(base_file) (src/nova/virt/libvirt/imagecache.py:L281)
- **file-io**: base_file = os.path.join(base_dir, ent) (src/nova/virt/libvirt/imagecache.py:L287)
- **file-io**: if ent in self.used_ephemeral_images and os.path.exists(base_file): (src/nova/virt/libvirt/imagecache.py:L288)
- **process-spawn**: nova.privsep.path.utime(base_file) (src/nova/virt/libvirt/imagecache.py:L289)
- **file-io**: base_file = os.path.join(base_dir, ent) (src/nova/virt/libvirt/imagecache.py:L302)
- **file-io**: if ent in self.used_swap_images and os.path.exists(base_file): (src/nova/virt/libvirt/imagecache.py:L303)
- **process-spawn**: nova.privsep.path.utime(base_file) (src/nova/virt/libvirt/imagecache.py:L304)
- **file-io**: base_dir = os.path.join(CONF.instances_path, (src/nova/virt/libvirt/imagecache.py:L364)
- **file-io**: if not os.path.exists(base_dir): (src/nova/virt/libvirt/imagecache.py:L366)
- **file-io**: os.stat(os.path.join(self.cache_dir, f)).st_blocks * 512 (src/nova/virt/libvirt/imagecache.py:L405)
- **file-io**: for f in os.listdir(self.cache_dir) (src/nova/virt/libvirt/imagecache.py:L406)
- **file-io**: if os.path.isfile(os.path.join(self.cache_dir, f))) (src/nova/virt/libvirt/imagecache.py:L407)
- **file-io**: return os.path.join( (src/nova/virt/libvirt/imagecache.py:L417)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/imagecache.py:L39)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/imagecache.py:L41)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/virt/libvirt/imagecache.py:L34)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime(base_file) (src/nova/virt/libvirt/imagecache.py:L281)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime(base_file) (src/nova/virt/libvirt/imagecache.py:L289)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime(base_file) (src/nova/virt/libvirt/imagecache.py:L304)
- **sink** (`db-write`): def update(self, context, all_instances): (src/nova/virt/libvirt/imagecache.py:L372)

