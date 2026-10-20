# src/nova/api/openstack/compute/schemas/server_metadata.py

## Overview

This file implements the `server_metadata` module, defining 14 variables, 3 imports, 2 security surface entries.

Lines: total 95, code 66, comment 13, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L21–L28` |
| `metadata_update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L30–L30` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L36–L43` |
| `update_all` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L45–L52` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L54–L58` |
| `index_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L59–L59` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L62–L66` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L68–L68` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L71–L78` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L80–L80` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L82–L89` |
| `update_all_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L91–L91` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L93–L93` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_metadata.py:L95–L95` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/server_metadata.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/server_metadata.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/server_metadata.py:L18)

## Security Surface

- **sink** (`db-write`): metadata_update.update({ (src/nova/api/openstack/compute/schemas/server_metadata.py:L31)
- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/server_metadata.py:L36)

