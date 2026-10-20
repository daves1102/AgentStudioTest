# src/nova/policies/server_groups.py

## Overview

This file implements the `server_groups` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 89, code 67, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/server_groups.py:L21–L21` |
| `server_groups_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_groups.py:L24–L85` |
| `list_rules` | function | — | exported | `server_groups_policies` (src/nova/policies/server_groups.py:L89) | 1/2 | `src/nova/policies/server_groups.py:L88–L89` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_groups.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/server_groups.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-server-groups:%s' (src/nova/policies/server_groups.py:L21)

