# src/nova/api/openstack/compute/cells.py

## Overview

This file implements the `cells` module, defining 1 class, 9 methods, 1 variable, 4 imports, 1 side effect, 2 security surface entries.

Lines: total 98, code 68, comment 15, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/cells.py:L23–L28` |
| `CellsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/cells.py:L32–L98` |
| `CellsController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L42–L43` |
| `CellsController.detail` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L49–L50` |
| `CellsController.info` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L56–L57` |
| `CellsController.capacities` | method | (self, req, id=None) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L63–L64` |
| `CellsController.show` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L70–L71` |
| `CellsController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L76–L77` |
| `CellsController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L83–L84` |
| `CellsController.update` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L90–L91` |
| `CellsController.sync_instances` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cells.py:L97–L98` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/cells.py:L17)
- `nova.api.openstack.compute.schemas`: imports `cells as schema` (src/nova/api/openstack/compute/cells.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/cells.py:L20)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/cells.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import cells as schema (src/nova/api/openstack/compute/cells.py:L19)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/cells.py:L88)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/cells.py:L90)

