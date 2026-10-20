# src/nova/policies/extended_server_attributes.py

## Overview

This file implements the `extended_server_attributes` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 75, code 49, comment 14, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/extended_server_attributes.py:L21–L21` |
| `extended_server_attributes_policies` | variable | — | exported | not declared | — | `src/nova/policies/extended_server_attributes.py:L24–L71` |
| `list_rules` | function | — | exported | `extended_server_attributes_policies` (src/nova/policies/extended_server_attributes.py:L75) | 1/2 | `src/nova/policies/extended_server_attributes.py:L74–L75` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/extended_server_attributes.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/extended_server_attributes.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-extended-server-attributes' (src/nova/policies/extended_server_attributes.py:L21)

