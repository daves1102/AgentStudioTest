# src/nova/tests/unit/limit/test_local.py

## Overview

This file implements the `test_local` module, defining 2 classs, 1 constant, 19 methods, 13 imports, 1 side effect.

Lines: total 259, code 208, comment 14, blank 37

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/limit/test_local.py:L31–L31` |
| `TestLocalLimits` | class | — | exported | not declared | — | `src/nova/tests/unit/limit/test_local.py:L34–L224` |
| `TestLocalLimits.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/limit/test_local.py:L35–L38` |
| `TestLocalLimits.test_enforce_api_limit_metadata` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_local.py:L40–L50` |
| `TestLocalLimits.test_enforce_api_limit_skip` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/limit/test_local.py:L52–L54` |
| `TestLocalLimits.test_enforce_api_limit_session_init_error` | method | (self, mock_util) | public | not declared | 1/8 | `src/nova/tests/unit/limit/test_local.py:L57–L65` |
| `TestLocalLimits.test_enforce_api_limit_raises_for_invalid_entity` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/limit/test_local.py:L67–L73` |
| `TestLocalLimits.test_enforce_api_limit_no_registered_limit_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/limit/test_local.py:L75–L82` |
| `TestLocalLimits.test_enforce_injected_files` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/limit/test_local.py:L84–L111` |
| `TestLocalLimits.test_enforce_db_limit_keypairs` | method | (self, mock_count) | public | not declared | 1/19 | `src/nova/tests/unit/limit/test_local.py:L114–L135` |
| `TestLocalLimits.test_enforce_db_limit_skip` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/limit/test_local.py:L137–L140` |
| `TestLocalLimits.test_enforce_db_limit_session_init_error` | method | (self, mock_util) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_local.py:L143–L152` |
| `TestLocalLimits.test_enforce_db_limit_raise_on_invalid` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/limit/test_local.py:L154–L161` |
| `TestLocalLimits.test_enforce_db_limit_no_registered_limit_found` | method | (self, mock_count) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_local.py:L164–L172` |
| `TestLocalLimits.test_enforce_db_limit_raise_bad_delta` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/limit/test_local.py:L174–L178` |
| `TestLocalLimits.test_enforce_db_limit_server_groups` | method | (self, mock_count) | public | not declared | 1/11 | `src/nova/tests/unit/limit/test_local.py:L181–L193` |
| `TestLocalLimits.test_enforce_db_limit_server_group_members` | method | (self, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/limit/test_local.py:L196–L209` |
| `TestLocalLimits.test_get_in_use` | method | (self, mock_count) | public | not declared | 1/13 | `src/nova/tests/unit/limit/test_local.py:L212–L224` |
| `GetLegacyLimitsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/limit/test_local.py:L227–L259` |
| `GetLegacyLimitsTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/limit/test_local.py:L228–L246` |
| `GetLegacyLimitsTest.test_convert_keys_to_legacy_name` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/limit/test_local.py:L248–L250` |
| `GetLegacyLimitsTest.test_get_legacy_default_limits` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/limit/test_local.py:L252–L259` |

## Dependencies

- `import copy` (src/nova/tests/unit/limit/test_local.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/limit/test_local.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/limit/test_local.py:L18)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/tests/unit/limit/test_local.py:L19)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/limit/test_local.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/limit/test_local.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/limit/test_local.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/limit/test_local.py:L24)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/limit/test_local.py:L25)
- `nova.limit`: imports `utils as limit_utils` (src/nova/tests/unit/limit/test_local.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/limit/test_local.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/limit/test_local.py:L28)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/limit/test_local.py:L29)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/limit/test_local.py:L31)

