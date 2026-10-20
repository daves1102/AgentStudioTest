# src/nova/policies/instance_actions.py

## Overview

This file implements the `instance_actions` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 105, code 80, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ROOT_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/instance_actions.py:L21–L21` |
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/instance_actions.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/instance_actions.py:L24–L28` |
| `DEPRECATED_INSTANCE_ACTION_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/instance_actions.py:L30–L35` |
| `instance_actions_policies` | variable | — | exported | not declared | — | `src/nova/policies/instance_actions.py:L38–L101` |
| `list_rules` | function | — | exported | `instance_actions_policies` (src/nova/policies/instance_actions.py:L105) | 1/2 | `src/nova/policies/instance_actions.py:L104–L105` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/instance_actions.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/instance_actions.py:L18)

## Side Effects

- **global-mutation**: ROOT_POLICY = 'os_compute_api:os-instance-actions' (src/nova/policies/instance_actions.py:L21)
- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-instance-actions:%s' (src/nova/policies/instance_actions.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/instance_actions.py:L24)
- **global-mutation**: DEPRECATED_INSTANCE_ACTION_POLICY = policy.DeprecatedRule( (src/nova/policies/instance_actions.py:L30)

