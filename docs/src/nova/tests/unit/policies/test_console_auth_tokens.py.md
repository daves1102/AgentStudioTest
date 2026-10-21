# src/nova/tests/unit/policies/test_console_auth_tokens.py

## Overview

This file implements the `test_console_auth_tokens` module, defining 2 classs, 1 field, 2 methods, 6 imports, 1 side effect.

Lines: total 69, code 41, comment 16, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsoleAuthTokensPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_console_auth_tokens.py:L23–L61` |
| `ConsoleAuthTokensPolicyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_console_auth_tokens.py:L32–L44` |
| `ConsoleAuthTokensPolicyTest.test_console_connect_info_token_policy` | method | (self, mock_validate) | public | not declared | 1/15 | `src/nova/tests/unit/policies/test_console_auth_tokens.py:L47–L61` |
| `ConsoleAuthTokensNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_console_auth_tokens.py:L64–L69` |
| `ConsoleAuthTokensNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_console_auth_tokens.py:L69–L69` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_console_auth_tokens.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_console_auth_tokens.py:L15)
- `nova.api.openstack.compute`: imports `console_auth_tokens` (src/nova/tests/unit/policies/test_console_auth_tokens.py:L17)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_console_auth_tokens.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_console_auth_tokens.py:L19)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_console_auth_tokens.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute import console_auth_tokens (src/nova/tests/unit/policies/test_console_auth_tokens.py:L17)

