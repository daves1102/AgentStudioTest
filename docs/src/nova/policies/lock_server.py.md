# src/nova/policies/lock_server.py

## Overview

This file implements the `lock_server` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 68, code 45, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/lock_server.py:L21–L21` |
| `lock_server_policies` | variable | — | exported | not declared | — | `src/nova/policies/lock_server.py:L24–L64` |
| `list_rules` | function | — | exported | `lock_server_policies` (src/nova/policies/lock_server.py:L68) | 1/2 | `src/nova/policies/lock_server.py:L67–L68` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/lock_server.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/lock_server.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-lock-server:%s' (src/nova/policies/lock_server.py:L21)

