# src/nova/api/openstack/compute/virtual_interfaces.py

## Overview

This file implements the `virtual_interfaces` module, defining 1 class, 1 method, 1 variable, 4 imports, 1 side effect.

Lines: total 40, code 19, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/virtual_interfaces.py:L24–L29` |
| `ServerVirtualInterfaceController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/virtual_interfaces.py:L33–L40` |
| `ServerVirtualInterfaceController.index` | method | (self, req, server_id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/virtual_interfaces.py:L39–L40` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/virtual_interfaces.py:L18)
- `nova.api.openstack.compute.schemas`: imports `virtual_interfaces as schema` (src/nova/api/openstack/compute/virtual_interfaces.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/virtual_interfaces.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/virtual_interfaces.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import virtual_interfaces as schema (src/nova/api/openstack/compute/virtual_interfaces.py:L20)

