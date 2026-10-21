# src/nova/tests/unit/cmd/test_policy.py

## Overview

This file implements the `test_policy` module, defining 1 class, 1 constant, 18 methods, 13 imports, 1 side effect.

Lines: total 209, code 162, comment 14, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_policy.py:L36–L36` |
| `TestPolicyCheck` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_policy.py:L39–L209` |
| `TestPolicyCheck.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_policy.py:L41–L46` |
| `TestPolicyCheck.test_check` | method | (self, mock_get_context, mock_get_target, mock_filter_rules) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_policy.py:L51–L63` |
| `TestPolicyCheck.test_get_context` | method | (self, mock_CONF, mock_RequestContext) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_policy.py:L67–L74` |
| `TestPolicyCheck.test_get_target_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_policy.py:L76–L78` |
| `TestPolicyCheck.test_get_target_invalid_attribute` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_policy.py:L80–L82` |
| `TestPolicyCheck.test_get_target` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/cmd/test_policy.py:L84–L96` |
| `TestPolicyCheck.test_get_target_instance` | method | (self, mock_instance_get, mock_get_admin_context) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_policy.py:L100–L111` |
| `TestPolicyCheck._check_filter_rules` | method | (self, context=None, target=None, expected_rules=None) | private | not declared | 4/15 | `src/nova/tests/unit/cmd/test_policy.py:L113–L128` |
| `TestPolicyCheck.test_filter_rules_non_admin` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/cmd/test_policy.py:L130–L135` |
| `TestPolicyCheck.test_filter_rules_admin` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_policy.py:L137–L139` |
| `TestPolicyCheck.test_filter_rules_instance_non_admin` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/cmd/test_policy.py:L141–L148` |
| `TestPolicyCheck.test_filter_rules_instance_admin` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_policy.py:L150–L155` |
| `TestPolicyCheck.test_filter_rules_instance_owner` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/cmd/test_policy.py:L157–L165` |
| `TestPolicyCheck._check_main` | method | (self, mock_CONF, mock_parse_args, category_name='check', expected_return_value=0) | private | not declared | 1/9 | `src/nova/tests/unit/cmd/test_policy.py:L169–L178` |
| `TestPolicyCheck.test_main_version` | method | (self, mock_version_string) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_policy.py:L182–L184` |
| `TestPolicyCheck.test_main_bash_completion` | method | (self, mock_print_bash) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_policy.py:L187–L189` |
| `TestPolicyCheck.test_main` | method | (self, mock_get_action_fn) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_policy.py:L192–L201` |
| `TestPolicyCheck.test_main_error` | method | (self, mock_get_action_fn) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_policy.py:L204–L209` |

## Dependencies

- `io`: imports `StringIO` (src/nova/tests/unit/cmd/test_policy.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_policy.py:L21)
- `import fixtures` (src/nova/tests/unit/cmd/test_policy.py:L23)
- `nova.cmd`: imports `policy` (src/nova/tests/unit/cmd/test_policy.py:L25)
- `import nova.conf` (src/nova/tests/unit/cmd/test_policy.py:L26)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/cmd/test_policy.py:L27)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/cmd/test_policy.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/cmd/test_policy.py:L29)
- `nova.policies`: imports `base as base_policies` (src/nova/tests/unit/cmd/test_policy.py:L30)
- `nova.policies`: imports `instance_actions as ia_policies` (src/nova/tests/unit/cmd/test_policy.py:L31)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_policy.py:L32)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/cmd/test_policy.py:L33)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/cmd/test_policy.py:L34)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/cmd/test_policy.py:L36)

