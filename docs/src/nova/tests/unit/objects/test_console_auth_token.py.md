# src/nova/tests/unit/objects/test_console_auth_token.py

## Overview

This file implements the `test_console_auth_token` module, defining 3 classs, 13 methods, 10 imports.

Lines: total 242, code 183, comment 21, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestConsoleAuthToken` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_console_auth_token.py:L30–L232` |
| `_TestConsoleAuthToken._test_authorize` | method | (self, console_type, mock_create) | private | not declared | 2/52 | `src/nova/tests/unit/objects/test_console_auth_token.py:L33–L95` |
| `_TestConsoleAuthToken.test_authorize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_console_auth_token.py:L97–L98` |
| `_TestConsoleAuthToken.test_authorize_novnc` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_console_auth_token.py:L100–L101` |
| `_TestConsoleAuthToken._test_access_novnc_custom_request` | method | (self, url_base, url_expected, mock_create) | private | not declared | 1/22 | `src/nova/tests/unit/objects/test_console_auth_token.py:L104–L127` |
| `_TestConsoleAuthToken.test_access_novnc_custom_path` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_console_auth_token.py:L129–L131` |
| `_TestConsoleAuthToken.test_access_novnc_random_req` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_console_auth_token.py:L133–L136` |
| `_TestConsoleAuthToken.test_authorize_duplicate_token` | method | (self, mock_create) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_console_auth_token.py:L139–L155` |
| `_TestConsoleAuthToken.test_authorize_instance_not_found` | method | (self, mock_create) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_console_auth_token.py:L158–L175` |
| `_TestConsoleAuthToken.test_authorize_object_already_created` | method | (self, mock_create) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_console_auth_token.py:L178–L204` |
| `_TestConsoleAuthToken.test_clean_console_auths_for_instance` | method | (self, mock_destroy) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_console_auth_token.py:L207–L211` |
| `_TestConsoleAuthToken.test_clean_expired_console_auths` | method | (self, mock_destroy) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_console_auth_token.py:L214–L216` |
| `_TestConsoleAuthToken.test_clean_expired_console_auths_for_host` | method | (self, mock_destroy) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_console_auth_token.py:L219–L223` |
| `_TestConsoleAuthToken.test_obj_make_compatible_tls_port` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_console_auth_token.py:L225–L232` |
| `TestConsoleAuthToken` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_console_auth_token.py:L235–L237` |
| `TestRemoteConsoleAuthToken` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_console_auth_token.py:L240–L242` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_console_auth_token.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_console_auth_token.py:L17)
- `import urllib.parse as urlparse` (src/nova/tests/unit/objects/test_console_auth_token.py:L18)
- `oslo_db.exception`: imports `DBDuplicateEntry` (src/nova/tests/unit/objects/test_console_auth_token.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/objects/test_console_auth_token.py:L21)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_console_auth_token.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_console_auth_token.py:L24)
- `nova.objects`: imports `console_auth_token as token_obj` (src/nova/tests/unit/objects/test_console_auth_token.py:L25)
- `nova.tests.unit`: imports `fake_console_auth_token as fakes` (src/nova/tests/unit/objects/test_console_auth_token.py:L26)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_console_auth_token.py:L27)

