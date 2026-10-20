# src/nova/api/openstack/compute/schemas/versions.py

## Overview

This file implements the `versions` module, defining 8 variables, 1 security surface entry.

Lines: total 133, code 111, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L16–L20` |
| `multi_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L22–L26` |
| `_version_obj` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L28–L55` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L57–L64` |
| `_version_obj_with_media_types` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L66–L66` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L82–L89` |
| `_legacy_version_obj` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L91–L124` |
| `multi_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/versions.py:L126–L133` |

## Dependencies

None.

## Security Surface

- **sink** (`db-write`): _version_obj_with_media_types['properties'].update({ (src/nova/api/openstack/compute/schemas/versions.py:L67)

