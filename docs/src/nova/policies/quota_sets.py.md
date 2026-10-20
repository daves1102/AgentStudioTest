# src/nova/policies/quota_sets.py

## Overview

This file implements the `quota_sets` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect, 2 security surface entries.

Lines: total 87, code 62, comment 17, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/quota_sets.py:L21–L21` |
| `quota_sets_policies` | variable | — | exported | not declared | — | `src/nova/policies/quota_sets.py:L24–L83` |
| `list_rules` | function | — | exported | `quota_sets_policies` (src/nova/policies/quota_sets.py:L87) | 1/2 | `src/nova/policies/quota_sets.py:L86–L87` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/quota_sets.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/quota_sets.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-quota-sets:%s' (src/nova/policies/quota_sets.py:L21)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/quota_sets.py:L26)
- **sink** (`db-write`): description="Update the quotas", (src/nova/policies/quota_sets.py:L28)

