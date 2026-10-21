# src/nova/tests/unit/test_test_utils.py

## Overview

This file implements the `test_test_utils` module, defining 1 class, 3 functions, 3 methods, 7 imports.

Lines: total 64, code 33, comment 17, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestUtilsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test_utils.py:L26–L64` |
| `TestUtilsTestCase.test_get_test_admin_context` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_test_utils.py:L27–L33` |
| `TestUtilsTestCase.test_get_test_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_test_utils.py:L35–L39` |
| `TestUtilsTestCase.test_ipv6_supported` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_test_utils.py:L41–L64` |
| `TestUtilsTestCase.test_ipv6_supported.fake_open` | function | (path) | public | not declared | — | `src/nova/tests/unit/test_test_utils.py:L44–L45` |
| `TestUtilsTestCase.test_ipv6_supported.fake_socket_fail` | function | (x, y) | public | not declared | — | `src/nova/tests/unit/test_test_utils.py:L47–L50` |
| `TestUtilsTestCase.test_ipv6_supported.fake_socket_ok` | function | (x, y) | public | `mock.Mock()` (src/nova/tests/unit/test_test_utils.py:L53) | — | `src/nova/tests/unit/test_test_utils.py:L52–L53` |

## Dependencies

- `import errno` (src/nova/tests/unit/test_test_utils.py:L15)
- `import socket` (src/nova/tests/unit/test_test_utils.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/test_test_utils.py:L17)
- `import fixtures` (src/nova/tests/unit/test_test_utils.py:L19)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/test_test_utils.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/test_test_utils.py:L22)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/test_test_utils.py:L23)

