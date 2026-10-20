# src/nova/api/openstack/compute/schemas/migrations.py

## Overview

This file implements the `migrations` module, defining 8 variables, 3 imports, 7 security surface entries.

Lines: total 137, code 109, comment 18, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `index_query_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L20–L32` |
| `index_query_v259` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L34–L34` |
| `index_query_v266` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L46–L46` |
| `index_query_v280` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L52–L52` |
| `index_response_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L60–L103` |
| `index_response_v223` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L105–L105` |
| `index_response_v259` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L119–L119` |
| `index_response_v280` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrations.py:L130–L130` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/migrations.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/migrations.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/migrations.py:L18)

## Security Surface

- **sink** (`db-write`): index_query_v259['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L35)
- **sink** (`db-write`): index_query_v266['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L47)
- **sink** (`db-write`): index_query_v280['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L53)
- **sink** (`db-write`): index_response_v223['properties']['migrations']['items']['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L106)
- **sink** (`db-write`): index_response_v259['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L120)
- **sink** (`db-write`): index_response_v259['properties']['migrations']['items']['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L123)
- **sink** (`db-write`): index_response_v280['properties']['migrations']['items']['properties'].update({ (src/nova/api/openstack/compute/schemas/migrations.py:L131)

