# src/nova/policies/limits.py

## Overview

This file implements the `limits` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 70, code 46, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/limits.py:L21–L21` |
| `OTHER_PROJECT_LIMIT_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/limits.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/limits.py:L24–L28` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/limits.py:L30–L35` |
| `limits_policies` | variable | — | exported | not declared | — | `src/nova/policies/limits.py:L37–L66` |
| `list_rules` | function | — | exported | `limits_policies` (src/nova/policies/limits.py:L70) | 1/2 | `src/nova/policies/limits.py:L69–L70` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/limits.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/limits.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:limits' (src/nova/policies/limits.py:L21)
- **global-mutation**: OTHER_PROJECT_LIMIT_POLICY_NAME = 'os_compute_api:limits:other_project' (src/nova/policies/limits.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/limits.py:L24)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/limits.py:L30)

