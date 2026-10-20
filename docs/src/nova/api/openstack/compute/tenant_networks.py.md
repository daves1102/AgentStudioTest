# src/nova/api/openstack/compute/tenant_networks.py

## Overview

This file implements the `tenant_networks` module, defining 1 class, 3 constants, 1 function, 7 methods, 1 variable, 13 imports, 5 side effects.

Lines: total 117, code 84, comment 19, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/tenant_networks.py:L32–L32` |
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/tenant_networks.py:L33–L33` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/tenant_networks.py:L34–L34` |
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/tenant_networks.py:L36–L41` |
| `network_dict` | function | (network) | exported | `{ 'id': network.get('id'), # yes, this is bananas, but this is what the API returned historically # when using neutron instead of nova-network, so we keep on returning # that 'cidr': str(None), 'label` (src/nova/api/openstack/compute/tenant_networks.py:L47) | 1/6 | `src/nova/api/openstack/compute/tenant_networks.py:L44–L54` |
| `TenantNetworkController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/tenant_networks.py:L58–L117` |
| `TenantNetworkController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/tenant_networks.py:L59–L62` |
| `TenantNetworkController._refresh_default_networks` | method | (self) | private | not declared | 3/7 | `src/nova/api/openstack/compute/tenant_networks.py:L64–L70` |
| `TenantNetworkController._get_default_networks` | method | (self) | private | `self.network_api.get_all(ctx)` (src/nova/api/openstack/compute/tenant_networks.py:L75) | 1/4 | `src/nova/api/openstack/compute/tenant_networks.py:L72–L75` |
| `TenantNetworkController.index` | method | (self, req) | public | `{'networks': [network_dict(n) for n in networks]}` (src/nova/api/openstack/compute/tenant_networks.py:L89) | 3/9 | `src/nova/api/openstack/compute/tenant_networks.py:L81–L89` |
| `TenantNetworkController.show` | method | (self, req, id) | public | `{'network': network_dict(network)}` (src/nova/api/openstack/compute/tenant_networks.py:L104) | 2/10 | `src/nova/api/openstack/compute/tenant_networks.py:L95–L104` |
| `TenantNetworkController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/tenant_networks.py:L109–L110` |
| `TenantNetworkController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/tenant_networks.py:L116–L117` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/tenant_networks.py:L16)
- `webob`: imports `exc` (src/nova/api/openstack/compute/tenant_networks.py:L17)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/tenant_networks.py:L19–L20)
- `nova.api.openstack.compute.schemas`: imports `tenant_networks as schema` (src/nova/api/openstack/compute/tenant_networks.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/tenant_networks.py:L22)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/tenant_networks.py:L23)
- `import nova.conf` (src/nova/api/openstack/compute/tenant_networks.py:L24)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/tenant_networks.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/tenant_networks.py:L26)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/tenant_networks.py:L27)
- `nova.network`: imports `neutron` (src/nova/api/openstack/compute/tenant_networks.py:L28)
- `nova.policies`: imports `tenant_networks as tn_policies` (src/nova/api/openstack/compute/tenant_networks.py:L29)
- `nova`: imports `quota` (src/nova/api/openstack/compute/tenant_networks.py:L30)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/tenant_networks.py:L19)
- **network**: from nova.api.openstack.compute.schemas import tenant_networks as schema (src/nova/api/openstack/compute/tenant_networks.py:L21)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/tenant_networks.py:L32)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/api/openstack/compute/tenant_networks.py:L33)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/tenant_networks.py:L34)

