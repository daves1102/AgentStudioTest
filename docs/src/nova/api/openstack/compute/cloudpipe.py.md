# src/nova/api/openstack/compute/cloudpipe.py

## Overview

This file implements the `cloudpipe` module, defining 1 class, 3 methods, 1 variable, 4 imports, 1 side effect, 2 security surface entries.

Lines: total 56, code 34, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/cloudpipe.py:L23–L27` |
| `CloudpipeController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/cloudpipe.py:L31–L56` |
| `CloudpipeController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cloudpipe.py:L38–L40` |
| `CloudpipeController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cloudpipe.py:L46–L48` |
| `CloudpipeController.update` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/cloudpipe.py:L54–L56` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/cloudpipe.py:L17)
- `nova.api.openstack.compute.schemas`: imports `cloudpipe as schema` (src/nova/api/openstack/compute/cloudpipe.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/cloudpipe.py:L20)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/cloudpipe.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import cloudpipe as schema (src/nova/api/openstack/compute/cloudpipe.py:L19)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/cloudpipe.py:L52)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/cloudpipe.py:L54)

