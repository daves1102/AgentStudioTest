# src/nova/api/openstack/compute/schemas/keypairs.py

## Overview

This file implements the `keypairs` module, defining 24 variables, 3 imports, 5 security surface entries.

Lines: total 253, code 213, comment 18, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L21–L36` |
| `create_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L39–L39` |
| `create_v22` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L44–L63` |
| `create_v210` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L65–L85` |
| `create_v292` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L87–L87` |
| `index_query_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L92–L96` |
| `index_query_v210` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L97–L103` |
| `index_query_v235` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L104–L104` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L107–L107` |
| `show_query_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L110–L110` |
| `show_query_v210` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L111–L111` |
| `show_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L112–L112` |
| `delete_query_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L115–L115` |
| `delete_query_v210` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L116–L116` |
| `delete_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L117–L117` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L120–L138` |
| `create_response_v22` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L140–L140` |
| `create_response_v292` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L149–L149` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L155–L157` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L159–L196` |
| `show_response_v22` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L198–L198` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L207–L233` |
| `index_response_v22` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L235–L235` |
| `index_response_v235` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/keypairs.py:L250–L250` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/keypairs.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/keypairs.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/keypairs.py:L18)

## Security Surface

- **sink** (`db-write`): index_query_v235['properties'].update( (src/nova/api/openstack/compute/schemas/keypairs.py:L105)
- **sink** (`db-write`): create_response_v22['properties']['keypair']['properties'].update({ (src/nova/api/openstack/compute/schemas/keypairs.py:L141)
- **sink** (`db-write`): show_response_v22['properties']['keypair']['properties'].update({ (src/nova/api/openstack/compute/schemas/keypairs.py:L199)
- **sink** (`db-write`): ]['properties'].update({ (src/nova/api/openstack/compute/schemas/keypairs.py:L238)
- **sink** (`db-write`): index_response_v235['properties'].update({ (src/nova/api/openstack/compute/schemas/keypairs.py:L251)

