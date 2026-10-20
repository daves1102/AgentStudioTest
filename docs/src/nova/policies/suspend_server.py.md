# src/nova/policies/suspend_server.py

## Overview

This file implements the `suspend_server` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 51, code 29, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/suspend_server.py:L21–L21` |
| `suspend_server_policies` | variable | — | exported | not declared | — | `src/nova/policies/suspend_server.py:L24–L47` |
| `list_rules` | function | — | exported | `suspend_server_policies` (src/nova/policies/suspend_server.py:L51) | 1/2 | `src/nova/policies/suspend_server.py:L50–L51` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/suspend_server.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/suspend_server.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-suspend-server:%s' (src/nova/policies/suspend_server.py:L21)

