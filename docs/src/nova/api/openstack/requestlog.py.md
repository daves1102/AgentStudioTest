# src/nova/api/openstack/requestlog.py

## Overview

This file implements the `requestlog` module, defining 1 class, 2 constants, 1 field, 4 methods, 2 staticmethods, 8 imports, 2 side effects, 1 security surface entry.

Lines: total 98, code 63, comment 18, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/requestlog.py:L26–L26` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/requestlog.py:L29–L29` |
| `RequestLog` | class | — | exported | not declared | — | `src/nova/api/openstack/requestlog.py:L32–L98` |
| `RequestLog._log_format` | field | — | private | not declared | — | `src/nova/api/openstack/requestlog.py:L39–L41` |
| `RequestLog._get_uri` | method | (environ) | private | `req_uri` (src/nova/api/openstack/requestlog.py:L49) | 2/6 | `src/nova/api/openstack/requestlog.py:L44–L49` |
| `RequestLog._should_emit` | method | (req) | private | `False` (src/nova/api/openstack/requestlog.py:L60); `True` (src/nova/api/openstack/requestlog.py:L61) | 2/4 | `src/nova/api/openstack/requestlog.py:L52–L61` |
| `RequestLog._log_req` | method | (self, req, res, start) | private | `` (src/nova/api/openstack/requestlog.py:L65) | 3/17 | `src/nova/api/openstack/requestlog.py:L63–L86` |
| `RequestLog.__call__` | method | (self, req) | public | `res` (src/nova/api/openstack/requestlog.py:L95) | 2/10 | `src/nova/api/openstack/requestlog.py:L89–L98` |
| `RequestLog._get_uri` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/requestlog.py:L43–L49` |
| `RequestLog._should_emit` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/requestlog.py:L51–L61` |

## Dependencies

- `import time` (src/nova/api/openstack/requestlog.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/requestlog.py:L17)
- `oslo_utils`: imports `excutils` (src/nova/api/openstack/requestlog.py:L18)
- `import webob.dec` (src/nova/api/openstack/requestlog.py:L19)
- `import webob.exc` (src/nova/api/openstack/requestlog.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/requestlog.py:L22)
- `nova.api`: imports `wsgi as base_wsgi` (src/nova/api/openstack/requestlog.py:L23)
- `import nova.conf` (src/nova/api/openstack/requestlog.py:L24)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/requestlog.py:L26)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/requestlog.py:L29)

## Security Surface

- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/api/openstack/requestlog.py:L88)

