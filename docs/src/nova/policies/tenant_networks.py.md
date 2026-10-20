# src/nova/policies/tenant_networks.py

## Overview

This file implements the `tenant_networks` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 71, code 45, comment 14, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/tenant_networks.py:L21–L21` |
| `POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/tenant_networks.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/tenant_networks.py:L24–L28` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/tenant_networks.py:L30–L35` |
| `tenant_networks_policies` | variable | — | exported | not declared | — | `src/nova/policies/tenant_networks.py:L38–L67` |
| `list_rules` | function | — | exported | `tenant_networks_policies` (src/nova/policies/tenant_networks.py:L71) | 1/2 | `src/nova/policies/tenant_networks.py:L70–L71` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/tenant_networks.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/tenant_networks.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-tenant-networks' (src/nova/policies/tenant_networks.py:L21)
- **global-mutation**: POLICY_NAME = 'os_compute_api:os-tenant-networks:%s' (src/nova/policies/tenant_networks.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/tenant_networks.py:L24)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/tenant_networks.py:L30)

