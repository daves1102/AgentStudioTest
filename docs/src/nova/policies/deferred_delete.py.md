# src/nova/policies/deferred_delete.py

## Overview

This file implements the `deferred_delete` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects.

Lines: total 65, code 42, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/deferred_delete.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/deferred_delete.py:L23–L27` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/deferred_delete.py:L29–L34` |
| `deferred_delete_policies` | variable | — | exported | not declared | — | `src/nova/policies/deferred_delete.py:L36–L61` |
| `list_rules` | function | — | exported | `deferred_delete_policies` (src/nova/policies/deferred_delete.py:L65) | 1/2 | `src/nova/policies/deferred_delete.py:L64–L65` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/deferred_delete.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/deferred_delete.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-deferred-delete:%s' (src/nova/policies/deferred_delete.py:L21)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/deferred_delete.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/deferred_delete.py:L29)

