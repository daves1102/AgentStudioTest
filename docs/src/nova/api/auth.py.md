# src/nova/api/auth.py

## Overview

This file implements the `auth` module, defining 2 classs, 2 constants, 2 functions, 4 methods, 1 staticmethod, 8 imports, 2 side effects, 3 security surface entries.

Lines: total 101, code 62, comment 16, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/auth.py:L30–L30` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/auth.py:L31–L31` |
| `_load_pipeline` | function | (loader, pipeline) | unexported | `app` (src/nova/api/auth.py:L40) | 3/7 | `src/nova/api/auth.py:L34–L40` |
| `pipeline_factory_v21` | function | (loader, global_conf, **local_conf) | exported | `_load_pipeline(loader, local_conf['keystone'].split())` (src/nova/api/auth.py:L45) | 1/2 | `src/nova/api/auth.py:L43–L45` |
| `InjectContext` | class | — | exported | not declared | — | `src/nova/api/auth.py:L48–L58` |
| `InjectContext.__init__` | method | (self, context, *args, **kwargs) | public | not declared | 1/3 | `src/nova/api/auth.py:L51–L53` |
| `InjectContext.__call__` | method | (self, req) | public | `self.application` (src/nova/api/auth.py:L58) | 1/3 | `src/nova/api/auth.py:L56–L58` |
| `NovaKeystoneContext` | class | — | exported | not declared | — | `src/nova/api/auth.py:L61–L101` |
| `NovaKeystoneContext._create_context` | method | (env, **kwargs) | private | `context.RequestContext.from_environ(env, **kwargs)` (src/nova/api/auth.py:L70) | 1/2 | `src/nova/api/auth.py:L65–L70` |
| `NovaKeystoneContext.__call__` | method | (self, req) | public | `webob.exc.HTTPUnauthorized()` (src/nova/api/auth.py:L98); `self.application` (src/nova/api/auth.py:L101) | 4/21 | `src/nova/api/auth.py:L73–L101` |
| `NovaKeystoneContext._create_context` | staticmethod | — | private | not declared | — | `src/nova/api/auth.py:L64–L70` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/auth.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/auth.py:L20)
- `import webob.dec` (src/nova/api/auth.py:L21)
- `import webob.exc` (src/nova/api/auth.py:L22)
- `nova.api`: imports `wsgi` (src/nova/api/auth.py:L24)
- `import nova.conf` (src/nova/api/auth.py:L25)
- `nova`: imports `context` (src/nova/api/auth.py:L26)
- `nova.i18n`: imports `_` (src/nova/api/auth.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/auth.py:L30)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/auth.py:L31)

## Security Surface

- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/api/auth.py:L55)
- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/api/auth.py:L72)
- **privilege** (`crypto-key`): user_auth_plugin = req.environ.get('keystone.token_auth') (src/nova/api/auth.py:L88)

