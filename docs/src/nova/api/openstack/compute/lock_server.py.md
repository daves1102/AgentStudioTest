# src/nova/api/openstack/compute/lock_server.py

## Overview

This file implements the `lock_server` module, defining 1 class, 3 methods, 7 imports, 1 side effect.

Lines: total 67, code 47, comment 14, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LockServerController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/lock_server.py:L26–L67` |
| `LockServerController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/lock_server.py:L27–L29` |
| `LockServerController._lock` | method | (self, req, id, body) | private | not declared | 3/13 | `src/nova/api/openstack/compute/lock_server.py:L37–L50` |
| `LockServerController._unlock` | method | (self, req, id, body) | private | not declared | 2/9 | `src/nova/api/openstack/compute/lock_server.py:L57–L67` |

## Dependencies

- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/lock_server.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/lock_server.py:L17)
- `nova.api.openstack.compute.schemas`: imports `lock_server as schema` (src/nova/api/openstack/compute/lock_server.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/lock_server.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/lock_server.py:L20)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/lock_server.py:L21)
- `nova.policies`: imports `lock_server as ls_policies` (src/nova/api/openstack/compute/lock_server.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import lock_server as schema (src/nova/api/openstack/compute/lock_server.py:L18)

