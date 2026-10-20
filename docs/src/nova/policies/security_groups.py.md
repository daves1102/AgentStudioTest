# src/nova/policies/security_groups.py

## Overview

This file implements the `security_groups` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects, 2 security surface entries.

Lines: total 163, code 139, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/security_groups.py:L21–L21` |
| `POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/security_groups.py:L23–L23` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/security_groups.py:L25–L29` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/security_groups.py:L31–L36` |
| `security_groups_policies` | variable | — | exported | not declared | — | `src/nova/policies/security_groups.py:L38–L159` |
| `list_rules` | function | — | exported | `security_groups_policies` (src/nova/policies/security_groups.py:L163) | 1/2 | `src/nova/policies/security_groups.py:L162–L163` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/security_groups.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/security_groups.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-security-groups' (src/nova/policies/security_groups.py:L21)
- **global-mutation**: POLICY_NAME = 'os_compute_api:os-security-groups:%s' (src/nova/policies/security_groups.py:L23)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/security_groups.py:L25)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/security_groups.py:L31)

## Security Surface

- **sink** (`db-write`): name=POLICY_NAME % 'update', (src/nova/policies/security_groups.py:L76)
- **sink** (`db-write`): description="Update security group. This API is deprecated.", (src/nova/policies/security_groups.py:L78)

