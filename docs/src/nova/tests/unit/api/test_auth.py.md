# src/nova/tests/unit/api/test_auth.py

## Overview

This file implements the `test_auth` module, defining 6 classs, 1 constant, 2 functions, 15 methods, 8 imports, 1 side effect, 2 security surface entries.

Lines: total 147, code 100, comment 14, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/test_auth.py:L26–L26` |
| `TestNovaKeystoneContextMiddleware` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_auth.py:L29–L68` |
| `TestNovaKeystoneContextMiddleware.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/test_auth.py:L31–L44` |
| `TestNovaKeystoneContextMiddleware.setUp.fake_app` | function | (req) | public | `webob.Response()` (src/nova/tests/unit/api/test_auth.py:L37) | — | `src/nova/tests/unit/api/test_auth.py:L35–L37` |
| `TestNovaKeystoneContextMiddleware.test_no_user_or_user_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/test_auth.py:L46–L48` |
| `TestNovaKeystoneContextMiddleware.test_user_id_only` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/test_auth.py:L50–L54` |
| `TestNovaKeystoneContextMiddleware.test_invalid_service_catalog` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/test_auth.py:L56–L60` |
| `TestNovaKeystoneContextMiddleware.test_request_id_extracted_from_env` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/test_auth.py:L62–L68` |
| `TestKeystoneMiddlewareRoles` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_auth.py:L71–L111` |
| `TestKeystoneMiddlewareRoles.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/test_auth.py:L73–L94` |
| `TestKeystoneMiddlewareRoles.setUp.role_check_app` | function | (req) | public | `webob.Response(status="200 Role Match")` (src/nova/tests/unit/api/test_auth.py:L81); `webob.Response(status="200 No Roles")` (src/nova/tests/unit/api/test_auth.py:L83) | — | `src/nova/tests/unit/api/test_auth.py:L77–L85` |
| `TestKeystoneMiddlewareRoles.test_roles` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/test_auth.py:L96–L100` |
| `TestKeystoneMiddlewareRoles.test_roles_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/test_auth.py:L102–L105` |
| `TestKeystoneMiddlewareRoles.test_no_role_headers` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/test_auth.py:L107–L111` |
| `TestPipeLineFactory` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_auth.py:L114–L147` |
| `TestPipeLineFactory.FakeFilter` | class | — | public | not declared | — | `src/nova/tests/unit/api/test_auth.py:L116–L123` |
| `TestPipeLineFactory.FakeFilter.__init__` | method | (self, name) | public | not declared | 1/3 | `src/nova/tests/unit/api/test_auth.py:L117–L119` |
| `TestPipeLineFactory.FakeFilter.__call__` | method | (self, obj) | public | `self` (src/nova/tests/unit/api/test_auth.py:L123) | 1/3 | `src/nova/tests/unit/api/test_auth.py:L121–L123` |
| `TestPipeLineFactory.FakeApp` | class | — | public | not declared | — | `src/nova/tests/unit/api/test_auth.py:L125–L127` |
| `TestPipeLineFactory.FakeApp.__init__` | method | (self, name) | public | not declared | 1/2 | `src/nova/tests/unit/api/test_auth.py:L126–L127` |
| `TestPipeLineFactory.FakeLoader` | class | — | public | not declared | — | `src/nova/tests/unit/api/test_auth.py:L129–L134` |
| `TestPipeLineFactory.FakeLoader.get_filter` | method | (self, name) | public | `TestPipeLineFactory.FakeFilter(name)` (src/nova/tests/unit/api/test_auth.py:L131) | 1/2 | `src/nova/tests/unit/api/test_auth.py:L130–L131` |
| `TestPipeLineFactory.FakeLoader.get_app` | method | (self, name) | public | `TestPipeLineFactory.FakeApp(name)` (src/nova/tests/unit/api/test_auth.py:L134) | 1/2 | `src/nova/tests/unit/api/test_auth.py:L133–L134` |
| `TestPipeLineFactory.test_pipeline_factory_v21` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/api/test_auth.py:L138–L147` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/test_auth.py:L15)
- `oslo_middleware`: imports `request_id` (src/nova/tests/unit/api/test_auth.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/test_auth.py:L18)
- `import webob` (src/nova/tests/unit/api/test_auth.py:L19)
- `import webob.exc` (src/nova/tests/unit/api/test_auth.py:L20)
- `import nova.api.auth` (src/nova/tests/unit/api/test_auth.py:L22)
- `import nova.conf` (src/nova/tests/unit/api/test_auth.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/test_auth.py:L24)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/test_auth.py:L26)

## Security Surface

- **entry-point** (`http-param`): self.request = webob.Request.blank('/') (src/nova/tests/unit/api/test_auth.py:L41)
- **entry-point** (`http-param`): self.request = webob.Request.blank('/') (src/nova/tests/unit/api/test_auth.py:L88)

