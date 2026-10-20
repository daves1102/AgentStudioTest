# src/nova/api/openstack/compute/floating_ip_pools.py

## Overview

This file implements the `floating_ip_pools` module, defining 1 class, 2 functions, 2 methods, 6 imports, 2 side effects.

Lines: total 54, code 32, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_translate_floating_ip_view` | function | (pool) | unexported | `{ 'name': pool['name'] or pool['id'], }` (src/nova/api/openstack/compute/floating_ip_pools.py:L25) | 2/4 | `src/nova/api/openstack/compute/floating_ip_pools.py:L24–L27` |
| `_translate_floating_ip_pools_view` | function | (pools) | unexported | `{ 'floating_ip_pools': [_translate_floating_ip_view(pool) for pool in pools] }` (src/nova/api/openstack/compute/floating_ip_pools.py:L31) | 2/5 | `src/nova/api/openstack/compute/floating_ip_pools.py:L30–L34` |
| `FloatingIPPoolsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ip_pools.py:L38–L54` |
| `FloatingIPPoolsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/floating_ip_pools.py:L41–L43` |
| `FloatingIPPoolsController.index` | method | (self, req) | public | `_translate_floating_ip_pools_view(pools)` (src/nova/api/openstack/compute/floating_ip_pools.py:L54) | 1/5 | `src/nova/api/openstack/compute/floating_ip_pools.py:L49–L54` |

## Dependencies

- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/floating_ip_pools.py:L15–L16)
- `nova.api.openstack.compute.schemas`: imports `floating_ip_pools as schema` (src/nova/api/openstack/compute/floating_ip_pools.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/floating_ip_pools.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/floating_ip_pools.py:L19)
- `nova.network`: imports `neutron` (src/nova/api/openstack/compute/floating_ip_pools.py:L20)
- `nova.policies`: imports `floating_ip_pools as fip_policies` (src/nova/api/openstack/compute/floating_ip_pools.py:L21)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/floating_ip_pools.py:L15)
- **network**: from nova.api.openstack.compute.schemas import floating_ip_pools as schema (src/nova/api/openstack/compute/floating_ip_pools.py:L17)

