# src/nova/policies/server_password.py

## Overview

This file implements the `server_password` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects.

Lines: total 68, code 44, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/server_password.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/server_password.py:L23–L27` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/server_password.py:L29–L34` |
| `server_password_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_password.py:L37–L64` |
| `list_rules` | function | — | exported | `server_password_policies` (src/nova/policies/server_password.py:L68) | 1/2 | `src/nova/policies/server_password.py:L67–L68` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_password.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/server_password.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-server-password:%s' (src/nova/policies/server_password.py:L21)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/server_password.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/server_password.py:L29)

