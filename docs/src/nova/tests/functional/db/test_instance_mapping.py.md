# src/nova/tests/functional/db/test_instance_mapping.py

## Overview

This file implements the `test_instance_mapping` module, defining 2 classs, 2 constants, 2 functions, 19 methods, 2 variables, 12 imports, 2 side effects, 2 security surface entries.

Lines: total 608, code 422, comment 109, blank 77

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `sample_mapping` | variable | — | exported | not declared | — | `src/nova/tests/functional/db/test_instance_mapping.py:L29–L32` |
| `sample_cell_mapping` | variable | — | exported | not declared | — | `src/nova/tests/functional/db/test_instance_mapping.py:L35–L39` |
| `create_cell_mapping` | function | (**kwargs) | exported | `cell_mapping.CellMapping._create_in_db(ctxt, args)` (src/nova/tests/functional/db/test_instance_mapping.py:L48) | 2/7 | `src/nova/tests/functional/db/test_instance_mapping.py:L42–L48` |
| `create_mapping` | function | (**kwargs) | exported | `instance_mapping.InstanceMapping._create_in_db(ctxt, args)` (src/nova/tests/functional/db/test_instance_mapping.py:L57) | 2/7 | `src/nova/tests/functional/db/test_instance_mapping.py:L51–L57` |
| `InstanceMappingTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_instance_mapping.py:L60–L400` |
| `InstanceMappingTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_instance_mapping.py:L61–L61` |
| `InstanceMappingTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_instance_mapping.py:L63–L67` |
| `InstanceMappingTestCase.test_get_by_instance_uuid` | method | (self) | public | not declared | 4/9 | `src/nova/tests/functional/db/test_instance_mapping.py:L69–L77` |
| `InstanceMappingTestCase.test_get_by_instance_uuid_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_instance_mapping.py:L79–L82` |
| `InstanceMappingTestCase.test_save_in_db` | method | (self) | public | not declared | 4/11 | `src/nova/tests/functional/db/test_instance_mapping.py:L84–L94` |
| `InstanceMappingTestCase.test_destroy_in_db` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_instance_mapping.py:L96–L103` |
| `InstanceMappingTestCase.test_cell_id_nullable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/db/test_instance_mapping.py:L105–L107` |
| `InstanceMappingTestCase.test_modify_cell_mapping` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/db/test_instance_mapping.py:L109–L131` |
| `InstanceMappingTestCase.test_populate_queued_for_delete` | method | (self) | public | not declared | 11/51 | `src/nova/tests/functional/db/test_instance_mapping.py:L133–L210` |
| `InstanceMappingTestCase.test_user_id_not_set_if_null_from_db` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_instance_mapping.py:L212–L220` |
| `InstanceMappingTestCase.test_populate_user_id` | method | (self, mock_log_warning) | public | not declared | 9/82 | `src/nova/tests/functional/db/test_instance_mapping.py:L223–L363` |
| `InstanceMappingTestCase.test_populate_user_id_instance_get_fail` | method | (self, mock_inst_get) | public | not declared | 3/26 | `src/nova/tests/functional/db/test_instance_mapping.py:L366–L400` |
| `InstanceMappingListTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_instance_mapping.py:L403–L608` |
| `InstanceMappingListTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_instance_mapping.py:L404–L404` |
| `InstanceMappingListTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_instance_mapping.py:L406–L410` |
| `InstanceMappingListTestCase.test_get_by_project_id_from_db` | method | (self) | public | not declared | 3/13 | `src/nova/tests/functional/db/test_instance_mapping.py:L412–L425` |
| `InstanceMappingListTestCase.test_instance_mapping_list_get_by_cell_id` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/db/test_instance_mapping.py:L427–L448` |
| `InstanceMappingListTestCase.test_instance_mapping_get_by_instance_uuids` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_instance_mapping.py:L450–L460` |
| `InstanceMappingListTestCase.test_get_not_deleted_by_cell_and_project` | method | (self) | public | not declared | 7/40 | `src/nova/tests/functional/db/test_instance_mapping.py:L462–L519` |
| `InstanceMappingListTestCase.test_get_not_deleted_by_cell_and_project_limit` | method | (self) | public | not declared | 2/31 | `src/nova/tests/functional/db/test_instance_mapping.py:L521–L554` |
| `InstanceMappingListTestCase.test_get_not_deleted_by_cell_and_project_None` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/db/test_instance_mapping.py:L556–L580` |
| `InstanceMappingListTestCase.test_get_counts` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/db/test_instance_mapping.py:L582–L608` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/db/test_instance_mapping.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/db/test_instance_mapping.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_instance_mapping.py:L16)
- `nova.compute`: imports `vm_states` (src/nova/tests/functional/db/test_instance_mapping.py:L18)
- `nova`: imports `context` (src/nova/tests/functional/db/test_instance_mapping.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_instance_mapping.py:L20)
- `nova.objects`: imports `cell_mapping` (src/nova/tests/functional/db/test_instance_mapping.py:L21)
- `nova.objects`: imports `instance` (src/nova/tests/functional/db/test_instance_mapping.py:L22)
- `nova.objects`: imports `instance_mapping` (src/nova/tests/functional/db/test_instance_mapping.py:L23)
- `nova.objects`: imports `virtual_interface` (src/nova/tests/functional/db/test_instance_mapping.py:L24)
- `nova`: imports `test` (src/nova/tests/functional/db/test_instance_mapping.py:L25)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/db/test_instance_mapping.py:L26)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_instance_mapping.py:L61)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_instance_mapping.py:L404)

## Security Surface

- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/functional/db/test_instance_mapping.py:L46)
- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/functional/db/test_instance_mapping.py:L55)

