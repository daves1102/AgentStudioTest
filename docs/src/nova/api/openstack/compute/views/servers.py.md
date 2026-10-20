# src/nova/api/openstack/compute/views/servers.py

## Overview

This file implements the `servers` module, defining 1 class, 3 constants, 4 fields, 26 methods, 6 staticmethods, 19 imports, 6 side effects, 4 security surface entries.

Lines: total 823, code 593, comment 138, blank 92

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L40–L40` |
| `AZ_NOT_IN_REQUEST_SPEC` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L43–L43` |
| `SCHED_HINTS_NOT_IN_REQUEST_SPEC` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L44–L44` |
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L47–L823` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L50–L50` |
| `ViewBuilder._progress_statuses` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L52–L59` |
| `ViewBuilder._fault_statuses` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L61–L63` |
| `ViewBuilder._show_expected_attrs` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L68–L68` |
| `ViewBuilder.__init__` | method | (self) | public | not declared | 1/6 | `src/nova/api/openstack/compute/views/servers.py:L70–L76` |
| `ViewBuilder.create` | method | (self, request, body, instance) | public | `server` (src/nova/api/openstack/compute/views/servers.py:L100) | 2/14 | `src/nova/api/openstack/compute/views/servers.py:L78–L100` |
| `ViewBuilder.basic` | method | (self, request, instance, show_extra_specs=False, show_extended_attr=None, show_host_status=None, show_sec_grp=None, bdms=None, cell_down_support=False, show_user_data=False, provided_az=None, provided_sched_hints=None) | public | `{ "server": { "id": instance.uuid, "status": "UNKNOWN", "links": self._get_links(request, instance.uuid, self._collection_name), }, }` (src/nova/api/openstack/compute/views/servers.py:L114); `{ "server": { "id": instance["uuid"], "name": instance["display_name"], "links": self._get_links(request, instance["uuid"], self._collection_name), }, }` (src/nova/api/openstack/compute/views/servers.py:L123) | 3/24 | `src/nova/api/openstack/compute/views/servers.py:L102–L131` |
| `ViewBuilder.get_show_expected_attrs` | method | (self, expected_attrs=None) | public | `sorted(list(set(self._show_expected_attrs + expected_attrs)))` (src/nova/api/openstack/compute/views/servers.py:L151) | 2/4 | `src/nova/api/openstack/compute/views/servers.py:L133–L151` |
| `ViewBuilder._show_from_down_cell` | method | (self, request, instance, show_extra_specs, show_server_groups) | private | `ret` (src/nova/api/openstack/compute/views/servers.py:L192) | 5/25 | `src/nova/api/openstack/compute/views/servers.py:L153–L192` |
| `ViewBuilder._get_host_status_unknown_only` | method | (context, instance=None) | private | `unknown_only` (src/nova/api/openstack/compute/views/servers.py:L228) | 4/16 | `src/nova/api/openstack/compute/views/servers.py:L195–L228` |
| `ViewBuilder._get_pinned_az` | method | (self, context, instance, provided_az) | private | `pinned_az` (src/nova/api/openstack/compute/views/servers.py:L245) | 4/13 | `src/nova/api/openstack/compute/views/servers.py:L230–L245` |
| `ViewBuilder._get_scheduler_hints` | method | (self, context, instance, provided_sched_hints) | private | `sched_hints` (src/nova/api/openstack/compute/views/servers.py:L261) | 4/13 | `src/nova/api/openstack/compute/views/servers.py:L247–L261` |
| `ViewBuilder.show` | method | (self, request, instance, extend_address=True, show_extra_specs=None, show_AZ=True, show_config_drive=True, show_extended_attr=None, show_host_status=None, show_keypair=True, show_srv_usg=True, show_sec_grp=True, show_extended_status=True, show_extended_volumes=True, bdms=None, cell_down_support=False, show_server_groups=False, show_user_data=True, provided_az=None, provided_sched_hints=None) | public | `self._show_from_down_cell( request, instance, show_extra_specs, show_server_groups)` (src/nova/api/openstack/compute/views/servers.py:L288); `server` (src/nova/api/openstack/compute/views/servers.py:L472) | 50/134 | `src/nova/api/openstack/compute/views/servers.py:L263–L472` |
| `ViewBuilder.index` | method | (self, request, instances, cell_down_support=False) | public | `self._list_view(self.basic, request, instances, coll_name, False, cell_down_support=cell_down_support)` (src/nova/api/openstack/compute/views/servers.py:L477) | 1/4 | `src/nova/api/openstack/compute/views/servers.py:L474–L478` |
| `ViewBuilder.detail` | method | (self, request, instances, cell_down_support=False) | public | `servers_dict` (src/nova/api/openstack/compute/views/servers.py:L523) | 5/29 | `src/nova/api/openstack/compute/views/servers.py:L480–L523` |
| `ViewBuilder._list_view` | method | (self, func, request, servers, coll_name, show_extra_specs, show_extended_attr=None, show_host_status=None, show_sec_grp=False, bdms=None, cell_down_support=False) | private | `servers_dict` (src/nova/api/openstack/compute/views/servers.py:L589) | 11/40 | `src/nova/api/openstack/compute/views/servers.py:L525–L589` |
| `ViewBuilder._get_metadata` | method | (instance) | private | `instance.metadata or {}` (src/nova/api/openstack/compute/views/servers.py:L593) | 2/2 | `src/nova/api/openstack/compute/views/servers.py:L592–L593` |
| `ViewBuilder._get_vm_status` | method | (instance) | private | `"DELETED"` (src/nova/api/openstack/compute/views/servers.py:L599); `common.status_from_state(instance.get("vm_state"), instance.get("task_state"))` (src/nova/api/openstack/compute/views/servers.py:L600) | 2/5 | `src/nova/api/openstack/compute/views/servers.py:L596–L601` |
| `ViewBuilder._get_host_id` | method | (instance) | private | `utils.generate_hostid(host, project)` (src/nova/api/openstack/compute/views/servers.py:L607) | 1/4 | `src/nova/api/openstack/compute/views/servers.py:L604–L607` |
| `ViewBuilder._get_addresses` | method | (self, request, instance, extend_address=False) | private | `{}` (src/nova/api/openstack/compute/views/servers.py:L612); `self._ips_builder.index( request, networks, extend_address, )["addresses"]` (src/nova/api/openstack/compute/views/servers.py:L617) | 2/8 | `src/nova/api/openstack/compute/views/servers.py:L609–L619` |
| `ViewBuilder._get_image` | method | (self, request, instance) | private | `image` (src/nova/api/openstack/compute/views/servers.py:L648); `""` (src/nova/api/openstack/compute/views/servers.py:L650) | 7/28 | `src/nova/api/openstack/compute/views/servers.py:L621–L650` |
| `ViewBuilder._get_flavor_dict` | method | (self, request, flavor, show_extra_specs) | private | `flavordict` (src/nova/api/openstack/compute/views/servers.py:L663) | 2/12 | `src/nova/api/openstack/compute/views/servers.py:L652–L663` |
| `ViewBuilder._get_flavor` | method | (self, request, instance, show_extra_specs) | private | `{}` (src/nova/api/openstack/compute/views/servers.py:L670); `self._get_flavor_dict(request, flavor, show_extra_specs)` (src/nova/api/openstack/compute/views/servers.py:L673); `{ "id": str(flavor_id), "links": [{ "rel": "bookmark", "href": flavor_bookmark, }], }` (src/nova/api/openstack/compute/views/servers.py:L678) | 3/18 | `src/nova/api/openstack/compute/views/servers.py:L665–L684` |
| `ViewBuilder._load_fault` | method | (self, request, instance) | private | `instance.fault` (src/nova/api/openstack/compute/views/servers.py:L693); `instance.fault` (src/nova/api/openstack/compute/views/servers.py:L699) | 3/11 | `src/nova/api/openstack/compute/views/servers.py:L686–L699` |
| `ViewBuilder._get_fault` | method | (self, request, instance) | private | `None` (src/nova/api/openstack/compute/views/servers.py:L708); `fault_dict` (src/nova/api/openstack/compute/views/servers.py:L725) | 7/20 | `src/nova/api/openstack/compute/views/servers.py:L701–L725` |
| `ViewBuilder._add_host_status` | method | (self, servers, instances, unknown_only=False) | private | not declared | 7/9 | `src/nova/api/openstack/compute/views/servers.py:L727–L752` |
| `ViewBuilder._add_security_grps` | method | (self, request, servers, instances) | private | `` (src/nova/api/openstack/compute/views/servers.py:L756) | 4/11 | `src/nova/api/openstack/compute/views/servers.py:L754–L765` |
| `ViewBuilder._add_volumes_attachments` | method | (self, request, server, bdms) | private | not declared | 4/12 | `src/nova/api/openstack/compute/views/servers.py:L767–L785` |
| `ViewBuilder._get_instance_bdms_in_multiple_cells` | method | (ctxt, instance_uuids) | private | `bdms` (src/nova/api/openstack/compute/views/servers.py:L814) | 7/25 | `src/nova/api/openstack/compute/views/servers.py:L788–L814` |
| `ViewBuilder._get_server_groups` | method | (context, instance) | private | `[sg.uuid]` (src/nova/api/openstack/compute/views/servers.py:L821); `[]` (src/nova/api/openstack/compute/views/servers.py:L823) | 2/7 | `src/nova/api/openstack/compute/views/servers.py:L817–L823` |
| `ViewBuilder._get_host_status_unknown_only` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L194–L228` |
| `ViewBuilder._get_metadata` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L591–L593` |
| `ViewBuilder._get_vm_status` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L595–L601` |
| `ViewBuilder._get_host_id` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L603–L607` |
| `ViewBuilder._get_instance_bdms_in_multiple_cells` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L787–L814` |
| `ViewBuilder._get_server_groups` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/servers.py:L816–L823` |

## Dependencies

- `import itertools` (src/nova/api/openstack/compute/views/servers.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/views/servers.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/views/servers.py:L21)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/servers.py:L22)
- `nova.api.openstack.compute.views`: imports `flavors as views_flavors` (src/nova/api/openstack/compute/views/servers.py:L23)
- `nova.api.openstack.compute.views`: imports `images as views_images` (src/nova/api/openstack/compute/views/servers.py:L24)
- `nova.api.openstack.compute.views`: imports `ips as views_ips` (src/nova/api/openstack/compute/views/servers.py:L25)
- `nova`: imports `availability_zones as avail_zone` (src/nova/api/openstack/compute/views/servers.py:L26)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/views/servers.py:L27)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/views/servers.py:L28)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/views/servers.py:L29)
- `nova`: imports `exception` (src/nova/api/openstack/compute/views/servers.py:L30)
- `nova.network`: imports `security_group_api` (src/nova/api/openstack/compute/views/servers.py:L31)
- `nova`: imports `objects` (src/nova/api/openstack/compute/views/servers.py:L32)
- `nova.objects`: imports `fields` (src/nova/api/openstack/compute/views/servers.py:L33)
- `nova.objects`: imports `virtual_interface` (src/nova/api/openstack/compute/views/servers.py:L34)
- `nova.policies`: imports `extended_server_attributes as esa_policies` (src/nova/api/openstack/compute/views/servers.py:L35)
- `nova.policies`: imports `servers as servers_policies` (src/nova/api/openstack/compute/views/servers.py:L36)
- `nova`: imports `utils` (src/nova/api/openstack/compute/views/servers.py:L37)

## Side Effects

- **network**: from nova.api.openstack.compute.views import flavors as views_flavors (src/nova/api/openstack/compute/views/servers.py:L23)
- **network**: from nova.api.openstack.compute.views import images as views_images (src/nova/api/openstack/compute/views/servers.py:L24)
- **network**: from nova.api.openstack.compute.views import ips as views_ips (src/nova/api/openstack/compute/views/servers.py:L25)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/views/servers.py:L40)
- **global-mutation**: AZ_NOT_IN_REQUEST_SPEC = object() (src/nova/api/openstack/compute/views/servers.py:L43)
- **global-mutation**: SCHED_HINTS_NOT_IN_REQUEST_SPEC = object() (src/nova/api/openstack/compute/views/servers.py:L44)

## Security Surface

- **sink** (`db-write`): req_specs_dict.update({req.instance_uuid: req.availability_zone (src/nova/api/openstack/compute/views/servers.py:L556)
- **sink** (`db-write`): sched_hints_dict.update({ (src/nova/api/openstack/compute/views/servers.py:L560)
- **sink** (`db-write`): cell_mappings.update( (src/nova/api/openstack/compute/views/servers.py:L796)
- **sink** (`db-write`): bdms.update(result) (src/nova/api/openstack/compute/views/servers.py:L813)

