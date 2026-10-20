# src/nova/policies/hypervisors.py

## Overview

This file implements the `hypervisors` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects.

Lines: total 130, code 106, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/hypervisors.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/hypervisors.py:L23–L27` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/hypervisors.py:L29–L34` |
| `hypervisors_policies` | variable | — | exported | not declared | — | `src/nova/policies/hypervisors.py:L37–L126` |
| `list_rules` | function | — | exported | `hypervisors_policies` (src/nova/policies/hypervisors.py:L130) | 1/2 | `src/nova/policies/hypervisors.py:L129–L130` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/hypervisors.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/hypervisors.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-hypervisors:%s' (src/nova/policies/hypervisors.py:L21)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/hypervisors.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/hypervisors.py:L29)

