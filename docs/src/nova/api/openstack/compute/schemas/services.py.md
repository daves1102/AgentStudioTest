# src/nova/api/openstack/compute/schemas/services.py

## Overview

This file implements the `services` module, defining 17 variables, 2 imports, 3 security surface entries.

Lines: total 200, code 158, comment 23, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L19–L32` |
| `update_v211` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L34–L48` |
| `update_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L56–L69` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L71–L79` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L81–L81` |
| `_service_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L84–L107` |
| `_service_response_v211` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L109–L109` |
| `_service_response_v253` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L113–L113` |
| `_service_response_v269` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L118–L118` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L126–L126` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L128–L138` |
| `index_response_v211` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L140–L140` |
| `index_response_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L143–L143` |
| `index_response_v269` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L146–L146` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L149–L184` |
| `update_response_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L186–L186` |
| `update_response_v269` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/services.py:L194–L194` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/services.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/services.py:L17)

## Security Surface

- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/services.py:L19)
- **sink** (`db-write`): update_response_v253['properties']['service']['properties'].update({ (src/nova/api/openstack/compute/schemas/services.py:L190)
- **sink** (`db-write`): update_response_v269['properties']['service']['properties'].update({ (src/nova/api/openstack/compute/schemas/services.py:L198)

