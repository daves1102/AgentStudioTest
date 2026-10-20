# src/nova/api/openstack/compute/views/flavors.py

## Overview

This file implements the `flavors` module, defining 1 class, 1 field, 5 methods, 2 imports.

Lines: total 113, code 76, comment 17, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/flavors.py:L20–L113` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/flavors.py:L22–L22` |
| `ViewBuilder.basic` | method | (self, request, flavor, include_extra_specs=False) | public | `flavor_dict` (src/nova/api/openstack/compute/views/flavors.py:L41) | 2/13 | `src/nova/api/openstack/compute/views/flavors.py:L24–L41` |
| `ViewBuilder.show` | method | (self, request, flavor, include_extra_specs=False) | public | `flavor_dict` (src/nova/api/openstack/compute/views/flavors.py:L75) | 8/28 | `src/nova/api/openstack/compute/views/flavors.py:L43–L75` |
| `ViewBuilder.index` | method | (self, request, flavors) | public | `self._list_view(self.basic, request, flavors, coll_name)` (src/nova/api/openstack/compute/views/flavors.py:L80) | 1/3 | `src/nova/api/openstack/compute/views/flavors.py:L77–L80` |
| `ViewBuilder.detail` | method | (self, request, flavors, include_extra_specs=False) | public | `self._list_view(self.show, request, flavors, coll_name, include_extra_specs=include_extra_specs)` (src/nova/api/openstack/compute/views/flavors.py:L85) | 1/4 | `src/nova/api/openstack/compute/views/flavors.py:L82–L86` |
| `ViewBuilder._list_view` | method | (self, func, request, flavors, coll_name, include_extra_specs=False) | private | `flavors_dict` (src/nova/api/openstack/compute/views/flavors.py:L113) | 3/12 | `src/nova/api/openstack/compute/views/flavors.py:L88–L113` |

## Dependencies

- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/views/flavors.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/flavors.py:L17)

