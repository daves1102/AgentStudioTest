# src/nova/policies/attach_interfaces.py

## Overview

This file implements the `attach_interfaces` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 90, code 67, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/attach_interfaces.py:L21–L21` |
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/attach_interfaces.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/attach_interfaces.py:L24–L28` |
| `DEPRECATED_INTERFACES_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/attach_interfaces.py:L30–L35` |
| `attach_interfaces_policies` | variable | — | exported | not declared | — | `src/nova/policies/attach_interfaces.py:L37–L86` |
| `list_rules` | function | — | exported | `attach_interfaces_policies` (src/nova/policies/attach_interfaces.py:L90) | 1/2 | `src/nova/policies/attach_interfaces.py:L89–L90` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/attach_interfaces.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/attach_interfaces.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-attach-interfaces' (src/nova/policies/attach_interfaces.py:L21)
- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-attach-interfaces:%s' (src/nova/policies/attach_interfaces.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/attach_interfaces.py:L24)
- **global-mutation**: DEPRECATED_INTERFACES_POLICY = policy.DeprecatedRule( (src/nova/policies/attach_interfaces.py:L30)

