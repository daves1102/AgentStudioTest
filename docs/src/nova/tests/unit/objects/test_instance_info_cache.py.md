# src/nova/tests/unit/objects/test_instance_info_cache.py

## Overview

This file implements the `test_instance_info_cache` module, defining 3 classs, 6 methods, 1 variable, 10 imports.

Lines: total 127, code 93, comment 15, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_info_cache` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_info_cache.py:L29–L36` |
| `_TestInstanceInfoCacheObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_info_cache.py:L39–L117` |
| `_TestInstanceInfoCacheObject.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance_info_cache.py:L41–L49` |
| `_TestInstanceInfoCacheObject.test_get_by_instance_uuid_no_entries` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_info_cache.py:L52–L57` |
| `_TestInstanceInfoCacheObject.test_new` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance_info_cache.py:L59–L65` |
| `_TestInstanceInfoCacheObject.test_save_updates_self` | method | (self, mock_update) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_instance_info_cache.py:L68–L84` |
| `_TestInstanceInfoCacheObject.test_save_fkey_constraint_fail` | method | (self, mock_update) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_instance_info_cache.py:L87–L108` |
| `_TestInstanceInfoCacheObject.test_refresh` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_info_cache.py:L112–L117` |
| `TestInstanceInfoCacheObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_info_cache.py:L120–L122` |
| `TestInstanceInfoCacheObjectRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_info_cache.py:L125–L127` |

## Dependencies

- `import datetime` (src/nova/tests/unit/objects/test_instance_info_cache.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_info_cache.py:L16)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/objects/test_instance_info_cache.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance_info_cache.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_instance_info_cache.py:L20)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_instance_info_cache.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance_info_cache.py:L23)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/objects/test_instance_info_cache.py:L24)
- `nova.objects`: imports `instance_info_cache` (src/nova/tests/unit/objects/test_instance_info_cache.py:L25)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_info_cache.py:L26)

