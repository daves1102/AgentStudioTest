# src/nova/scheduler/client/report.py

## Overview

This file implements the `report` module, defining 2 classs, 12 constants, 11 functions, 57 methods, 3 variables, 23 imports, 15 side effects, 32 security surface entries.

Lines: total 2688, code 1993, comment 422, blank 273

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L43–L43` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L44–L44` |
| `WARN_EVERY` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L45–L45` |
| `SAME_SUBTREE_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L46–L46` |
| `RESHAPER_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L47–L47` |
| `CONSUMER_GENERATION_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L48–L48` |
| `ALLOW_RESERVED_EQUAL_TOTAL_INVENTORY_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L49–L49` |
| `POST_RPS_RETURNS_PAYLOAD_API_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L50–L50` |
| `AGGREGATE_GENERATION_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L51–L51` |
| `NESTED_PROVIDER_API_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L52–L52` |
| `GET_USAGES_VERSION` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L53–L53` |
| `PLACEMENTCLIENT` | constant | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L54–L54` |
| `AggInfo` | variable | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L56–L56` |
| `TraitInfo` | variable | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L57–L57` |
| `ProviderAllocInfo` | variable | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L58–L59` |
| `warn_limit` | function | (self, msg) | exported | not declared | 2/6 | `src/nova/scheduler/client/report.py:L62–L67` |
| `report_client_singleton` | function | — | exported | `PLACEMENTCLIENT` (src/nova/scheduler/client/report.py:L112) | 8/27 | `src/nova/scheduler/client/report.py:L70–L112` |
| `safe_connect` | function | (f) | exported | `wrapper` (src/nova/scheduler/client/report.py:L140) | 1/4 | `src/nova/scheduler/client/report.py:L115–L140` |
| `safe_connect.wrapper` | function | (self, *a, **k) | public | `f(self, *a, **k)` (src/nova/scheduler/client/report.py:L119) | — | `src/nova/scheduler/client/report.py:L117–L139` |
| `Retry` | class | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L143–L146` |
| `Retry.__init__` | method | (self, operation, reason) | public | not declared | 1/3 | `src/nova/scheduler/client/report.py:L144–L146` |
| `retries` | function | (f) | exported | `wrapper` (src/nova/scheduler/client/report.py:L169) | 1/4 | `src/nova/scheduler/client/report.py:L149–L169` |
| `retries.wrapper` | function | (self, *a, **k) | public | `f(self, *a, **k)` (src/nova/scheduler/client/report.py:L161); `False` (src/nova/scheduler/client/report.py:L168) | — | `src/nova/scheduler/client/report.py:L156–L168` |
| `_move_operation_alloc_request` | function | (source_allocs, dest_alloc_req) | unexported | `new_alloc_req` (src/nova/scheduler/client/report.py:L205) | 4/17 | `src/nova/scheduler/client/report.py:L172–L205` |
| `get_placement_request_id` | function | (response) | exported | `response.headers.get(request_id.HTTP_RESP_HEADER_REQUEST_ID)` (src/nova/scheduler/client/report.py:L210) | 2/3 | `src/nova/scheduler/client/report.py:L208–L210` |
| `SchedulerReportClient` | class | — | exported | not declared | — | `src/nova/scheduler/client/report.py:L217–L2688` |
| `SchedulerReportClient.__init__` | method | (self, adapter=None) | public | not declared | 1/6 | `src/nova/scheduler/client/report.py:L220–L238` |
| `SchedulerReportClient.clear_provider_cache` | method | (self, init=False) | public | not declared | 2/5 | `src/nova/scheduler/client/report.py:L240–L244` |
| `SchedulerReportClient._clear_provider_cache_for_tree` | method | (self, rp_uuid) | private | `` (src/nova/scheduler/client/report.py:L267) | 3/8 | `src/nova/scheduler/client/report.py:L246–L273` |
| `SchedulerReportClient._create_client` | method | (self) | private | `client` (src/nova/scheduler/client/report.py:L284) | 2/6 | `src/nova/scheduler/client/report.py:L275–L284` |
| `SchedulerReportClient.get` | method | (self, url, version=None, global_request_id=None) | public | `self._client.get(url, microversion=version, global_request_id=global_request_id)` (src/nova/scheduler/client/report.py:L287) | 1/3 | `src/nova/scheduler/client/report.py:L286–L288` |
| `SchedulerReportClient.post` | method | (self, url, data, version=None, global_request_id=None) | public | `self._client.post(url, json=data, microversion=version, global_request_id=global_request_id)` (src/nova/scheduler/client/report.py:L295) | 1/3 | `src/nova/scheduler/client/report.py:L290–L296` |
| `SchedulerReportClient.put` | method | (self, url, data, version=None, global_request_id=None) | public | `self._client.put(url, json=data, microversion=version, global_request_id=global_request_id)` (src/nova/scheduler/client/report.py:L303) | 1/3 | `src/nova/scheduler/client/report.py:L298–L304` |
| `SchedulerReportClient.delete` | method | (self, url, version=None, global_request_id=None) | public | `self._client.delete(url, microversion=version, global_request_id=global_request_id)` (src/nova/scheduler/client/report.py:L307) | 1/3 | `src/nova/scheduler/client/report.py:L306–L308` |
| `SchedulerReportClient.get_allocation_candidates` | method | (self, context, resources) | public | `(data['allocation_requests'], data['provider_summaries'], version)` (src/nova/scheduler/client/report.py:L352); `None, None, None` (src/nova/scheduler/client/report.py:L364) | 2/20 | `src/nova/scheduler/client/report.py:L311–L364` |
| `SchedulerReportClient._get_provider_aggregates` | method | (self, context, rp_uuid) | private | `AggInfo(aggregates=set(data['aggregates']), generation=data['resource_provider_generation'])` (src/nova/scheduler/client/report.py:L386) | 2/20 | `src/nova/scheduler/client/report.py:L367–L400` |
| `SchedulerReportClient.get_provider_traits` | method | (self, context, rp_uuid) | public | `TraitInfo(traits=set(json['traits']), generation=json['resource_provider_generation'])` (src/nova/scheduler/client/report.py:L422) | 2/15 | `src/nova/scheduler/client/report.py:L402–L432` |
| `SchedulerReportClient.get_resource_provider_name` | method | (self, context, uuid) | public | `self._provider_tree.data(uuid).name` (src/nova/scheduler/client/report.py:L447); `rsp['name']` (src/nova/scheduler/client/report.py:L453) | 3/9 | `src/nova/scheduler/client/report.py:L434–L453` |
| `SchedulerReportClient._get_resource_provider` | method | (self, context, uuid) | private | `data` (src/nova/scheduler/client/report.py:L471); `None` (src/nova/scheduler/client/report.py:L473) | 3/22 | `src/nova/scheduler/client/report.py:L456–L486` |
| `SchedulerReportClient._get_sharing_providers` | method | (self, context, agg_uuids) | private | `[]` (src/nova/scheduler/client/report.py:L501); `list(resource_providers.values())` (src/nova/scheduler/client/report.py:L535) | 6/33 | `src/nova/scheduler/client/report.py:L489–L535` |
| `SchedulerReportClient.get_providers_in_tree` | method | (self, context, uuid) | public | `resp.json()['resource_providers']` (src/nova/scheduler/client/report.py:L554) | 2/18 | `src/nova/scheduler/client/report.py:L537–L568` |
| `SchedulerReportClient._create_resource_provider` | method | (self, context, uuid, name, parent_provider_uuid=None) | private | `resp.json()` (src/nova/scheduler/client/report.py:L610); `self._get_resource_provider(context, uuid)` (src/nova/scheduler/client/report.py:L626) | 5/46 | `src/nova/scheduler/client/report.py:L571–L639` |
| `SchedulerReportClient._ensure_resource_provider` | method | (self, context, uuid, name=None, parent_provider_uuid=None) | private | `uuid` (src/nova/scheduler/client/report.py:L733) | 12/24 | `src/nova/scheduler/client/report.py:L641–L733` |
| `SchedulerReportClient._delete_provider` | method | (self, rp_uuid, global_request_id=None) | private | `` (src/nova/scheduler/client/report.py:L745) | 5/21 | `src/nova/scheduler/client/report.py:L735–L762` |
| `SchedulerReportClient._get_inventory` | method | (self, context, rp_uuid) | private | `None` (src/nova/scheduler/client/report.py:L769); `result.json()` (src/nova/scheduler/client/report.py:L770) | 2/6 | `src/nova/scheduler/client/report.py:L764–L770` |
| `SchedulerReportClient._refresh_and_get_inventory` | method | (self, context, rp_uuid) | private | `None` (src/nova/scheduler/client/report.py:L783); `curr` (src/nova/scheduler/client/report.py:L792) | 2/11 | `src/nova/scheduler/client/report.py:L772–L792` |
| `SchedulerReportClient._refresh_associations` | method | (self, context, rp_uuid, force=False, refresh_sharing=True) | private | not declared | 8/30 | `src/nova/scheduler/client/report.py:L794–L867` |
| `SchedulerReportClient._associations_stale` | method | (self, uuid) | private | `False` (src/nova/scheduler/client/report.py:L888); `(time.time() - refresh_time) > rpar` (src/nova/scheduler/client/report.py:L889) | 3/6 | `src/nova/scheduler/client/report.py:L869–L889` |
| `SchedulerReportClient.get_provider_tree_and_ensure_root` | method | (self, context, rp_uuid, *, name=None, parent_provider_uuid=None) | public | `copy.deepcopy(self._provider_tree)` (src/nova/scheduler/client/report.py:L919) | 1/6 | `src/nova/scheduler/client/report.py:L891–L919` |
| `SchedulerReportClient.get_provider_subtree_and_ensure_root` | method | (self, context, rp_uuid, *, name=None, parent_provider_uuid=None) | public | `self._provider_tree.subtree(rp_uuid)` (src/nova/scheduler/client/report.py:L958) | 1/7 | `src/nova/scheduler/client/report.py:L921–L958` |
| `SchedulerReportClient.set_inventory_for_provider` | method | (self, context, rp_uuid, inv_data) | public | `` (src/nova/scheduler/client/report.py:L997); `` (src/nova/scheduler/client/report.py:L1019) | 6/43 | `src/nova/scheduler/client/report.py:L960–L1048` |
| `SchedulerReportClient.set_inventory_for_provider.do_put` | function | (url, payload) | public | `self.put( url, payload, global_request_id=context.global_id, version=ALLOW_RESERVED_EQUAL_TOTAL_INVENTORY_VERSION)` (src/nova/scheduler/client/report.py:L989) | — | `src/nova/scheduler/client/report.py:L986–L991` |
| `SchedulerReportClient._ensure_traits` | method | (self, context, traits) | private | `` (src/nova/scheduler/client/report.py:L1065); `` (src/nova/scheduler/client/report.py:L1086) | 5/23 | `src/nova/scheduler/client/report.py:L1051–L1097` |
| `SchedulerReportClient.set_traits_for_provider` | method | (self, context, rp_uuid, traits, generation=None) | public | `` (src/nova/scheduler/client/report.py:L1130); `` (src/nova/scheduler/client/report.py:L1153) | 6/41 | `src/nova/scheduler/client/report.py:L1100–L1174` |
| `SchedulerReportClient.set_aggregates_for_provider` | method | (self, context, rp_uuid, aggregates, use_cache=True, generation=None) | public | `` (src/nova/scheduler/client/report.py:L1214); `` (src/nova/scheduler/client/report.py:L1238) | 12/52 | `src/nova/scheduler/client/report.py:L1177–L1269` |
| `SchedulerReportClient._ensure_resource_classes` | method | (self, context, names) | private | not declared | 5/19 | `src/nova/scheduler/client/report.py:L1272–L1303` |
| `SchedulerReportClient._reshape` | method | (self, context, inventories, allocations) | private | `resp` (src/nova/scheduler/client/report.py:L1342) | 5/13 | `src/nova/scheduler/client/report.py:L1305–L1342` |
| `SchedulerReportClient._set_up_and_do_reshape` | method | (self, context, old_tree, new_tree, allocations) | private | not declared | 5/25 | `src/nova/scheduler/client/report.py:L1344–L1378` |
| `SchedulerReportClient.update_from_provider_tree` | method | (self, context, new_tree, allocations=None) | public | not declared | 10/45 | `src/nova/scheduler/client/report.py:L1380–L1551` |
| `SchedulerReportClient.update_from_provider_tree.catch_all` | function | (rp_uuid) | public | not declared | — | `src/nova/scheduler/client/report.py:L1419–L1457` |
| `SchedulerReportClient.get_allocations_for_consumer` | method | (self, context, consumer) | public | `self.get_allocs_for_consumer( context, consumer)['allocations']` (src/nova/scheduler/client/report.py:L1575); `None` (src/nova/scheduler/client/report.py:L1581); `{}` (src/nova/scheduler/client/report.py:L1585) | 3/11 | `src/nova/scheduler/client/report.py:L1554–L1585` |
| `SchedulerReportClient.get_allocs_for_consumer` | method | (self, context, consumer) | public | `resp.json()` (src/nova/scheduler/client/report.py:L1620) | 2/8 | `src/nova/scheduler/client/report.py:L1587–L1620` |
| `SchedulerReportClient.claim_resources` | method | (self, context, consumer_uuid, alloc_request, project_id, user_id, allocation_request_version, consumer_generation=None) | public | `r.status_code == 204` (src/nova/scheduler/client/report.py:L1741) | 8/43 | `src/nova/scheduler/client/report.py:L1635–L1741` |
| `SchedulerReportClient.add_resources_to_instance_allocation` | method | (self, context, consumer_uuid, resources) | public | `` (src/nova/scheduler/client/report.py:L1778) | 3/16 | `src/nova/scheduler/client/report.py:L1743–L1791` |
| `SchedulerReportClient._add_resources_to_instance_allocation` | method | (self, context, consumer_uuid, resources) | private | `True` (src/nova/scheduler/client/report.py:L1832) | 7/31 | `src/nova/scheduler/client/report.py:L1794–L1832` |
| `SchedulerReportClient.remove_resources_from_instance_allocation` | method | (self, context, consumer_uuid, resources) | public | not declared | 2/16 | `src/nova/scheduler/client/report.py:L1834–L1881` |
| `SchedulerReportClient._remove_resources_from_instance_allocation` | method | (self, context, consumer_uuid, resources) | private | `True` (src/nova/scheduler/client/report.py:L1896); `True` (src/nova/scheduler/client/report.py:L1974) | 12/66 | `src/nova/scheduler/client/report.py:L1884–L1974` |
| `SchedulerReportClient.remove_provider_tree_from_instance_allocation` | method | (self, context, consumer_uuid, root_rp_uuid) | public | `False` (src/nova/scheduler/client/report.py:L2001); `True` (src/nova/scheduler/client/report.py:L2022); `r.status_code == 204` (src/nova/scheduler/client/report.py:L2027) | 6/23 | `src/nova/scheduler/client/report.py:L1976–L2027` |
| `SchedulerReportClient._put_allocations` | method | (self, context, consumer_uuid, payload, version=CONSUMER_GENERATION_VERSION) | private | `r` (src/nova/scheduler/client/report.py:L2038) | 2/10 | `src/nova/scheduler/client/report.py:L2029–L2038` |
| `SchedulerReportClient.move_allocations` | method | (self, context, source_consumer_uuid, target_consumer_uuid) | public | `True` (src/nova/scheduler/client/report.py:L2080); `r.status_code == 204` (src/nova/scheduler/client/report.py:L2130) | 8/52 | `src/nova/scheduler/client/report.py:L2042–L2130` |
| `SchedulerReportClient.put_allocations` | method | (self, context, consumer_uuid, payload) | public | `r.status_code == 204` (src/nova/scheduler/client/report.py:L2172) | 5/16 | `src/nova/scheduler/client/report.py:L2133–L2172` |
| `SchedulerReportClient.delete_allocation_for_instance` | method | (self, context, uuid, consumer_type='instance', force=False) | public | `True` (src/nova/scheduler/client/report.py:L2205); `False` (src/nova/scheduler/client/report.py:L2219); `False` (src/nova/scheduler/client/report.py:L2250); `True` (src/nova/scheduler/client/report.py:L2261) | 7/55 | `src/nova/scheduler/client/report.py:L2175–L2270` |
| `SchedulerReportClient.get_allocations_for_resource_provider` | method | (self, context, rp_uuid) | public | `ProviderAllocInfo(allocations=data['allocations'])` (src/nova/scheduler/client/report.py:L2290) | 2/8 | `src/nova/scheduler/client/report.py:L2272–L2290` |
| `SchedulerReportClient.get_allocations_for_provider_tree` | method | (self, context, nodename) | public | `{consumer: self.get_allocs_for_consumer(context, consumer) for consumer in consumers}` (src/nova/scheduler/client/report.py:L2370) | 3/7 | `src/nova/scheduler/client/report.py:L2292–L2371` |
| `SchedulerReportClient._remove_allocations_for_evacuated_instances` | method | (self, context, compute_node) | private | not declared | 3/14 | `src/nova/scheduler/client/report.py:L2373–L2387` |
| `SchedulerReportClient.delete_resource_provider` | method | (self, context, compute_node, cascade=False) | public | not declared | 5/23 | `src/nova/scheduler/client/report.py:L2389–L2435` |
| `SchedulerReportClient.invalidate_resource_provider` | method | (self, name_or_uuid, cacheonly=False) | public | not declared | 3/7 | `src/nova/scheduler/client/report.py:L2437–L2449` |
| `SchedulerReportClient.get_provider_by_name` | method | (self, context, name) | public | `records[0]` (src/nova/scheduler/client/report.py:L2477) | 7/27 | `src/nova/scheduler/client/report.py:L2451–L2491` |
| `SchedulerReportClient.aggregate_add_host` | method | (self, context, agg_uuid, host_name=None, rp_uuid=None) | public | `` (src/nova/scheduler/client/report.py:L2539) | 6/15 | `src/nova/scheduler/client/report.py:L2496–L2543` |
| `SchedulerReportClient.aggregate_remove_host` | method | (self, context, agg_uuid, host_name) | public | `` (src/nova/scheduler/client/report.py:L2583) | 3/11 | `src/nova/scheduler/client/report.py:L2548–L2587` |
| `SchedulerReportClient._handle_usages_error_from_placement` | method | (resp, project_id, user_id=None) | private | not declared | 3/12 | `src/nova/scheduler/client/report.py:L2590–L2601` |
| `SchedulerReportClient._get_usages` | method | (self, context, project_id, user_id=None) | private | `self.get(url, version=GET_USAGES_VERSION, global_request_id=context.global_id)` (src/nova/scheduler/client/report.py:L2610) | 2/6 | `src/nova/scheduler/client/report.py:L2606–L2611` |
| `SchedulerReportClient.get_usages_counts_for_limits` | method | (self, context, project_id) | public | `data['usages']` (src/nova/scheduler/client/report.py:L2634) | 2/8 | `src/nova/scheduler/client/report.py:L2613–L2635` |
| `SchedulerReportClient.get_usages_counts_for_quota` | method | (self, context, project_id, user_id=None) | public | `total_counts` (src/nova/scheduler/client/report.py:L2688) | 4/26 | `src/nova/scheduler/client/report.py:L2637–L2688` |
| `SchedulerReportClient.get_usages_counts_for_quota._get_core_usages` | function | (usages) | private | `vcpus + pcpus` (src/nova/scheduler/client/report.py:L2659) | — | `src/nova/scheduler/client/report.py:L2652–L2659` |

## Dependencies

- `import collections` (src/nova/scheduler/client/report.py:L16)
- `import collections.abc` (src/nova/scheduler/client/report.py:L17)
- `import contextlib` (src/nova/scheduler/client/report.py:L18)
- `import copy` (src/nova/scheduler/client/report.py:L19)
- `import functools` (src/nova/scheduler/client/report.py:L20)
- `import random` (src/nova/scheduler/client/report.py:L21)
- `import time` (src/nova/scheduler/client/report.py:L22)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/scheduler/client/report.py:L24)
- `import os_resource_classes as orc` (src/nova/scheduler/client/report.py:L25)
- `import os_traits` (src/nova/scheduler/client/report.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/client/report.py:L27)
- `oslo_middleware`: imports `request_id` (src/nova/scheduler/client/report.py:L28)
- `oslo_utils`: imports `excutils` (src/nova/scheduler/client/report.py:L29)
- `oslo_utils`: imports `versionutils` (src/nova/scheduler/client/report.py:L30)
- `import retrying` (src/nova/scheduler/client/report.py:L31)
- `nova.compute`: imports `provider_tree` (src/nova/scheduler/client/report.py:L33)
- `import nova.conf` (src/nova/scheduler/client/report.py:L34)
- `nova`: imports `context as nova_context` (src/nova/scheduler/client/report.py:L35)
- `nova`: imports `exception` (src/nova/scheduler/client/report.py:L36)
- `nova.i18n`: imports `_` (src/nova/scheduler/client/report.py:L37)
- `nova`: imports `objects` (src/nova/scheduler/client/report.py:L38)
- `nova.objects`: imports `fields` (src/nova/scheduler/client/report.py:L39)
- `nova`: imports `utils` (src/nova/scheduler/client/report.py:L40)

## Side Effects

- **network**: client = self._adapter or utils.get_sdk_adapter( (src/nova/scheduler/client/report.py:L279)
- **network**: alloc_info = self.get_allocations_for_resource_provider(context, u) (src/nova/scheduler/client/report.py:L2358)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/client/report.py:L43)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/client/report.py:L44)
- **global-mutation**: WARN_EVERY = 10 (src/nova/scheduler/client/report.py:L45)
- **global-mutation**: SAME_SUBTREE_VERSION = '1.36' (src/nova/scheduler/client/report.py:L46)
- **global-mutation**: RESHAPER_VERSION = '1.30' (src/nova/scheduler/client/report.py:L47)
- **global-mutation**: CONSUMER_GENERATION_VERSION = '1.28' (src/nova/scheduler/client/report.py:L48)
- **global-mutation**: ALLOW_RESERVED_EQUAL_TOTAL_INVENTORY_VERSION = '1.26' (src/nova/scheduler/client/report.py:L49)
- **global-mutation**: POST_RPS_RETURNS_PAYLOAD_API_VERSION = '1.20' (src/nova/scheduler/client/report.py:L50)
- **global-mutation**: AGGREGATE_GENERATION_VERSION = '1.19' (src/nova/scheduler/client/report.py:L51)
- **global-mutation**: NESTED_PROVIDER_API_VERSION = '1.14' (src/nova/scheduler/client/report.py:L52)
- **global-mutation**: GET_USAGES_VERSION = '1.9' (src/nova/scheduler/client/report.py:L53)
- **global-mutation**: PLACEMENTCLIENT = None (src/nova/scheduler/client/report.py:L54)
- **global-mutation**: PLACEMENTCLIENT = SchedulerReportClient() (src/nova/scheduler/client/report.py:L90)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/scheduler/client/report.py:L24)
- **privilege** (`crypto-key`): :param adapter: A prepared keystoneauth1 Adapter for API communication. (src/nova/scheduler/client/report.py:L223)
- **sink** (`db-write`): redriving the update. However, it would be wasteful and inefficient to (src/nova/scheduler/client/report.py:L251)
- **privilege** (`crypto-key`): :raise: keystoneauth1.exceptions.ClientException if placement API (src/nova/scheduler/client/report.py:L414)
- **privilege** (`crypto-key`): :raise: keystoneauth1.exceptions.ClientException if placement API (src/nova/scheduler/client/report.py:L546)
- **privilege** (`crypto-key`): :raise: keystoneauth1.exceptions.ClientException if placement API (src/nova/scheduler/client/report.py:L677)
- **sink** (`db-write`): the generation returned from the placement API, we update the cached (src/nova/scheduler/client/report.py:L777)
- **sink** (`db-write`): generation and attempt to update inventory if any exists, otherwise (src/nova/scheduler/client/report.py:L778)
- **privilege** (`crypto-key`): :raise: keystoneauth1.exceptions.ClientException if placement API (src/nova/scheduler/client/report.py:L815)
- **sink** (`db-write`): msg = ("[%(placement_req_id)s] Failed to update inventory to " (src/nova/scheduler/client/report.py:L1022)
- **sink** (`db-write`): msg = ("[%(placement_req_id)s] Failed to update traits to " (src/nova/scheduler/client/report.py:L1156)
- **sink** (`db-write`): :param use_cache: If False, indicates not to update the cache of (src/nova/scheduler/client/report.py:L1187)
- **sink** (`db-write`): msg = ("[%(placement_req_id)s] Failed to update aggregates to " (src/nova/scheduler/client/report.py:L1241)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.ClientException if placement API (src/nova/scheduler/client/report.py:L1325)
- **sink** (`db-write`): encountered - i.e. we are attempting to update placement based (src/nova/scheduler/client/report.py:L1404)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L1411)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L1607)
- **sink** (`db-write`): :param consumer_uuid: the uuid of the consumer to update (src/nova/scheduler/client/report.py:L1753)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L1773)
- **sink** (`db-write`): "consumer involved in our attempt to update allocations " (src/nova/scheduler/client/report.py:L1821)
- **sink** (`db-write`): :param consumer_uuid: the uuid of the consumer to update (src/nova/scheduler/client/report.py:L1844)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L1866)
- **sink** (`db-write`): 'the consumer involved in our attempt to update ' (src/nova/scheduler/client/report.py:L1962)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L1988)
- **sink** (`db-write`): consumer to the target consumer. If parallel update happens on either (src/nova/scheduler/client/report.py:L2047)
- **sink** (`db-write`): resource provider update. (src/nova/scheduler/client/report.py:L2143)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L2278)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.ClientException if placement API (src/nova/scheduler/client/report.py:L2333)
- **sink** (`db-write`): consumers.update(alloc_info.allocations) (src/nova/scheduler/client/report.py:L2360)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/client/report.py:L2397)
- **sink** (`db-write`): update to the provider was detected. (src/nova/scheduler/client/report.py:L2519)
- **sink** (`db-write`): update to the provider was detected. (src/nova/scheduler/client/report.py:L2567)

