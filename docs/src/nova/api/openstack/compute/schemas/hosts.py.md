# src/nova/api/openstack/compute/schemas/hosts.py

## Overview

This file implements the `hosts` module, defining 13 variables, 2 imports, 1 security surface entry.

Lines: total 140, code 108, comment 22, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L19–L40` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L42–L52` |
| `startup_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L56–L56` |
| `shutdown_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L57–L57` |
| `reboot_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L58–L58` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L59–L59` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L61–L81` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L83–L113` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L115–L124` |
| `_power_action_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L126–L136` |
| `startup_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L138–L138` |
| `shutdown_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L139–L139` |
| `reboot_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hosts.py:L140–L140` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/hosts.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/hosts.py:L17)

## Security Surface

- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/hosts.py:L19)

