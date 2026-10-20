# src/nova/api/openstack/compute/networks.py

## Overview

This file implements the `networks` module, defining 1 class, 1 function, 7 methods, 3 variables, 9 imports, 2 side effects.

Lines: total 132, code 92, comment 21, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/networks.py:L29–L34` |
| `_removal_reason_action` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/networks.py:L35–L35` |
| `_removal_reason_api` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/networks.py:L36–L36` |
| `network_dict` | function | (context, network) | exported | `result` (src/nova/api/openstack/compute/networks.py:L67) | 5/20 | `src/nova/api/openstack/compute/networks.py:L39–L67` |
| `NetworkController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/networks.py:L71–L132` |
| `NetworkController.__init__` | method | (self, network_api=None) | public | not declared | 2/3 | `src/nova/api/openstack/compute/networks.py:L73–L76` |
| `NetworkController.index` | method | (self, req) | public | `{'networks': result}` (src/nova/api/openstack/compute/networks.py:L88) | 2/7 | `src/nova/api/openstack/compute/networks.py:L82–L88` |
| `NetworkController.show` | method | (self, req, id) | public | `{'network': network_dict(context, network)}` (src/nova/api/openstack/compute/networks.py:L104) | 2/10 | `src/nova/api/openstack/compute/networks.py:L94–L104` |
| `NetworkController._disassociate_host_and_project` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/networks.py:L111–L112` |
| `NetworkController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/networks.py:L117–L118` |
| `NetworkController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/networks.py:L124–L125` |
| `NetworkController.add` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/networks.py:L131–L132` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/networks.py:L17)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/networks.py:L19–L20)
- `nova.api.openstack.compute.schemas`: imports `networks as schema` (src/nova/api/openstack/compute/networks.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/networks.py:L22)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/networks.py:L23)
- `nova`: imports `exception` (src/nova/api/openstack/compute/networks.py:L24)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/networks.py:L25)
- `nova.network`: imports `neutron` (src/nova/api/openstack/compute/networks.py:L26)
- `nova.policies`: imports `networks as net_policies` (src/nova/api/openstack/compute/networks.py:L27)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/networks.py:L19)
- **network**: from nova.api.openstack.compute.schemas import networks as schema (src/nova/api/openstack/compute/networks.py:L21)

