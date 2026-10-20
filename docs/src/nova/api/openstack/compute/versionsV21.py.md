# src/nova/api/openstack/compute/versionsV21.py

## Overview

This file implements the `versionsV21` module, defining 1 class, 1 method, 6 imports, 3 side effects.

Lines: total 38, code 18, comment 14, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VersionsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/versionsV21.py:L26–L38` |
| `VersionsController.show` | method | (self, req, id='v2.1') | public | `builder.build_version(versions.VERSIONS[id])` (src/nova/api/openstack/compute/versionsV21.py:L38) | 3/7 | `src/nova/api/openstack/compute/versionsV21.py:L31–L38` |

## Dependencies

- `import webob.exc` (src/nova/api/openstack/compute/versionsV21.py:L16)
- `nova.api.openstack.compute.schemas`: imports `versions as schema` (src/nova/api/openstack/compute/versionsV21.py:L18)
- `nova.api.openstack.compute`: imports `versions` (src/nova/api/openstack/compute/versionsV21.py:L19)
- `nova.api.openstack.compute.views`: imports `versions as views_versions` (src/nova/api/openstack/compute/versionsV21.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/versionsV21.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/versionsV21.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import versions as schema (src/nova/api/openstack/compute/versionsV21.py:L18)
- **network**: from nova.api.openstack.compute import versions (src/nova/api/openstack/compute/versionsV21.py:L19)
- **network**: from nova.api.openstack.compute.views import versions as views_versions (src/nova/api/openstack/compute/versionsV21.py:L20)

