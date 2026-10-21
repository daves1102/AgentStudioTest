# src/nova/tests/unit/objects/test_instance_mapping.py

## Overview

This file implements the `test_instance_mapping` module, defining 6 classs, 1 function, 15 methods, 8 imports, 1 security surface entry.

Lines: total 261, code 207, comment 14, blank 40

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_db_mapping` | function | (**updates) | exported | `db_mapping` (src/nova/tests/unit/objects/test_instance_mapping.py:L39) | 1/15 | `src/nova/tests/unit/objects/test_instance_mapping.py:L25–L39` |
| `_TestInstanceMappingObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_mapping.py:L42–L207` |
| `_TestInstanceMappingObject._check_cell_map_value` | method | (self, db_val, cell_obj) | private | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance_mapping.py:L43–L44` |
| `_TestInstanceMappingObject.test_get_by_instance_uuid` | method | (self, uuid_from_db) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_mapping.py:L48–L59` |
| `_TestInstanceMappingObject.test_get_by_instance_uuid_cell_mapping_none` | method | (self, uuid_from_db) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance_mapping.py:L63–L72` |
| `_TestInstanceMappingObject.test_create` | method | (self, create_in_db) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_instance_mapping.py:L75–L96` |
| `_TestInstanceMappingObject.test_create_cell_mapping_none` | method | (self, create_in_db) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_instance_mapping.py:L99–L117` |
| `_TestInstanceMappingObject.test_create_cell_mapping_with_qfd_true` | method | (self, create_in_db) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_instance_mapping.py:L120–L135` |
| `_TestInstanceMappingObject.test_save` | method | (self, save_in_db) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_instance_mapping.py:L138–L154` |
| `_TestInstanceMappingObject.test_save_stale_data_error` | method | (self, save_in_db) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_mapping.py:L157–L162` |
| `_TestInstanceMappingObject.test_destroy` | method | (self, destroy_in_db) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_mapping.py:L165–L171` |
| `_TestInstanceMappingObject.test_cell_mapping_nullable` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_instance_mapping.py:L173–L176` |
| `_TestInstanceMappingObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_instance_mapping.py:L178–L194` |
| `_TestInstanceMappingObject.test_obj_load_attr` | method | (self, mock_log) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance_mapping.py:L197–L207` |
| `TestInstanceMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_mapping.py:L210–L212` |
| `TestRemoteInstanceMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_mapping.py:L215–L217` |
| `_TestInstanceMappingListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_mapping.py:L220–L251` |
| `_TestInstanceMappingListObject._check_cell_map_value` | method | (self, db_val, cell_obj) | private | not declared | 1/2 | `src/nova/tests/unit/objects/test_instance_mapping.py:L221–L222` |
| `_TestInstanceMappingListObject.test_get_by_project_id` | method | (self, project_id_from_db) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_mapping.py:L226–L237` |
| `_TestInstanceMappingListObject.test_destroy_bulk` | method | (self, destroy_bulk_in_db) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_instance_mapping.py:L241–L251` |
| `TestInstanceMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_mapping.py:L254–L256` |
| `TestRemoteInstanceMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_mapping.py:L259–L261` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_mapping.py:L13)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/objects/test_instance_mapping.py:L15)
- `sqlalchemy.orm`: imports `exc as orm_exc` (src/nova/tests/unit/objects/test_instance_mapping.py:L16)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance_mapping.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance_mapping.py:L19)
- `nova.objects`: imports `instance_mapping` (src/nova/tests/unit/objects/test_instance_mapping.py:L20)
- `nova.tests.unit.objects`: imports `test_cell_mapping` (src/nova/tests/unit/objects/test_instance_mapping.py:L21)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_mapping.py:L22)

## Security Surface

- **sink** (`db-write`): db_mapping.update(updates) (src/nova/tests/unit/objects/test_instance_mapping.py:L38)

