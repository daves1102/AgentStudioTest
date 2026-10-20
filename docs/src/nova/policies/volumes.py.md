# src/nova/policies/volumes.py

## Overview

This file implements the `volumes` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 183, code 149, comment 14, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/volumes.py:L21–L21` |
| `POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/volumes.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/volumes.py:L24–L28` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/volumes.py:L30–L35` |
| `volumes_policies` | variable | — | exported | not declared | — | `src/nova/policies/volumes.py:L38–L179` |
| `list_rules` | function | — | exported | `volumes_policies` (src/nova/policies/volumes.py:L183) | 1/2 | `src/nova/policies/volumes.py:L182–L183` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/volumes.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/volumes.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-volumes' (src/nova/policies/volumes.py:L21)
- **global-mutation**: POLICY_NAME = 'os_compute_api:os-volumes:%s' (src/nova/policies/volumes.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/volumes.py:L24)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/volumes.py:L30)

