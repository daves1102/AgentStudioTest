# src/nova/api/openstack/compute/schemas/flavors_extraspecs.py

## Overview

This file implements the `flavors_extraspecs` module, defining 13 variables, 2 imports, 3 security surface entries.

Lines: total 85, code 48, comment 23, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_metadata_key` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L19–L19` |
| `_metadata` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L22–L22` |
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L27–L34` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L36–L36` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L42–L46` |
| `index_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L48–L48` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L51–L55` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L57–L57` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L60–L69` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L74–L74` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L77–L77` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L81–L81` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L83–L85` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L17)

## Security Surface

- **sink** (`db-write`): update = copy.deepcopy(_metadata) (src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L36)
- **sink** (`db-write`): update.update({ (src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L37)
- **sink** (`db-write`): update_response = copy.deepcopy(update) (src/nova/api/openstack/compute/schemas/flavors_extraspecs.py:L77)

