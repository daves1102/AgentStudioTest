# src/nova/api/openstack/compute/server_password.py

## Overview

This file implements the `server_password` module, defining 1 class, 3 methods, 7 imports, 1 side effect, 1 security surface entry.

Lines: total 64, code 40, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerPasswordController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_password.py:L28–L64` |
| `ServerPasswordController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_password.py:L31–L33` |
| `ServerPasswordController.index` | method | (self, req, server_id) | public | `{'password': passw or ''}` (src/nova/api/openstack/compute/server_password.py:L46) | 2/7 | `src/nova/api/openstack/compute/server_password.py:L39–L46` |
| `ServerPasswordController.clear` | method | (self, req, server_id) | public | not declared | 1/8 | `src/nova/api/openstack/compute/server_password.py:L51–L64` |

## Dependencies

- `nova.api.metadata`: imports `password` (src/nova/api/openstack/compute/server_password.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_password.py:L19)
- `nova.api.openstack.compute.schemas`: imports `server_password as schema` (src/nova/api/openstack/compute/server_password.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_password.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_password.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_password.py:L23)
- `nova.policies`: imports `server_password as sp_policies` (src/nova/api/openstack/compute/server_password.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_password as schema (src/nova/api/openstack/compute/server_password.py:L20)

## Security Surface

- **sink** (`db-write`): instance.system_metadata.update(meta) (src/nova/api/openstack/compute/server_password.py:L63)

