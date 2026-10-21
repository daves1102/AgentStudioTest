# src/nova/tests/unit/console/rfb/test_auth.py

## Overview

This file implements the `test_auth` module, defining 1 class, 6 methods, 6 imports.

Lines: total 73, code 41, comment 13, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RFBAuthSchemeListTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/rfb/test_auth.py:L24–L73` |
| `RFBAuthSchemeListTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/console/rfb/test_auth.py:L26–L29` |
| `RFBAuthSchemeListTestCase.test_load_ok` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/console/rfb/test_auth.py:L31–L36` |
| `RFBAuthSchemeListTestCase.test_load_unknown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/console/rfb/test_auth.py:L38–L45` |
| `RFBAuthSchemeListTestCase.test_find_scheme_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/console/rfb/test_auth.py:L47–L54` |
| `RFBAuthSchemeListTestCase.test_find_scheme_fail` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/console/rfb/test_auth.py:L56–L61` |
| `RFBAuthSchemeListTestCase.test_find_scheme_priority` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/console/rfb/test_auth.py:L63–L73` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/console/rfb/test_auth.py:L15)
- `nova.console.rfb`: imports `auth` (src/nova/tests/unit/console/rfb/test_auth.py:L17)
- `nova.console.rfb`: imports `authnone` (src/nova/tests/unit/console/rfb/test_auth.py:L18)
- `nova.console.rfb`: imports `auths` (src/nova/tests/unit/console/rfb/test_auth.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/console/rfb/test_auth.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/console/rfb/test_auth.py:L21)

