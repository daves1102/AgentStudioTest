# src/nova/tests/functional/db/test_cell_mapping.py

## Overview

This file implements the `test_cell_mapping` module, defining 2 classs, 3 constants, 1 function, 10 methods, 7 imports, 3 side effects, 1 security surface entry.

Lines: total 166, code 122, comment 17, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SAMPLE_MAPPING` | constant | — | exported | not declared | — | `src/nova/tests/functional/db/test_cell_mapping.py:L23–L26` |
| `create_mapping` | function | (**kwargs) | exported | `cell_mapping.CellMapping._create_in_db(ctxt, args)` (src/nova/tests/functional/db/test_cell_mapping.py:L35) | 2/7 | `src/nova/tests/functional/db/test_cell_mapping.py:L29–L35` |
| `CellMappingTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_cell_mapping.py:L38–L81` |
| `CellMappingTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_cell_mapping.py:L39–L39` |
| `CellMappingTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_cell_mapping.py:L41–L45` |
| `CellMappingTestCase.test_get_by_uuid` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/db/test_cell_mapping.py:L47–L52` |
| `CellMappingTestCase.test_get_by_uuid_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_cell_mapping.py:L54–L57` |
| `CellMappingTestCase.test_save_in_db` | method | (self) | public | not declared | 4/10 | `src/nova/tests/functional/db/test_cell_mapping.py:L59–L68` |
| `CellMappingTestCase.test_destroy_in_db` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_cell_mapping.py:L70–L76` |
| `CellMappingTestCase.test_destroy_in_db_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_cell_mapping.py:L78–L81` |
| `CellMappingListTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_cell_mapping.py:L84–L166` |
| `CellMappingListTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_cell_mapping.py:L85–L85` |
| `CellMappingListTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_cell_mapping.py:L87–L89` |
| `CellMappingListTestCase.test_get_all` | method | (self) | public | not declared | 3/12 | `src/nova/tests/functional/db/test_cell_mapping.py:L91–L103` |
| `CellMappingListTestCase.test_get_by_disabled` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/db/test_cell_mapping.py:L105–L121` |
| `CellMappingListTestCase.test_get_by_project_id` | method | (self) | public | not declared | 4/33 | `src/nova/tests/functional/db/test_cell_mapping.py:L123–L166` |

## Dependencies

- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_cell_mapping.py:L13)
- `nova`: imports `context` (src/nova/tests/functional/db/test_cell_mapping.py:L15)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_cell_mapping.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_cell_mapping.py:L17)
- `nova.objects`: imports `cell_mapping` (src/nova/tests/functional/db/test_cell_mapping.py:L18)
- `nova`: imports `test` (src/nova/tests/functional/db/test_cell_mapping.py:L19)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/db/test_cell_mapping.py:L20)

## Side Effects

- **global-mutation**: SAMPLE_MAPPING = {'uuid': '', (src/nova/tests/functional/db/test_cell_mapping.py:L23)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_cell_mapping.py:L39)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_cell_mapping.py:L85)

## Security Surface

- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/functional/db/test_cell_mapping.py:L33)

