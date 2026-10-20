# src/nova/policies/hosts.py

## Overview

This file implements the `hosts` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects, 2 security surface entries.

Lines: total 127, code 97, comment 14, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/hosts.py:L21–L21` |
| `POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/hosts.py:L23–L23` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/hosts.py:L25–L29` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/hosts.py:L31–L36` |
| `hosts_policies` | variable | — | exported | not declared | — | `src/nova/policies/hosts.py:L38–L123` |
| `list_rules` | function | — | exported | `hosts_policies` (src/nova/policies/hosts.py:L127) | 1/2 | `src/nova/policies/hosts.py:L126–L127` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/hosts.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/hosts.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-hosts' (src/nova/policies/hosts.py:L21)
- **global-mutation**: POLICY_NAME = 'os_compute_api:os-hosts:%s' (src/nova/policies/hosts.py:L23)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/hosts.py:L25)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/hosts.py:L31)

## Security Surface

- **sink** (`db-write`): name=POLICY_NAME % 'update', (src/nova/policies/hosts.py:L68)
- **sink** (`db-write`): description="""Update physical host. (src/nova/policies/hosts.py:L70)

