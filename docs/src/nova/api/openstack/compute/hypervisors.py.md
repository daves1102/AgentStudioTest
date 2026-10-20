# src/nova/api/openstack/compute/hypervisors.py

## Overview

This file implements the `hypervisors` module, defining 1 class, 1 constant, 1 field, 15 methods, 1 staticmethod, 17 imports, 4 side effects, 1 security surface entry.

Lines: total 535, code 414, comment 54, blank 67

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/hypervisors.py:L37–L37` |
| `HypervisorsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/hypervisors.py:L41–L535` |
| `HypervisorsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/hypervisors.py:L44–L44` |
| `HypervisorsController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/hypervisors.py:L46–L49` |
| `HypervisorsController._view_hypervisor` | method | (self, hypervisor, service, detail, req, servers=None, with_servers=False) | private | `hyp_dict` (src/nova/api/openstack/compute/hypervisors.py:L129) | 21/61 | `src/nova/api/openstack/compute/hypervisors.py:L51–L129` |
| `HypervisorsController._get_compute_nodes_by_name_pattern` | method | (self, context, hostname_match) | private | `compute_nodes` (src/nova/api/openstack/compute/hypervisors.py:L138) | 2/8 | `src/nova/api/openstack/compute/hypervisors.py:L131–L138` |
| `HypervisorsController._get_hypervisors` | method | (self, req, detail=False, limit=None, marker=None, links=False) | private | `hypervisors_dict` (src/nova/api/openstack/compute/hypervisors.py:L224) | 11/55 | `src/nova/api/openstack/compute/hypervisors.py:L140–L224` |
| `HypervisorsController.index` | method | (self, req) | public | `self._index(req, limit=limit, marker=marker, links=links)` (src/nova/api/openstack/compute/hypervisors.py:L251) | 2/8 | `src/nova/api/openstack/compute/hypervisors.py:L235–L251` |
| `HypervisorsController._index` | method | (self, req, limit=None, marker=None, links=False) | private | `self._get_hypervisors(req, detail=False, limit=limit, marker=marker, links=links)` (src/nova/api/openstack/compute/hypervisors.py:L256) | 1/5 | `src/nova/api/openstack/compute/hypervisors.py:L253–L257` |
| `HypervisorsController.detail` | method | (self, req) | public | `self._detail(req, limit=limit, marker=marker, links=links)` (src/nova/api/openstack/compute/hypervisors.py:L286) | 2/8 | `src/nova/api/openstack/compute/hypervisors.py:L270–L286` |
| `HypervisorsController._detail` | method | (self, req, limit=None, marker=None, links=False) | private | `self._get_hypervisors(req, detail=True, limit=limit, marker=marker, links=links)` (src/nova/api/openstack/compute/hypervisors.py:L291) | 1/5 | `src/nova/api/openstack/compute/hypervisors.py:L288–L292` |
| `HypervisorsController._validate_id` | method | (req, hypervisor_id) | private | not declared | 4/12 | `src/nova/api/openstack/compute/hypervisors.py:L295–L316` |
| `HypervisorsController.show` | method | (self, req, id) | public | `self._show(req, id, with_servers=with_servers)` (src/nova/api/openstack/compute/hypervisors.py:L340) | 2/6 | `src/nova/api/openstack/compute/hypervisors.py:L326–L340` |
| `HypervisorsController._show` | method | (self, req, id, with_servers=False) | private | `{ 'hypervisor': self._view_hypervisor( hyp, service, detail=True, req=req, servers=instances, with_servers=with_servers, ), }` (src/nova/api/openstack/compute/hypervisors.py:L374) | 5/32 | `src/nova/api/openstack/compute/hypervisors.py:L342–L379` |
| `HypervisorsController.uptime` | method | (self, req, id) | public | `{'hypervisor': hypervisor}` (src/nova/api/openstack/compute/hypervisors.py:L434) | 6/33 | `src/nova/api/openstack/compute/hypervisors.py:L386–L434` |
| `HypervisorsController.search` | method | (self, req, id) | public | `{'hypervisors': hypervisors}` (src/nova/api/openstack/compute/hypervisors.py:L474) | 4/21 | `src/nova/api/openstack/compute/hypervisors.py:L440–L474` |
| `HypervisorsController.servers` | method | (self, req, id) | public | `{'hypervisors': hypervisors}` (src/nova/api/openstack/compute/hypervisors.py:L521) | 5/26 | `src/nova/api/openstack/compute/hypervisors.py:L480–L521` |
| `HypervisorsController.statistics` | method | (self, req) | public | `{'hypervisor_statistics': stats}` (src/nova/api/openstack/compute/hypervisors.py:L535) | 1/5 | `src/nova/api/openstack/compute/hypervisors.py:L527–L535` |
| `HypervisorsController._validate_id` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/hypervisors.py:L294–L316` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/hypervisors.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/openstack/compute/hypervisors.py:L19)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/hypervisors.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/api/openstack/compute/hypervisors.py:L21)
- `import webob.exc` (src/nova/api/openstack/compute/hypervisors.py:L22)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/hypervisors.py:L24)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/hypervisors.py:L25)
- `nova.api.openstack.compute.schemas`: imports `hypervisors as schema` (src/nova/api/openstack/compute/hypervisors.py:L26)
- `nova.api.openstack.compute.views`: imports `hypervisors as hyper_view` (src/nova/api/openstack/compute/hypervisors.py:L27)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/hypervisors.py:L28)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/hypervisors.py:L29)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/hypervisors.py:L30)
- `nova`: imports `exception` (src/nova/api/openstack/compute/hypervisors.py:L31)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/hypervisors.py:L32)
- `nova.policies`: imports `hypervisors as hv_policies` (src/nova/api/openstack/compute/hypervisors.py:L33)
- `nova`: imports `servicegroup` (src/nova/api/openstack/compute/hypervisors.py:L34)
- `nova`: imports `utils` (src/nova/api/openstack/compute/hypervisors.py:L35)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import hypervisors as schema (src/nova/api/openstack/compute/hypervisors.py:L26)
- **network**: from nova.api.openstack.compute.views import hypervisors as hyper_view (src/nova/api/openstack/compute/hypervisors.py:L27)
- **network**: :param req: nova.api.openstack.wsgi.Request for the GET request (src/nova/api/openstack/compute/hypervisors.py:L144)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/hypervisors.py:L37)

## Security Surface

- **entry-point** (`http-param`): :param req: nova.api.openstack.wsgi.Request for the GET request (src/nova/api/openstack/compute/hypervisors.py:L144)

