# src/nova/policies/flavor_access.py

## Overview

This file implements the `flavor_access` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 88, code 56, comment 21, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/flavor_access.py:L22–L22` |
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/flavor_access.py:L23–L23` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/flavor_access.py:L32–L36` |
| `DEPRECATED_FLAVOR_ACCESS_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/flavor_access.py:L38–L43` |
| `flavor_access_policies` | variable | — | exported | not declared | — | `src/nova/policies/flavor_access.py:L45–L84` |
| `list_rules` | function | — | exported | `flavor_access_policies` (src/nova/policies/flavor_access.py:L88) | 1/2 | `src/nova/policies/flavor_access.py:L87–L88` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/flavor_access.py:L17)
- `nova.policies`: imports `base` (src/nova/policies/flavor_access.py:L19)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-flavor-access' (src/nova/policies/flavor_access.py:L22)
- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-flavor-access:%s' (src/nova/policies/flavor_access.py:L23)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/flavor_access.py:L32)
- **global-mutation**: DEPRECATED_FLAVOR_ACCESS_POLICY = policy.DeprecatedRule( (src/nova/policies/flavor_access.py:L38)

