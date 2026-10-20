# src/nova/api/openstack/compute/snapshots.py

## Overview

This file implements the `snapshots` module, defining 1 class, 2 functions, 7 methods, 10 imports, 2 side effects.

Lines: total 157, code 117, comment 15, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_translate_snapshot_detail_view` | function | (context, vol) | unexported | `_translate_snapshot_summary_view(context, vol)` (src/nova/api/openstack/compute/snapshots.py:L34) | 1/2 | `src/nova/api/openstack/compute/snapshots.py:L32–L34` |
| `_translate_snapshot_summary_view` | function | (context, snapshot) | unexported | `d` (src/nova/api/openstack/compute/snapshots.py:L49) | 1/10 | `src/nova/api/openstack/compute/snapshots.py:L37–L49` |
| `SnapshotController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/snapshots.py:L53–L157` |
| `SnapshotController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/snapshots.py:L56–L58` |
| `SnapshotController.show` | method | (self, req, id) | public | `{'snapshot': _translate_snapshot_detail_view(context, vol)}` (src/nova/api/openstack/compute/snapshots.py:L76) | 2/10 | `src/nova/api/openstack/compute/snapshots.py:L64–L76` |
| `SnapshotController.delete` | method | (self, req, id) | public | not declared | 2/9 | `src/nova/api/openstack/compute/snapshots.py:L82–L92` |
| `SnapshotController.index` | method | (self, req) | public | `self._items(req, entity_maker=_translate_snapshot_summary_view)` (src/nova/api/openstack/compute/snapshots.py:L104) | 1/6 | `src/nova/api/openstack/compute/snapshots.py:L98–L104` |
| `SnapshotController.detail` | method | (self, req) | public | `self._items(req, entity_maker=_translate_snapshot_detail_view)` (src/nova/api/openstack/compute/snapshots.py:L116) | 1/6 | `src/nova/api/openstack/compute/snapshots.py:L110–L116` |
| `SnapshotController._items` | method | (self, req, entity_maker) | private | `{'snapshots': res}` (src/nova/api/openstack/compute/snapshots.py:L125) | 2/6 | `src/nova/api/openstack/compute/snapshots.py:L118–L125` |
| `SnapshotController.create` | method | (self, req, body) | public | `{'snapshot': retval}` (src/nova/api/openstack/compute/snapshots.py:L157) | 3/22 | `src/nova/api/openstack/compute/snapshots.py:L131–L157` |

## Dependencies

- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/snapshots.py:L18)
- `webob`: imports `exc` (src/nova/api/openstack/compute/snapshots.py:L19)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/snapshots.py:L21–L22)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/snapshots.py:L23)
- `nova.api.openstack.compute.schemas`: imports `snapshots as schema` (src/nova/api/openstack/compute/snapshots.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/snapshots.py:L25)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/snapshots.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/compute/snapshots.py:L27)
- `nova.policies`: imports `volumes as vol_policies` (src/nova/api/openstack/compute/snapshots.py:L28)
- `nova.volume`: imports `cinder` (src/nova/api/openstack/compute/snapshots.py:L29)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/snapshots.py:L21)
- **network**: from nova.api.openstack.compute.schemas import snapshots as schema (src/nova/api/openstack/compute/snapshots.py:L24)

