# src/nova/api/openstack/compute/schemas/quota_classes.py

## Overview

This file implements the `quota_classes` module, defining 14 variables, 2 imports, 1 side effect, 6 security surface entries.

Lines: total 164, code 130, comment 18, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L19–L30` |
| `update_v250` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L32–L32` |
| `update_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L41–L41` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L49–L53` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L55–L55` |
| `_quota_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L58–L93` |
| `_quota_response_v250` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L95–L95` |
| `_quota_response_v257` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L111–L111` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L120–L127` |
| `show_response_v250` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L133–L133` |
| `show_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L142–L142` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L151–L158` |
| `update_response_v250` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L160–L160` |
| `update_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_classes.py:L163–L163` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/quota_classes.py:L15)
- `nova.api.openstack.compute.schemas`: imports `quota_sets` (src/nova/api/openstack/compute/schemas/quota_classes.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import quota_sets (src/nova/api/openstack/compute/schemas/quota_classes.py:L17)

## Security Surface

- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/quota_classes.py:L19)
- **sink** (`db-write`): update_v250 = copy.deepcopy(update) (src/nova/api/openstack/compute/schemas/quota_classes.py:L32)
- **sink** (`db-write`): _quota_response_v250['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_classes.py:L103)
- **sink** (`db-write`): show_response['properties']['quota_class_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_classes.py:L128)
- **sink** (`db-write`): show_response_v250['properties']['quota_class_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_classes.py:L137)
- **sink** (`db-write`): show_response_v257['properties']['quota_class_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_classes.py:L146)

