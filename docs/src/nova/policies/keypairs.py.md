# src/nova/policies/keypairs.py

## Overview

This file implements the `keypairs` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 72, code 51, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/keypairs.py:L20–L20` |
| `keypairs_policies` | variable | — | exported | not declared | — | `src/nova/policies/keypairs.py:L23–L68` |
| `list_rules` | function | — | exported | `keypairs_policies` (src/nova/policies/keypairs.py:L72) | 1/2 | `src/nova/policies/keypairs.py:L71–L72` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/keypairs.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/keypairs.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-keypairs:%s' (src/nova/policies/keypairs.py:L20)

