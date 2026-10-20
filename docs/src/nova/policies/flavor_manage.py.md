# src/nova/policies/flavor_manage.py

## Overview

This file implements the `flavor_manage` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect, 2 security surface entries.

Lines: total 63, code 40, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/flavor_manage.py:L22–L22` |
| `flavor_manage_policies` | variable | — | exported | not declared | — | `src/nova/policies/flavor_manage.py:L25–L59` |
| `list_rules` | function | — | exported | `flavor_manage_policies` (src/nova/policies/flavor_manage.py:L63) | 1/2 | `src/nova/policies/flavor_manage.py:L62–L63` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/flavor_manage.py:L17)
- `nova.policies`: imports `base` (src/nova/policies/flavor_manage.py:L19)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-flavor-manage:%s' (src/nova/policies/flavor_manage.py:L22)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/flavor_manage.py:L38)
- **sink** (`db-write`): description="Update a flavor", (src/nova/policies/flavor_manage.py:L40)

