# src/nova/api/openstack/compute/schemas/instance_actions.py

## Overview

This file implements the `instance_actions` module, defining 12 variables, 3 imports, 5 security surface entries.

Lines: total 208, code 174, comment 20, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L20–L24` |
| `index_query_v258` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L26–L38` |
| `index_query_v266` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L40–L40` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L46–L50` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L52–L52` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L55–L101` |
| `index_response_v258` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L103–L103` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L114–L177` |
| `show_response_v251` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L179–L179` |
| `show_response_v258` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L184–L184` |
| `show_response_v262` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L192–L192` |
| `show_response_v284` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/instance_actions.py:L203–L203` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/instance_actions.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/instance_actions.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/instance_actions.py:L18)

## Security Surface

- **sink** (`db-write`): index_query_v266['properties'].update({ (src/nova/api/openstack/compute/schemas/instance_actions.py:L41)
- **sink** (`db-write`): ].update({ (src/nova/api/openstack/compute/schemas/instance_actions.py:L106)
- **sink** (`db-write`): show_response_v258['properties']['instanceAction']['properties'].update({ (src/nova/api/openstack/compute/schemas/instance_actions.py:L185)
- **sink** (`db-write`): ]['properties'].update({ (src/nova/api/openstack/compute/schemas/instance_actions.py:L195)
- **sink** (`db-write`): ]['properties'].update({ (src/nova/api/openstack/compute/schemas/instance_actions.py:L206)

