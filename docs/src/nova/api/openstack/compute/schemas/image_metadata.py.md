# src/nova/api/openstack/compute/schemas/image_metadata.py

## Overview

This file implements the `image_metadata` module, defining 12 variables, 3 imports, 2 security surface entries.

Lines: total 77, code 47, comment 15, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L21–L28` |
| `single_metadata` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L30–L30` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L36–L43` |
| `update_all` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L45–L45` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L50–L50` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L51–L51` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L53–L60` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L62–L69` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L71–L71` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L73–L73` |
| `update_all_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L75–L75` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/image_metadata.py:L77–L77` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/image_metadata.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/image_metadata.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/image_metadata.py:L18)

## Security Surface

- **sink** (`db-write`): single_metadata.update({ (src/nova/api/openstack/compute/schemas/image_metadata.py:L31)
- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/image_metadata.py:L36)

