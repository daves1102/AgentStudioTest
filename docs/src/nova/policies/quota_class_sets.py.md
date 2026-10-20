# src/nova/policies/quota_class_sets.py

## Overview

This file implements the `quota_class_sets` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect, 2 security surface entries.

Lines: total 51, code 29, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/quota_class_sets.py:L21–L21` |
| `quota_class_sets_policies` | variable | — | exported | not declared | — | `src/nova/policies/quota_class_sets.py:L24–L47` |
| `list_rules` | function | — | exported | `quota_class_sets_policies` (src/nova/policies/quota_class_sets.py:L51) | 1/2 | `src/nova/policies/quota_class_sets.py:L50–L51` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/quota_class_sets.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/quota_class_sets.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-quota-class-sets:%s' (src/nova/policies/quota_class_sets.py:L21)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/quota_class_sets.py:L37)
- **sink** (`db-write`): description='Update quotas for specific quota class', (src/nova/policies/quota_class_sets.py:L39)

