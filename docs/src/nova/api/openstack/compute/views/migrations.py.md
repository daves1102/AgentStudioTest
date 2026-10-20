# src/nova/api/openstack/compute/views/migrations.py

## Overview

This file implements the `migrations` module, defining 1 class, 1 field, 1 method, 1 import.

Lines: total 24, code 6, comment 13, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/migrations.py:L18–L24` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/migrations.py:L20–L20` |
| `ViewBuilder.get_links` | method | (self, request, migrations) | public | `self._get_collection_links(request, migrations, self._collection_name, 'uuid')` (src/nova/api/openstack/compute/views/migrations.py:L23) | 1/3 | `src/nova/api/openstack/compute/views/migrations.py:L22–L24` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/migrations.py:L15)

