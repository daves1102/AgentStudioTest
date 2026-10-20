# src/nova/api/openstack/compute/schemas/server_migrations.py

## Overview

This file implements the `server_migrations` module, defining 16 variables, 2 imports, 2 security surface entries.

Lines: total 150, code 118, comment 14, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L20–L24` |
| `index_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L26–L26` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L29–L33` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L35–L35` |
| `force_complete` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L38–L47` |
| `force_complete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L49–L51` |
| `_migration_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L53–L92` |
| `_migration_response_v259` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L94–L94` |
| `_migration_response_v280` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L100–L100` |
| `index_response_v223` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L109–L119` |
| `index_response_v259` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L121–L121` |
| `index_response_v280` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L126–L126` |
| `show_response_v223` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L131–L138` |
| `show_response_v259` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L140–L140` |
| `show_response_v280` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L145–L145` |
| `delete_response_v224` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_migrations.py:L150–L150` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/server_migrations.py:L16)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/server_migrations.py:L18)

## Security Surface

- **sink** (`db-write`): _migration_response_v259['properties'].update({ (src/nova/api/openstack/compute/schemas/server_migrations.py:L95)
- **sink** (`db-write`): _migration_response_v280['properties'].update({ (src/nova/api/openstack/compute/schemas/server_migrations.py:L101)

