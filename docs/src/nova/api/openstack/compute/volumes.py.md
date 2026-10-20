# src/nova/api/openstack/compute/volumes.py

## Overview

This file implements the `volumes` module, defining 1 class, 2 functions, 7 methods, 9 imports, 2 side effects.

Lines: total 222, code 156, comment 28, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_translate_volume_detail_view` | function | (context, vol) | unexported | `_translate_volume_summary_view(context, vol)` (src/nova/api/openstack/compute/volumes.py:L33) | 1/2 | `src/nova/api/openstack/compute/volumes.py:L31–L33` |
| `_translate_volume_summary_view` | function | (context, vol) | unexported | `d` (src/nova/api/openstack/compute/volumes.py:L89) | 6/33 | `src/nova/api/openstack/compute/volumes.py:L36–L89` |
| `VolumeController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/volumes.py:L93–L222` |
| `VolumeController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/volumes.py:L96–L98` |
| `VolumeController.show` | method | (self, req, id) | public | `{'volume': _translate_volume_detail_view(context, vol)}` (src/nova/api/openstack/compute/volumes.py:L116) | 2/10 | `src/nova/api/openstack/compute/volumes.py:L104–L116` |
| `VolumeController.delete` | method | (self, req, id) | public | not declared | 3/11 | `src/nova/api/openstack/compute/volumes.py:L122–L134` |
| `VolumeController.index` | method | (self, req) | public | `self._items(req, entity_maker=_translate_volume_summary_view)` (src/nova/api/openstack/compute/volumes.py:L146) | 1/6 | `src/nova/api/openstack/compute/volumes.py:L140–L146` |
| `VolumeController.detail` | method | (self, req) | public | `self._items(req, entity_maker=_translate_volume_detail_view)` (src/nova/api/openstack/compute/volumes.py:L158) | 1/6 | `src/nova/api/openstack/compute/volumes.py:L152–L158` |
| `VolumeController._items` | method | (self, req, entity_maker) | private | `{'volumes': res}` (src/nova/api/openstack/compute/volumes.py:L167) | 2/6 | `src/nova/api/openstack/compute/volumes.py:L160–L167` |
| `VolumeController.create` | method | (self, req, body) | public | `wsgi.ResponseObject(result, headers=dict(location=location))` (src/nova/api/openstack/compute/volumes.py:L222) | 7/37 | `src/nova/api/openstack/compute/volumes.py:L173–L222` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/volumes.py:L18)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/volumes.py:L20–L21)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/volumes.py:L22)
- `nova.api.openstack.compute.schemas`: imports `volumes as schema` (src/nova/api/openstack/compute/volumes.py:L23)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/volumes.py:L24)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/volumes.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/volumes.py:L26)
- `nova.policies`: imports `volumes as vol_policies` (src/nova/api/openstack/compute/volumes.py:L27)
- `nova.volume`: imports `cinder` (src/nova/api/openstack/compute/volumes.py:L28)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/volumes.py:L20)
- **network**: from nova.api.openstack.compute.schemas import volumes as schema (src/nova/api/openstack/compute/volumes.py:L23)

