# src/nova/api/openstack/compute/fixed_ips.py

## Overview

This file implements the `fixed_ips` module, defining 1 class, 3 methods, 1 variable, 4 imports, 1 side effect.

Lines: total 53, code 32, comment 13, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/fixed_ips.py:L21–L26` |
| `FixedIPController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/fixed_ips.py:L30–L53` |
| `FixedIPController.show` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/fixed_ips.py:L36–L37` |
| `FixedIPController.reserve` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/fixed_ips.py:L44–L45` |
| `FixedIPController.unreserve` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/fixed_ips.py:L52–L53` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/fixed_ips.py:L15)
- `nova.api.openstack.compute.schemas`: imports `fixed_ips as schema` (src/nova/api/openstack/compute/fixed_ips.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/fixed_ips.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/fixed_ips.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import fixed_ips as schema (src/nova/api/openstack/compute/fixed_ips.py:L17)

