# src/nova/api/openstack/compute/create_backup.py

## Overview

This file implements the `create_backup` module, defining 1 class, 2 methods, 9 imports, 1 side effect, 1 security surface entry.

Lines: total 96, code 63, comment 18, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CreateBackupController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/create_backup.py:L29–L96` |
| `CreateBackupController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/create_backup.py:L30–L32` |
| `CreateBackupController._create_backup` | method | (self, req, id, body) | private | `{'image_id': image['id']}` (src/nova/api/openstack/compute/create_backup.py:L85); `resp` (src/nova/api/openstack/compute/create_backup.py:L96) | 6/31 | `src/nova/api/openstack/compute/create_backup.py:L45–L96` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/create_backup.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/create_backup.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/create_backup.py:L19)
- `nova.api.openstack.compute.schemas`: imports `create_backup as schema` (src/nova/api/openstack/compute/create_backup.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/create_backup.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/create_backup.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/create_backup.py:L23)
- `nova`: imports `exception` (src/nova/api/openstack/compute/create_backup.py:L24)
- `nova.policies`: imports `create_backup as cb_policies` (src/nova/api/openstack/compute/create_backup.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import create_backup as schema (src/nova/api/openstack/compute/create_backup.py:L20)

## Security Surface

- **sink** (`db-write`): props.update(metadata) (src/nova/api/openstack/compute/create_backup.py:L71)

