# src/nova/policies/simple_tenant_usage.py

## Overview

This file implements the `simple_tenant_usage` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 51, code 29, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/simple_tenant_usage.py:L21–L21` |
| `simple_tenant_usage_policies` | variable | — | exported | not declared | — | `src/nova/policies/simple_tenant_usage.py:L24–L47` |
| `list_rules` | function | — | exported | `simple_tenant_usage_policies` (src/nova/policies/simple_tenant_usage.py:L51) | 1/2 | `src/nova/policies/simple_tenant_usage.py:L50–L51` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/simple_tenant_usage.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/simple_tenant_usage.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-simple-tenant-usage:%s' (src/nova/policies/simple_tenant_usage.py:L21)

