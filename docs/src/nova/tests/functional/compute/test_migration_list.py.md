# src/nova/tests/functional/compute/test_migration_list.py

## Overview

This file implements the `test_migration_list` module, defining 1 class, 1 constant, 5 methods, 7 imports, 1 side effect.

Lines: total 99, code 71, comment 14, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestMigrationListObjects` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_migration_list.py:L24–L99` |
| `TestMigrationListObjects.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_migration_list.py:L25–L25` |
| `TestMigrationListObjects.setUp` | method | (self) | public | not declared | 3/23 | `src/nova/tests/functional/compute/test_migration_list.py:L27–L55` |
| `TestMigrationListObjects.test_get_instance_objects_sorted` | method | (self) | public | not declared | 3/12 | `src/nova/tests/functional/compute/test_migration_list.py:L57–L68` |
| `TestMigrationListObjects.test_get_instance_objects_sorted_paged` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/compute/test_migration_list.py:L70–L85` |
| `TestMigrationListObjects.test_get_marker_record_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/compute/test_migration_list.py:L87–L91` |
| `TestMigrationListObjects.test_get_sorted_with_limit` | method | (self) | public | not declared | 3/7 | `src/nova/tests/functional/compute/test_migration_list.py:L93–L99` |

## Dependencies

- `import datetime` (src/nova/tests/functional/compute/test_migration_list.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/compute/test_migration_list.py:L15)
- `nova.compute`: imports `migration_list` (src/nova/tests/functional/compute/test_migration_list.py:L17)
- `nova`: imports `context` (src/nova/tests/functional/compute/test_migration_list.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/compute/test_migration_list.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_migration_list.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/compute/test_migration_list.py:L21)

## Side Effects

- **global-mutation**: NUMBER_OF_CELLS = 3 (src/nova/tests/functional/compute/test_migration_list.py:L25)

