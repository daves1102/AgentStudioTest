# src/nova/api/openstack/compute/schemas/images.py

## Overview

This file implements the `images` module, defining 9 variables, 3 imports, 1 side effect.

Lines: total 231, code 195, comment 24, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L21–L25` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L27–L53` |
| `detail_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L55–L55` |
| `_links_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L57–L91` |
| `_image_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L93–L185` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L187–L194` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L196–L196` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L198–L218` |
| `detail_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/images.py:L220–L231` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/images.py:L13)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/images.py:L15)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/images.py:L16)

## Side Effects

- **network**: 'type': {'const': 'application/vnd.openstack.image'}, (src/nova/api/openstack/compute/schemas/images.py:L83)

