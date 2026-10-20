# src/nova/api/wsgi.py

## Overview

This file implements the `wsgi` module, defining 5 classs, 2 classmethods, 2 constants, 1 function, 13 methods, 8 imports, 5 side effects, 1 security surface entry.

Lines: total 260, code 178, comment 11, blank 71

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/wsgi.py:L26–L26` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/wsgi.py:L28–L28` |
| `Request` | class | — | exported | not declared | — | `src/nova/api/wsgi.py:L31–L37` |
| `Request.__init__` | method | (self, environ, *args, **kwargs) | public | not declared | 3/6 | `src/nova/api/wsgi.py:L32–L37` |
| `Application` | class | — | exported | not declared | — | `src/nova/api/wsgi.py:L40–L102` |
| `Application.factory` | method | (cls, global_config, **local_config) | public | `cls(**local_config)` (src/nova/api/wsgi.py:L66) | 1/2 | `src/nova/api/wsgi.py:L44–L66` |
| `Application.__call__` | method | (self, environ, start_response) | public | not declared | 1/2 | `src/nova/api/wsgi.py:L68–L102` |
| `Middleware` | class | — | exported | not declared | — | `src/nova/api/wsgi.py:L105–L165` |
| `Middleware.factory` | method | (cls, global_config, **local_config) | public | `_factory` (src/nova/api/wsgi.py:L140) | 1/3 | `src/nova/api/wsgi.py:L116–L140` |
| `Middleware.factory._factory` | function | (app) | private | `cls(app, **local_config)` (src/nova/api/wsgi.py:L139) | — | `src/nova/api/wsgi.py:L138–L139` |
| `Middleware.__init__` | method | (self, application) | public | not declared | 1/2 | `src/nova/api/wsgi.py:L142–L143` |
| `Middleware.process_request` | method | (self, req) | public | `None` (src/nova/api/wsgi.py:L153) | 1/2 | `src/nova/api/wsgi.py:L145–L153` |
| `Middleware.process_response` | method | (self, response) | public | `response` (src/nova/api/wsgi.py:L157) | 1/2 | `src/nova/api/wsgi.py:L155–L157` |
| `Middleware.__call__` | method | (self, req) | public | `response` (src/nova/api/wsgi.py:L163); `self.process_response(response)` (src/nova/api/wsgi.py:L165) | 2/6 | `src/nova/api/wsgi.py:L160–L165` |
| `Router` | class | — | exported | not declared | — | `src/nova/api/wsgi.py:L168–L222` |
| `Router.__init__` | method | (self, mapper) | public | not declared | 1/4 | `src/nova/api/wsgi.py:L171–L197` |
| `Router.__call__` | method | (self, req) | public | `self._router` (src/nova/api/wsgi.py:L206) | 1/2 | `src/nova/api/wsgi.py:L200–L206` |
| `Router._dispatch` | method | (req) | private | `webob.exc.HTTPNotFound()` (src/nova/api/wsgi.py:L220); `app` (src/nova/api/wsgi.py:L222) | 2/6 | `src/nova/api/wsgi.py:L210–L222` |
| `Loader` | class | — | exported | not declared | — | `src/nova/api/wsgi.py:L225–L260` |
| `Loader.__init__` | method | (self, config_path=None) | public | not declared | 5/9 | `src/nova/api/wsgi.py:L228–L244` |
| `Loader.load_app` | method | (self, name) | public | `deploy.loadapp("config:%s" % self.config_path, name=name)` (src/nova/api/wsgi.py:L257) | 2/8 | `src/nova/api/wsgi.py:L246–L260` |
| `Application.factory` | classmethod | — | public | not declared | — | `src/nova/api/wsgi.py:L43–L66` |
| `Middleware.factory` | classmethod | — | public | not declared | — | `src/nova/api/wsgi.py:L115–L140` |

## Dependencies

- `import os` (src/nova/api/wsgi.py:L14)
- `oslo_log`: imports `log as logging` (src/nova/api/wsgi.py:L16)
- `paste`: imports `deploy` (src/nova/api/wsgi.py:L17)
- `import routes.middleware` (src/nova/api/wsgi.py:L18)
- `import webob` (src/nova/api/wsgi.py:L19)
- `import nova.conf` (src/nova/api/wsgi.py:L21)
- `nova`: imports `exception` (src/nova/api/wsgi.py:L22)
- `nova.i18n`: imports `_` (src/nova/api/wsgi.py:L23)

## Side Effects

- **file-io**: res.app_iter = open('somefile') (src/nova/api/wsgi.py:L84)
- **file-io**: if not os.path.isabs(config_path): (src/nova/api/wsgi.py:L238)
- **file-io**: elif os.path.exists(config_path): (src/nova/api/wsgi.py:L240)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/wsgi.py:L26)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/wsgi.py:L28)

## Security Surface

- **entry-point** (`http-param`): class Request(webob.Request): (src/nova/api/wsgi.py:L31)

