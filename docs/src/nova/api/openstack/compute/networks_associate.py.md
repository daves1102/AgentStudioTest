# src/nova/api/openstack/compute/networks_associate.py

## Overview

This file implements the `networks_associate` module, defining 1 class, 3 methods, 1 variable, 4 imports, 1 side effect.

Lines: total 54, code 34, comment 11, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/networks_associate.py:L20–L25` |
| `NetworkAssociateActionController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/networks_associate.py:L29–L54` |
| `NetworkAssociateActionController._disassociate_host_only` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/networks_associate.py:L37–L38` |
| `NetworkAssociateActionController._disassociate_project_only` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/networks_associate.py:L45–L46` |
| `NetworkAssociateActionController._associate_host` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/networks_associate.py:L53–L54` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/networks_associate.py:L13)
- `nova.api.openstack.compute.schemas`: imports `networks_associate as schema` (src/nova/api/openstack/compute/networks_associate.py:L15)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/networks_associate.py:L16)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/networks_associate.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import networks_associate as schema (src/nova/api/openstack/compute/networks_associate.py:L15)

