# src/nova/api/openstack/compute/schemas/flavors.py

## Overview

This file implements the `flavors` module, defining 2 constants, 41 variables, 2 imports, 2 side effects, 1 security surface entry.

Lines: total 369, code 281, comment 43, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VALID_SORT_KEYS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L21–L25` |
| `VALID_SORT_DIR` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L27–L27` |
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L29–L76` |
| `create_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L78–L78` |
| `_flavor_description` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L85–L88` |
| `create_v255` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L90–L90` |
| `create_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L94–L94` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L97–L115` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L117–L136` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L138–L138` |
| `index_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L141–L141` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L147–L151` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L153–L153` |
| `_flavor_basic` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L156–L176` |
| `_flavor_basic_v255` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L178–L178` |
| `_flavor` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L182–L226` |
| `_flavor_v255` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L228–L228` |
| `_flavor_v261` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L232–L232` |
| `_flavor_v275` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L241–L241` |
| `_flavor_v2102` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L245–L245` |
| `_flavors_links` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L251–L262` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L264–L266` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L268–L275` |
| `create_response_v255` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L277–L277` |
| `create_response_v261` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L280–L280` |
| `create_response_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L283–L283` |
| `create_response_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L286–L286` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L291–L298` |
| `update_response_v261` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L300–L300` |
| `update_response_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L303–L303` |
| `update_response_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L306–L306` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L309–L320` |
| `index_response_v255` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L322–L322` |
| `detail_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L325–L336` |
| `detail_response_v255` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L338–L338` |
| `detail_response_v261` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L341–L341` |
| `detail_response_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L344–L344` |
| `detail_response_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L347–L347` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L350–L357` |
| `show_response_v255` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L359–L359` |
| `show_response_v261` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L362–L362` |
| `show_response_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L365–L365` |
| `show_response_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors.py:L368–L368` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/flavors.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/flavors.py:L17)

## Side Effects

- **global-mutation**: VALID_SORT_KEYS = [ (src/nova/api/openstack/compute/schemas/flavors.py:L21)
- **global-mutation**: VALID_SORT_DIR = ['asc', 'desc'] (src/nova/api/openstack/compute/schemas/flavors.py:L27)

## Security Surface

- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/flavors.py:L97)

