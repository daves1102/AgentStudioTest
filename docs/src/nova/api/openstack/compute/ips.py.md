# src/nova/api/openstack/compute/ips.py

## Overview

This file implements the `ips` module, defining 1 class, 1 field, 3 methods, 9 imports, 2 side effects.

Lines: total 63, code 41, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `IPsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/ips.py:L29–L63` |
| `IPsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/ips.py:L31–L31` |
| `IPsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/ips.py:L33–L35` |
| `IPsController.index` | method | (self, req, server_id) | public | `self._view_builder.index(req, networks)` (src/nova/api/openstack/compute/ips.py:L47) | 1/7 | `src/nova/api/openstack/compute/ips.py:L41–L47` |
| `IPsController.show` | method | (self, req, server_id, id) | public | `self._view_builder.show(req, networks[id], id)` (src/nova/api/openstack/compute/ips.py:L63) | 2/10 | `src/nova/api/openstack/compute/ips.py:L53–L63` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/ips.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/ips.py:L18)
- `nova.api.openstack.compute.schemas`: imports `ips as schema` (src/nova/api/openstack/compute/ips.py:L19)
- `nova.api.openstack.compute.views`: imports `ips as views` (src/nova/api/openstack/compute/ips.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/ips.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/ips.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/ips.py:L23)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/ips.py:L24)
- `nova.policies`: imports `ips as ips_policies` (src/nova/api/openstack/compute/ips.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import ips as schema (src/nova/api/openstack/compute/ips.py:L19)
- **network**: from nova.api.openstack.compute.views import ips as views (src/nova/api/openstack/compute/ips.py:L20)

