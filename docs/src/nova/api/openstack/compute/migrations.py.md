# src/nova/api/openstack/compute/migrations.py

## Overview

This file implements the `migrations` module, defining 1 class, 2 fields, 4 methods, 14 imports, 2 side effects, 1 security surface entry.

Lines: total 221, code 154, comment 47, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MigrationsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/migrations.py:L31–L221` |
| `MigrationsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/migrations.py:L34–L34` |
| `MigrationsController._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/migrations.py:L35–L35` |
| `MigrationsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/migrations.py:L37–L39` |
| `MigrationsController._output` | method | (self, req, migrations_obj, add_link=False, add_uuid=False, add_user_project=False, add_host=True) | private | `objects` (src/nova/api/openstack/compute/migrations.py:L108) | 15/41 | `src/nova/api/openstack/compute/migrations.py:L41–L108` |
| `MigrationsController._index` | method | (self, req, add_link=False, next_link=False, add_uuid=False, sort_dirs=None, sort_keys=None, limit=None, marker=None, allow_changes_since=False, allow_changes_before=False) | private | `migrations_dict` (src/nova/api/openstack/compute/migrations.py:L179) | 13/50 | `src/nova/api/openstack/compute/migrations.py:L110–L179` |
| `MigrationsController.index` | method | (self, req) | public | `self._index( req, add_link=add_link, next_link=next_link, add_uuid=add_uuid, sort_keys=sort_keys, sort_dirs=sort_dirs, limit=limit, marker=marker, allow_changes_since=allow_changes_since, allow_change` (src/nova/api/openstack/compute/migrations.py:L217) | 4/26 | `src/nova/api/openstack/compute/migrations.py:L191–L221` |

## Dependencies

- `oslo_utils`: imports `timeutils` (src/nova/api/openstack/compute/migrations.py:L13)
- `webob`: imports `exc` (src/nova/api/openstack/compute/migrations.py:L14)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/migrations.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/migrations.py:L17)
- `nova.api.openstack.compute.schemas`: imports `migrations as schema` (src/nova/api/openstack/compute/migrations.py:L18)
- `nova.api.openstack.compute.views`: imports `migrations as migrations_view` (src/nova/api/openstack/compute/migrations.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/migrations.py:L20)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/migrations.py:L21)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/migrations.py:L22)
- `nova`: imports `exception` (src/nova/api/openstack/compute/migrations.py:L23)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/migrations.py:L24)
- `nova.objects`: imports `base as obj_base` (src/nova/api/openstack/compute/migrations.py:L25)
- `nova.objects`: imports `fields` (src/nova/api/openstack/compute/migrations.py:L26)
- `nova.policies`: imports `migrations as migrations_policies` (src/nova/api/openstack/compute/migrations.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import migrations as schema (src/nova/api/openstack/compute/migrations.py:L18)
- **network**: from nova.api.openstack.compute.views import migrations as migrations_view (src/nova/api/openstack/compute/migrations.py:L19)

## Security Surface

- **sink** (`db-write`): search_opts.update(req.GET) (src/nova/api/openstack/compute/migrations.py:L116)

