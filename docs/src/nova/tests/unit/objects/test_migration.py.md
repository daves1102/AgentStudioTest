# src/nova/tests/unit/objects/test_migration.py

## Overview

This file implements the `test_migration` module, defining 3 classs, 1 constant, 1 function, 25 methods, 10 imports, 1 side effect, 1 security surface entry.

Lines: total 416, code 351, comment 19, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration.py:L29–L29` |
| `fake_db_migration` | function | (**updates) | exported | `db_instance` (src/nova/tests/unit/objects/test_migration.py:L65) | 2/33 | `src/nova/tests/unit/objects/test_migration.py:L32–L65` |
| `_TestMigrationObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_migration.py:L68–L406` |
| `_TestMigrationObject.test_get_by_id` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_migration.py:L70–L76` |
| `_TestMigrationObject.test_get_by_instance_and_status` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_migration.py:L79–L88` |
| `_TestMigrationObject.test_get_in_progress_by_instance` | method | (self, m_get_mig) | public | not declared | 2/10 | `src/nova/tests/unit/objects/test_migration.py:L91–L102` |
| `_TestMigrationObject.test_create` | method | (self, mock_create) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_migration.py:L105–L126` |
| `_TestMigrationObject.test_create_with_user_id_and_project_id_set_in_ctxt` | method | (self, mock_create) | public | not declared | 1/23 | `src/nova/tests/unit/objects/test_migration.py:L129–L151` |
| `_TestMigrationObject.test_create_without_node_id` | method | (self, mock_create) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_migration.py:L154–L171` |
| `_TestMigrationObject.test_get_dest_compute_id` | method | (self, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_migration.py:L174–L195` |
| `_TestMigrationObject.test_recreate_fails` | method | (self, mock_create) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_migration.py:L198–L215` |
| `_TestMigrationObject.test_create_fails_migration_type` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_migration.py:L217–L223` |
| `_TestMigrationObject.test_save` | method | (self, mock_update) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_migration.py:L226–L236` |
| `_TestMigrationObject.test_instance` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_migration.py:L239–L253` |
| `_TestMigrationObject.test_instance_setter` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_migration.py:L255–L263` |
| `_TestMigrationObject.test_get_unconfirmed_by_dest_compute` | method | (self, mock_get) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_migration.py:L266–L277` |
| `_TestMigrationObject.test_get_in_progress_by_host_and_node` | method | (self, mock_get) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_migration.py:L280–L291` |
| `_TestMigrationObject.test_get_by_filters` | method | (self, mock_get) | public | not declared | 2/13 | `src/nova/tests/unit/objects/test_migration.py:L294–L306` |
| `_TestMigrationObject.test_migrate_old_resize_record` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_migration.py:L308–L314` |
| `_TestMigrationObject.test_migrate_old_migration_record` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_migration.py:L316–L324` |
| `_TestMigrationObject.test_migrate_unset_type_resize` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_migration.py:L326–L330` |
| `_TestMigrationObject.test_migrate_unset_type_migration` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_migration.py:L332–L336` |
| `_TestMigrationObject.test_obj_load_attr_hidden` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_migration.py:L338–L341` |
| `_TestMigrationObject.test_obj_load_attr_cross_cell_move` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_migration.py:L343–L346` |
| `_TestMigrationObject.test_get_by_id_and_instance` | method | (self, fake_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_migration.py:L349–L354` |
| `_TestMigrationObject.test_create_uuid_on_load` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_migration.py:L356–L373` |
| `_TestMigrationObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/objects/test_migration.py:L375–L400` |
| `_TestMigrationObject.test_get_by_uuid` | method | (self, mock_db_get) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_migration.py:L403–L406` |
| `TestMigrationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration.py:L409–L411` |
| `TestRemoteMigrationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migration.py:L414–L416` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_migration.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/objects/test_migration.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_migration.py:L18)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_migration.py:L20)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_migration.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_migration.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_migration.py:L23)
- `nova.objects`: imports `migration` (src/nova/tests/unit/objects/test_migration.py:L24)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_migration.py:L25)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_migration.py:L26)

## Side Effects

- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_migration.py:L29)

## Security Surface

- **sink** (`db-write`): db_instance.update(updates) (src/nova/tests/unit/objects/test_migration.py:L64)

