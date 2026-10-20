# src/nova/api/openstack/compute/fping.py

## Overview

This file implements the `fping` module, defining 1 class, 2 methods, 1 variable, 4 imports, 1 side effect.

Lines: total 46, code 24, comment 15, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/fping.py:L23–L28` |
| `FpingController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/fping.py:L32–L46` |
| `FpingController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/fping.py:L38–L39` |
| `FpingController.show` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/fping.py:L45–L46` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/fping.py:L17)
- `nova.api.openstack.compute.schemas`: imports `fping as schema` (src/nova/api/openstack/compute/fping.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/fping.py:L20)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/fping.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import fping as schema (src/nova/api/openstack/compute/fping.py:L19)

