# src/nova/scheduler/manager.py

## Overview

This file implements the `manager` module, defining 1 class, 4 constants, 2 fields, 1 function, 20 methods, 1 property, 25 imports, 7 side effects, 3 security surface entries.

Lines: total 838, code 511, comment 225, blank 102

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/manager.py:L50–L50` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/manager.py:L51–L51` |
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/scheduler/manager.py:L53–L53` |
| `HOST_MAPPING_EXISTS_WARNING` | constant | — | exported | not declared | — | `src/nova/scheduler/manager.py:L55–L55` |
| `SchedulerManager` | class | — | exported | not declared | — | `src/nova/scheduler/manager.py:L58–L838` |
| `SchedulerManager.target` | field | — | public | not declared | — | `src/nova/scheduler/manager.py:L65–L65` |
| `SchedulerManager._sentinel` | field | — | private | not declared | — | `src/nova/scheduler/manager.py:L67–L67` |
| `SchedulerManager.__init__` | method | (self, *args, **kwargs) | public | not declared | 4/23 | `src/nova/scheduler/manager.py:L69–L102` |
| `SchedulerManager.placement_client` | method | (self) | public | `report.report_client_singleton()` (src/nova/scheduler/manager.py:L106) | 1/2 | `src/nova/scheduler/manager.py:L105–L106` |
| `SchedulerManager._discover_hosts_in_cells` | method | (self, context) | private | `` (src/nova/scheduler/manager.py:L122) | 8/35 | `src/nova/scheduler/manager.py:L111–L147` |
| `SchedulerManager.reset` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/manager.py:L149–L157` |
| `SchedulerManager.graceful_shutdown` | method | (self, timeout) | public | not declared | 2/14 | `src/nova/scheduler/manager.py:L159–L185` |
| `SchedulerManager.select_destinations` | method | (self, context, request_spec=None, filter_properties=None, spec_obj=_sentinel, instance_uuids=None, return_objects=False, return_alternates=False) | public | `jsonutils.to_primitive(selection_dicts)` (src/nova/scheduler/manager.py:L305); `selections` (src/nova/scheduler/manager.py:L307) | 16/63 | `src/nova/scheduler/manager.py:L188–L307` |
| `SchedulerManager._select_destinations` | method | (self, context, spec_obj, instance_uuids, alloc_reqs_by_rp_uuid, provider_summaries, allocation_request_version=None, return_alternates=False) | private | `selections` (src/nova/scheduler/manager.py:L337) | 1/24 | `src/nova/scheduler/manager.py:L309–L337` |
| `SchedulerManager._schedule` | method | (self, context, spec_obj, instance_uuids, alloc_reqs_by_rp_uuid, provider_summaries, allocation_request_version=None, return_alternates=False) | private | `self._legacy_find_hosts( context, num_instances, spec_obj, hosts, num_alts, instance_uuids=instance_uuids)` (src/nova/scheduler/manager.py:L433); `self._get_alternate_hosts( claimed_hosts, spec_obj, hosts, num, num_alts, alloc_reqs_by_rp_uuid, allocation_request_version, claimed_alloc_reqs, )` (src/nova/scheduler/manager.py:L531) | 13/67 | `src/nova/scheduler/manager.py:L339–L540` |
| `SchedulerManager._schedule.hosts_with_alloc_reqs` | function | (hosts_gen) | public | not declared | — | `src/nova/scheduler/manager.py:L376–L383` |
| `SchedulerManager._ensure_sufficient_hosts` | method | (self, context, hosts, required_count, claimed_uuids=None) | private | `` (src/nova/scheduler/manager.py:L551) | 4/15 | `src/nova/scheduler/manager.py:L542–L572` |
| `SchedulerManager._cleanup_allocations` | method | (self, context, instance_uuids) | private | `` (src/nova/scheduler/manager.py:L577) | 3/7 | `src/nova/scheduler/manager.py:L574–L582` |
| `SchedulerManager._legacy_find_hosts` | method | (self, context, num_instances, spec_obj, hosts, num_alts, instance_uuids=None) | private | `self._get_alternate_hosts( selected_hosts, spec_obj, hosts, num, num_alts)` (src/nova/scheduler/manager.py:L625) | 5/20 | `src/nova/scheduler/manager.py:L584–L626` |
| `SchedulerManager._consume_selected_host` | method | (selected_host, spec_obj, instance_uuid=None) | private | not declared | 4/11 | `src/nova/scheduler/manager.py:L629–L647` |
| `SchedulerManager._get_alternate_hosts` | method | (self, selected_hosts, spec_obj, hosts, index, num_alts, alloc_reqs_by_rp_uuid=None, allocation_request_version=None, selected_alloc_reqs=None) | private | `selections_to_return` (src/nova/scheduler/manager.py:L738) | 11/38 | `src/nova/scheduler/manager.py:L649–L738` |
| `SchedulerManager._get_sorted_hosts` | method | (self, spec_obj, host_states, index) | private | `[]` (src/nova/scheduler/manager.py:L751); `[chosen_host] + weighed_hosts` (src/nova/scheduler/manager.py:L785) | 7/25 | `src/nova/scheduler/manager.py:L740–L785` |
| `SchedulerManager._get_all_host_states` | method | (self, context, spec_obj, provider_summaries) | private | `self.host_manager.get_host_states_by_uuids( context, compute_uuids, spec_obj)` (src/nova/scheduler/manager.py:L797) | 2/6 | `src/nova/scheduler/manager.py:L787–L798` |
| `SchedulerManager.update_aggregates` | method | (self, ctxt, aggregates) | public | not declared | 1/2 | `src/nova/scheduler/manager.py:L800–L808` |
| `SchedulerManager.delete_aggregate` | method | (self, ctxt, aggregate) | public | not declared | 1/2 | `src/nova/scheduler/manager.py:L810–L817` |
| `SchedulerManager.update_instance_info` | method | (self, context, host_name, instance_info) | public | not declared | 1/3 | `src/nova/scheduler/manager.py:L819–L824` |
| `SchedulerManager.delete_instance_info` | method | (self, context, host_name, instance_uuid) | public | not declared | 1/3 | `src/nova/scheduler/manager.py:L826–L831` |
| `SchedulerManager.sync_instance_info` | method | (self, context, host_name, instance_uuids) | public | not declared | 1/3 | `src/nova/scheduler/manager.py:L833–L838` |
| `SchedulerManager.placement_client` | property | — | public | not declared | — | `src/nova/scheduler/manager.py:L104–L106` |

## Dependencies

- `import collections` (src/nova/scheduler/manager.py:L22)
- `import copy` (src/nova/scheduler/manager.py:L23)
- `import random` (src/nova/scheduler/manager.py:L24)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/scheduler/manager.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/manager.py:L27)
- `import oslo_messaging as messaging` (src/nova/scheduler/manager.py:L28)
- `oslo_serialization`: imports `jsonutils` (src/nova/scheduler/manager.py:L29)
- `oslo_service`: imports `periodic_task` (src/nova/scheduler/manager.py:L30)
- `nova.compute`: imports `utils as compute_utils` (src/nova/scheduler/manager.py:L32)
- `import nova.conf` (src/nova/scheduler/manager.py:L33)
- `nova`: imports `exception` (src/nova/scheduler/manager.py:L34)
- `nova.i18n`: imports `_` (src/nova/scheduler/manager.py:L35)
- `nova`: imports `manager` (src/nova/scheduler/manager.py:L36)
- `nova`: imports `objects` (src/nova/scheduler/manager.py:L37)
- `nova.objects`: imports `fields as fields_obj` (src/nova/scheduler/manager.py:L38)
- `nova.objects`: imports `host_mapping as host_mapping_obj` (src/nova/scheduler/manager.py:L39)
- `nova.objects`: imports `service as obj_service` (src/nova/scheduler/manager.py:L40)
- `nova`: imports `quota` (src/nova/scheduler/manager.py:L41)
- `nova`: imports `rpc` (src/nova/scheduler/manager.py:L42)
- `nova.scheduler.client`: imports `report` (src/nova/scheduler/manager.py:L43)
- `nova.scheduler`: imports `host_manager` (src/nova/scheduler/manager.py:L44)
- `nova.scheduler`: imports `request_filter` (src/nova/scheduler/manager.py:L45)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/manager.py:L46)
- `nova`: imports `servicegroup` (src/nova/scheduler/manager.py:L47)
- `nova`: imports `thread_pool_factory` (src/nova/scheduler/manager.py:L48)

## Side Effects

- **network**: res = self.placement_client.get_allocation_candidates( (src/nova/scheduler/manager.py:L235)
- **network**: res = self.placement_client.get_allocation_candidates( (src/nova/scheduler/manager.py:L267)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/manager.py:L50)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/manager.py:L51)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/scheduler/manager.py:L53)
- **global-mutation**: HOST_MAPPING_EXISTS_WARNING = False (src/nova/scheduler/manager.py:L55)
- **global-mutation**: HOST_MAPPING_EXISTS_WARNING = True (src/nova/scheduler/manager.py:L145)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/scheduler/manager.py:L26)
- **sink** (`db-write`): provider_summaries.update(provider_summaries_fallback) (src/nova/scheduler/manager.py:L275)
- **sink** (`db-write`): :param aggregates: Aggregate(s) to update (src/nova/scheduler/manager.py:L803)

