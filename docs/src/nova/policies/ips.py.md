# src/nova/policies/ips.py

## Overview

This file implements the `ips` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 52, code 30, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/ips.py:L21–L21` |
| `ips_policies` | variable | — | exported | not declared | — | `src/nova/policies/ips.py:L24–L48` |
| `list_rules` | function | — | exported | `ips_policies` (src/nova/policies/ips.py:L52) | 1/2 | `src/nova/policies/ips.py:L51–L52` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/ips.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/ips.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:ips:%s' (src/nova/policies/ips.py:L21)

