# src/nova/policies/admin_password.py

## Overview

This file implements the `admin_password` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 40, code 18, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/admin_password.py:L21–L21` |
| `admin_password_policies` | variable | — | exported | not declared | — | `src/nova/policies/admin_password.py:L24–L36` |
| `list_rules` | function | — | exported | `admin_password_policies` (src/nova/policies/admin_password.py:L40) | 1/2 | `src/nova/policies/admin_password.py:L39–L40` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/admin_password.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/admin_password.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-admin-password' (src/nova/policies/admin_password.py:L21)

