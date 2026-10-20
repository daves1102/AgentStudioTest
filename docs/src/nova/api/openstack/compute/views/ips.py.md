# src/nova/api/openstack/compute/views/ips.py

## Overview

This file implements the `ips` module, defining 1 class, 1 field, 3 methods, 3 imports, 1 security surface entry.

Lines: total 53, code 31, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/ips.py:L22–L53` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/ips.py:L25–L25` |
| `ViewBuilder.basic` | method | (self, request, ip, extend_address=False) | public | `address` (src/nova/api/openstack/compute/views/ips.py:L38) | 2/11 | `src/nova/api/openstack/compute/views/ips.py:L27–L38` |
| `ViewBuilder.show` | method | (self, request, network, label, extend_address=False) | public | `{ label: [self.basic(request, ip, extend_address) for ip in all_ips], }` (src/nova/api/openstack/compute/views/ips.py:L43) | 2/5 | `src/nova/api/openstack/compute/views/ips.py:L40–L45` |
| `ViewBuilder.index` | method | (self, request, networks, extend_address=False) | public | `{'addresses': addresses}` (src/nova/api/openstack/compute/views/ips.py:L53) | 2/6 | `src/nova/api/openstack/compute/views/ips.py:L47–L53` |

## Dependencies

- `import collections` (src/nova/api/openstack/compute/views/ips.py:L16)
- `import itertools` (src/nova/api/openstack/compute/views/ips.py:L17)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/ips.py:L19)

## Security Surface

- **sink** (`db-write`): address.update({ (src/nova/api/openstack/compute/views/ips.py:L34)

