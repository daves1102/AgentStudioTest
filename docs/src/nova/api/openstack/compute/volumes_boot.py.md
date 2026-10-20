# src/nova/api/openstack/compute/volumes_boot.py

## Overview

This file implements the `volumes_boot` module, defining 1 class, 15 methods, 4 imports, 2 side effects, 3 security surface entries.

Lines: total 231, code 202, comment 11, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VolumesBootController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/volumes_boot.py:L19–L231` |
| `VolumesBootController.index` | method | (self, req) | public | `super().index(req)` (src/nova/api/openstack/compute/volumes_boot.py:L32) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L31–L32` |
| `VolumesBootController.detail` | method | (self, req) | public | `super().detail(req)` (src/nova/api/openstack/compute/volumes_boot.py:L56) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L55–L56` |
| `VolumesBootController.show` | method | (self, req, id) | public | `super().show(req, id)` (src/nova/api/openstack/compute/volumes_boot.py:L78) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L77–L78` |
| `VolumesBootController.create` | method | (self, req, body) | public | `super().create(req, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L99) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L98–L99` |
| `VolumesBootController.delete` | method | (self, req, id) | public | `super().delete(req, id)` (src/nova/api/openstack/compute/volumes_boot.py:L106) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L105–L106` |
| `VolumesBootController.update` | method | (self, req, id, body) | public | `super().update(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L128) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L127–L128` |
| `VolumesBootController._confirm_resize` | method | (self, req, id, body) | private | `super()._confirm_resize(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L137) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L136–L137` |
| `VolumesBootController._revert_resize` | method | (self, req, id, body) | private | `super()._revert_resize(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L146) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L145–L146` |
| `VolumesBootController._reboot` | method | (self, req, id, body) | private | `super()._reboot(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L155) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L154–L155` |
| `VolumesBootController._resize` | method | (self, req, id, body) | private | `super()._resize(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L164) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L163–L164` |
| `VolumesBootController._rebuild` | method | (self, req, id, body) | private | `super()._rebuild(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L193) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L192–L193` |
| `VolumesBootController._create_image` | method | (self, req, id, body) | private | `super()._create_image(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L204) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L203–L204` |
| `VolumesBootController._start` | method | (self, req, id, body) | private | `super()._start(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L213) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L212–L213` |
| `VolumesBootController._stop` | method | (self, req, id, body) | private | `super()._stop(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L222) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L221–L222` |
| `VolumesBootController._trigger_crash_dump` | method | (self, req, id, body) | private | `super()._trigger_crash_dump(req, id, body=body)` (src/nova/api/openstack/compute/volumes_boot.py:L231) | 1/2 | `src/nova/api/openstack/compute/volumes_boot.py:L230–L231` |

## Dependencies

- `nova.api.openstack.compute.schemas`: imports `servers as schema` (src/nova/api/openstack/compute/volumes_boot.py:L13)
- `nova.api.openstack.compute`: imports `servers` (src/nova/api/openstack/compute/volumes_boot.py:L14)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/volumes_boot.py:L15)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/volumes_boot.py:L16)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import servers as schema (src/nova/api/openstack/compute/volumes_boot.py:L13)
- **network**: from nova.api.openstack.compute import servers (src/nova/api/openstack/compute/volumes_boot.py:L14)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update, '2.1', '2.18') (src/nova/api/openstack/compute/volumes_boot.py:L111)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/volumes_boot.py:L127)
- **sink** (`db-write`): return super().update(req, id, body=body) (src/nova/api/openstack/compute/volumes_boot.py:L128)

