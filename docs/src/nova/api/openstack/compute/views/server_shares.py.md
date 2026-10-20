# src/nova/api/openstack/compute/views/server_shares.py

## Overview

This file implements the `server_shares` module, defining 1 class, 1 field, 3 methods, 2 imports, 1 side effect.

Lines: total 46, code 27, comment 11, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/server_shares.py:L17–L46` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/server_shares.py:L18–L18` |
| `ViewBuilder.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/views/server_shares.py:L20–L22` |
| `ViewBuilder._list_view` | method | (self, db_shares) | private | `shares` (src/nova/api/openstack/compute/views/server_shares.py:L33) | 2/10 | `src/nova/api/openstack/compute/views/server_shares.py:L24–L33` |
| `ViewBuilder._show_view` | method | (self, context, db_share) | private | `share` (src/nova/api/openstack/compute/views/server_shares.py:L46) | 2/10 | `src/nova/api/openstack/compute/views/server_shares.py:L35–L46` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/server_shares.py:L13)
- `nova.api.openstack.compute.views`: imports `servers` (src/nova/api/openstack/compute/views/server_shares.py:L14)

## Side Effects

- **network**: from nova.api.openstack.compute.views import servers (src/nova/api/openstack/compute/views/server_shares.py:L14)

