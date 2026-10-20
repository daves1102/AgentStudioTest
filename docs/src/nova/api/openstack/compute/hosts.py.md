# src/nova/api/openstack/compute/hosts.py

## Overview

This file implements the `hosts` module, defining 1 class, 1 constant, 1 function, 14 methods, 4 staticmethods, 11 imports, 2 side effects, 3 security surface entries.

Lines: total 303, code 258, comment 18, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/hosts.py:L31–L31` |
| `HostController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/hosts.py:L35–L303` |
| `HostController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/hosts.py:L38–L40` |
| `HostController.index` | method | (self, req) | public | `{'hosts': hosts}` (src/nova/api/openstack/compute/hosts.py:L91) | 4/18 | `src/nova/api/openstack/compute/hosts.py:L46–L91` |
| `HostController.update` | method | (self, req, id, body) | public | `result` (src/nova/api/openstack/compute/hosts.py:L132) | 5/19 | `src/nova/api/openstack/compute/hosts.py:L97–L132` |
| `HostController.update.read_enabled` | function | (orig_val) | public | `val == "enable"` (src/nova/api/openstack/compute/hosts.py:L112) | — | `src/nova/api/openstack/compute/hosts.py:L109–L112` |
| `HostController._set_host_maintenance` | method | (self, context, host_name, mode=True) | private | `result` (src/nova/api/openstack/compute/hosts.py:L150) | 5/14 | `src/nova/api/openstack/compute/hosts.py:L134–L150` |
| `HostController._set_enabled_status` | method | (self, context, host_name, enabled) | private | `result` (src/nova/api/openstack/compute/hosts.py:L171) | 6/16 | `src/nova/api/openstack/compute/hosts.py:L152–L171` |
| `HostController._host_power_action` | method | (self, req, host_name, action) | private | `{"host": host_name, "power_action": result}` (src/nova/api/openstack/compute/hosts.py:L184) | 4/11 | `src/nova/api/openstack/compute/hosts.py:L173–L184` |
| `HostController.startup` | method | (self, req, id) | public | `self._host_power_action(req, host_name=id, action="startup")` (src/nova/api/openstack/compute/hosts.py:L194) | 1/5 | `src/nova/api/openstack/compute/hosts.py:L190–L194` |
| `HostController.shutdown` | method | (self, req, id) | public | `self._host_power_action(req, host_name=id, action="shutdown")` (src/nova/api/openstack/compute/hosts.py:L204) | 1/5 | `src/nova/api/openstack/compute/hosts.py:L200–L204` |
| `HostController.reboot` | method | (self, req, id) | public | `self._host_power_action(req, host_name=id, action="reboot")` (src/nova/api/openstack/compute/hosts.py:L214) | 1/5 | `src/nova/api/openstack/compute/hosts.py:L210–L214` |
| `HostController._get_total_resources` | method | (host_name, compute_node) | private | `{'resource': {'host': host_name, 'project': '(total)', 'cpu': compute_node.vcpus, 'memory_mb': compute_node.memory_mb, 'disk_gb': compute_node.local_gb}}` (src/nova/api/openstack/compute/hosts.py:L218) | 1/6 | `src/nova/api/openstack/compute/hosts.py:L217–L222` |
| `HostController._get_used_now_resources` | method | (host_name, compute_node) | private | `{'resource': {'host': host_name, 'project': '(used_now)', 'cpu': compute_node.vcpus_used, 'memory_mb': compute_node.memory_mb_used, 'disk_gb': compute_node.local_gb_used}}` (src/nova/api/openstack/compute/hosts.py:L226) | 1/6 | `src/nova/api/openstack/compute/hosts.py:L225–L230` |
| `HostController._get_resource_totals_from_instances` | method | (host_name, instances) | private | `{'resource': {'host': host_name, 'project': '(used_max)', 'cpu': cpu_sum, 'memory_mb': mem_sum, 'disk_gb': hdd_sum}}` (src/nova/api/openstack/compute/hosts.py:L242) | 2/13 | `src/nova/api/openstack/compute/hosts.py:L233–L246` |
| `HostController._get_resources_by_project` | method | (host_name, instances) | private | `project_map` (src/nova/api/openstack/compute/hosts.py:L263) | 2/14 | `src/nova/api/openstack/compute/hosts.py:L249–L263` |
| `HostController.show` | method | (self, req, id) | public | `{'host': resources}` (src/nova/api/openstack/compute/hosts.py:L303) | 3/25 | `src/nova/api/openstack/compute/hosts.py:L269–L303` |
| `HostController._get_total_resources` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/hosts.py:L216–L222` |
| `HostController._get_used_now_resources` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/hosts.py:L224–L230` |
| `HostController._get_resource_totals_from_instances` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/hosts.py:L232–L246` |
| `HostController._get_resources_by_project` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/hosts.py:L248–L263` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/hosts.py:L18)
- `import webob.exc` (src/nova/api/openstack/compute/hosts.py:L19)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/hosts.py:L21)
- `nova.api.openstack.compute.schemas`: imports `hosts as schema` (src/nova/api/openstack/compute/hosts.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/hosts.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/hosts.py:L24)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/hosts.py:L25)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/hosts.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/compute/hosts.py:L27)
- `nova`: imports `objects` (src/nova/api/openstack/compute/hosts.py:L28)
- `nova.policies`: imports `hosts as hosts_policies` (src/nova/api/openstack/compute/hosts.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import hosts as schema (src/nova/api/openstack/compute/hosts.py:L22)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/hosts.py:L31)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/hosts.py:L95)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/hosts.py:L97)
- **sink** (`db-write`): context.can(hosts_policies.POLICY_NAME % 'update', (src/nova/api/openstack/compute/hosts.py:L115)

