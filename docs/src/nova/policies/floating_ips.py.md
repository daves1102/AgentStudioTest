# src/nova/policies/floating_ips.py

## Overview

This file implements the `floating_ips` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 117, code 93, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ROOT_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/floating_ips.py:L21–L21` |
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/floating_ips.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/floating_ips.py:L24–L28` |
| `DEPRECATED_FIP_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/floating_ips.py:L30–L35` |
| `floating_ips_policies` | variable | — | exported | not declared | — | `src/nova/policies/floating_ips.py:L38–L113` |
| `list_rules` | function | — | exported | `floating_ips_policies` (src/nova/policies/floating_ips.py:L117) | 1/2 | `src/nova/policies/floating_ips.py:L116–L117` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/floating_ips.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/floating_ips.py:L18)

## Side Effects

- **global-mutation**: ROOT_POLICY = 'os_compute_api:os-floating-ips' (src/nova/policies/floating_ips.py:L21)
- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-floating-ips:%s' (src/nova/policies/floating_ips.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/floating_ips.py:L24)
- **global-mutation**: DEPRECATED_FIP_POLICY = policy.DeprecatedRule( (src/nova/policies/floating_ips.py:L30)

