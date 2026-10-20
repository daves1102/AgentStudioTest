# src/nova/policies/aggregates.py

## Overview

This file implements the `aggregates` module, defining 2 constants, 1 function, 1 variable, 2 imports, 2 side effects, 2 security surface entries.

Lines: total 129, code 107, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/aggregates.py:L21–L21` |
| `NEW_POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/aggregates.py:L22–L22` |
| `aggregates_policies` | variable | — | exported | not declared | — | `src/nova/policies/aggregates.py:L25–L125` |
| `list_rules` | function | — | exported | `aggregates_policies` (src/nova/policies/aggregates.py:L129) | 1/2 | `src/nova/policies/aggregates.py:L128–L129` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/aggregates.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/aggregates.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-aggregates:%s' (src/nova/policies/aggregates.py:L21)
- **global-mutation**: NEW_POLICY_ROOT = 'compute:aggregates:%s' (src/nova/policies/aggregates.py:L22)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/aggregates.py:L71)
- **sink** (`db-write`): description="Update name and/or availability zone for an aggregate", (src/nova/policies/aggregates.py:L73)

