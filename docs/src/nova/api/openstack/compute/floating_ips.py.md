# src/nova/api/openstack/compute/floating_ips.py

## Overview

This file implements the `floating_ips` module, defining 2 classs, 1 constant, 3 functions, 8 methods, 13 imports, 3 side effects.

Lines: total 311, code 245, comment 21, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ips.py:L35–L35` |
| `_translate_floating_ip_view` | function | (floating_ip) | unexported | `{ 'floating_ip': { 'fixed_ip': floating_ip['fixed_ip_address'], 'id': floating_ip['id'], 'instance_id': instance_id, 'ip': floating_ip['floating_ip_address'], 'pool': ( floating_ip['network_details'][` (src/nova/api/openstack/compute/floating_ips.py:L43) | 3/15 | `src/nova/api/openstack/compute/floating_ips.py:L38–L53` |
| `get_instance_by_floating_ip_addr` | function | (self, context, address) | exported | `common.get_instance(self.compute_api, context, instance_id, expected_attrs=['flavor'])` (src/nova/api/openstack/compute/floating_ips.py:L66) | 4/11 | `src/nova/api/openstack/compute/floating_ips.py:L56–L67` |
| `disassociate_floating_ip` | function | (self, context, instance, address) | exported | not declared | 2/5 | `src/nova/api/openstack/compute/floating_ips.py:L70–L74` |
| `FloatingIPController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ips.py:L78–L183` |
| `FloatingIPController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/floating_ips.py:L81–L84` |
| `FloatingIPController.show` | method | (self, req, id) | public | `_translate_floating_ip_view(floating_ip)` (src/nova/api/openstack/compute/floating_ips.py:L104) | 3/12 | `src/nova/api/openstack/compute/floating_ips.py:L90–L104` |
| `FloatingIPController.index` | method | (self, req) | public | `{'floating_ips': [_translate_floating_ip_view(ip)['floating_ip'] for ip in floating_ips]}` (src/nova/api/openstack/compute/floating_ips.py:L118) | 2/7 | `src/nova/api/openstack/compute/floating_ips.py:L110–L119` |
| `FloatingIPController.create` | method | (self, req, body=None) | public | `_translate_floating_ip_view(ip)` (src/nova/api/openstack/compute/floating_ips.py:L153) | 9/27 | `src/nova/api/openstack/compute/floating_ips.py:L125–L153` |
| `FloatingIPController.delete` | method | (self, req, id) | public | not declared | 5/20 | `src/nova/api/openstack/compute/floating_ips.py:L159–L183` |
| `FloatingIPActionController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ips.py:L187–L311` |
| `FloatingIPActionController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/floating_ips.py:L190–L193` |
| `FloatingIPActionController._add_floating_ip` | method | (self, req, id, body) | private | `webob.Response(status_int=202)` (src/nova/api/openstack/compute/floating_ips.py:L274) | 17/67 | `src/nova/api/openstack/compute/floating_ips.py:L200–L274` |
| `FloatingIPActionController._remove_floating_ip` | method | (self, req, id, body) | private | `webob.Response(status_int=202)` (src/nova/api/openstack/compute/floating_ips.py:L307) | 6/22 | `src/nova/api/openstack/compute/floating_ips.py:L281–L311` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/floating_ips.py:L18)
- `oslo_utils`: imports `netutils` (src/nova/api/openstack/compute/floating_ips.py:L19)
- `import webob` (src/nova/api/openstack/compute/floating_ips.py:L20)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/floating_ips.py:L22–L23)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/floating_ips.py:L24)
- `nova.api.openstack.compute.schemas`: imports `floating_ips as schema` (src/nova/api/openstack/compute/floating_ips.py:L25)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/floating_ips.py:L26)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/floating_ips.py:L27)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/floating_ips.py:L28)
- `nova`: imports `exception` (src/nova/api/openstack/compute/floating_ips.py:L29)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/floating_ips.py:L30)
- `nova.network`: imports `neutron` (src/nova/api/openstack/compute/floating_ips.py:L31)
- `nova.policies`: imports `floating_ips as fi_policies` (src/nova/api/openstack/compute/floating_ips.py:L32)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/floating_ips.py:L22)
- **network**: from nova.api.openstack.compute.schemas import floating_ips as schema (src/nova/api/openstack/compute/floating_ips.py:L25)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/floating_ips.py:L35)

