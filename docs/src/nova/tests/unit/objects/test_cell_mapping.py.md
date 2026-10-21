# src/nova/tests/unit/objects/test_cell_mapping.py

## Overview

This file implements the `test_cell_mapping` module, defining 6 classs, 1 function, 21 methods, 7 imports, 1 security surface entry.

Lines: total 341, code 270, comment 27, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_db_mapping` | function | (**updates) | exported | `db_mapping` (src/nova/tests/unit/objects/test_cell_mapping.py:L36) | 1/13 | `src/nova/tests/unit/objects/test_cell_mapping.py:L24–L36` |
| `_TestCellMappingObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_cell_mapping.py:L39–L266` |
| `_TestCellMappingObject.test_get_by_uuid` | method | (self, uuid_from_db) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_cell_mapping.py:L41–L48` |
| `_TestCellMappingObject.test_get_by_uuid_invalid` | method | (self, uuid_from_db) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_cell_mapping.py:L52–L58` |
| `_TestCellMappingObject.test_create` | method | (self, create_in_db) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_cell_mapping.py:L61–L76` |
| `_TestCellMappingObject.test_save` | method | (self, save_in_db) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_cell_mapping.py:L79–L91` |
| `_TestCellMappingObject.test_destroy` | method | (self, destroy_in_db) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_cell_mapping.py:L94–L100` |
| `_TestCellMappingObject.test_is_cell0` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_cell_mapping.py:L102–L107` |
| `_TestCellMappingObject.test_identity_no_name_set` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_cell_mapping.py:L109–L111` |
| `_TestCellMappingObject.test_identity_name_is_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_cell_mapping.py:L113–L115` |
| `_TestCellMappingObject.test_identity_with_name` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_cell_mapping.py:L117–L119` |
| `_TestCellMappingObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_cell_mapping.py:L121–L130` |
| `_TestCellMappingObject.test_formatted_db_url` | method | (self, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_cell_mapping.py:L133–L145` |
| `_TestCellMappingObject.test_formatted_mq_url` | method | (self, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_cell_mapping.py:L148–L160` |
| `_TestCellMappingObject.test_formatted_mq_url_multi_netloc1` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_cell_mapping.py:L163–L178` |
| `_TestCellMappingObject.test_formatted_mq_url_multi_netloc1_but_ipv6` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_cell_mapping.py:L181–L196` |
| `_TestCellMappingObject.test_formatted_mq_url_multi_netloc2` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_cell_mapping.py:L199–L214` |
| `_TestCellMappingObject.test_formatted_mq_url_multi_netloc3` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_cell_mapping.py:L217–L232` |
| `_TestCellMappingObject.test_formatted_url_without_base_set` | method | (self, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_cell_mapping.py:L235–L249` |
| `_TestCellMappingObject.test_non_formatted_url_with_no_base` | method | (self, mock_format, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_cell_mapping.py:L253–L266` |
| `TestCellMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_cell_mapping.py:L269–L271` |
| `TestRemoteCellMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_cell_mapping.py:L274–L276` |
| `_TestCellMappingListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_cell_mapping.py:L279–L331` |
| `_TestCellMappingListObject.test_get_all` | method | (self, get_all_from_db) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_cell_mapping.py:L281–L288` |
| `_TestCellMappingListObject.test_get_all_sorted` | method | (self) | public | not declared | 3/11 | `src/nova/tests/unit/objects/test_cell_mapping.py:L290–L302` |
| `_TestCellMappingListObject.test_get_by_disabled` | method | (self) | public | not declared | 5/20 | `src/nova/tests/unit/objects/test_cell_mapping.py:L304–L331` |
| `TestCellMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_cell_mapping.py:L334–L336` |
| `TestRemoteCellMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_cell_mapping.py:L339–L341` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_cell_mapping.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_cell_mapping.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/objects/test_cell_mapping.py:L16)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_cell_mapping.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_cell_mapping.py:L19)
- `nova.objects`: imports `cell_mapping` (src/nova/tests/unit/objects/test_cell_mapping.py:L20)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_cell_mapping.py:L21)

## Security Surface

- **sink** (`db-write`): db_mapping.update(updates) (src/nova/tests/unit/objects/test_cell_mapping.py:L35)

