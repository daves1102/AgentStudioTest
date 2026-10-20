# src/nova/api/openstack/compute/assisted_volume_snapshots.py

## Overview

This file implements the `assisted_volume_snapshots` module, defining 1 class, 3 methods, 8 imports, 1 side effect, 1 security surface entry.

Lines: total 98, code 62, comment 23, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AssistedVolumeSnapshotsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/assisted_volume_snapshots.py:L31–L98` |
| `AssistedVolumeSnapshotsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/assisted_volume_snapshots.py:L34–L36` |
| `AssistedVolumeSnapshotsController.create` | method | (self, req, body) | public | `self.compute_api.volume_snapshot_create(context, volume_id, create_info)` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L51) | 3/16 | `src/nova/api/openstack/compute/assisted_volume_snapshots.py:L41–L63` |
| `AssistedVolumeSnapshotsController.delete` | method | (self, req, id) | public | `exc.HTTPNotFound(explanation=e.format_message())` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L91) | 5/21 | `src/nova/api/openstack/compute/assisted_volume_snapshots.py:L70–L98` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L19)
- `webob`: imports `exc` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L20)
- `nova.api.openstack.compute.schemas`: imports `assisted_volume_snapshots as schema` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L24)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L26)
- `nova.policies`: imports `assisted_volume_snapshots as avs_policies` (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import assisted_volume_snapshots as schema  # noqa: E501 (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L22)

## Security Surface

- **sink** (`db-write`): delete_metadata.update(req.GET) (src/nova/api/openstack/compute/assisted_volume_snapshots.py:L76)

