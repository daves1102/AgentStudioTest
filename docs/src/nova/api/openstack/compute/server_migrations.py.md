# src/nova/api/openstack/compute/server_migrations.py

## Overview

This file implements the `server_migrations` module, defining 1 class, 1 function, 5 methods, 10 imports, 1 side effect.

Lines: total 216, code 158, comment 32, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `output` | function | (migration, include_uuid=False, include_user_project=False, include_host=True) | exported | `result` (src/nova/api/openstack/compute/server_migrations.py:L83) | 4/36 | `src/nova/api/openstack/compute/server_migrations.py:L29–L83` |
| `ServerMigrationsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_migrations.py:L87–L216` |
| `ServerMigrationsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_migrations.py:L90–L92` |
| `ServerMigrationsController._force_complete` | method | (self, req, id, server_id, body) | private | not declared | 5/18 | `src/nova/api/openstack/compute/server_migrations.py:L100–L118` |
| `ServerMigrationsController.index` | method | (self, req, server_id) | public | `{'migrations': [ output(migration, include_uuid, include_user_project, include_host) for migration in migrations]}` (src/nova/api/openstack/compute/server_migrations.py:L146) | 2/15 | `src/nova/api/openstack/compute/server_migrations.py:L127–L148` |
| `ServerMigrationsController.show` | method | (self, req, server_id, id) | public | `{'migration': output(migration, include_uuid, include_user_project)}` (src/nova/api/openstack/compute/server_migrations.py:L190) | 4/25 | `src/nova/api/openstack/compute/server_migrations.py:L157–L191` |
| `ServerMigrationsController.delete` | method | (self, req, server_id, id) | public | not declared | 4/17 | `src/nova/api/openstack/compute/server_migrations.py:L197–L216` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/server_migrations.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/server_migrations.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_migrations.py:L19)
- `nova.api.openstack.compute.schemas`: imports `server_migrations as schema` (src/nova/api/openstack/compute/server_migrations.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_migrations.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_migrations.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_migrations.py:L23)
- `nova`: imports `exception` (src/nova/api/openstack/compute/server_migrations.py:L24)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/server_migrations.py:L25)
- `nova.policies`: imports `servers_migrations as sm_policies` (src/nova/api/openstack/compute/server_migrations.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_migrations as schema (src/nova/api/openstack/compute/server_migrations.py:L20)

