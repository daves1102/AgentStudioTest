# src/nova/policies/servers_migrations.py

## Overview

This file implements the `servers_migrations` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects, 1 security surface entry.

Lines: total 118, code 81, comment 27, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/servers_migrations.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/servers_migrations.py:L23–L29` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/servers_migrations.py:L31–L36` |
| `servers_migrations_policies` | variable | — | exported | not declared | — | `src/nova/policies/servers_migrations.py:L38–L114` |
| `list_rules` | function | — | exported | `servers_migrations_policies` (src/nova/policies/servers_migrations.py:L118) | 1/2 | `src/nova/policies/servers_migrations.py:L117–L118` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/servers_migrations.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/servers_migrations.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:servers:migrations:%s' (src/nova/policies/servers_migrations.py:L21)
- **global-mutation**: DEPRECATED_REASON = """\ (src/nova/policies/servers_migrations.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/servers_migrations.py:L31)

## Security Surface

- **sink** (`db-write`): also update the new policy to keep the same permissions. (src/nova/policies/servers_migrations.py:L28)

