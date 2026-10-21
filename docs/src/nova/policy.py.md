# src/nova/policy.py

## Overview

This file implements the `policy` module, defining 1 class, 4 constants, 12 functions, 2 methods, 2 variables, 9 imports, 4 side effects, 1 security surface entry.

Lines: total 285, code 189, comment 40, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/policy.py:L31–L31` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/policy.py:L32–L32` |
| `_ENFORCER` | variable | — | unexported | not declared | — | `src/nova/policy.py:L33–L33` |
| `USER_BASED_RESOURCES` | constant | — | exported | not declared | — | `src/nova/policy.py:L36–L36` |
| `saved_file_rules` | variable | — | exported | not declared | — | `src/nova/policy.py:L41–L41` |
| `KEY_EXPR` | constant | — | exported | not declared | — | `src/nova/policy.py:L42–L42` |
| `reset` | function | — | exported | not declared | 2/5 | `src/nova/policy.py:L45–L49` |
| `init` | function | (policy_file=None, rules=None, default_rule=None, use_conf=True, suppress_deprecation_warnings=False) | exported | not declared | 5/24 | `src/nova/policy.py:L52–L105` |
| `_serialize_rules` | function | (rules) | unexported | `sorted(result, key=lambda rule: rule[0])` (src/nova/policy.py:L114) | 2/4 | `src/nova/policy.py:L108–L114` |
| `_warning_for_deprecated_user_based_rules` | function | (rules) | unexported | not declared | 6/12 | `src/nova/policy.py:L117–L133` |
| `set_rules` | function | (rules, overwrite=True, use_conf=False) | exported | not declared | 1/3 | `src/nova/policy.py:L136–L146` |
| `authorize` | function | (context, action, target=None, do_raise=True, exc=None) | exported | `result` (src/nova/policy.py:L206) | 6/25 | `src/nova/policy.py:L149–L206` |
| `default_target` | function | (context) | exported | `{'project_id': context.project_id, 'user_id': context.user_id}` (src/nova/policy.py:L210) | 1/2 | `src/nova/policy.py:L209–L210` |
| `check_is_admin` | function | (context) | exported | `_ENFORCER.authorize('context_is_admin', target, context)` (src/nova/policy.py:L221) | 1/4 | `src/nova/policy.py:L213–L221` |
| `IsAdminCheck` | class | — | exported | not declared | — | `src/nova/policy.py:L225–L238` |
| `IsAdminCheck.__init__` | method | (self, kind, match) | public | not declared | 1/3 | `src/nova/policy.py:L228–L233` |
| `IsAdminCheck.__call__` | method | (self, target, creds, enforcer) | public | `creds['is_admin'] == self.expected` (src/nova/policy.py:L238) | 1/2 | `src/nova/policy.py:L235–L238` |
| `get_rules` | function | — | exported | `_ENFORCER.rules` (src/nova/policy.py:L243) | 2/3 | `src/nova/policy.py:L241–L243` |
| `register_rules` | function | (enforcer) | exported | not declared | 1/2 | `src/nova/policy.py:L246–L247` |
| `get_enforcer` | function | — | exported | `_ENFORCER` (src/nova/policy.py:L255) | 1/4 | `src/nova/policy.py:L250–L255` |
| `verify_deprecated_policy` | function | (old_policy, new_policy, default_rule, context) | exported | `True` (src/nova/policy.py:L283); `False` (src/nova/policy.py:L285) | 3/14 | `src/nova/policy.py:L258–L285` |

## Dependencies

- `import copy` (src/nova/policy.py:L17)
- `import re` (src/nova/policy.py:L18)
- `oslo_concurrency`: imports `lockutils` (src/nova/policy.py:L20)
- `oslo_config`: imports `cfg` (src/nova/policy.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/policy.py:L22)
- `oslo_policy`: imports `policy` (src/nova/policy.py:L23)
- `oslo_utils`: imports `excutils` (src/nova/policy.py:L24)
- `nova`: imports `exception` (src/nova/policy.py:L27)
- `nova`: imports `policies` (src/nova/policy.py:L28)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/policy.py:L31)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/policy.py:L32)
- **global-mutation**: USER_BASED_RESOURCES = ['os-keypairs'] (src/nova/policy.py:L36)
- **global-mutation**: KEY_EXPR = re.compile(r'%\((\w+)\)s') (src/nova/policy.py:L42)

## Security Surface

- **sink** (`db-write`): :param overwrite: Whether to overwrite current rules or update them (src/nova/policy.py:L140)

