# src/nova/api/openstack/compute/views/server_diagnostics.py

## Overview

This file implements the `server_diagnostics` module, defining 1 class, 3 constants, 2 methods, 1 staticmethod, 1 import, 3 side effects.

Lines: total 62, code 40, comment 11, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `INSTANCE_DIAGNOSTICS_PRIMITIVE_FIELDS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/views/server_diagnostics.py:L15–L18` |
| `INSTANCE_DIAGNOSTICS_LIST_FIELDS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/views/server_diagnostics.py:L20–L27` |
| `INSTANCE_DIAGNOSTICS_OBJECT_FIELDS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/views/server_diagnostics.py:L29–L29` |
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/server_diagnostics.py:L32–L62` |
| `ViewBuilder._get_obj_field` | method | (obj, field) | private | `getattr(obj, field)` (src/nova/api/openstack/compute/views/server_diagnostics.py:L36); `None` (src/nova/api/openstack/compute/views/server_diagnostics.py:L37) | 3/4 | `src/nova/api/openstack/compute/views/server_diagnostics.py:L34–L37` |
| `ViewBuilder.instance_diagnostics` | method | (self, diagnostics) | public | `diagnostics_dict` (src/nova/api/openstack/compute/views/server_diagnostics.py:L62) | 7/19 | `src/nova/api/openstack/compute/views/server_diagnostics.py:L39–L62` |
| `ViewBuilder._get_obj_field` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/server_diagnostics.py:L33–L37` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/server_diagnostics.py:L13)

## Side Effects

- **global-mutation**: INSTANCE_DIAGNOSTICS_PRIMITIVE_FIELDS = ( (src/nova/api/openstack/compute/views/server_diagnostics.py:L15)
- **global-mutation**: INSTANCE_DIAGNOSTICS_LIST_FIELDS = { (src/nova/api/openstack/compute/views/server_diagnostics.py:L20)
- **global-mutation**: INSTANCE_DIAGNOSTICS_OBJECT_FIELDS = {'memory_details': ('maximum', 'used')} (src/nova/api/openstack/compute/views/server_diagnostics.py:L29)

