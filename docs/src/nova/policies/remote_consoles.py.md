# src/nova/policies/remote_consoles.py

## Overview

This file implements the `remote_consoles` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 59, code 35, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/remote_consoles.py:L21–L21` |
| `remote_consoles_policies` | variable | — | exported | not declared | — | `src/nova/policies/remote_consoles.py:L24–L55` |
| `list_rules` | function | — | exported | `remote_consoles_policies` (src/nova/policies/remote_consoles.py:L59) | 1/2 | `src/nova/policies/remote_consoles.py:L58–L59` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/remote_consoles.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/remote_consoles.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-remote-consoles' (src/nova/policies/remote_consoles.py:L21)

