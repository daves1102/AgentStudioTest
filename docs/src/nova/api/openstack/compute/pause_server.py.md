# src/nova/api/openstack/compute/pause_server.py

## Overview

This file implements the `pause_server` module, defining 1 class, 3 methods, 8 imports, 1 side effect.

Lines: total 78, code 58, comment 14, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PauseServerController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/pause_server.py:L28–L78` |
| `PauseServerController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/pause_server.py:L29–L31` |
| `PauseServerController._pause` | method | (self, req, id, body) | private | not declared | 5/17 | `src/nova/api/openstack/compute/pause_server.py:L38–L55` |
| `PauseServerController._unpause` | method | (self, req, id, body) | private | not declared | 5/16 | `src/nova/api/openstack/compute/pause_server.py:L62–L78` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/pause_server.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/pause_server.py:L18)
- `nova.api.openstack.compute.schemas`: imports `pause_server as schema` (src/nova/api/openstack/compute/pause_server.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/pause_server.py:L20)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/pause_server.py:L21)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/pause_server.py:L22)
- `nova`: imports `exception` (src/nova/api/openstack/compute/pause_server.py:L23)
- `nova.policies`: imports `pause_server as ps_policies` (src/nova/api/openstack/compute/pause_server.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import pause_server as schema (src/nova/api/openstack/compute/pause_server.py:L19)

