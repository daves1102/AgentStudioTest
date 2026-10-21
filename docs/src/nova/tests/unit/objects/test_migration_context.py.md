# src/nova/tests/unit/objects/test_migration_context.py

## Overview

This file implements the `test_migration_context` module, defining 3 classs, 2 functions, 7 methods, 3 variables, 8 imports.

Lines: total 158, code 123, comment 11, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_instance_uuid` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration_context.py:L25–L25` |
| `fake_migration_context_obj` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration_context.py:L27–L27` |
| `fake_db_context` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration_context.py:L42–L50` |
| `get_fake_migration_context_obj` | function | (ctxt) | exported | `obj` (src/nova/tests/unit/objects/test_migration_context.py:L56) | 1/4 | `src/nova/tests/unit/objects/test_migration_context.py:L53–L56` |
| `get_fake_migration_context_with_pci_devs` | function | (ctxt=None) | exported | `obj` (src/nova/tests/unit/objects/test_migration_context.py:L73) | 1/15 | `src/nova/tests/unit/objects/test_migration_context.py:L59–L73` |
| `_TestMigrationContext` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_migration_context.py:L76–L136` |
| `_TestMigrationContext._test_get_by_instance_uuid` | method | (self, db_data) | private | not declared | 3/31 | `src/nova/tests/unit/objects/test_migration_context.py:L78–L108` |
| `_TestMigrationContext.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_migration_context.py:L111–L113` |
| `_TestMigrationContext.test_get_by_instance_uuid_none` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_migration_context.py:L116–L120` |
| `_TestMigrationContext.test_get_by_instance_uuid_missing` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_migration_context.py:L123–L128` |
| `_TestMigrationContext.test_is_cross_cell_move` | method | (self, mock_get_by_id) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_migration_context.py:L132–L136` |
| `TestMigrationContext` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration_context.py:L139–L153` |
| `TestMigrationContext.test_pci_mapping_for_migration` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_migration_context.py:L141–L146` |
| `TestMigrationContext.test_pci_mapping_for_migration_revert` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_migration_context.py:L148–L153` |
| `TestMigrationContextRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration_context.py:L156–L158` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_migration_context.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_migration_context.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_migration_context.py:L16)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_migration_context.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_migration_context.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_migration_context.py:L20)
- `nova.tests.unit.objects`: imports `test_instance_numa` (src/nova/tests/unit/objects/test_migration_context.py:L21)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_migration_context.py:L22)

