# src/nova/tests/unit/policies/base.py

## Overview

This file implements the `base` module, defining 1 class, 1 constant, 2 fields, 3 functions, 4 methods, 7 imports, 1 side effect, 1 security surface entry.

Lines: total 363, code 230, comment 88, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/base.py:L24–L24` |
| `rule_if_system` | function | (system_rule, non_system_rule, context) | exported | `system_rule` (src/nova/tests/unit/policies/base.py:L39); `non_system_rule` (src/nova/tests/unit/policies/base.py:L41) | 2/5 | `src/nova/tests/unit/policies/base.py:L27–L41` |
| `BasePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/base.py:L44–L363` |
| `BasePolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/base.py:L49–L49` |
| `BasePolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/base.py:L57–L57` |
| `BasePolicyTest.setUp` | method | (self) | public | not declared | 3/122 | `src/nova/tests/unit/policies/base.py:L59–L227` |
| `BasePolicyTest.reduce_set` | method | (self, name, new_set) | public | not declared | 3/10 | `src/nova/tests/unit/policies/base.py:L229–L252` |
| `BasePolicyTest.common_policy_auth` | method | (self, authorized_contexts, rule_name, func, req, *arg, **kwarg) | public | `self.common_policy_check(authorized_contexts, unauth, rule_name, func, req, *arg, **kwarg)` (src/nova/tests/unit/policies/base.py:L272) | 3/10 | `src/nova/tests/unit/policies/base.py:L254–L273` |
| `BasePolicyTest.common_policy_check` | method | (self, authorized_contexts, unauthorized_contexts, rule_name, func, req, *arg, **kwarg) | public | `authorized_response, unauthorize_response` (src/nova/tests/unit/policies/base.py:L363) | 7/38 | `src/nova/tests/unit/policies/base.py:L275–L363` |
| `BasePolicyTest.common_policy_check.ensure_return` | function | (req, *args, **kwargs) | public | `func(req, *arg, **kwargs)` (src/nova/tests/unit/policies/base.py:L295) | — | `src/nova/tests/unit/policies/base.py:L294–L295` |
| `BasePolicyTest.common_policy_check.ensure_raises` | function | (req, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/policies/base.py:L297–L318` |

## Dependencies

- `import copy` (src/nova/tests/unit/policies/base.py:L13)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/policies/base.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/base.py:L16)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/policies/base.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/policies/base.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/policies/base.py:L20)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/policies/base.py:L21)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/policies/base.py:L24)

## Security Surface

- **sink** (`db-write`): self.rules_without_deprecation.update({ (src/nova/tests/unit/policies/base.py:L205)

