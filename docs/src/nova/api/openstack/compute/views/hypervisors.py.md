# src/nova/api/openstack/compute/views/hypervisors.py

## Overview

This file implements the `hypervisors` module, defining 1 class, 1 field, 1 method, 1 import.

Lines: total 26, code 8, comment 14, blank 4

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/hypervisors.py:L19–L26` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/hypervisors.py:L20–L20` |
| `ViewBuilder.get_links` | method | (self, request, hypervisors, detail=False) | public | `self._get_collection_links(request, hypervisors, coll_name, 'id')` (src/nova/api/openstack/compute/views/hypervisors.py:L25) | 2/5 | `src/nova/api/openstack/compute/views/hypervisors.py:L22–L26` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/hypervisors.py:L16)

