# src/nova/policies/services.py

## Overview

This file implements the `services` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects, 2 security surface entries.

Lines: total 79, code 54, comment 15, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/services.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/services.py:L23–L27` |
| `DEPRECATED_SERVICE_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/services.py:L29–L34` |
| `services_policies` | variable | — | exported | not declared | — | `src/nova/policies/services.py:L37–L75` |
| `list_rules` | function | — | exported | `services_policies` (src/nova/policies/services.py:L79) | 1/2 | `src/nova/policies/services.py:L78–L79` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/services.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/services.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-services:%s' (src/nova/policies/services.py:L21)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/services.py:L23)
- **global-mutation**: DEPRECATED_SERVICE_POLICY = policy.DeprecatedRule( (src/nova/policies/services.py:L29)

## Security Surface

- **sink** (`db-write`): name=BASE_POLICY_NAME % 'update', (src/nova/policies/services.py:L51)
- **sink** (`db-write`): description="Update a Compute service.", (src/nova/policies/services.py:L53)

