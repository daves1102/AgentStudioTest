# src/nova/api/openstack/compute/floating_ips_bulk.py

## Overview

This file implements the `floating_ips_bulk` module, defining 1 class, 4 methods, 1 variable, 4 imports, 1 side effect, 2 security surface entries.

Lines: total 58, code 36, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/floating_ips_bulk.py:L21–L26` |
| `FloatingIPBulkController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ips_bulk.py:L30–L58` |
| `FloatingIPBulkController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ips_bulk.py:L36–L37` |
| `FloatingIPBulkController.show` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ips_bulk.py:L43–L44` |
| `FloatingIPBulkController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ips_bulk.py:L50–L51` |
| `FloatingIPBulkController.update` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ips_bulk.py:L57–L58` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/floating_ips_bulk.py:L15)
- `nova.api.openstack.compute.schemas`: imports `floating_ips_bulk as schema` (src/nova/api/openstack/compute/floating_ips_bulk.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/floating_ips_bulk.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/floating_ips_bulk.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import floating_ips_bulk as schema (src/nova/api/openstack/compute/floating_ips_bulk.py:L17)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/floating_ips_bulk.py:L55)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/floating_ips_bulk.py:L57)

