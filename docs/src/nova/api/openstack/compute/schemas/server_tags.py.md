# src/nova/api/openstack/compute/schemas/server_tags.py

## Overview

This file implements the `server_tags` module, defining 12 variables, 3 imports, 1 security surface entry.

Lines: total 87, code 62, comment 11, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `update_all` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L18–L30` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L32–L35` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L37–L41` |
| `index_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L43–L43` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L46–L50` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L52–L52` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L55–L55` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L57–L68` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L70–L70` |
| `update_all_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L72–L83` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L85–L85` |
| `delete_all_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_tags.py:L87–L87` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/server_tags.py:L13)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/server_tags.py:L15)
- `nova.objects`: imports `instance` (src/nova/api/openstack/compute/schemas/server_tags.py:L16)

## Security Surface

- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/server_tags.py:L32)

