# src/nova/tests/unit/policies/test_server_migrations.py

## Overview

This file implements the `test_server_migrations` module, defining 3 classs, 2 fields, 9 methods, 13 imports, 2 side effects.

Lines: total 237, code 188, comment 26, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerMigrationsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_migrations.py:L30–L182` |
| `ServerMigrationsPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_server_migrations.py:L38–L57` |
| `ServerMigrationsPolicyTest.test_list_server_migrations_policy` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_server_migrations.py:L60–L64` |
| `ServerMigrationsPolicyTest.test_list_server_migrations_host_policy` | method | (self, mock_get) | public | not declared | 3/55 | `src/nova/tests/unit/policies/test_server_migrations.py:L67–L128` |
| `ServerMigrationsPolicyTest.test_list_server_migrations_check_primary_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_migrations.py:L130–L140` |
| `ServerMigrationsPolicyTest.test_show_server_migrations_policy` | method | (self, mock_get) | public | not declared | 1/25 | `src/nova/tests/unit/policies/test_server_migrations.py:L143–L167` |
| `ServerMigrationsPolicyTest.test_delete_server_migrations_policy` | method | (self, mock_delete) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_server_migrations.py:L170–L174` |
| `ServerMigrationsPolicyTest.test_force_delete_server_migrations_policy` | method | (self, mock_force) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_migrations.py:L177–L182` |
| `ServerMigrationsNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_migrations.py:L185–L203` |
| `ServerMigrationsNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_migrations.py:L190–L190` |
| `ServerMigrationsNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_migrations.py:L191–L198` |
| `ServerMigrationsNoLegacyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_server_migrations.py:L200–L203` |
| `ServerMigrationsOverridePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_migrations.py:L206–L237` |
| `ServerMigrationsOverridePolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_server_migrations.py:L214–L237` |

## Dependencies

- `import datetime` (src/nova/tests/unit/policies/test_server_migrations.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_server_migrations.py:L14)
- `import fixtures` (src/nova/tests/unit/policies/test_server_migrations.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_migrations.py:L17)
- `nova.api.openstack.compute`: imports `server_migrations` (src/nova/tests/unit/policies/test_server_migrations.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_server_migrations.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_server_migrations.py:L21)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/policies/test_server_migrations.py:L22)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_server_migrations.py:L23)
- `nova.policies`: imports `servers_migrations as policies` (src/nova/tests/unit/policies/test_server_migrations.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_migrations.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_migrations.py:L26)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_migrations.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import server_migrations (src/nova/tests/unit/policies/test_server_migrations.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_migrations.py:L43)

