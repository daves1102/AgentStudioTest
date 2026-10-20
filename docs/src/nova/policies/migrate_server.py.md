# src/nova/policies/migrate_server.py

## Overview

This file implements the `migrate_server` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects.

Lines: total 105, code 68, comment 27, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/migrate_server.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/migrate_server.py:L23–L30` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/migrate_server.py:L32–L37` |
| `migrate_server_policies` | variable | — | exported | not declared | — | `src/nova/policies/migrate_server.py:L39–L101` |
| `list_rules` | function | — | exported | `migrate_server_policies` (src/nova/policies/migrate_server.py:L105) | 1/2 | `src/nova/policies/migrate_server.py:L104–L105` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/migrate_server.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/migrate_server.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-migrate-server:%s' (src/nova/policies/migrate_server.py:L21)
- **global-mutation**: DEPRECATED_REASON = """\ (src/nova/policies/migrate_server.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/migrate_server.py:L32)

