# src/nova/tests/functional/compute/test_instance_list.py

## Overview

This file implements the `test_instance_list` module, defining 2 classs, 1 constant, 31 methods, 8 imports, 1 side effect.

Lines: total 562, code 431, comment 48, blank 83

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceListTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_instance_list.py:L25–L458` |
| `InstanceListTestCase.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_instance_list.py:L26–L26` |
| `InstanceListTestCase.setUp` | method | (self) | public | not declared | 5/39 | `src/nova/tests/functional/compute/test_instance_list.py:L28–L74` |
| `InstanceListTestCase.test_get_sorted` | method | (self) | public | not declared | 2/13 | `src/nova/tests/functional/compute/test_instance_list.py:L76–L88` |
| `InstanceListTestCase.test_get_sorted_descending` | method | (self) | public | not declared | 2/13 | `src/nova/tests/functional/compute/test_instance_list.py:L90–L102` |
| `InstanceListTestCase.test_get_sorted_with_filter` | method | (self) | public | not declared | 4/14 | `src/nova/tests/functional/compute/test_instance_list.py:L104–L117` |
| `InstanceListTestCase.test_get_sorted_by_defaults` | method | (self) | public | not declared | 3/13 | `src/nova/tests/functional/compute/test_instance_list.py:L119–L131` |
| `InstanceListTestCase.test_get_sorted_with_limit` | method | (self) | public | not declared | 3/8 | `src/nova/tests/functional/compute/test_instance_list.py:L133–L140` |
| `InstanceListTestCase.test_get_sorted_with_large_limit` | method | (self) | public | not declared | 2/7 | `src/nova/tests/functional/compute/test_instance_list.py:L142–L148` |
| `InstanceListTestCase.test_get_sorted_with_large_limit_batched` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/compute/test_instance_list.py:L150–L157` |
| `InstanceListTestCase._test_get_sorted_with_limit_marker` | method | (self, sort_by, pages=2, pagesize=2, sort_dir='asc') | private | not declared | 11/34 | `src/nova/tests/functional/compute/test_instance_list.py:L159–L226` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_stable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/compute/test_instance_list.py:L228–L233` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_stable_reverse` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/compute/test_instance_list.py:L235–L241` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_stable_different_pages` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/compute/test_instance_list.py:L243–L249` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_stable_different_pages_reverse` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/compute/test_instance_list.py:L251–L258` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_random` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/compute/test_instance_list.py:L260–L267` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_random_different_pages` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/compute/test_instance_list.py:L269–L275` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_datetime` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/compute/test_instance_list.py:L277–L283` |
| `InstanceListTestCase.test_get_sorted_with_limit_marker_datetime_same` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/compute/test_instance_list.py:L285–L291` |
| `InstanceListTestCase.test_get_sorted_with_deleted_marker` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/compute/test_instance_list.py:L293–L309` |
| `InstanceListTestCase.test_get_sorted_with_invalid_marker` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/compute/test_instance_list.py:L311–L315` |
| `InstanceListTestCase.test_get_sorted_with_purged_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/compute/test_instance_list.py:L317–L328` |
| `InstanceListTestCase._test_get_paginated_with_filter` | method | (self, filters) | private | `found_uuids` (src/nova/tests/functional/compute/test_instance_list.py:L348) | 4/15 | `src/nova/tests/functional/compute/test_instance_list.py:L330–L348` |
| `InstanceListTestCase.test_get_paginated_with_uuid_filter` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/compute/test_instance_list.py:L350–L365` |
| `InstanceListTestCase.test_get_paginated_with_other_filter` | method | (self) | public | not declared | 3/6 | `src/nova/tests/functional/compute/test_instance_list.py:L367–L380` |
| `InstanceListTestCase.test_get_paginated_with_uuid_and_other_filter` | method | (self) | public | not declared | 2/7 | `src/nova/tests/functional/compute/test_instance_list.py:L382–L398` |
| `InstanceListTestCase.test_get_sorted_with_faults` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/compute/test_instance_list.py:L400–L412` |
| `InstanceListTestCase.test_get_sorted_paginated_with_faults` | method | (self) | public | not declared | 5/20 | `src/nova/tests/functional/compute/test_instance_list.py:L414–L440` |
| `InstanceListTestCase.test_instance_list_minimal_cells` | method | (self) | public | not declared | 5/15 | `src/nova/tests/functional/compute/test_instance_list.py:L442–L458` |
| `TestInstanceListObjects` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_instance_list.py:L461–L562` |
| `TestInstanceListObjects.setUp` | method | (self) | public | not declared | 5/39 | `src/nova/tests/functional/compute/test_instance_list.py:L462–L508` |
| `TestInstanceListObjects.test_get_instance_objects_sorted` | method | (self) | public | not declared | 5/15 | `src/nova/tests/functional/compute/test_instance_list.py:L510–L526` |
| `TestInstanceListObjects.test_get_instance_objects_sorted_with_fault` | method | (self) | public | not declared | 5/15 | `src/nova/tests/functional/compute/test_instance_list.py:L528–L545` |
| `TestInstanceListObjects.test_get_instance_objects_sorted_paged` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/compute/test_instance_list.py:L547–L562` |

## Dependencies

- `import datetime` (src/nova/tests/functional/compute/test_instance_list.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/compute/test_instance_list.py:L15)
- `nova.compute`: imports `instance_list` (src/nova/tests/functional/compute/test_instance_list.py:L17)
- `nova`: imports `context` (src/nova/tests/functional/compute/test_instance_list.py:L18)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/compute/test_instance_list.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/compute/test_instance_list.py:L20)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_instance_list.py:L21)
- `nova`: imports `test` (src/nova/tests/functional/compute/test_instance_list.py:L22)

## Side Effects

- **global-mutation**: NUMBER_OF_CELLS = 3 (src/nova/tests/functional/compute/test_instance_list.py:L26)

