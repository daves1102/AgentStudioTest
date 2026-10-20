# src/nova/api/openstack/compute/keypairs.py

## Overview

This file implements the `keypairs` module, defining 1 class, 1 field, 10 methods, 12 imports, 2 side effects.

Lines: total 225, code 167, comment 23, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KeypairController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/keypairs.py:L34–L225` |
| `KeypairController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/keypairs.py:L38–L38` |
| `KeypairController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/keypairs.py:L40–L42` |
| `KeypairController.create` | method | (self, req, body) | public | `self._create(req, body, key_type=key_type, user_id=user_id)` (src/nova/api/openstack/compute/keypairs.py:L79) | 3/8 | `src/nova/api/openstack/compute/keypairs.py:L55–L79` |
| `KeypairController._create` | method | (self, req, body, user_id=None, key_type=False) | private | `self._view_builder.create(keypair, private_key=return_priv_key, key_type=key_type)` (src/nova/api/openstack/compute/keypairs.py:L110) | 6/28 | `src/nova/api/openstack/compute/keypairs.py:L81–L112` |
| `KeypairController._get_user_id` | method | (self, req) | private | `user_id` (src/nova/api/openstack/compute/keypairs.py:L117) | 2/4 | `src/nova/api/openstack/compute/keypairs.py:L114–L117` |
| `KeypairController.delete` | method | (self, req, id) | public | not declared | 2/5 | `src/nova/api/openstack/compute/keypairs.py:L126–L132` |
| `KeypairController._delete` | method | (self, req, id, user_id=None) | private | not declared | 3/9 | `src/nova/api/openstack/compute/keypairs.py:L134–L144` |
| `KeypairController.show` | method | (self, req, id) | public | `self._show(req, id, key_type=key_type, user_id=user_id)` (src/nova/api/openstack/compute/keypairs.py:L162) | 3/8 | `src/nova/api/openstack/compute/keypairs.py:L152–L162` |
| `KeypairController._show` | method | (self, req, id, key_type=False, user_id=None) | private | `self._view_builder.show(keypair, key_type=key_type)` (src/nova/api/openstack/compute/keypairs.py:L175) | 3/10 | `src/nova/api/openstack/compute/keypairs.py:L164–L175` |
| `KeypairController.index` | method | (self, req) | public | `self._index( req, key_type=key_type, user_id=user_id, links=links )` (src/nova/api/openstack/compute/keypairs.py:L202) | 4/13 | `src/nova/api/openstack/compute/keypairs.py:L186–L204` |
| `KeypairController._index` | method | (self, req, key_type=False, user_id=None, links=False) | private | `self._view_builder.index(req, key_pairs, key_type=key_type, links=links)` (src/nova/api/openstack/compute/keypairs.py:L224) | 4/16 | `src/nova/api/openstack/compute/keypairs.py:L206–L225` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/keypairs.py:L18)
- `import webob.exc` (src/nova/api/openstack/compute/keypairs.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/keypairs.py:L21)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/keypairs.py:L22)
- `nova.api.openstack.compute.schemas`: imports `keypairs as schema` (src/nova/api/openstack/compute/keypairs.py:L23)
- `nova.api.openstack.compute.views`: imports `keypairs as keypairs_view` (src/nova/api/openstack/compute/keypairs.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/keypairs.py:L25)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/keypairs.py:L26)
- `nova.compute`: imports `api as compute_api` (src/nova/api/openstack/compute/keypairs.py:L27)
- `nova`: imports `exception` (src/nova/api/openstack/compute/keypairs.py:L28)
- `nova.objects`: imports `keypair as keypair_obj` (src/nova/api/openstack/compute/keypairs.py:L29)
- `nova.policies`: imports `keypairs as kp_policies` (src/nova/api/openstack/compute/keypairs.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import keypairs as schema (src/nova/api/openstack/compute/keypairs.py:L23)
- **network**: from nova.api.openstack.compute.views import keypairs as keypairs_view (src/nova/api/openstack/compute/keypairs.py:L24)

