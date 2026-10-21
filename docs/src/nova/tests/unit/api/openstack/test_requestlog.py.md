# src/nova/tests/unit/api/openstack/test_requestlog.py

## Overview

This file implements the `test_requestlog` module, defining 1 class, 5 methods, 4 imports, 10 side effects.

Lines: total 145, code 94, comment 20, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestRequestLogMiddleware` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_requestlog.py:L37–L145` |
| `TestRequestLogMiddleware.setUp` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/test_requestlog.py:L39–L51` |
| `TestRequestLogMiddleware.test_logs_requests` | method | (self, emit) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_requestlog.py:L54–L74` |
| `TestRequestLogMiddleware.test_logs_mv` | method | (self, emit) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/test_requestlog.py:L77–L104` |
| `TestRequestLogMiddleware.test_logs_under_exception` | method | (self, emit, v_index) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_requestlog.py:L108–L124` |
| `TestRequestLogMiddleware.test_no_log_under_eventlet` | method | (self, emit) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_requestlog.py:L127–L145` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/test_requestlog.py:L29)
- `import fixtures as fx` (src/nova/tests/unit/api/openstack/test_requestlog.py:L31)
- `import testtools` (src/nova/tests/unit/api/openstack/test_requestlog.py:L32)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/test_requestlog.py:L34)

## Side Effects

- **network**: @mock.patch('nova.api.openstack.requestlog.RequestLog._should_emit') (src/nova/tests/unit/api/openstack/test_requestlog.py:L53)
- **network**: log1 = ('INFO [nova.api.openstack.requestlog] 127.0.0.1 ' (src/nova/tests/unit/api/openstack/test_requestlog.py:L72)
- **network**: @mock.patch('nova.api.openstack.requestlog.RequestLog._should_emit') (src/nova/tests/unit/api/openstack/test_requestlog.py:L76)
- **network**: 'nova.api.openstack.compute.versions.' (src/nova/tests/unit/api/openstack/test_requestlog.py:L89)
- **network**: log1 = ('INFO [nova.api.openstack.requestlog] 127.0.0.1 ' (src/nova/tests/unit/api/openstack/test_requestlog.py:L101)
- **network**: @mock.patch('nova.api.openstack.compute.versions.Versions.index') (src/nova/tests/unit/api/openstack/test_requestlog.py:L106)
- **network**: @mock.patch('nova.api.openstack.requestlog.RequestLog._should_emit') (src/nova/tests/unit/api/openstack/test_requestlog.py:L107)
- **network**: log1 = ('INFO [nova.api.openstack.requestlog] 127.0.0.1 "GET /"' (src/nova/tests/unit/api/openstack/test_requestlog.py:L122)
- **network**: @mock.patch('nova.api.openstack.requestlog.RequestLog._should_emit') (src/nova/tests/unit/api/openstack/test_requestlog.py:L126)
- **network**: self.assertNotIn("nova.api.openstack.requestlog", (src/nova/tests/unit/api/openstack/test_requestlog.py:L144)

