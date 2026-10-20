# src/nova/api/openstack/compute/deferred_delete.py

## Overview

This file implements the `deferred_delete` module, defining 1 class, 3 methods, 8 imports, 1 side effect.

Lines: total 71, code 50, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DeferredDeleteController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/deferred_delete.py:L30–L71` |
| `DeferredDeleteController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/deferred_delete.py:L31–L33` |
| `DeferredDeleteController._restore` | method | (self, req, id, body) | private | not declared | 3/12 | `src/nova/api/openstack/compute/deferred_delete.py:L40–L52` |
| `DeferredDeleteController._force_delete` | method | (self, req, id, body) | private | not declared | 3/12 | `src/nova/api/openstack/compute/deferred_delete.py:L59–L71` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/deferred_delete.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/deferred_delete.py:L20)
- `nova.api.openstack.compute.schemas`: imports `deferred_delete as schema` (src/nova/api/openstack/compute/deferred_delete.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/deferred_delete.py:L22)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/deferred_delete.py:L23)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/deferred_delete.py:L24)
- `nova`: imports `exception` (src/nova/api/openstack/compute/deferred_delete.py:L25)
- `nova.policies`: imports `deferred_delete as dd_policies` (src/nova/api/openstack/compute/deferred_delete.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import deferred_delete as schema (src/nova/api/openstack/compute/deferred_delete.py:L21)

