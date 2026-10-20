# src/nova/api/openstack/compute/schemas/aggregates.py

## Overview

This file implements the `aggregates` module, defining 30 variables, 2 imports, 3 security surface entries.

Lines: total 249, code 209, comment 14, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_availability_zone` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L19–L19` |
| `_availability_zone_with_leading_trailing_spaces` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L20–L25` |
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L27–L42` |
| `create_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L45–L45` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L52–L70` |
| `update_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L73–L73` |
| `add_host` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L80–L94` |
| `remove_host` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L96–L110` |
| `set_metadata` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L112–L126` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L128–L132` |
| `index_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L133–L133` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L136–L140` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L141–L141` |
| `_aggregate_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L144–L179` |
| `_aggregate_response_v241` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L181–L181` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L187–L197` |
| `index_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L198–L198` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L203–L210` |
| `create_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L215–L215` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L224–L231` |
| `show_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L232–L232` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L237–L237` |
| `update_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L238–L238` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L240–L240` |
| `add_host_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L242–L242` |
| `add_host_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L243–L243` |
| `remove_host_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L245–L245` |
| `remove_host_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L246–L246` |
| `set_metadata_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L248–L248` |
| `set_metadata_response_v241` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/aggregates.py:L249–L249` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/aggregates.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/aggregates.py:L17)

## Security Surface

- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/aggregates.py:L52)
- **sink** (`db-write`): update_v20 = copy.deepcopy(update) (src/nova/api/openstack/compute/schemas/aggregates.py:L73)
- **sink** (`db-write`): _aggregate_response_v241['properties'].update( (src/nova/api/openstack/compute/schemas/aggregates.py:L182)

