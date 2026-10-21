# src/nova/tests/unit/test_service_auth.py

## Overview

This file implements the `test_service_auth` module, defining 1 class, 5 methods, 6 imports, 8 side effects, 10 security surface entries.

Lines: total 70, code 43, comment 11, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServiceAuthTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service_auth.py:L23–L70` |
| `ServiceAuthTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_service_auth.py:L25–L28` |
| `ServiceAuthTestCase.test_get_service_user_token_auth_plugin_no_wraps` | method | (self, mock_load) | public | not declared | 1/6 | `src/nova/tests/unit/test_service_auth.py:L31–L38` |
| `ServiceAuthTestCase.test_get_service_user_token_auth_plugin_wraps` | method | (self, mock_load) | public | not declared | 1/4 | `src/nova/tests/unit/test_service_auth.py:L41–L46` |
| `ServiceAuthTestCase.test_get_service_user_token_auth_plugin_wraps_bad_config` | method | (self, mock_load) | public | not declared | 1/6 | `src/nova/tests/unit/test_service_auth.py:L50–L59` |
| `ServiceAuthTestCase.test_get_service_user_token_auth_plugin_user_auth` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_service_auth.py:L63–L70` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_service_auth.py:L13)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/tests/unit/test_service_auth.py:L15)
- `keystoneauth1`: imports `service_token` (src/nova/tests/unit/test_service_auth.py:L16)
- `nova`: imports `context` (src/nova/tests/unit/test_service_auth.py:L18)
- `nova`: imports `service_auth` (src/nova/tests/unit/test_service_auth.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/test_service_auth.py:L20)

## Side Effects

- **network**: def test_get_service_user_token_auth_plugin_no_wraps(self, mock_load): (src/nova/tests/unit/test_service_auth.py:L31)
- **network**: result = service_auth.get_service_user_token_auth_plugin(context) (src/nova/tests/unit/test_service_auth.py:L35)
- **network**: def test_get_service_user_token_auth_plugin_wraps(self, mock_load): (src/nova/tests/unit/test_service_auth.py:L41)
- **network**: result = service_auth.get_service_user_token_auth_plugin(self.ctx) (src/nova/tests/unit/test_service_auth.py:L44)
- **network**: def test_get_service_user_token_auth_plugin_wraps_bad_config( (src/nova/tests/unit/test_service_auth.py:L50)
- **network**: result = service_auth.get_service_user_token_auth_plugin(self.ctx) (src/nova/tests/unit/test_service_auth.py:L57)
- **network**: def test_get_service_user_token_auth_plugin_user_auth(self): (src/nova/tests/unit/test_service_auth.py:L63)
- **network**: result = service_auth.get_service_user_token_auth_plugin( (src/nova/tests/unit/test_service_auth.py:L67)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/tests/unit/test_service_auth.py:L15)
- **privilege** (`crypto-key`): from keystoneauth1 import service_token (src/nova/tests/unit/test_service_auth.py:L16)
- **privilege** (`crypto-key`): def test_get_service_user_token_auth_plugin_no_wraps(self, mock_load): (src/nova/tests/unit/test_service_auth.py:L31)
- **privilege** (`crypto-key`): result = service_auth.get_service_user_token_auth_plugin(context) (src/nova/tests/unit/test_service_auth.py:L35)
- **privilege** (`crypto-key`): def test_get_service_user_token_auth_plugin_wraps(self, mock_load): (src/nova/tests/unit/test_service_auth.py:L41)
- **privilege** (`crypto-key`): result = service_auth.get_service_user_token_auth_plugin(self.ctx) (src/nova/tests/unit/test_service_auth.py:L44)
- **privilege** (`crypto-key`): def test_get_service_user_token_auth_plugin_wraps_bad_config( (src/nova/tests/unit/test_service_auth.py:L50)
- **privilege** (`crypto-key`): result = service_auth.get_service_user_token_auth_plugin(self.ctx) (src/nova/tests/unit/test_service_auth.py:L57)
- **privilege** (`crypto-key`): def test_get_service_user_token_auth_plugin_user_auth(self): (src/nova/tests/unit/test_service_auth.py:L63)
- **privilege** (`crypto-key`): result = service_auth.get_service_user_token_auth_plugin( (src/nova/tests/unit/test_service_auth.py:L67)

## Notes

- KB `sideEffects` entries at L31, L41, L50, L63 have targets that appear to be code fragments rather than resource paths; documented as recorded.

