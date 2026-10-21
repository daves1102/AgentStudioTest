# src/nova/tests/unit/virt/vmwareapi/test_imagecache.py

## Overview

This file implements the `test_imagecache` module, defining 1 class, 2 constants, 11 functions, 11 methods, 13 imports, 2 side effects, 1 security surface entry.

Lines: total 276, code 227, comment 16, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L32–L32` |
| `ImageCacheManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L35–L276` |
| `ImageCacheManagerTestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L37–L37` |
| `ImageCacheManagerTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L39–L46` |
| `ImageCacheManagerTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L48–L50` |
| `ImageCacheManagerTestCase.test_timestamp_cleanup` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L52–L79` |
| `ImageCacheManagerTestCase.test_timestamp_cleanup.fake_get_timestamp` | function | (ds_browser, ds_path) | public | `` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L57); `ts` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L60) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L53–L60` |
| `ImageCacheManagerTestCase.test_get_timestamp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L81–L101` |
| `ImageCacheManagerTestCase.test_get_timestamp.fake_get_sub_folders` | function | (session, ds_browser, ds_path) | public | `files` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L88) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L82–L88` |
| `ImageCacheManagerTestCase.test_get_timestamp_filename` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L103–L106` |
| `ImageCacheManagerTestCase.test_get_datetime_from_filename` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L108–L110` |
| `ImageCacheManagerTestCase.test_get_ds_browser` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L112–L122` |
| `ImageCacheManagerTestCase.test_list_datastore_images` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L124–L148` |
| `ImageCacheManagerTestCase.test_list_datastore_images.fake_get_object_property` | function | (vim, mobj, property_name) | public | `'fake-ds-browser'` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L126) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L125–L126` |
| `ImageCacheManagerTestCase.test_list_datastore_images.fake_get_sub_folders` | function | (session, ds_browser, ds_path) | public | `files` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L131) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L128–L131` |
| `ImageCacheManagerTestCase.test_enlist_image` | method | (self, mock_get_ds_browser, mock_timestamp_cleanup, mock_timestamp_folder_get) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L153–L178` |
| `ImageCacheManagerTestCase.test_age_cached_images` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L180–L233` |
| `ImageCacheManagerTestCase.test_age_cached_images.fake_get_ds_browser` | function | (ds_ref) | public | `'fake-ds-browser'` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L182) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L181–L182` |
| `ImageCacheManagerTestCase.test_age_cached_images.fake_get_timestamp` | function | (ds_browser, ds_path) | public | `` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L189); `'ts-2012-11-22-10-00-00'` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L192); `'ts-2012-11-20-12-00-00'` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L195) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L184–L196` |
| `ImageCacheManagerTestCase.test_age_cached_images.fake_mkdir` | function | (session, ts_path, dc_ref) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L198–L201` |
| `ImageCacheManagerTestCase.test_age_cached_images.fake_file_delete` | function | (session, ds_path, dc_ref) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L203–L204` |
| `ImageCacheManagerTestCase.test_age_cached_images.fake_timestamp_cleanup` | function | (dc_ref, ds_browser, ds_path) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L206–L207` |
| `ImageCacheManagerTestCase.test_update` | method | (self, mock_bdms_by_inst) | public | not declared | 2/30 | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L237–L276` |
| `ImageCacheManagerTestCase.test_update.fake_list_datastore_images` | function | (ds_path, datastore) | public | `{'unexplained_images': [], 'originals': self.images}` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L239) | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L238–L240` |
| `ImageCacheManagerTestCase.test_update.fake_age_cached_images` | function | (context, datastore, dc_info, ds_path) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L242–L248` |

## Dependencies

- `import datetime` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L18)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L20)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L21)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L26)
- `nova.tests.unit.virt.vmwareapi`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L27)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L28)
- `nova.virt.vmwareapi`: imports `imagecache` (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L29)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L32)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L37)

## Security Surface

- **sink** (`db-write`): self._imagecache.update('context', all_instances, datastores_info) (src/nova/tests/unit/virt/vmwareapi/test_imagecache.py:L276)

