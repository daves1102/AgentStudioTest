# src/nova/policies/migrations.py

## Overview

This file implements the `migrations` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects, 1 security surface entry.

Lines: total 98, code 56, comment 32, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/migrations.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/migrations.py:L23–L30` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/migrations.py:L32–L37` |
| `migrations_policies` | variable | — | exported | not declared | — | `src/nova/policies/migrations.py:L40–L94` |
| `list_rules` | function | — | exported | `migrations_policies` (src/nova/policies/migrations.py:L98) | 1/2 | `src/nova/policies/migrations.py:L97–L98` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/migrations.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/migrations.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-migrations:%s' (src/nova/policies/migrations.py:L21)
- **global-mutation**: DEPRECATED_REASON = """\ (src/nova/policies/migrations.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/migrations.py:L32)

## Security Surface

- **sink** (`db-write`): deployment, you must also update the new policy to keep the same (src/nova/policies/migrations.py:L28)

