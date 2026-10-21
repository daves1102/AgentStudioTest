# src/nova/tests/functional/test_cold_migrate.py

## Overview

This file implements the `test_cold_migrate` module, defining 2 classs, 2 fields, 7 methods, 6 imports.

Lines: total 121, code 80, comment 28, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ColdMigrationDisallowSameHost` | class | — | exported | not declared | — | `src/nova/tests/functional/test_cold_migrate.py:L22–L99` |
| `ColdMigrationDisallowSameHost.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_cold_migrate.py:L27–L27` |
| `ColdMigrationDisallowSameHost.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_cold_migrate.py:L29–L33` |
| `ColdMigrationDisallowSameHost._wait_for_migrate_no_valid_host` | method | (self, error='NoValidHost') | private | not declared | 1/6 | `src/nova/tests/functional/test_cold_migrate.py:L35–L40` |
| `ColdMigrationDisallowSameHost.test_cold_migrate_same_host_not_supported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_cold_migrate.py:L42–L51` |
| `ColdMigrationDisallowSameHost.test_cold_migrate_same_host_old_compute_disallow` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_cold_migrate.py:L53–L72` |
| `ColdMigrationDisallowSameHost.test_cold_migrate_same_host_old_compute_allow` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_cold_migrate.py:L74–L99` |
| `ColdMigrationAllowSameHost` | class | — | exported | not declared | — | `src/nova/tests/functional/test_cold_migrate.py:L102–L121` |
| `ColdMigrationAllowSameHost.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_cold_migrate.py:L107–L107` |
| `ColdMigrationAllowSameHost.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_cold_migrate.py:L109–L111` |
| `ColdMigrationAllowSameHost.test_cold_migrate_same_host_supported` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_cold_migrate.py:L113–L121` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/test_cold_migrate.py:L13)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/functional/test_cold_migrate.py:L15)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/test_cold_migrate.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/test_cold_migrate.py:L17)
- `nova`: imports `test` (src/nova/tests/functional/test_cold_migrate.py:L18)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_cold_migrate.py:L19)

