# src/nova/api/openstack/compute/schemas/migrate_server.py

## Overview

This file implements the `migrate_server` module, defining 9 variables, 2 imports.

Lines: total 82, code 54, comment 15, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `host` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L20–L20` |
| `migrate` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L23–L36` |
| `migrate_live` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L38–L54` |
| `_block_migration` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L56–L56` |
| `migrate_live_v2_25` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L59–L59` |
| `migrate_live_v2_30` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L68–L68` |
| `migrate_live_v2_68` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L74–L74` |
| `migrate_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L76–L78` |
| `migrate_live_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/migrate_server.py:L80–L82` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/migrate_server.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/migrate_server.py:L17)

