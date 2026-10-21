# src/nova/virt/vmwareapi/imagecache.py

## Overview

This file implements the `imagecache` module, defining 1 class, 4 constants, 13 methods, 8 imports, 4 side effects, 2 security surface entries.

Lines: total 197, code 142, comment 28, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/imagecache.py:L48–L48` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/imagecache.py:L50–L50` |
| `TIMESTAMP_PREFIX` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/imagecache.py:L52–L52` |
| `TIMESTAMP_FORMAT` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/imagecache.py:L53–L53` |
| `ImageCacheManager` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/imagecache.py:L56–L197` |
| `ImageCacheManager.__init__` | method | (self, session, base_folder) | public | not declared | 1/5 | `src/nova/virt/vmwareapi/imagecache.py:L57–L61` |
| `ImageCacheManager._folder_delete` | method | (self, ds_path, dc_ref) | private | not declared | 3/10 | `src/nova/virt/vmwareapi/imagecache.py:L63–L74` |
| `ImageCacheManager.enlist_image` | method | (self, image_id, datastore, dc_ref) | public | not declared | 1/7 | `src/nova/virt/vmwareapi/imagecache.py:L76–L89` |
| `ImageCacheManager.timestamp_folder_get` | method | (self, ds_path, image_id) | public | `ds_path.join(image_id)` (src/nova/virt/vmwareapi/imagecache.py:L93) | 1/2 | `src/nova/virt/vmwareapi/imagecache.py:L91–L93` |
| `ImageCacheManager.timestamp_cleanup` | method | (self, dc_ref, ds_browser, ds_path) | public | not declared | 2/6 | `src/nova/virt/vmwareapi/imagecache.py:L95–L101` |
| `ImageCacheManager._get_timestamp` | method | (self, ds_browser, ds_path) | private | `file` (src/nova/virt/vmwareapi/imagecache.py:L108) | 4/6 | `src/nova/virt/vmwareapi/imagecache.py:L103–L108` |
| `ImageCacheManager._get_timestamp_filename` | method | (self) | private | `'%s%s' % (TIMESTAMP_PREFIX, timeutils.utcnow().strftime(TIMESTAMP_FORMAT))` (src/nova/virt/vmwareapi/imagecache.py:L111) | 1/3 | `src/nova/virt/vmwareapi/imagecache.py:L110–L112` |
| `ImageCacheManager._get_datetime_from_filename` | method | (self, timestamp_filename) | private | `timeutils.parse_strtime(ts, fmt=TIMESTAMP_FORMAT)` (src/nova/virt/vmwareapi/imagecache.py:L116) | 1/3 | `src/nova/virt/vmwareapi/imagecache.py:L114–L116` |
| `ImageCacheManager._get_ds_browser` | method | (self, ds_ref) | private | `ds_browser` (src/nova/virt/vmwareapi/imagecache.py:L125) | 2/8 | `src/nova/virt/vmwareapi/imagecache.py:L118–L125` |
| `ImageCacheManager._list_datastore_images` | method | (self, ds_path, datastore) | private | `{'unexplained_images': [], 'originals': originals}` (src/nova/virt/vmwareapi/imagecache.py:L137) | 1/6 | `src/nova/virt/vmwareapi/imagecache.py:L127–L138` |
| `ImageCacheManager._age_cached_images` | method | (self, context, datastore, dc_info, ds_path) | private | not declared | 6/30 | `src/nova/virt/vmwareapi/imagecache.py:L140–L176` |
| `ImageCacheManager.update` | method | (self, context, instances, datastores_info) | public | not declared | 2/8 | `src/nova/virt/vmwareapi/imagecache.py:L178–L193` |
| `ImageCacheManager.get_image_cache_folder` | method | (self, datastore, image_id) | public | `datastore.build_path(self._base_folder, image_id)` (src/nova/virt/vmwareapi/imagecache.py:L197) | 1/2 | `src/nova/virt/vmwareapi/imagecache.py:L195–L197` |

## Dependencies

- `oslo_concurrency`: imports `lockutils` (src/nova/virt/vmwareapi/imagecache.py:L38)
- `oslo_config`: imports `cfg` (src/nova/virt/vmwareapi/imagecache.py:L39)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/imagecache.py:L40)
- `oslo_utils`: imports `timeutils` (src/nova/virt/vmwareapi/imagecache.py:L41)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/imagecache.py:L42)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/imagecache.py:L43)
- `nova.virt`: imports `imagecache` (src/nova/virt/vmwareapi/imagecache.py:L45)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/virt/vmwareapi/imagecache.py:L46)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/imagecache.py:L48)
- **global-mutation**: CONF = cfg.CONF (src/nova/virt/vmwareapi/imagecache.py:L50)
- **global-mutation**: TIMESTAMP_PREFIX = 'ts-' (src/nova/virt/vmwareapi/imagecache.py:L52)
- **global-mutation**: TIMESTAMP_FORMAT = '%Y-%m-%d-%H-%M-%S' (src/nova/virt/vmwareapi/imagecache.py:L53)

## Security Surface

- **sink** (`db-write`): def update(self, context, instances, datastores_info): (src/nova/virt/vmwareapi/imagecache.py:L178)
- **sink** (`db-write`): This will invoke the cache manager. This will update the cache (src/nova/virt/vmwareapi/imagecache.py:L181)

