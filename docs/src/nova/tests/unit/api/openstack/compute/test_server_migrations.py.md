# src/nova/tests/unit/api/openstack/compute/test_server_migrations.py

## Overview

This file implements the `test_server_migrations` module, defining 5 classs, 1 constant, 5 fields, 5 functions, 25 methods, 2 variables, 11 imports, 2 side effects.

Lines: total 353, code 288, comment 14, blank 51

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SERVER_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L31–L31` |
| `fake_migrations` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L33–L92` |
| `migrations_obj` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L94–L97` |
| `ServerMigrationsTestsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L100–L162` |
| `ServerMigrationsTestsV21.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L101–L101` |
| `ServerMigrationsTestsV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L103–L108` |
| `ServerMigrationsTestsV21.test_force_complete_succeeded` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L110–L118` |
| `ServerMigrationsTestsV21.test_force_complete_succeeded._do_test` | function | (compute_api_get, live_migrate_force_complete) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L113–L117` |
| `ServerMigrationsTestsV21._test_force_complete_failed_with_exception` | method | (self, fake_exc, expected_exc) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L120–L130` |
| `ServerMigrationsTestsV21._test_force_complete_failed_with_exception._do_test` | function | (compute_api_get, live_migrate_force_complete) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L125–L129` |
| `ServerMigrationsTestsV21.test_force_complete_instance_not_migrating` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L132–L136` |
| `ServerMigrationsTestsV21.test_force_complete_migration_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L138–L141` |
| `ServerMigrationsTestsV21.test_force_complete_instance_is_locked` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L143–L146` |
| `ServerMigrationsTestsV21.test_force_complete_invalid_migration_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L148–L152` |
| `ServerMigrationsTestsV21.test_force_complete_instance_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L154–L157` |
| `ServerMigrationsTestsV21.test_force_complete_unexpected_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L159–L162` |
| `ServerMigrationsTestsV223` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L165–L273` |
| `ServerMigrationsTestsV223.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L166–L166` |
| `ServerMigrationsTestsV223.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L168–L172` |
| `ServerMigrationsTestsV223.test_index` | method | (self, m_get_instance, m_get_mig) | public | not declared | 3/13 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L176–L191` |
| `ServerMigrationsTestsV223.test_index_invalid_instance` | method | (self, m_get_instance) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L194–L202` |
| `ServerMigrationsTestsV223.test_show` | method | (self, m_get_instance, m_get_mig) | public | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L206–L215` |
| `ServerMigrationsTestsV223.test_show_migration_non_progress` | method | (self, m_get_instance, m_get_mig) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L219–L230` |
| `ServerMigrationsTestsV223.test_show_migration_not_live_migration` | method | (self, m_get_instance, m_get_mig) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L234–L246` |
| `ServerMigrationsTestsV223.test_show_migration_not_exist` | method | (self, m_get_instance, m_get_mig) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L250–L261` |
| `ServerMigrationsTestsV223.test_show_migration_invalid_instance` | method | (self, m_get_instance) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L264–L273` |
| `ServerMigrationsTestsV224` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L276–L335` |
| `ServerMigrationsTestsV224.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L277–L277` |
| `ServerMigrationsTestsV224.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L279–L283` |
| `ServerMigrationsTestsV224.test_cancel_live_migration_succeeded` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L285–L294` |
| `ServerMigrationsTestsV224.test_cancel_live_migration_succeeded._do_test` | function | (mock_get, mock_abort) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L288–L293` |
| `ServerMigrationsTestsV224._test_cancel_live_migration_failed` | method | (self, fake_exc, expected_exc) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L296–L306` |
| `ServerMigrationsTestsV224._test_cancel_live_migration_failed._do_test` | function | (mock_get, mock_abort) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L300–L305` |
| `ServerMigrationsTestsV224.test_cancel_live_migration_invalid_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L308–L314` |
| `ServerMigrationsTestsV224.test_cancel_live_migration_migration_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L316–L320` |
| `ServerMigrationsTestsV224.test_cancel_live_migration_invalid_migration_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L322–L328` |
| `ServerMigrationsTestsV224.test_cancel_live_migration_instance_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L330–L335` |
| `ServerMigrationsTestsV265` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L338–L349` |
| `ServerMigrationsTestsV265.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L339–L339` |
| `ServerMigrationsTestsV265.test_cancel_live_migration_succeeded` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L341–L349` |
| `ServerMigrationsTestsV265.test_cancel_live_migration_succeeded._do_test` | function | (mock_get, mock_abort) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L344–L348` |
| `ServerMigrationsTestsV280` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L352–L353` |
| `ServerMigrationsTestsV280.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L353–L353` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L16)
- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L20)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L21)
- `nova.api.openstack.compute`: imports `server_migrations` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L25)
- `nova.objects`: imports `base` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import server_migrations (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L23)
- **global-mutation**: SERVER_UUID = uuids.server_uuid (src/nova/tests/unit/api/openstack/compute/test_server_migrations.py:L31)

