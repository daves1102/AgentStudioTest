# src/nova/api/openstack/compute/baremetal_nodes.py

## Overview

This file implements the `baremetal_nodes` module, defining 1 class, 1 constant, 1 function, 8 methods, 1 property, 10 imports, 4 side effects.

Lines: total 148, code 106, comment 20, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/baremetal_nodes.py:L32–L32` |
| `_no_ironic_proxy` | function | (cmd) | unexported | not declared | 1/6 | `src/nova/api/openstack/compute/baremetal_nodes.py:L35–L40` |
| `BareMetalNodeController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/baremetal_nodes.py:L44–L148` |
| `BareMetalNodeController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/baremetal_nodes.py:L47–L50` |
| `BareMetalNodeController.ironic_connection` | method | (self) | public | `self._ironic_connection` (src/nova/api/openstack/compute/baremetal_nodes.py:L63) | 2/8 | `src/nova/api/openstack/compute/baremetal_nodes.py:L53–L63` |
| `BareMetalNodeController.index` | method | (self, req) | public | `{'nodes': nodes}` (src/nova/api/openstack/compute/baremetal_nodes.py:L88) | 2/17 | `src/nova/api/openstack/compute/baremetal_nodes.py:L69–L88` |
| `BareMetalNodeController.show` | method | (self, req, id) | public | `{'node': node}` (src/nova/api/openstack/compute/baremetal_nodes.py:L119) | 3/22 | `src/nova/api/openstack/compute/baremetal_nodes.py:L94–L119` |
| `BareMetalNodeController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/baremetal_nodes.py:L125–L126` |
| `BareMetalNodeController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/baremetal_nodes.py:L131–L132` |
| `BareMetalNodeController._add_interface` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/baremetal_nodes.py:L139–L140` |
| `BareMetalNodeController._remove_interface` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/baremetal_nodes.py:L147–L148` |
| `BareMetalNodeController.ironic_connection` | property | — | public | not declared | — | `src/nova/api/openstack/compute/baremetal_nodes.py:L52–L63` |

## Dependencies

- `openstack`: imports `exceptions as sdk_exc` (src/nova/api/openstack/compute/baremetal_nodes.py:L19)
- `import webob` (src/nova/api/openstack/compute/baremetal_nodes.py:L20)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/baremetal_nodes.py:L22–L23)
- `nova.api.openstack.compute.schemas`: imports `baremetal_nodes as schema` (src/nova/api/openstack/compute/baremetal_nodes.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/baremetal_nodes.py:L25)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/baremetal_nodes.py:L26)
- `import nova.conf` (src/nova/api/openstack/compute/baremetal_nodes.py:L27)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/baremetal_nodes.py:L28)
- `nova.policies`: imports `baremetal_nodes as bn_policies` (src/nova/api/openstack/compute/baremetal_nodes.py:L29)
- `nova`: imports `utils` (src/nova/api/openstack/compute/baremetal_nodes.py:L30)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/baremetal_nodes.py:L22)
- **network**: from nova.api.openstack.compute.schemas import baremetal_nodes as schema (src/nova/api/openstack/compute/baremetal_nodes.py:L24)
- **network**: self._ironic_connection = utils.get_sdk_adapter( (src/nova/api/openstack/compute/baremetal_nodes.py:L58)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/baremetal_nodes.py:L32)

