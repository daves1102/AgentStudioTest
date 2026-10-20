# src/nova/api/openstack/compute/images.py

## Overview

This file implements the `images` module, defining 1 class, 1 constant, 1 field, 6 methods, 10 imports, 4 side effects, 4 security surface entries.

Lines: total 158, code 114, comment 19, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SUPPORTED_FILTERS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/images.py:L30–L38` |
| `ImagesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/images.py:L42–L158` |
| `ImagesController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/images.py:L45–L45` |
| `ImagesController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/images.py:L47–L49` |
| `ImagesController._get_filters` | method | (self, req) | private | `filters` (src/nova/api/openstack/compute/images.py:L76) | 6/15 | `src/nova/api/openstack/compute/images.py:L51–L76` |
| `ImagesController.show` | method | (self, req, id) | public | `self._view_builder.show(req, image)` (src/nova/api/openstack/compute/images.py:L96) | 2/8 | `src/nova/api/openstack/compute/images.py:L82–L96` |
| `ImagesController.delete` | method | (self, req, id) | public | not declared | 3/10 | `src/nova/api/openstack/compute/images.py:L102–L118` |
| `ImagesController.index` | method | (self, req) | public | `self._view_builder.index(req, images)` (src/nova/api/openstack/compute/images.py:L138) | 2/10 | `src/nova/api/openstack/compute/images.py:L124–L138` |
| `ImagesController.detail` | method | (self, req) | public | `self._view_builder.detail(req, images)` (src/nova/api/openstack/compute/images.py:L158) | 2/10 | `src/nova/api/openstack/compute/images.py:L144–L158` |

## Dependencies

- `import webob.exc` (src/nova/api/openstack/compute/images.py:L16)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/images.py:L18–L19)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/images.py:L20)
- `nova.api.openstack.compute.schemas`: imports `images as schema` (src/nova/api/openstack/compute/images.py:L21)
- `nova.api.openstack.compute.views`: imports `images as views_images` (src/nova/api/openstack/compute/images.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/images.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/images.py:L24)
- `nova`: imports `exception` (src/nova/api/openstack/compute/images.py:L25)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/images.py:L26)
- `nova.image`: imports `glance` (src/nova/api/openstack/compute/images.py:L27)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/images.py:L18)
- **network**: from nova.api.openstack.compute.schemas import images as schema (src/nova/api/openstack/compute/images.py:L21)
- **network**: from nova.api.openstack.compute.views import images as views_images (src/nova/api/openstack/compute/images.py:L22)
- **global-mutation**: SUPPORTED_FILTERS = { (src/nova/api/openstack/compute/images.py:L30)

## Security Surface

- **entry-point** (`http-param`): :param req: `wsgi.Request` object (src/nova/api/openstack/compute/images.py:L85)
- **entry-point** (`http-param`): :param req: `wsgi.Request` object (src/nova/api/openstack/compute/images.py:L105)
- **entry-point** (`http-param`): :param req: `wsgi.Request` object (src/nova/api/openstack/compute/images.py:L127)
- **entry-point** (`http-param`): :param req: `wsgi.Request` object. (src/nova/api/openstack/compute/images.py:L147)

