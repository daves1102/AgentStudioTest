# src/nova/tests/unit/console/securityproxy/test_rfb.py

## Overview

This file implements the `test_rfb` module, defining 1 class, 19 methods, 7 imports.

Lines: total 308, code 215, comment 15, blank 78

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RFBSecurityProxyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L27–L308` |
| `RFBSecurityProxyTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L30–L43` |
| `RFBSecurityProxyTestCase._assert_expected_calls` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L45–L51` |
| `RFBSecurityProxyTestCase._version_handshake` | method | (self) | private | not declared | 1/6 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L53–L60` |
| `RFBSecurityProxyTestCase._to_binary` | method | (self, val) | private | `val` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L65) | 2/4 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L62–L65` |
| `RFBSecurityProxyTestCase._expect_tenant_send` | method | (self, val) | private | not declared | 1/3 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L67–L69` |
| `RFBSecurityProxyTestCase._expect_compute_send` | method | (self, val) | private | not declared | 1/3 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L71–L73` |
| `RFBSecurityProxyTestCase._expect_tenant_recv` | method | (self, amt, ret_val) | private | not declared | 1/5 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L75–L79` |
| `RFBSecurityProxyTestCase._expect_compute_recv` | method | (self, amt, ret_val) | private | not declared | 1/5 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L81–L85` |
| `RFBSecurityProxyTestCase.test_fail` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L87–L97` |
| `RFBSecurityProxyTestCase.test_fail_server_message` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L99–L110` |
| `RFBSecurityProxyTestCase.test_parse_version` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L112–L115` |
| `RFBSecurityProxyTestCase.test_fails_on_compute_version` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L117–L130` |
| `RFBSecurityProxyTestCase.test_fails_on_tenant_version` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L132–L152` |
| `RFBSecurityProxyTestCase.test_fails_on_sec_type_cnt_zero` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L154–L175` |
| `RFBSecurityProxyTestCase.test_fails_on_sec_type_cnt_zero_oversized_reason` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L177–L205` |
| `RFBSecurityProxyTestCase.test_full_run` | method | (self, mock_handshake) | public | not declared | 1/13 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L208–L227` |
| `RFBSecurityProxyTestCase.test_client_auth_invalid_fails` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L229–L253` |
| `RFBSecurityProxyTestCase.test_exception_in_choose_security_type_fails` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L255–L278` |
| `RFBSecurityProxyTestCase.test_exception_security_handshake_fails` | method | (self, mock_auth) | public | not declared | 1/19 | `src/nova/tests/unit/console/securityproxy/test_rfb.py:L281–L308` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L18)
- `nova.console.rfb`: imports `auth` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L20)
- `nova.console.rfb`: imports `authnone` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L21)
- `nova.console.securityproxy`: imports `rfb` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L24)
- `import struct` (src/nova/tests/unit/console/securityproxy/test_rfb.py:L184)

