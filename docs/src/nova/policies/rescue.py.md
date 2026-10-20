# src/nova/policies/rescue.py

## Overview

This file implements the `rescue` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 66, code 42, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/rescue.py:L21–L21` |
| `UNRESCUE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/rescue.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/rescue.py:L24–L27` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/rescue.py:L29–L34` |
| `rescue_policies` | variable | — | exported | not declared | — | `src/nova/policies/rescue.py:L37–L62` |
| `list_rules` | function | — | exported | `rescue_policies` (src/nova/policies/rescue.py:L66) | 1/2 | `src/nova/policies/rescue.py:L65–L66` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/rescue.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/rescue.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-rescue' (src/nova/policies/rescue.py:L21)
- **global-mutation**: UNRESCUE_POLICY_NAME = 'os_compute_api:os-unrescue' (src/nova/policies/rescue.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/rescue.py:L24)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/rescue.py:L29)

