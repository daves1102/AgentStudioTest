# src/nova/api/openstack/compute/views/server_tags.py

## Overview

This file implements the `server_tags` module, defining 1 class, 1 field, 2 methods, 2 imports, 1 side effect.

Lines: total 30, code 11, comment 14, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/server_tags.py:L20–L30` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/server_tags.py:L21–L21` |
| `ViewBuilder.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/views/server_tags.py:L23–L25` |
| `ViewBuilder.get_location` | method | (self, request, server_id, tag_name) | public | `"%s/%s/%s" % (server_location, self._collection_name, tag_name)` (src/nova/api/openstack/compute/views/server_tags.py:L30) | 1/4 | `src/nova/api/openstack/compute/views/server_tags.py:L27–L30` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/server_tags.py:L16)
- `nova.api.openstack.compute.views`: imports `servers` (src/nova/api/openstack/compute/views/server_tags.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute.views import servers (src/nova/api/openstack/compute/views/server_tags.py:L17)

