# src/nova/policies/networks.py

## Overview

This file implements the `networks` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 71, code 45, comment 14, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/networks.py:L21–L21` |
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/networks.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/networks.py:L24–L28` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/networks.py:L30–L35` |
| `networks_policies` | variable | — | exported | not declared | — | `src/nova/policies/networks.py:L38–L67` |
| `list_rules` | function | — | exported | `networks_policies` (src/nova/policies/networks.py:L71) | 1/2 | `src/nova/policies/networks.py:L70–L71` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/networks.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/networks.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-networks:%s' (src/nova/policies/networks.py:L21)
- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-networks:view' (src/nova/policies/networks.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/networks.py:L24)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/networks.py:L30)

