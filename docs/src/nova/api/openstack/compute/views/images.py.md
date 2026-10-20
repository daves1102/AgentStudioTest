# src/nova/api/openstack/compute/views/images.py

## Overview

This file implements the `images` module, defining 1 class, 1 field, 10 methods, 3 staticmethods, 4 imports, 1 side effect, 1 security surface entry.

Lines: total 167, code 129, comment 15, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/images.py:L24–L167` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/images.py:L26–L26` |
| `ViewBuilder.basic` | method | (self, request, image) | public | `{ "image": { "id": image.get("id"), "name": image.get("name"), "links": self._get_links(request, image["id"], self._collection_name), }, }` (src/nova/api/openstack/compute/views/images.py:L30) | 1/10 | `src/nova/api/openstack/compute/views/images.py:L28–L38` |
| `ViewBuilder.show` | method | (self, request, image) | public | `dict(image=image_dict)` (src/nova/api/openstack/compute/views/images.py:L82) | 6/38 | `src/nova/api/openstack/compute/views/images.py:L40–L82` |
| `ViewBuilder.detail` | method | (self, request, images) | public | `self._list_view(list_func, request, images, coll_name)` (src/nova/api/openstack/compute/views/images.py:L88) | 1/4 | `src/nova/api/openstack/compute/views/images.py:L84–L88` |
| `ViewBuilder.index` | method | (self, request, images) | public | `self._list_view(list_func, request, images, coll_name)` (src/nova/api/openstack/compute/views/images.py:L94) | 1/4 | `src/nova/api/openstack/compute/views/images.py:L90–L94` |
| `ViewBuilder._list_view` | method | (self, list_func, request, images, coll_name) | private | `images_dict` (src/nova/api/openstack/compute/views/images.py:L114) | 3/7 | `src/nova/api/openstack/compute/views/images.py:L96–L114` |
| `ViewBuilder._get_links` | method | (self, request, identifier, collection_name) | private | `[{ "rel": "self", "href": self._get_href_link(request, identifier, collection_name), }, { "rel": "bookmark", "href": self._get_bookmark_link(request, identifier, collection_name), }, { "rel": "alterna` (src/nova/api/openstack/compute/views/images.py:L118) | 1/16 | `src/nova/api/openstack/compute/views/images.py:L116–L132` |
| `ViewBuilder._get_alternate_link` | method | (self, request, identifier) | private | `'/'.join([glance_url, self._collection_name, str(identifier)])` (src/nova/api/openstack/compute/views/images.py:L139) | 1/7 | `src/nova/api/openstack/compute/views/images.py:L134–L141` |
| `ViewBuilder._format_date` | method | (dt) | private | `utils.isotime(dt)` (src/nova/api/openstack/compute/views/images.py:L147) | 2/3 | `src/nova/api/openstack/compute/views/images.py:L144–L147` |
| `ViewBuilder._get_status` | method | (image) | private | `{ 'active': 'ACTIVE', 'queued': 'SAVING', 'saving': 'SAVING', 'deleted': 'DELETED', 'pending_delete': 'DELETED', 'killed': 'ERROR', }.get(image.get("status"), 'UNKNOWN')` (src/nova/api/openstack/compute/views/images.py:L152) | 1/9 | `src/nova/api/openstack/compute/views/images.py:L150–L159` |
| `ViewBuilder._get_progress` | method | (image) | private | `{ "queued": 25, "saving": 50, "active": 100, }.get(image.get("status"), 0)` (src/nova/api/openstack/compute/views/images.py:L163) | 1/6 | `src/nova/api/openstack/compute/views/images.py:L162–L167` |
| `ViewBuilder._format_date` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/images.py:L143–L147` |
| `ViewBuilder._get_status` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/images.py:L149–L159` |
| `ViewBuilder._get_progress` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/images.py:L161–L167` |

## Dependencies

- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/views/images.py:L17)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/images.py:L19)
- `nova.image`: imports `glance` (src/nova/api/openstack/compute/views/images.py:L20)
- `nova`: imports `utils` (src/nova/api/openstack/compute/views/images.py:L21)

## Side Effects

- **network**: "type": "application/vnd.openstack.image", (src/nova/api/openstack/compute/views/images.py:L130)

## Security Surface

- **sink** (`db-write`): """Update the status field to standardize format.""" (src/nova/api/openstack/compute/views/images.py:L151)

