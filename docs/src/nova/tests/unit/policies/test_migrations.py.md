# src/nova/tests/unit/policies/test_migrations.py

## Overview

This file implements the `test_migrations` module, defining 2 classs, 1 constant, 2 fields, 10 methods, 13 imports, 2 side effects.

Lines: total 287, code 218, comment 42, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_migrations.py:L29–L29` |
| `MigrationsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_migrations.py:L32–L263` |
| `MigrationsPolicyTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_migrations.py:L41–L54` |
| `MigrationsPolicyTest.fake_migrations` | method | (self, project_id=None, same_project=None) | public | `[migration[0], migration[0]]` (src/nova/tests/unit/policies/test_migrations.py:L89); `migration` (src/nova/tests/unit/policies/test_migrations.py:L92) | 3/37 | `src/nova/tests/unit/policies/test_migrations.py:L56–L92` |
| `MigrationsPolicyTest.test_list_migrations_policy` | method | (self, mock_migration) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_migrations.py:L95–L105` |
| `MigrationsPolicyTest.test_list_migrations_host_policy` | method | (self, mock_get) | public | not declared | 3/38 | `src/nova/tests/unit/policies/test_migrations.py:L108–L151` |
| `MigrationsPolicyTest.test_list_migrations_check_primary_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_migrations.py:L153–L162` |
| `MigrationsPolicyTest.test_list_all_projects_migrations_policy` | method | (self, mock_get) | public | not declared | 2/19 | `src/nova/tests/unit/policies/test_migrations.py:L165–L189` |
| `MigrationsPolicyTest.prepare_microversion_request` | method | (self, cxtx, mock_get, project_id=None) | public | `req, project_id` (src/nova/tests/unit/policies/test_migrations.py:L205) | 3/15 | `src/nova/tests/unit/policies/test_migrations.py:L191–L205` |
| `MigrationsPolicyTest.test_list_same_project_migrations_policy` | method | (self, mock_get) | public | not declared | 3/18 | `src/nova/tests/unit/policies/test_migrations.py:L208–L228` |
| `MigrationsPolicyTest.test_list_other_project_migrations_policy` | method | (self, mock_get) | public | not declared | 5/25 | `src/nova/tests/unit/policies/test_migrations.py:L231–L263` |
| `MigrationsNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_migrations.py:L266–L287` |
| `MigrationsNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_migrations.py:L271–L271` |
| `MigrationsNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_migrations.py:L272–L275` |
| `MigrationsNoLegacyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_migrations.py:L277–L287` |

## Dependencies

- `import datetime` (src/nova/tests/unit/policies/test_migrations.py:L13)
- `import functools` (src/nova/tests/unit/policies/test_migrations.py:L14)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_migrations.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_migrations.py:L17)
- `nova.api.openstack.compute`: imports `migrations` (src/nova/tests/unit/policies/test_migrations.py:L19)
- `import nova.conf` (src/nova/tests/unit/policies/test_migrations.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_migrations.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_migrations.py:L22)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/policies/test_migrations.py:L23)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_migrations.py:L24)
- `nova.policies`: imports `migrations as migrations_policies` (src/nova/tests/unit/policies/test_migrations.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_migrations.py:L26)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_migrations.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import migrations (src/nova/tests/unit/policies/test_migrations.py:L19)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/policies/test_migrations.py:L29)

