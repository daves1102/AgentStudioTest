# src/nova/policies/multinic.py

## Overview

This file implements the `multinic` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 73, code 47, comment 14, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ROOT_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/multinic.py:L21–L21` |
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/multinic.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/multinic.py:L24–L28` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/multinic.py:L30–L35` |
| `multinic_policies` | variable | — | exported | not declared | — | `src/nova/policies/multinic.py:L38–L69` |
| `list_rules` | function | — | exported | `multinic_policies` (src/nova/policies/multinic.py:L73) | 1/2 | `src/nova/policies/multinic.py:L72–L73` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/multinic.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/multinic.py:L18)

## Side Effects

- **global-mutation**: ROOT_POLICY = 'os_compute_api:os-multinic' (src/nova/policies/multinic.py:L21)
- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-multinic:%s' (src/nova/policies/multinic.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/multinic.py:L24)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/multinic.py:L30)

