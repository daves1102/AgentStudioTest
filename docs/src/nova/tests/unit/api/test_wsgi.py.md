# src/nova/tests/unit/api/test_wsgi.py

## Overview

This file implements the `test_wsgi` module, defining 5 classs, 1 field, 11 methods, 1 variable, 8 imports, 3 side effects, 3 security surface entries.

Lines: total 122, code 79, comment 16, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `os_uname` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L34–L36` |
| `TestRouter` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L39–L61` |
| `TestRouter.test_router` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/test_wsgi.py:L41–L61` |
| `TestRouter.test_router.Application` | class | — | public | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L43–L48` |
| `TestRouter.test_router.Application.__call__` | method | (self, environ, start_response) | public | `['Router result']` (src/nova/tests/unit/api/test_wsgi.py:L48) | — | `src/nova/tests/unit/api/test_wsgi.py:L46–L48` |
| `TestRouter.test_router.Router` | class | — | public | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L50–L56` |
| `TestRouter.test_router.Router.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L53–L56` |
| `TestLoaderNothingExists` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L64–L83` |
| `TestLoaderNothingExists.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/test_wsgi.py:L67–L69` |
| `TestLoaderNothingExists.test_relpath_config_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/test_wsgi.py:L71–L76` |
| `TestLoaderNothingExists.test_asbpath_config_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/test_wsgi.py:L78–L83` |
| `TestLoaderNormalFilesystem` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L86–L122` |
| `TestLoaderNormalFilesystem._paste_config` | field | — | private | not declared | — | `src/nova/tests/unit/api/test_wsgi.py:L89–L93` |
| `TestLoaderNormalFilesystem.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/test_wsgi.py:L95–L101` |
| `TestLoaderNormalFilesystem.test_config_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/test_wsgi.py:L103–L104` |
| `TestLoaderNormalFilesystem.test_app_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/test_wsgi.py:L106–L111` |
| `TestLoaderNormalFilesystem.test_app_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/test_wsgi.py:L113–L118` |
| `TestLoaderNormalFilesystem.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/test_wsgi.py:L120–L122` |

## Dependencies

- `import collections` (src/nova/tests/unit/api/test_wsgi.py:L22)
- `import tempfile` (src/nova/tests/unit/api/test_wsgi.py:L23)
- `unittest`: imports `mock` (src/nova/tests/unit/api/test_wsgi.py:L24)
- `import routes` (src/nova/tests/unit/api/test_wsgi.py:L26)
- `import webob` (src/nova/tests/unit/api/test_wsgi.py:L27)
- `nova.api`: imports `wsgi` (src/nova/tests/unit/api/test_wsgi.py:L29)
- `import nova.exception` (src/nova/tests/unit/api/test_wsgi.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/api/test_wsgi.py:L31)

## Side Effects

- **file-io**: """Loader tests where os.path.exists always returns False.""" (src/nova/tests/unit/api/test_wsgi.py:L65)
- **file-io**: self.stub_out('os.path.exists', lambda _: False) (src/nova/tests/unit/api/test_wsgi.py:L69)
- **file-io**: self.config = tempfile.NamedTemporaryFile(mode="w+t") (src/nova/tests/unit/api/test_wsgi.py:L97)

## Security Surface

- **entry-point** (`http-param`): result = webob.Request.blank('/test').get_response(Router()) (src/nova/tests/unit/api/test_wsgi.py:L58)
- **entry-point** (`http-param`): result = webob.Request.blank('/bad').get_response(Router()) (src/nova/tests/unit/api/test_wsgi.py:L60)
- **sink** (`file-write`): self.config.write(self._paste_config.lstrip()) (src/nova/tests/unit/api/test_wsgi.py:L98)

