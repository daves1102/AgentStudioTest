# src/nova/api/openstack/compute/suspend_server.py

## Overview

This file implements the `suspend_server` module, defining 1 class, 3 methods, 8 imports, 1 side effect.

Lines: total 75, code 56, comment 13, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SuspendServerController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/suspend_server.py:L27–L75` |
| `SuspendServerController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/suspend_server.py:L28–L30` |
| `SuspendServerController._suspend` | method | (self, req, id, body) | private | not declared | 5/19 | `src/nova/api/openstack/compute/suspend_server.py:L37–L56` |
| `SuspendServerController._resume` | method | (self, req, id, body) | private | not declared | 3/12 | `src/nova/api/openstack/compute/suspend_server.py:L63–L75` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/suspend_server.py:L15)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/suspend_server.py:L17)
- `nova.api.openstack.compute.schemas`: imports `suspend_server as schema` (src/nova/api/openstack/compute/suspend_server.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/suspend_server.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/suspend_server.py:L20)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/suspend_server.py:L21)
- `nova`: imports `exception` (src/nova/api/openstack/compute/suspend_server.py:L22)
- `nova.policies`: imports `suspend_server as ss_policies` (src/nova/api/openstack/compute/suspend_server.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import suspend_server as schema (src/nova/api/openstack/compute/suspend_server.py:L18)

