# src/nova/api/openstack/compute/consoles.py

## Overview

This file implements the `consoles` module, defining 1 class, 4 methods, 1 variable, 4 imports, 1 side effect.

Lines: total 62, code 38, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/consoles.py:L22–L26` |
| `ConsolesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/consoles.py:L30–L62` |
| `ConsolesController.index` | method | (self, req, server_id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/consoles.py:L41–L42` |
| `ConsolesController.create` | method | (self, req, server_id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/consoles.py:L48–L49` |
| `ConsolesController.show` | method | (self, req, server_id, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/consoles.py:L55–L56` |
| `ConsolesController.delete` | method | (self, req, server_id, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/consoles.py:L61–L62` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/consoles.py:L16)
- `nova.api.openstack.compute.schemas`: imports `consoles as schema` (src/nova/api/openstack/compute/consoles.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/consoles.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/consoles.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import consoles as schema (src/nova/api/openstack/compute/consoles.py:L18)

