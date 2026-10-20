# src/nova/policies/console_auth_tokens.py

## Overview

This file implements the `console_auth_tokens` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 41, code 19, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/console_auth_tokens.py:L21–L21` |
| `console_auth_tokens_policies` | variable | — | exported | not declared | — | `src/nova/policies/console_auth_tokens.py:L24–L37` |
| `list_rules` | function | — | exported | `console_auth_tokens_policies` (src/nova/policies/console_auth_tokens.py:L41) | 1/2 | `src/nova/policies/console_auth_tokens.py:L40–L41` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/console_auth_tokens.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/console_auth_tokens.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-console-auth-tokens' (src/nova/policies/console_auth_tokens.py:L21)

