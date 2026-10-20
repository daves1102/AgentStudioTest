# src/nova/policies/shelve.py

## Overview

This file implements the `shelve` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 74, code 52, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/shelve.py:L21–L21` |
| `shelve_policies` | variable | — | exported | not declared | — | `src/nova/policies/shelve.py:L24–L70` |
| `list_rules` | function | — | exported | `shelve_policies` (src/nova/policies/shelve.py:L74) | 1/2 | `src/nova/policies/shelve.py:L73–L74` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/shelve.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/shelve.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-shelve:%s' (src/nova/policies/shelve.py:L21)

