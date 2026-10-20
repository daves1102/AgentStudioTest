# src/nova/api/openstack/compute/image_metadata.py

## Overview

This file implements the `image_metadata` module, defining 1 class, 8 methods, 8 imports, 1 side effect, 6 security surface entries.

Lines: total 141, code 111, comment 14, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ImageMetadataController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/image_metadata.py:L29–L141` |
| `ImageMetadataController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/image_metadata.py:L32–L34` |
| `ImageMetadataController._get_image` | method | (self, context, image_id) | private | `self.image_api.get(context, image_id)` (src/nova/api/openstack/compute/image_metadata.py:L38) | 3/8 | `src/nova/api/openstack/compute/image_metadata.py:L36–L43` |
| `ImageMetadataController.index` | method | (self, req, image_id) | public | `{'metadata': metadata}` (src/nova/api/openstack/compute/image_metadata.py:L53) | 1/4 | `src/nova/api/openstack/compute/image_metadata.py:L49–L53` |
| `ImageMetadataController.show` | method | (self, req, image_id, id) | public | `{'meta': {id: metadata[id]}}` (src/nova/api/openstack/compute/image_metadata.py:L63) | 2/7 | `src/nova/api/openstack/compute/image_metadata.py:L59–L65` |
| `ImageMetadataController.create` | method | (self, req, image_id, body) | public | `{'metadata': image['properties']}` (src/nova/api/openstack/compute/image_metadata.py:L83) | 3/13 | `src/nova/api/openstack/compute/image_metadata.py:L71–L83` |
| `ImageMetadataController.update` | method | (self, req, image_id, id, body) | public | `{'meta': meta}` (src/nova/api/openstack/compute/image_metadata.py:L107) | 3/16 | `src/nova/api/openstack/compute/image_metadata.py:L89–L107` |
| `ImageMetadataController.update_all` | method | (self, req, image_id, body) | public | `{'metadata': metadata}` (src/nova/api/openstack/compute/image_metadata.py:L124) | 2/12 | `src/nova/api/openstack/compute/image_metadata.py:L113–L124` |
| `ImageMetadataController.delete` | method | (self, req, image_id, id) | public | not declared | 3/12 | `src/nova/api/openstack/compute/image_metadata.py:L130–L141` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/image_metadata.py:L17)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/image_metadata.py:L19)
- `nova.api.openstack.compute.schemas`: imports `image_metadata as schema` (src/nova/api/openstack/compute/image_metadata.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/image_metadata.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/image_metadata.py:L22)
- `nova`: imports `exception` (src/nova/api/openstack/compute/image_metadata.py:L23)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/image_metadata.py:L24)
- `nova.image`: imports `glance` (src/nova/api/openstack/compute/image_metadata.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import image_metadata as schema (src/nova/api/openstack/compute/image_metadata.py:L20)

## Security Surface

- **sink** (`db-write`): image = self.image_api.update(context, image_id, image, data=None, (src/nova/api/openstack/compute/image_metadata.py:L79)
- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/image_metadata.py:L87)
- **sink** (`db-write`): def update(self, req, image_id, id, body): (src/nova/api/openstack/compute/image_metadata.py:L89)
- **sink** (`db-write`): self.image_api.update(context, image_id, image, data=None, (src/nova/api/openstack/compute/image_metadata.py:L103)
- **sink** (`db-write`): self.image_api.update(context, image_id, image, data=None, (src/nova/api/openstack/compute/image_metadata.py:L120)
- **sink** (`db-write`): self.image_api.update(context, image_id, image, data=None, (src/nova/api/openstack/compute/image_metadata.py:L138)

