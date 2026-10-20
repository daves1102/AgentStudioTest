# src/nova/api/openstack/compute/views/usages.py

## Overview

This file implements the `usages` module, defining 1 class, 1 field, 1 method, 1 import.

Lines: total 28, code 9, comment 14, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/usages.py:L19–L28` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/usages.py:L21–L21` |
| `ViewBuilder.get_links` | method | (self, request, server_usages, tenant_id=None) | public | `self._get_collection_links( request, server_usages, coll_name, 'instance_id')` (src/nova/api/openstack/compute/views/usages.py:L27) | 2/6 | `src/nova/api/openstack/compute/views/usages.py:L23–L28` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/usages.py:L16)

