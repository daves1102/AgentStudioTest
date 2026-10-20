# src/nova/policies/floating_ip_pools.py

## Overview

This file implements the `floating_ip_pools` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 40, code 18, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/floating_ip_pools.py:L21–L21` |
| `floating_ip_pools_policies` | variable | — | exported | not declared | — | `src/nova/policies/floating_ip_pools.py:L24–L36` |
| `list_rules` | function | — | exported | `floating_ip_pools_policies` (src/nova/policies/floating_ip_pools.py:L40) | 1/2 | `src/nova/policies/floating_ip_pools.py:L39–L40` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/floating_ip_pools.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/floating_ip_pools.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-floating-ip-pools' (src/nova/policies/floating_ip_pools.py:L21)

