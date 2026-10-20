# src/nova/api/openstack/compute/views/limits.py

## Overview

This file implements the `limits` module, defining 1 class, 1 field, 4 methods, 1 security surface entry.

Lines: total 93, code 66, comment 14, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/limits.py:L17–L93` |
| `ViewBuilder.limit_names` | field | — | public | not declared | — | `src/nova/api/openstack/compute/views/limits.py:L20–L20` |
| `ViewBuilder.__init__` | method | (self) | public | not declared | 1/15 | `src/nova/api/openstack/compute/views/limits.py:L22–L36` |
| `ViewBuilder.build` | method | (self, request, quotas, filtered_limits=None, max_image_meta=True) | public | `output` (src/nova/api/openstack/compute/views/limits.py:L56) | 2/16 | `src/nova/api/openstack/compute/views/limits.py:L38–L56` |
| `ViewBuilder._build_absolute_limits` | method | (self, quotas, filtered_limits=None, max_image_meta=True) | private | `limits` (src/nova/api/openstack/compute/views/limits.py:L77) | 9/12 | `src/nova/api/openstack/compute/views/limits.py:L58–L77` |
| `ViewBuilder._build_used_limits` | method | (self, request, quotas, filtered_limits) | private | `used_limits` (src/nova/api/openstack/compute/views/limits.py:L93) | 4/14 | `src/nova/api/openstack/compute/views/limits.py:L79–L93` |

## Dependencies

None.

## Security Surface

- **sink** (`db-write`): absolute_limits.update(used_limits) (src/nova/api/openstack/compute/views/limits.py:L48)

