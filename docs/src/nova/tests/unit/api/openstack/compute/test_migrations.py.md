# src/nova/tests/unit/api/openstack/compute/test_migrations.py

## Overview

This file implements the `test_migrations` module, defining 6 classs, 1 constant, 6 fields, 21 methods, 2 variables, 11 imports, 2 side effects, 2 security surface entries.

Lines: total 503, code 417, comment 30, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_migrations` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L30–L151` |
| `migrations_obj` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L153–L156` |
| `FakeRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L159–L163` |
| `FakeRequest.environ` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L160–L162` |
| `FakeRequest.GET` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L163–L163` |
| `MigrationsTestCaseV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L166–L241` |
| `MigrationsTestCaseV21.migrations` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L167–L167` |
| `MigrationsTestCaseV21._migrations_output` | method | (self) | private | `self.controller._output(self.req, migrations_obj)` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L170) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L169–L170` |
| `MigrationsTestCaseV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L172–L177` |
| `MigrationsTestCaseV21.test_index` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L179–L209` |
| `MigrationsTestCaseV21.test_index_query_allow_negative_int_as_string` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L211–L224` |
| `MigrationsTestCaseV21.test_index_query_duplicate_query_parameters` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L226–L241` |
| `MigrationsTestCaseV223` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L244–L275` |
| `MigrationsTestCaseV223.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L245–L245` |
| `MigrationsTestCaseV223.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L247–L251` |
| `MigrationsTestCaseV223.test_index` | method | (self) | public | not declared | 3/19 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L253–L275` |
| `MigrationsTestCaseV259` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L278–L366` |
| `MigrationsTestCaseV259.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L279–L279` |
| `MigrationsTestCaseV259.test_index` | method | (self) | public | not declared | 3/20 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L281–L304` |
| `MigrationsTestCaseV259.test_index_with_invalid_marker` | method | (self, mock_migrations_get) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L307–L318` |
| `MigrationsTestCaseV259.test_index_with_invalid_limit` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L320–L331` |
| `MigrationsTestCaseV259.test_index_with_invalid_changes_since` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L333–L339` |
| `MigrationsTestCaseV259.test_index_with_unknown_query_param` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L341–L348` |
| `MigrationsTestCaseV259.test_index_with_changes_since_old_microversion` | method | (self, get_migrations) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L352–L366` |
| `MigrationTestCaseV266` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L369–L448` |
| `MigrationTestCaseV266.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L370–L370` |
| `MigrationTestCaseV266.test_index_with_invalid_changes_before` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L372–L378` |
| `MigrationTestCaseV266.test_index_with_changes_since_and_changes_before` | method | (self, get_migrations_sorted) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L382–L403` |
| `MigrationTestCaseV266.test_get_migrations_filters_with_distinct_changes_time_bad_request` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L405–L416` |
| `MigrationTestCaseV266.test_index_with_changes_before_old_microversion_failed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L418–L430` |
| `MigrationTestCaseV266.test_index_with_changes_before_old_microversion` | method | (self, get_migrations) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L434–L448` |
| `MigrationsTestCaseV280` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L451–L503` |
| `MigrationsTestCaseV280.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L452–L452` |
| `MigrationsTestCaseV280.test_index` | method | (self) | public | not declared | 3/24 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L454–L481` |
| `MigrationsTestCaseV280.test_index_filter_by_user_id_pre_v280` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L483–L492` |
| `MigrationsTestCaseV280.test_index_filter_by_project_id_pre_v280` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_migrations.py:L494–L503` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L18)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L19)
- `nova.api.openstack.compute`: imports `migrations as migrations_v21` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L24)
- `nova.objects`: imports `base` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import migrations as migrations_v21 (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L21)
- **global-mutation**: GET = {} (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L163)

## Security Surface

- **sink** (`db-write`): self.req.GET.update(filters) (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L198)
- **sink** (`db-write`): self.req.GET.update(unknown_filter) (src/nova/tests/unit/api/openstack/compute/test_migrations.py:L199)

