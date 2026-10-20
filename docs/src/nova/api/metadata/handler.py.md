# src/nova/api/metadata/handler.py

## Overview

This file implements the `handler` module, defining 1 class, 3 constants, 10 methods, 16 imports, 4 side effects, 1 security surface entry.

Lines: total 338, code 245, comment 42, blank 51

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/metadata/handler.py:L37–L37` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/metadata/handler.py:L38–L38` |
| `MAX_QUERY_NETWORKS` | constant | — | exported | not declared | — | `src/nova/api/metadata/handler.py:L44–L44` |
| `MetadataRequestHandler` | class | — | exported | not declared | — | `src/nova/api/metadata/handler.py:L47–L338` |
| `MetadataRequestHandler.__init__` | method | (self) | public | not declared | 3/8 | `src/nova/api/metadata/handler.py:L50–L57` |
| `MetadataRequestHandler.get_metadata_by_remote_address` | method | (self, address) | public | `data` (src/nova/api/metadata/handler.py:L67); `None` (src/nova/api/metadata/handler.py:L73); `data` (src/nova/api/metadata/handler.py:L78) | 5/16 | `src/nova/api/metadata/handler.py:L59–L78` |
| `MetadataRequestHandler.get_metadata_by_instance_id` | method | (self, instance_id, address) | public | `data` (src/nova/api/metadata/handler.py:L85); `None` (src/nova/api/metadata/handler.py:L90); `data` (src/nova/api/metadata/handler.py:L95) | 4/13 | `src/nova/api/metadata/handler.py:L80–L95` |
| `MetadataRequestHandler.__call__` | method | (self, req) | public | `req.response` (src/nova/api/metadata/handler.py:L103); `data(req, meta_data)` (src/nova/api/metadata/handler.py:L133); `req.response` (src/nova/api/metadata/handler.py:L139) | 10/34 | `src/nova/api/metadata/handler.py:L98–L139` |
| `MetadataRequestHandler._handle_remote_ip_request` | method | (self, req) | private | `meta_data` (src/nova/api/metadata/handler.py:L157) | 3/14 | `src/nova/api/metadata/handler.py:L141–L157` |
| `MetadataRequestHandler._handle_instance_id_request` | method | (self, req) | private | `self._get_meta_by_instance_id(instance_id, tenant_id, remote_address)` (src/nova/api/metadata/handler.py:L186) | 7/23 | `src/nova/api/metadata/handler.py:L159–L187` |
| `MetadataRequestHandler._get_instance_id_from_lb` | method | (self, provider_id, instance_address) | private | `instance_id, tenant_id` (src/nova/api/metadata/handler.py:L263) | 8/48 | `src/nova/api/metadata/handler.py:L189–L263` |
| `MetadataRequestHandler._handle_instance_id_request_from_lb` | method | (self, req) | private | `self._get_meta_by_instance_id(instance_id, tenant_id, instance_address)` (src/nova/api/metadata/handler.py:L295) | 6/29 | `src/nova/api/metadata/handler.py:L265–L296` |
| `MetadataRequestHandler._validate_shared_secret` | method | (self, requestor_id, signature, requestor_address) | private | not declared | 4/18 | `src/nova/api/metadata/handler.py:L298–L315` |
| `MetadataRequestHandler._get_meta_by_instance_id` | method | (self, instance_id, tenant_id, remote_address) | private | `meta_data` (src/nova/api/metadata/handler.py:L338) | 4/19 | `src/nova/api/metadata/handler.py:L317–L338` |

## Dependencies

- `import hashlib` (src/nova/api/metadata/handler.py:L18)
- `import hmac` (src/nova/api/metadata/handler.py:L19)
- `import os` (src/nova/api/metadata/handler.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/api/metadata/handler.py:L22)
- `oslo_utils`: imports `encodeutils` (src/nova/api/metadata/handler.py:L23)
- `oslo_utils`: imports `strutils` (src/nova/api/metadata/handler.py:L24)
- `import webob.dec` (src/nova/api/metadata/handler.py:L25)
- `import webob.exc` (src/nova/api/metadata/handler.py:L26)
- `nova.api.metadata`: imports `base` (src/nova/api/metadata/handler.py:L28)
- `nova.api`: imports `wsgi` (src/nova/api/metadata/handler.py:L29)
- `nova`: imports `cache_utils` (src/nova/api/metadata/handler.py:L30)
- `import nova.conf` (src/nova/api/metadata/handler.py:L31)
- `nova`: imports `context as nova_context` (src/nova/api/metadata/handler.py:L32)
- `nova`: imports `exception` (src/nova/api/metadata/handler.py:L33)
- `nova.i18n`: imports `_` (src/nova/api/metadata/handler.py:L34)
- `nova.network`: imports `neutron as neutronapi` (src/nova/api/metadata/handler.py:L35)

## Side Effects

- **file-io**: if os.path.normpath(req.path_info) == "/": (src/nova/api/metadata/handler.py:L99)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/metadata/handler.py:L37)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/metadata/handler.py:L38)
- **global-mutation**: MAX_QUERY_NETWORKS = 160 (src/nova/api/metadata/handler.py:L44)

## Security Surface

- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/api/metadata/handler.py:L97)

