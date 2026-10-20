# src/nova/api/openstack/common.py

## Overview

This file implements the `common` module, defining 1 class, 5 constants, 23 functions, 9 methods, 1 variable, 17 imports, 5 side effects, 11 security surface entries.

Lines: total 554, code 437, comment 29, blank 88

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/common.py:L36–L36` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/common.py:L38–L38` |
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/api/openstack/common.py:L39–L39` |
| `POWER_ON` | constant | — | exported | not declared | — | `src/nova/api/openstack/common.py:L41–L41` |
| `POWER_OFF` | constant | — | exported | not declared | — | `src/nova/api/openstack/common.py:L42–L42` |
| `_STATE_MAP` | variable | — | unexported | not declared | — | `src/nova/api/openstack/common.py:L44–L111` |
| `status_from_state` | function | (vm_state, task_state='default') | exported | `status` (src/nova/api/openstack/common.py:L123) | 2/9 | `src/nova/api/openstack/common.py:L114–L123` |
| `task_and_vm_state_from_status` | function | (statuses) | exported | `sorted(vm_states), sorted(task_states)` (src/nova/api/openstack/common.py:L140) | 5/11 | `src/nova/api/openstack/common.py:L126–L140` |
| `get_sort_params` | function | (input_params, default_key='created_at', default_dir='desc') | exported | `sort_keys, sort_dirs` (src/nova/api/openstack/common.py:L173) | 7/14 | `src/nova/api/openstack/common.py:L143–L173` |
| `get_pagination_params` | function | (request) | exported | `params` (src/nova/api/openstack/common.py:L197) | 5/11 | `src/nova/api/openstack/common.py:L176–L197` |
| `_get_int_param` | function | (request, param) | unexported | `int_param` (src/nova/api/openstack/common.py:L207) | 2/7 | `src/nova/api/openstack/common.py:L200–L207` |
| `_get_marker_param` | function | (request) | unexported | `request.GET['marker']` (src/nova/api/openstack/common.py:L212) | 1/2 | `src/nova/api/openstack/common.py:L210–L212` |
| `limited` | function | (items, request) | exported | `items[offset:(offset + limit)]` (src/nova/api/openstack/common.py:L231) | 2/6 | `src/nova/api/openstack/common.py:L215–L231` |
| `get_limit_and_marker` | function | (request) | exported | `limit, marker` (src/nova/api/openstack/common.py:L241) | 1/6 | `src/nova/api/openstack/common.py:L234–L241` |
| `get_id_from_href` | function | (href) | exported | `urlparse.urlsplit("%s" % href).path.split('/')[-1]` (src/nova/api/openstack/common.py:L254) | 1/2 | `src/nova/api/openstack/common.py:L244–L254` |
| `remove_trailing_version_from_href` | function | (href) | exported | `urlparse.urlunsplit(parsed_url)` (src/nova/api/openstack/common.py:L279) | 2/11 | `src/nova/api/openstack/common.py:L257–L279` |
| `check_img_metadata_properties_quota` | function | (context, metadata) | exported | `` (src/nova/api/openstack/common.py:L284) | 3/8 | `src/nova/api/openstack/common.py:L282–L289` |
| `get_networks_for_instance_from_nw_info` | function | (nw_info) | exported | `networks` (src/nova/api/openstack/common.py:L304) | 4/13 | `src/nova/api/openstack/common.py:L292–L304` |
| `get_networks_for_instance` | function | (context, instance) | exported | `get_networks_for_instance_from_nw_info(nw_info)` (src/nova/api/openstack/common.py:L327) | 1/3 | `src/nova/api/openstack/common.py:L307–L327` |
| `raise_http_conflict_for_instance_invalid_state` | function | (exc, action, server_id) | exported | not declared | 3/12 | `src/nova/api/openstack/common.py:L330–L346` |
| `url_join` | function | (*parts) | exported | `"/".join(clean_parts)` (src/nova/api/openstack/common.py:L361) | 5/6 | `src/nova/api/openstack/common.py:L349–L361` |
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/common.py:L364–L460` |
| `ViewBuilder._get_project_id` | method | (self, request) | private | `project_id` (src/nova/api/openstack/common.py:L373); `''` (src/nova/api/openstack/common.py:L374) | 3/5 | `src/nova/api/openstack/common.py:L367–L374` |
| `ViewBuilder._get_links` | method | (self, request, identifier, collection_name) | private | `[{ "rel": "self", "href": self._get_href_link(request, identifier, collection_name), }, { "rel": "bookmark", "href": self._get_bookmark_link(request, identifier, collection_name), }]` (src/nova/api/openstack/common.py:L377) | 1/11 | `src/nova/api/openstack/common.py:L376–L386` |
| `ViewBuilder._get_next_link` | method | (self, request, identifier, collection_name) | private | `"%s?%s" % (url, urlparse.urlencode(params))` (src/nova/api/openstack/common.py:L396) | 1/8 | `src/nova/api/openstack/common.py:L388–L396` |
| `ViewBuilder._get_href_link` | method | (self, request, identifier, collection_name) | private | `url_join(prefix, self._get_project_id(request), collection_name, str(identifier))` (src/nova/api/openstack/common.py:L401) | 1/6 | `src/nova/api/openstack/common.py:L398–L404` |
| `ViewBuilder._get_bookmark_link` | method | (self, request, identifier, collection_name) | private | `url_join(base_url, self._get_project_id(request), collection_name, str(identifier))` (src/nova/api/openstack/common.py:L410) | 1/7 | `src/nova/api/openstack/common.py:L406–L413` |
| `ViewBuilder._get_collection_links` | method | (self, request, items, collection_name, id_key="uuid") | private | `links` (src/nova/api/openstack/common.py:L445) | 5/24 | `src/nova/api/openstack/common.py:L415–L445` |
| `ViewBuilder._update_link_prefix` | method | (self, orig_url, prefix) | private | `orig_url` (src/nova/api/openstack/common.py:L449); `urlparse.urlunsplit(url_parts).rstrip('/')` (src/nova/api/openstack/common.py:L454) | 2/8 | `src/nova/api/openstack/common.py:L447–L454` |
| `ViewBuilder._update_glance_link_prefix` | method | (self, orig_url) | private | `self._update_link_prefix(orig_url, CONF.api.glance_link_prefix)` (src/nova/api/openstack/common.py:L457) | 1/2 | `src/nova/api/openstack/common.py:L456–L457` |
| `ViewBuilder._update_compute_link_prefix` | method | (self, orig_url) | private | `self._update_link_prefix(orig_url, CONF.api.compute_link_prefix)` (src/nova/api/openstack/common.py:L460) | 1/2 | `src/nova/api/openstack/common.py:L459–L460` |
| `get_instance` | function | (compute_api, context, instance_id, expected_attrs=None, cell_down_support=False) | exported | `compute_api.get(context, instance_id, expected_attrs=expected_attrs, cell_down_support=cell_down_support)` (src/nova/api/openstack/common.py:L467) | 2/8 | `src/nova/api/openstack/common.py:L463–L471` |
| `normalize_name` | function | (name) | exported | `name.strip()` (src/nova/api/openstack/common.py:L482) | 1/2 | `src/nova/api/openstack/common.py:L474–L482` |
| `raise_feature_not_supported` | function | (msg=None) | exported | not declared | 2/4 | `src/nova/api/openstack/common.py:L485–L488` |
| `get_flavor` | function | (context, flavor_id) | exported | `objects.Flavor.get_by_flavor_id(context, flavor_id)` (src/nova/api/openstack/common.py:L493) | 2/5 | `src/nova/api/openstack/common.py:L491–L495` |
| `is_all_tenants` | function | (search_opts) | exported | `all_tenants` (src/nova/api/openstack/common.py:L513) | 3/10 | `src/nova/api/openstack/common.py:L498–L513` |
| `is_locked` | function | (search_opts) | exported | `locked` (src/nova/api/openstack/common.py:L528) | 2/7 | `src/nova/api/openstack/common.py:L516–L528` |
| `supports_multiattach_volume` | function | (req) | exported | `api_version_request.is_supported(req, '2.60')` (src/nova/api/openstack/common.py:L543) | 1/2 | `src/nova/api/openstack/common.py:L531–L543` |
| `supports_port_resource_request` | function | (req) | exported | `api_version_request.is_supported(req, '2.72')` (src/nova/api/openstack/common.py:L554) | 1/2 | `src/nova/api/openstack/common.py:L546–L554` |

## Dependencies

- `import collections` (src/nova/api/openstack/common.py:L16)
- `import itertools` (src/nova/api/openstack/common.py:L17)
- `import re` (src/nova/api/openstack/common.py:L18)
- `urllib`: imports `parse as urlparse` (src/nova/api/openstack/common.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/common.py:L21)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/common.py:L22)
- `import webob` (src/nova/api/openstack/common.py:L23)
- `webob`: imports `exc` (src/nova/api/openstack/common.py:L24)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/common.py:L26)
- `nova.compute`: imports `task_states` (src/nova/api/openstack/common.py:L27)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/common.py:L28)
- `import nova.conf` (src/nova/api/openstack/common.py:L29)
- `nova`: imports `exception` (src/nova/api/openstack/common.py:L30)
- `nova.i18n`: imports `_` (src/nova/api/openstack/common.py:L31)
- `nova`: imports `objects` (src/nova/api/openstack/common.py:L32)
- `nova`: imports `quota` (src/nova/api/openstack/common.py:L33)
- `nova`: imports `utils` (src/nova/api/openstack/common.py:L34)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/common.py:L36)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/common.py:L38)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/api/openstack/common.py:L39)
- **global-mutation**: POWER_ON = 'POWER_ON' (src/nova/api/openstack/common.py:L41)
- **global-mutation**: POWER_OFF = 'POWER_OFF' (src/nova/api/openstack/common.py:L42)

## Security Surface

- **entry-point** (`http-param`): nova.api.wsgi.Request.params) (src/nova/api/openstack/common.py:L155)
- **entry-point** (`http-param`): :param request: `wsgi.Request` possibly containing 'marker' and 'limit' (src/nova/api/openstack/common.py:L179)
- **entry-point** (`http-param`): if 'limit' in request.GET: (src/nova/api/openstack/common.py:L189)
- **entry-point** (`http-param`): if 'page_size' in request.GET: (src/nova/api/openstack/common.py:L191)
- **entry-point** (`http-param`): if 'marker' in request.GET: (src/nova/api/openstack/common.py:L193)
- **entry-point** (`http-param`): if 'offset' in request.GET: (src/nova/api/openstack/common.py:L195)
- **entry-point** (`http-param`): int_param = utils.validate_integer(request.GET[param], param, (src/nova/api/openstack/common.py:L203)
- **entry-point** (`http-param`): return request.GET['marker'] (src/nova/api/openstack/common.py:L212)
- **entry-point** (`http-param`): :param request: ``wsgi.Request`` possibly containing 'offset' and 'limit' (src/nova/api/openstack/common.py:L219)
- **entry-point** (`http-param`): params = collections.OrderedDict(sorted(request.params.items())) (src/nova/api/openstack/common.py:L390)
- **entry-point** (`http-param`): int(request.params.get("limit", CONF.api.max_limit)), (src/nova/api/openstack/common.py:L429)

