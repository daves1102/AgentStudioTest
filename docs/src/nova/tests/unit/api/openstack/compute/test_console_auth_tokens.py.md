# src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py

## Overview

This file implements the `test_console_auth_tokens` module, defining 3 classs, 5 fields, 9 methods, 9 imports, 1 side effect, 2 security surface entries.

Lines: total 133, code 96, comment 16, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsoleAuthTokensExtensionTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L30–L72` |
| `ConsoleAuthTokensExtensionTestV21.controller_class` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L31–L31` |
| `ConsoleAuthTokensExtensionTestV21._EXPECTED_OUTPUT` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L33–L40` |
| `ConsoleAuthTokensExtensionTestV21._EXPECTED_OUTPUT_SPICE` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L41–L49` |
| `ConsoleAuthTokensExtensionTestV21._EXPECTED_OUTPUT_DB` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L53–L53` |
| `ConsoleAuthTokensExtensionTestV21._EXPECTED_OUTPUT_DB_SPICE` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L58–L58` |
| `ConsoleAuthTokensExtensionTestV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L62–L66` |
| `ConsoleAuthTokensExtensionTestV21.test_get_console_connect_info` | method | (self, mock_validate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L69–L72` |
| `ConsoleAuthTokensExtensionTestV231` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L75–L98` |
| `ConsoleAuthTokensExtensionTestV231.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L77–L80` |
| `ConsoleAuthTokensExtensionTestV231.test_get_console_connect_info` | method | (self, mock_validate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L88–L91` |
| `ConsoleAuthTokensExtensionTestV231.test_get_console_connect_info_token_not_found` | method | (self, mock_validate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L95–L98` |
| `ConsoleAuthTokensExtensionTestV299` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L101–L133` |
| `ConsoleAuthTokensExtensionTestV299.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L103–L106` |
| `ConsoleAuthTokensExtensionTestV299.test_get_console_connect_info` | method | (self, mock_validate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L113–L116` |
| `ConsoleAuthTokensExtensionTestV299.test_get_console_connect_info_spice` | method | (self, mock_validate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L123–L126` |
| `ConsoleAuthTokensExtensionTestV299.test_get_console_connect_info_token_not_found` | method | (self, mock_validate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L130–L133` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L21)
- `nova.api.openstack.compute`: imports `console_auth_tokens as console_auth_tokens_v21` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L22–L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import console_auth_tokens \ (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L22)

## Security Surface

- **sink** (`db-write`): _EXPECTED_OUTPUT_DB['console'].update( (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L54)
- **sink** (`db-write`): _EXPECTED_OUTPUT_DB_SPICE['console'].update( (src/nova/tests/unit/api/openstack/compute/test_console_auth_tokens.py:L59)

