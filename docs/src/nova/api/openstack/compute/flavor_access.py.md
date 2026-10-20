# src/nova/api/openstack/compute/flavor_access.py

## Overview

This file implements the `flavor_access` module, defining 2 classs, 1 function, 3 methods, 10 imports, 1 side effect.

Lines: total 123, code 80, comment 21, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_marshall_flavor_access` | function | (flavor) | unexported | `{'flavor_access': rval}` (src/nova/api/openstack/compute/flavor_access.py:L37) | 2/6 | `src/nova/api/openstack/compute/flavor_access.py:L31–L37` |
| `FlavorAccessController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/flavor_access.py:L41–L60` |
| `FlavorAccessController.index` | method | (self, req, flavor_id) | public | `_marshall_flavor_access(flavor)` (src/nova/api/openstack/compute/flavor_access.py:L60) | 2/8 | `src/nova/api/openstack/compute/flavor_access.py:L48–L60` |
| `FlavorActionController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/flavor_access.py:L64–L123` |
| `FlavorActionController._add_tenant_access` | method | (self, req, id, body) | private | `_marshall_flavor_access(flavor)` (src/nova/api/openstack/compute/flavor_access.py:L91) | 5/18 | `src/nova/api/openstack/compute/flavor_access.py:L71–L91` |
| `FlavorActionController._remove_tenant_access` | method | (self, req, id, body) | private | `_marshall_flavor_access(flavor)` (src/nova/api/openstack/compute/flavor_access.py:L123) | 4/19 | `src/nova/api/openstack/compute/flavor_access.py:L97–L123` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/flavor_access.py:L18)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/flavor_access.py:L20)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/flavor_access.py:L21)
- `nova.api.openstack.compute.schemas`: imports `flavor_access as schema` (src/nova/api/openstack/compute/flavor_access.py:L22)
- `nova.api.openstack`: imports `identity` (src/nova/api/openstack/compute/flavor_access.py:L23)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/flavor_access.py:L24)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/flavor_access.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/flavor_access.py:L26)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/flavor_access.py:L27)
- `nova.policies`: imports `flavor_access as fa_policies` (src/nova/api/openstack/compute/flavor_access.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import flavor_access as schema (src/nova/api/openstack/compute/flavor_access.py:L22)

