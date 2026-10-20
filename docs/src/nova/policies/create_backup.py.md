# src/nova/policies/create_backup.py

## Overview

This file implements the `create_backup` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 40, code 18, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/create_backup.py:L21–L21` |
| `create_backup_policies` | variable | — | exported | not declared | — | `src/nova/policies/create_backup.py:L24–L36` |
| `list_rules` | function | — | exported | `create_backup_policies` (src/nova/policies/create_backup.py:L40) | 1/2 | `src/nova/policies/create_backup.py:L39–L40` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/create_backup.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/create_backup.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-create-backup' (src/nova/policies/create_backup.py:L21)

