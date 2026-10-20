# src/nova/policies/availability_zone.py

## Overview

This file implements the `availability_zone` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 53, code 31, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/availability_zone.py:L21–L21` |
| `availability_zone_policies` | variable | — | exported | not declared | — | `src/nova/policies/availability_zone.py:L24–L49` |
| `list_rules` | function | — | exported | `availability_zone_policies` (src/nova/policies/availability_zone.py:L53) | 1/2 | `src/nova/policies/availability_zone.py:L52–L53` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/availability_zone.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/availability_zone.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-availability-zone:%s' (src/nova/policies/availability_zone.py:L21)

