# src/nova/policies/base.py

## Overview

This file implements the `base` module, defining 12 constants, 1 function, 1 variable, 1 import, 12 side effects.

Lines: total 149, code 90, comment 46, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RULE_ADMIN_OR_OWNER` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L17–L17` |
| `RULE_ADMIN_API` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L18–L18` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L20–L24` |
| `DEPRECATED_ADMIN_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L26–L31` |
| `DEPRECATED_ADMIN_OR_OWNER_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L33–L38` |
| `ADMIN` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L45–L45` |
| `PROJECT_MANAGER_OR_ADMIN` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L46–L46` |
| `PROJECT_MEMBER_OR_ADMIN` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L47–L47` |
| `PROJECT_READER_OR_ADMIN` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L48–L48` |
| `RULE_ANY` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L49–L49` |
| `RULE_NOBODY` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L50–L50` |
| `SERVICE_ROLE` | constant | — | exported | not declared | — | `src/nova/policies/base.py:L56–L56` |
| `rules` | variable | — | exported | not declared | — | `src/nova/policies/base.py:L84–L145` |
| `list_rules` | function | — | exported | `rules` (src/nova/policies/base.py:L149) | 1/2 | `src/nova/policies/base.py:L148–L149` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/base.py:L13)

## Side Effects

- **global-mutation**: RULE_ADMIN_OR_OWNER = 'rule:admin_or_owner'  # Admins or owners of the resource (src/nova/policies/base.py:L17)
- **global-mutation**: RULE_ADMIN_API = 'rule:admin_api'  # Allow only users with the admin role (src/nova/policies/base.py:L18)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/base.py:L20)
- **global-mutation**: DEPRECATED_ADMIN_POLICY = policy.DeprecatedRule( (src/nova/policies/base.py:L26)
- **global-mutation**: DEPRECATED_ADMIN_OR_OWNER_POLICY = policy.DeprecatedRule( (src/nova/policies/base.py:L33)
- **global-mutation**: ADMIN = 'rule:context_is_admin' (src/nova/policies/base.py:L45)
- **global-mutation**: PROJECT_MANAGER_OR_ADMIN = 'rule:project_manager_or_admin' (src/nova/policies/base.py:L46)
- **global-mutation**: PROJECT_MEMBER_OR_ADMIN = 'rule:project_member_or_admin' (src/nova/policies/base.py:L47)
- **global-mutation**: PROJECT_READER_OR_ADMIN = 'rule:project_reader_or_admin' (src/nova/policies/base.py:L48)
- **global-mutation**: RULE_ANY = '@'  # Any user is allowed to perform the action. (src/nova/policies/base.py:L49)
- **global-mutation**: RULE_NOBODY = '!'  # No users are allowed to perform the action. (src/nova/policies/base.py:L50)
- **global-mutation**: SERVICE_ROLE = 'rule:service_or_admin' (src/nova/policies/base.py:L56)

