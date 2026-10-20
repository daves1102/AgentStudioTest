# src/nova/policies/extensions.py

## Overview

This file implements the `extensions` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 45, code 23, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/extensions.py:L21–L21` |
| `extensions_policies` | variable | — | exported | not declared | — | `src/nova/policies/extensions.py:L24–L41` |
| `list_rules` | function | — | exported | `extensions_policies` (src/nova/policies/extensions.py:L45) | 1/2 | `src/nova/policies/extensions.py:L44–L45` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/extensions.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/extensions.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:extensions' (src/nova/policies/extensions.py:L21)

