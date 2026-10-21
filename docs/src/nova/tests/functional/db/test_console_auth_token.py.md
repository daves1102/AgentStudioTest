# src/nova/tests/functional/db/test_console_auth_token.py

## Overview

This file implements the `test_console_auth_token` module, defining 1 class, 3 methods, 6 imports.

Lines: total 57, code 38, comment 13, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsoleAuthTokenTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_console_auth_token.py:L24–L57` |
| `ConsoleAuthTokenTestCase.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/db/test_console_auth_token.py:L25–L42` |
| `ConsoleAuthTokenTestCase.test_validate` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_console_auth_token.py:L44–L50` |
| `ConsoleAuthTokenTestCase.test_validate_invalid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_console_auth_token.py:L52–L57` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/db/test_console_auth_token.py:L15)
- `oslo_versionedobjects`: imports `fixture as ovo_fixture` (src/nova/tests/functional/db/test_console_auth_token.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_console_auth_token.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_console_auth_token.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_console_auth_token.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/db/test_console_auth_token.py:L21)

