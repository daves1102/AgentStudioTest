# src/nova/api/openstack/compute/schemas/security_groups.py

## Overview

This file implements the `security_groups` module, defining 21 variables, 2 imports, 1 security surface entry.

Lines: total 254, code 203, comment 26, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L19–L44` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L46–L46` |
| `create_rules` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L48–L72` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L75–L79` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L81–L95` |
| `index_server_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L97–L101` |
| `index_server_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L103–L103` |
| `add_security_group` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L107–L124` |
| `remove_security_group` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L127–L144` |
| `_security_group_rule_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L146–L182` |
| `_security_group_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L184–L196` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L198–L205` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L207–L207` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L209–L219` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L221–L221` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L223–L223` |
| `create_rule_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L225–L232` |
| `delete_rule_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L234–L234` |
| `index_server_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L236–L246` |
| `add_security_group_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L248–L250` |
| `remove_security_group_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/security_groups.py:L252–L254` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/security_groups.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/security_groups.py:L17)

## Security Surface

- **sink** (`db-write`): update = create (src/nova/api/openstack/compute/schemas/security_groups.py:L46)

