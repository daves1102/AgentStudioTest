# src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py

## Overview

This file implements the `test_console_auth_tokens` module, defining 2 classs, 2 constants, 6 fields, 6 methods, 3 imports, 2 side effects.

Lines: total 89, code 55, comment 13, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsoleAuthTokensSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L22–L54` |
| `ConsoleAuthTokensSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L23–L23` |
| `ConsoleAuthTokensSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L24–L24` |
| `ConsoleAuthTokensSampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L25–L25` |
| `ConsoleAuthTokensSampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L26–L26` |
| `ConsoleAuthTokensSampleJsonTests._get_console_url` | method | (self, data) | private | `jsonutils.loads(data)["remote_console"]["url"]` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L29) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L28–L29` |
| `ConsoleAuthTokensSampleJsonTests._get_console_token` | method | (self, uuid) | private | `re.match('.+?token=([^&]+)', url).groups()[0]` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L37) | 1/6 | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L31–L37` |
| `ConsoleAuthTokensSampleJsonTests.test_get_console_connect_info` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L39–L54` |
| `ConsoleV299AuthTokensSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L57–L89` |
| `ConsoleV299AuthTokensSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L58–L58` |
| `ConsoleV299AuthTokensSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L59–L59` |
| `ConsoleV299AuthTokensSampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L60–L60` |
| `ConsoleV299AuthTokensSampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L61–L61` |
| `ConsoleV299AuthTokensSampleJsonTests._get_console_url` | method | (self, data) | private | `jsonutils.loads(data)["remote_console"]["url"]` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L64) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L63–L64` |
| `ConsoleV299AuthTokensSampleJsonTests._get_console_token` | method | (self, uuid) | private | `re.match('.+?token=([^&]+)', url).groups()[0]` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L72) | 1/6 | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L66–L72` |
| `ConsoleV299AuthTokensSampleJsonTests.test_get_console_connect_info` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L74–L89` |

## Dependencies

- `import re` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L17)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L19)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L23)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_console_auth_tokens.py:L58)

