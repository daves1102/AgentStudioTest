# src/nova/api/openstack/compute/migrate_server.py

## Overview

This file implements the `migrate_server` module, defining 1 class, 1 constant, 4 methods, 13 imports, 2 side effects.

Lines: total 185, code 153, comment 17, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/migrate_server.py:L31–L31` |
| `MigrateServerController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/migrate_server.py:L35–L185` |
| `MigrateServerController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/migrate_server.py:L36–L38` |
| `MigrateServerController._migrate` | method | (self, req, id, body) | private | not declared | 10/44 | `src/nova/api/openstack/compute/migrate_server.py:L45–L91` |
| `MigrateServerController._migrate_live` | method | (self, req, id, body) | private | not declared | 11/68 | `src/nova/api/openstack/compute/migrate_server.py:L101–L177` |
| `MigrateServerController._get_force_param_for_live_migration` | method | (self, body, host) | private | `force` (src/nova/api/openstack/compute/migrate_server.py:L185) | 3/7 | `src/nova/api/openstack/compute/migrate_server.py:L179–L185` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/migrate_server.py:L16)
- `oslo_utils`: imports `excutils` (src/nova/api/openstack/compute/migrate_server.py:L17)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/migrate_server.py:L18)
- `webob`: imports `exc` (src/nova/api/openstack/compute/migrate_server.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/migrate_server.py:L21)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/migrate_server.py:L22)
- `nova.api.openstack.compute.schemas`: imports `migrate_server as schema` (src/nova/api/openstack/compute/migrate_server.py:L23)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/migrate_server.py:L24)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/migrate_server.py:L25)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/migrate_server.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/compute/migrate_server.py:L27)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/migrate_server.py:L28)
- `nova.policies`: imports `migrate_server as ms_policies` (src/nova/api/openstack/compute/migrate_server.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import migrate_server as schema (src/nova/api/openstack/compute/migrate_server.py:L23)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/migrate_server.py:L31)

