# src/nova/api/openstack/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 5 classs, 2 constants, 1 field, 1 function, 12 methods, 1 staticmethod, 8 imports, 2 side effects, 2 security surface entries.

Lines: total 226, code 158, comment 33, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L32–L32` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L33–L33` |
| `walk_class_hierarchy` | function | (clazz, encountered=None) | exported | not declared | 5/9 | `src/nova/api/openstack/__init__.py:L36–L46` |
| `FaultWrapper` | class | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L49–L96` |
| `FaultWrapper._status_to_type` | field | — | private | not declared | — | `src/nova/api/openstack/__init__.py:L52–L52` |
| `FaultWrapper.status_to_type` | method | (status) | public | `FaultWrapper._status_to_type.get( status, webob.exc.HTTPInternalServerError)()` (src/nova/api/openstack/__init__.py:L59) | 3/6 | `src/nova/api/openstack/__init__.py:L55–L60` |
| `FaultWrapper._error` | method | (self, inner, req) | private | `wsgi.Fault(outer)` (src/nova/api/openstack/__init__.py:L89) | 4/18 | `src/nova/api/openstack/__init__.py:L62–L89` |
| `FaultWrapper.__call__` | method | (self, req) | public | `req.get_response(self.application)` (src/nova/api/openstack/__init__.py:L94); `self._error(ex, req)` (src/nova/api/openstack/__init__.py:L96) | 2/5 | `src/nova/api/openstack/__init__.py:L92–L96` |
| `LegacyV2CompatibleWrapper` | class | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L99–L143` |
| `LegacyV2CompatibleWrapper._filter_request_headers` | method | (self, req) | private | `req` (src/nova/api/openstack/__init__.py:L111) | 3/6 | `src/nova/api/openstack/__init__.py:L101–L111` |
| `LegacyV2CompatibleWrapper._filter_response_headers` | method | (self, response) | private | `response` (src/nova/api/openstack/__init__.py:L136) | 8/19 | `src/nova/api/openstack/__init__.py:L113–L136` |
| `LegacyV2CompatibleWrapper.__call__` | method | (self, req) | public | `self._filter_response_headers(response)` (src/nova/api/openstack/__init__.py:L143) | 1/5 | `src/nova/api/openstack/__init__.py:L139–L143` |
| `APIMapper` | class | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L146–L160` |
| `APIMapper.routematch` | method | (self, url=None, environ=None) | public | `result[0], result[1]` (src/nova/api/openstack/__init__.py:L150); `routes.Mapper.routematch(self, url, environ)` (src/nova/api/openstack/__init__.py:L151) | 2/5 | `src/nova/api/openstack/__init__.py:L147–L151` |
| `APIMapper.connect` | method | (self, *args, **kargs) | public | `routes.Mapper.connect(self, *args, **kargs)` (src/nova/api/openstack/__init__.py:L160) | 2/5 | `src/nova/api/openstack/__init__.py:L153–L160` |
| `ProjectMapper` | class | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L163–L214` |
| `ProjectMapper._get_project_id_token` | method | (self) | private | `'{project_id:[0-9a-f-]+}'` (src/nova/api/openstack/__init__.py:L168) | 1/2 | `src/nova/api/openstack/__init__.py:L164–L168` |
| `ProjectMapper.resource` | method | (self, member_name, collection_name, **kwargs) | public | not declared | 3/28 | `src/nova/api/openstack/__init__.py:L170–L200` |
| `ProjectMapper.create_route` | method | (self, path, method, controller, action) | public | not declared | 1/10 | `src/nova/api/openstack/__init__.py:L202–L214` |
| `PlainMapper` | class | — | exported | not declared | — | `src/nova/api/openstack/__init__.py:L217–L226` |
| `PlainMapper.resource` | method | (self, member_name, collection_name, **kwargs) | public | not declared | 2/9 | `src/nova/api/openstack/__init__.py:L218–L226` |
| `FaultWrapper.status_to_type` | staticmethod | — | public | not declared | — | `src/nova/api/openstack/__init__.py:L54–L60` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/__init__.py:L21)
- `import routes` (src/nova/api/openstack/__init__.py:L22)
- `import webob.dec` (src/nova/api/openstack/__init__.py:L23)
- `import webob.exc` (src/nova/api/openstack/__init__.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/__init__.py:L26)
- `nova.api`: imports `wsgi as base_wsgi` (src/nova/api/openstack/__init__.py:L27)
- `import nova.conf` (src/nova/api/openstack/__init__.py:L28)
- `nova.i18n`: imports `translate` (src/nova/api/openstack/__init__.py:L29)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/__init__.py:L32)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/__init__.py:L33)

## Security Surface

- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/api/openstack/__init__.py:L91)
- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/api/openstack/__init__.py:L138)

