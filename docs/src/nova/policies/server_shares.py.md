# src/nova/policies/server_shares.py

## Overview

This file implements the `server_shares` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 70, code 51, comment 11, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/server_shares.py:L18–L18` |
| `server_shares_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_shares.py:L21–L66` |
| `list_rules` | function | — | exported | `server_shares_policies` (src/nova/policies/server_shares.py:L70) | 1/2 | `src/nova/policies/server_shares.py:L69–L70` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_shares.py:L13)
- `nova.policies`: imports `base` (src/nova/policies/server_shares.py:L15)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-server-shares:%s' (src/nova/policies/server_shares.py:L18)

