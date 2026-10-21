# src/nova/tests/unit/console/rfb/test_authvencrypt.py

## Overview

This file implements the `test_authvencrypt` module, defining 1 class, 12 methods, 7 imports.

Lines: total 218, code 148, comment 13, blank 57

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RFBAuthSchemeVeNCryptTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L26–L218` |
| `RFBAuthSchemeVeNCryptTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L28–L38` |
| `RFBAuthSchemeVeNCryptTestCase._expect_send` | method | (self, val) | private | not declared | 1/2 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L40–L41` |
| `RFBAuthSchemeVeNCryptTestCase._expect_recv` | method | (self, amt, ret_val) | private | not declared | 1/4 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L43–L46` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_with_x509` | method | (self, mock_create_context) | public | not declared | 1/29 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L49–L86` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_without_x509` | method | (self, mock_create_context) | public | not declared | 1/26 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L89–L121` |
| `RFBAuthSchemeVeNCryptTestCase._test_security_handshake_fails` | method | (self) | private | not declared | 1/5 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L123–L127` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_fails_on_low_version` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L129–L133` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_fails_on_cant_use_version` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L135–L142` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_fails_on_missing_subauth` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L144–L156` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_fails_on_auth_not_accepted` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L158–L175` |
| `RFBAuthSchemeVeNCryptTestCase.test_security_handshake_fails_on_ssl_failure` | method | (self, mock_create_context) | public | not declared | 1/27 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L178–L212` |
| `RFBAuthSchemeVeNCryptTestCase.test_types` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/console/rfb/test_authvencrypt.py:L214–L218` |

## Dependencies

- `import ssl` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L15)
- `import struct` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L17)
- `nova.console.rfb`: imports `auth` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L20)
- `nova.console.rfb`: imports `authvencrypt` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/console/rfb/test_authvencrypt.py:L23)

