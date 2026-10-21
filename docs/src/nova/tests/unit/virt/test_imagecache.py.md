# src/nova/tests/unit/virt/test_imagecache.py

## Overview

This file implements the `test_imagecache` module, defining 1 class, 1 constant, 4 methods, 3 variables, 11 imports, 1 side effect, 1 security surface entry.

Lines: total 183, code 144, comment 14, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_imagecache.py:L29–L29` |
| `swap_bdm_128` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/test_imagecache.py:L31–L40` |
| `swap_bdm_256` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/test_imagecache.py:L42–L51` |
| `ephemeral_bdm` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/test_imagecache.py:L53–L63` |
| `ImageCacheManagerTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_imagecache.py:L66–L183` |
| `ImageCacheManagerTests.test_configuration_defaults` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_imagecache.py:L68–L74` |
| `ImageCacheManagerTests.test_cache_manager` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_imagecache.py:L76–L87` |
| `ImageCacheManagerTests.test_list_running_instances` | method | (self, mock_bdms_by_uuid) | public | not declared | 2/53 | `src/nova/tests/unit/virt/test_imagecache.py:L91–L151` |
| `ImageCacheManagerTests.test_list_resizing_instances` | method | (self, mock_bdms_by_uuid) | public | not declared | 2/24 | `src/nova/tests/unit/virt/test_imagecache.py:L155–L183` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_imagecache.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/test_imagecache.py:L17)
- `nova`: imports `block_device` (src/nova/tests/unit/virt/test_imagecache.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/test_imagecache.py:L20)
- `import nova.conf` (src/nova/tests/unit/virt/test_imagecache.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/virt/test_imagecache.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/virt/test_imagecache.py:L23)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/virt/test_imagecache.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_imagecache.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/test_imagecache.py:L26)
- `nova.virt`: imports `imagecache` (src/nova/tests/unit/virt/test_imagecache.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/test_imagecache.py:L29)

## Security Surface

- **sink** (`db-write`): cache_manager.update, None, []) (src/nova/tests/unit/virt/test_imagecache.py:L80)

