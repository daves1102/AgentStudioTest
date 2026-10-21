# src/nova/tests/unit/objects/test_tag.py

## Overview

This file implements the `test_tag` module, defining 6 classs, 3 constants, 1 function, 7 methods, 3 variables, 3 imports, 3 side effects.

Lines: total 115, code 74, comment 11, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RESOURCE_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L18–L18` |
| `TAG_NAME1` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L19–L19` |
| `TAG_NAME2` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L20–L20` |
| `fake_tag1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L22–L25` |
| `fake_tag2` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L27–L30` |
| `fake_tag_list` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L32–L32` |
| `_get_tag` | function | (resource_id, tag_name, context=None) | unexported | `t` (src/nova/tests/unit/objects/test_tag.py:L39) | 1/5 | `src/nova/tests/unit/objects/test_tag.py:L35–L39` |
| `_TestTagObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L42–L62` |
| `_TestTagObject.test_create` | method | (self, tag_add) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_tag.py:L44–L50` |
| `_TestTagObject.test_destroy` | method | (self, tag_delete) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_tag.py:L53–L56` |
| `_TestTagObject.test_exists` | method | (self, instance_tag_exists) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_tag.py:L59–L62` |
| `TestMigrationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L65–L67` |
| `TestRemoteMigrationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L70–L72` |
| `_TestTagList` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L75–L107` |
| `_TestTagList._compare_tag_list` | method | (self, tag_list, tag_list_obj) | private | not declared | 2/6 | `src/nova/tests/unit/objects/test_tag.py:L76–L82` |
| `_TestTagList.test_get_by_resource_id` | method | (self, get_by_inst) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_tag.py:L85–L92` |
| `_TestTagList.test_create` | method | (self, tag_set) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_tag.py:L95–L102` |
| `_TestTagList.test_destroy` | method | (self, tag_delete_all) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_tag.py:L105–L107` |
| `TestTagList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L110–L111` |
| `TestTagListRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_tag.py:L114–L115` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_tag.py:L13)
- `nova.objects`: imports `tag` (src/nova/tests/unit/objects/test_tag.py:L15)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_tag.py:L16)

## Side Effects

- **global-mutation**: RESOURCE_ID = '123' (src/nova/tests/unit/objects/test_tag.py:L18)
- **global-mutation**: TAG_NAME1 = 'fake-tag1' (src/nova/tests/unit/objects/test_tag.py:L19)
- **global-mutation**: TAG_NAME2 = 'fake-tag2' (src/nova/tests/unit/objects/test_tag.py:L20)

