# src/nova/api/openstack/compute/servers.py

## Overview

This file implements the `servers` module, defining 1 class, 5 constants, 1 field, 2 functions, 32 methods, 6 staticmethods, 28 imports, 8 side effects, 6 security surface entries.

Lines: total 1639, code 1331, comment 144, blank 164

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TAG_SEARCH_FILTERS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/servers.py:L48–L48` |
| `PAGING_SORTING_PARAMS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/servers.py:L49–L49` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/servers.py:L51–L51` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/servers.py:L53–L53` |
| `INVALID_FLAVOR_IMAGE_EXCEPTIONS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/servers.py:L55–L93` |
| `ServersController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/servers.py:L97–L1597` |
| `ServersController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L100–L100` |
| `ServersController._add_location` | method | (robj) | private | `robj` (src/nova/api/openstack/compute/servers.py:L106); `robj` (src/nova/api/openstack/compute/servers.py:L114) | 5/8 | `src/nova/api/openstack/compute/servers.py:L103–L114` |
| `ServersController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/servers.py:L116–L118` |
| `ServersController.index` | method | (self, req) | public | `servers` (src/nova/api/openstack/compute/servers.py:L136) | 2/8 | `src/nova/api/openstack/compute/servers.py:L128–L136` |
| `ServersController.detail` | method | (self, req) | public | `servers` (src/nova/api/openstack/compute/servers.py:L166) | 2/8 | `src/nova/api/openstack/compute/servers.py:L158–L166` |
| `ServersController._is_cell_down_supported` | method | (req, search_opts) | private | `cell_down_support` (src/nova/api/openstack/compute/servers.py:L191) | 5/9 | `src/nova/api/openstack/compute/servers.py:L169–L191` |
| `ServersController._get_servers` | method | (self, req, is_detail) | private | `{'servers': []}` (src/nova/api/openstack/compute/servers.py:L227); `response` (src/nova/api/openstack/compute/servers.py:L367) | 37/122 | `src/nova/api/openstack/compute/servers.py:L193–L367` |
| `ServersController._get_server` | method | (self, context, req, instance_uuid, is_detail=False, cell_down_support=False, columns_to_join=None) | private | `instance` (src/nova/api/openstack/compute/servers.py:L399) | 5/17 | `src/nova/api/openstack/compute/servers.py:L369–L399` |
| `ServersController._validate_network_id` | method | (net_id, network_uuids) | private | not declared | 2/5 | `src/nova/api/openstack/compute/servers.py:L402–L415` |
| `ServersController._get_requested_networks` | method | (self, requested_networks) | private | `objects.NetworkRequestList( objects=[objects.NetworkRequest( network_id=requested_networks)])` (src/nova/api/openstack/compute/servers.py:L424); `objects.NetworkRequestList(objects=networks)` (src/nova/api/openstack/compute/servers.py:L478) | 8/48 | `src/nova/api/openstack/compute/servers.py:L417–L478` |
| `ServersController.show` | method | (self, req, id) | public | `self._view_builder.show( req, instance, cell_down_support=cell_down_support, show_server_groups=show_server_groups)` (src/nova/api/openstack/compute/servers.py:L511) | 1/13 | `src/nova/api/openstack/compute/servers.py:L498–L513` |
| `ServersController._process_bdms_for_create` | method | (context, target, server_dict, create_kwargs) | private | not declared | 10/33 | `src/nova/api/openstack/compute/servers.py:L516–L564` |
| `ServersController._process_networks_for_create` | method | (self, context, target, server_dict, create_kwargs) | private | not declared | 5/11 | `src/nova/api/openstack/compute/servers.py:L566–L591` |
| `ServersController._validate_host_availability_zone` | method | (context, availability_zone, host) | private | `availability_zone` (src/nova/api/openstack/compute/servers.py:L633); `None` (src/nova/api/openstack/compute/servers.py:L641); `availability_zone` (src/nova/api/openstack/compute/servers.py:L652); `availability_zone` (src/nova/api/openstack/compute/servers.py:L660); `None` (src/nova/api/openstack/compute/servers.py:L669) | 8/30 | `src/nova/api/openstack/compute/servers.py:L594–L669` |
| `ServersController._process_hosts_for_create` | method | (context, target, server_dict, create_kwargs, host, node) | private | not declared | 5/14 | `src/nova/api/openstack/compute/servers.py:L672–L698` |
| `ServersController.create` | method | (self, req, body) | public | `wsgi.ResponseObject({'reservation_id': resv_id})` (src/nova/api/openstack/compute/servers.py:L914); `self._add_location(robj)` (src/nova/api/openstack/compute/servers.py:L923) | 27/173 | `src/nova/api/openstack/compute/servers.py:L717–L923` |
| `ServersController.delete` | method | (self, req, id) | public | not declared | 4/13 | `src/nova/api/openstack/compute/servers.py:L928–L941` |
| `ServersController._delete` | method | (self, context, req, instance_uuid) | private | not declared | 3/12 | `src/nova/api/openstack/compute/servers.py:L943–L957` |
| `ServersController.update` | method | (self, req, id, body) | public | `self._view_builder.show( req, instance, extend_address=extend_address, show_AZ=show_AZ, show_config_drive=show_config_drive, show_extended_attr=show_extended_attr, show_host_status=show_host_status, s` (src/nova/api/openstack/compute/servers.py:L1064) | 14/81 | `src/nova/api/openstack/compute/servers.py:L978–L1076` |
| `ServersController._confirm_resize` | method | (self, req, id, body) | private | not declared | 4/18 | `src/nova/api/openstack/compute/servers.py:L1086–L1103` |
| `ServersController._revert_resize` | method | (self, req, id, body) | private | not declared | 5/18 | `src/nova/api/openstack/compute/servers.py:L1110–L1127` |
| `ServersController._reboot` | method | (self, req, id, body) | private | not declared | 3/13 | `src/nova/api/openstack/compute/servers.py:L1134–L1147` |
| `ServersController._resize` | method | (self, req, id, body) | private | not declared | 11/59 | `src/nova/api/openstack/compute/servers.py:L1154–L1216` |
| `ServersController._image_from_req_data` | method | (self, server_dict, create_kwargs) | private | `''` (src/nova/api/openstack/compute/servers.py:L1228); `image_href` (src/nova/api/openstack/compute/servers.py:L1230) | 4/9 | `src/nova/api/openstack/compute/servers.py:L1218–L1233` |
| `ServersController._flavor_id_from_req_data` | method | (self, data) | private | `common.get_id_from_href(flavor_ref)` (src/nova/api/openstack/compute/servers.py:L1237) | 1/3 | `src/nova/api/openstack/compute/servers.py:L1235–L1237` |
| `ServersController._rebuild` | method | (self, req, id, body) | private | `self._add_location(robj)` (src/nova/api/openstack/compute/servers.py:L1423) | 25/120 | `src/nova/api/openstack/compute/servers.py:L1264–L1423` |
| `ServersController._create_image` | method | (self, req, id, body) | private | `{'image_id': image['id']}` (src/nova/api/openstack/compute/servers.py:L1480); `resp` (src/nova/api/openstack/compute/servers.py:L1488) | 8/45 | `src/nova/api/openstack/compute/servers.py:L1432–L1488` |
| `ServersController._get_server_admin_password` | method | (self, server) | private | `password` (src/nova/api/openstack/compute/servers.py:L1496) | 2/6 | `src/nova/api/openstack/compute/servers.py:L1490–L1496` |
| `ServersController._get_server_search_options` | method | (self, req) | private | `opt_list` (src/nova/api/openstack/compute/servers.py:L1522) | 7/19 | `src/nova/api/openstack/compute/servers.py:L1498–L1522` |
| `ServersController._get_instance` | method | (self, context, instance_uuid) | private | `objects.Instance.get_by_uuid( context, instance_uuid, expected_attrs=attrs)` (src/nova/api/openstack/compute/servers.py:L1530) | 2/11 | `src/nova/api/openstack/compute/servers.py:L1524–L1534` |
| `ServersController._start` | method | (self, req, id, body) | private | not declared | 3/13 | `src/nova/api/openstack/compute/servers.py:L1541–L1554` |
| `ServersController._stop` | method | (self, req, id, body) | private | not declared | 3/14 | `src/nova/api/openstack/compute/servers.py:L1561–L1575` |
| `ServersController._trigger_crash_dump` | method | (self, req, id, body) | private | not declared | 3/14 | `src/nova/api/openstack/compute/servers.py:L1583–L1597` |
| `remove_invalid_options` | function | (context, search_options, allowed_search_options) | exported | `` (src/nova/api/openstack/compute/servers.py:L1608) | 7/13 | `src/nova/api/openstack/compute/servers.py:L1600–L1616` |
| `remove_invalid_sort_keys` | function | (context, sort_keys, sort_dirs, blacklist, admin_only_fields) | exported | `sort_keys, sort_dirs` (src/nova/api/openstack/compute/servers.py:L1639) | 6/13 | `src/nova/api/openstack/compute/servers.py:L1619–L1639` |
| `ServersController._add_location` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L102–L114` |
| `ServersController._is_cell_down_supported` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L168–L191` |
| `ServersController._validate_network_id` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L401–L415` |
| `ServersController._process_bdms_for_create` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L515–L564` |
| `ServersController._validate_host_availability_zone` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L593–L669` |
| `ServersController._process_hosts_for_create` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/servers.py:L671–L698` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/servers.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/servers.py:L19)
- `import oslo_messaging as messaging` (src/nova/api/openstack/compute/servers.py:L20)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/servers.py:L21)
- `oslo_utils`: imports `timeutils` (src/nova/api/openstack/compute/servers.py:L22)
- `oslo_utils`: imports `uuidutils` (src/nova/api/openstack/compute/servers.py:L23)
- `import webob` (src/nova/api/openstack/compute/servers.py:L24)
- `webob`: imports `exc` (src/nova/api/openstack/compute/servers.py:L25)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/servers.py:L27)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/servers.py:L28)
- `nova.api.openstack.compute`: imports `helpers` (src/nova/api/openstack/compute/servers.py:L29)
- `nova.api.openstack.compute.schemas`: imports `servers as schema` (src/nova/api/openstack/compute/servers.py:L30)
- `nova.api.openstack.compute.views`: imports `servers as views_servers` (src/nova/api/openstack/compute/servers.py:L31)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/servers.py:L32)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/servers.py:L33)
- `nova`: imports `availability_zones as avail_zone` (src/nova/api/openstack/compute/servers.py:L34)
- `nova`: imports `block_device` (src/nova/api/openstack/compute/servers.py:L35)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/servers.py:L36)
- `nova.compute`: imports `flavors` (src/nova/api/openstack/compute/servers.py:L37)
- `nova.compute`: imports `utils as compute_utils` (src/nova/api/openstack/compute/servers.py:L38)
- `import nova.conf` (src/nova/api/openstack/compute/servers.py:L39)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/servers.py:L40)
- `nova`: imports `exception` (src/nova/api/openstack/compute/servers.py:L41)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/servers.py:L42)
- `nova.image`: imports `glance` (src/nova/api/openstack/compute/servers.py:L43)
- `nova`: imports `objects` (src/nova/api/openstack/compute/servers.py:L44)
- `nova.policies`: imports `servers as server_policies` (src/nova/api/openstack/compute/servers.py:L45)
- `nova`: imports `utils` (src/nova/api/openstack/compute/servers.py:L46)

## Side Effects

- **network**: from nova.api.openstack.compute import helpers (src/nova/api/openstack/compute/servers.py:L29)
- **network**: from nova.api.openstack.compute.schemas import servers as schema (src/nova/api/openstack/compute/servers.py:L30)
- **network**: from nova.api.openstack.compute.views import servers as views_servers (src/nova/api/openstack/compute/servers.py:L31)
- **global-mutation**: TAG_SEARCH_FILTERS = ('tags', 'tags-any', 'not-tags', 'not-tags-any') (src/nova/api/openstack/compute/servers.py:L48)
- **global-mutation**: PAGING_SORTING_PARAMS = ('sort_key', 'sort_dir', 'limit', 'marker') (src/nova/api/openstack/compute/servers.py:L49)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/servers.py:L51)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/servers.py:L53)
- **global-mutation**: INVALID_FLAVOR_IMAGE_EXCEPTIONS = ( (src/nova/api/openstack/compute/servers.py:L55)

## Security Surface

- **sink** (`db-write`): search_opts.update(req.GET) (src/nova/api/openstack/compute/servers.py:L197)
- **sink** (`db-write`): @validation.schema(schema.update, '2.1', '2.18') (src/nova/api/openstack/compute/servers.py:L961)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/servers.py:L978)
- **sink** (`db-write`): """Update server then pass on to version-specific controller.""" (src/nova/api/openstack/compute/servers.py:L979)
- **sink** (`db-write`): ctxt.can(server_policies.SERVERS % 'update', (src/nova/api/openstack/compute/servers.py:L984)
- **sink** (`db-write`): helpers.translate_attributes(helpers.UPDATE, server, update_dict) (src/nova/api/openstack/compute/servers.py:L1037)

