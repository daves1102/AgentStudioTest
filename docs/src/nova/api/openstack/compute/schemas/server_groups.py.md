# src/nova/api/openstack/compute/schemas/server_groups.py

## Overview

This file implements the `server_groups` module, defining 25 variables, 2 imports, 2 security surface entries.

Lines: total 231, code 182, comment 22, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L22–L52` |
| `create_v215` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L54–L54` |
| `policies` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L55–L55` |
| `create_v264` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L60–L60` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L79–L91` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L93–L93` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L96–L100` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L102–L102` |
| `_server_group_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L105–L138` |
| `_server_group_response_v213` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L140–L140` |
| `_server_group_response_v215` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L147–L147` |
| `_server_group_response_v264` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L152–L152` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L178–L185` |
| `show_response_v213` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L187–L187` |
| `show_response_v215` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L190–L190` |
| `show_response_v264` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L193–L193` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L196–L196` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L198–L208` |
| `index_response_v213` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L210–L210` |
| `index_response_v215` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L215–L215` |
| `index_response_v264` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L220–L220` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L225–L225` |
| `create_response_v213` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L227–L227` |
| `create_response_v215` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L229–L229` |
| `create_response_v264` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_groups.py:L231–L231` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/server_groups.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/server_groups.py:L17)

## Security Surface

- **sink** (`db-write`): _server_group_response_v213['properties'].update({ (src/nova/api/openstack/compute/schemas/server_groups.py:L141)
- **sink** (`db-write`): _server_group_response_v264['properties'].update({ (src/nova/api/openstack/compute/schemas/server_groups.py:L155)

