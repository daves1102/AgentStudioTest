# src/nova/compute/utils.py

## Overview

This file implements the `utils` module, defining 2 classs, 4 constants, 61 functions, 6 methods, 1 property, 1 variable, 37 imports, 5 side effects, 14 security surface entries.

Lines: total 1678, code 1287, comment 130, blank 261

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/utils.py:L57–L57` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/utils.py:L58–L58` |
| `NON_INHERITABLE_IMAGE_PROPERTIES` | constant | — | exported | not declared | — | `src/nova/compute/utils.py:L64–L70` |
| `NON_INHERITABLE_IMAGE_NAMESPACES` | constant | — | exported | not declared | — | `src/nova/compute/utils.py:L75–L77` |
| `exception_to_dict` | function | (fault, message=None) | exported | `fault_dict` (src/nova/compute/utils.py:L128) | 4/14 | `src/nova/compute/utils.py:L80–L128` |
| `_get_fault_details` | function | (exc_info, error_code) | unexported | `str(details)` (src/nova/compute/utils.py:L141) | 3/6 | `src/nova/compute/utils.py:L131–L141` |
| `add_instance_fault_from_exc` | function | (context, instance, fault, exc_info=None, fault_message=None) | exported | not declared | 1/9 | `src/nova/compute/utils.py:L144–L154` |
| `get_device_name_for_instance` | function | (instance, bdms, device) | exported | `get_next_device_name(instance, mappings.values(), mappings['root'], device)` (src/nova/compute/utils.py:L167) | 1/4 | `src/nova/compute/utils.py:L157–L168` |
| `default_device_names_for_instance` | function | (instance, root_device_name, *block_device_lists) | exported | not declared | 6/15 | `src/nova/compute/utils.py:L171–L193` |
| `check_max_disk_devices_to_attach` | function | (num_devices) | exported | `` (src/nova/compute/utils.py:L199) | 3/6 | `src/nova/compute/utils.py:L196–L202` |
| `get_next_device_name` | function | (instance, device_name_list, root_device_name=None, device=None) | exported | `prefix + req_letter` (src/nova/compute/utils.py:L255) | 9/29 | `src/nova/compute/utils.py:L205–L255` |
| `get_root_bdm` | function | (context, instance, bdms=None) | exported | `bdms.root_bdm()` (src/nova/compute/utils.py:L267) | 3/9 | `src/nova/compute/utils.py:L258–L267` |
| `is_volume_backed_instance` | function | (context, instance, bdms=None) | exported | `root_bdm.is_volume` (src/nova/compute/utils.py:L273); `not instance.image_ref` (src/nova/compute/utils.py:L277); `not instance['image_ref']` (src/nova/compute/utils.py:L279) | 3/7 | `src/nova/compute/utils.py:L270–L279` |
| `heal_reqspec_is_bfv` | function | (ctxt, request_spec, instance) | exported | `` (src/nova/compute/utils.py:L297) | 2/5 | `src/nova/compute/utils.py:L282–L301` |
| `convert_mb_to_ceil_gb` | function | (mb_value) | exported | `gb_int` (src/nova/compute/utils.py:L310) | 2/6 | `src/nova/compute/utils.py:L304–L310` |
| `_get_unused_letter` | function | (used_letters) | unexported | `letter` (src/nova/compute/utils.py:L319) | 3/7 | `src/nova/compute/utils.py:L313–L320` |
| `get_value_from_system_metadata` | function | (instance, key, type, default) | exported | `type(value)` (src/nova/compute/utils.py:L333); `default` (src/nova/compute/utils.py:L339) | 2/10 | `src/nova/compute/utils.py:L323–L339` |
| `notify_usage_exists` | function | (notifier, context, instance_ref, host, current_period=False, ignore_missing_network_data=True, system_metadata=None, extra_usage_info=None) | exported | not declared | 3/36 | `src/nova/compute/utils.py:L342–L405` |
| `notify_about_instance_usage` | function | (notifier, context, instance, event_suffix, network_info=None, extra_usage_info=None, fault=None, best_effort=False) | exported | not declared | 6/23 | `src/nova/compute/utils.py:L408–L446` |
| `_get_fault_and_priority_from_exception` | function | (exception) | unexported | `fault, priority` (src/nova/compute/utils.py:L454); `fault, priority` (src/nova/compute/utils.py:L459) | 2/8 | `src/nova/compute/utils.py:L449–L459` |
| `notify_about_instance_action` | function | (context, instance, host, action, phase=None, source=fields.NotificationSource.COMPUTE, exception=None, bdms=None, best_effort=False) | exported | not declared | 3/27 | `src/nova/compute/utils.py:L463–L499` |
| `notify_about_instance_create` | function | (context, instance, host, phase=None, exception=None, bdms=None) | exported | not declared | 1/19 | `src/nova/compute/utils.py:L503–L531` |
| `notify_about_scheduler_action` | function | (context, request_spec, action, phase=None, source=fields.NotificationSource.SCHEDULER) | exported | not declared | 1/15 | `src/nova/compute/utils.py:L535–L556` |
| `notify_about_volume_attach_detach` | function | (context, instance, host, action, phase, volume_id=None, exception=None) | exported | not declared | 1/19 | `src/nova/compute/utils.py:L560–L586` |
| `notify_about_share_attach_detach` | function | (context, instance, host, action, phase, share_id=None, exception=None) | exported | not declared | 1/20 | `src/nova/compute/utils.py:L590–L617` |
| `notify_about_instance_rescue_action` | function | (context, instance, host, rescue_image_ref, phase=None, exception=None) | exported | not declared | 1/20 | `src/nova/compute/utils.py:L621–L649` |
| `notify_about_keypair_action` | function | (context, keypair, action, phase) | exported | not declared | 1/12 | `src/nova/compute/utils.py:L653–L671` |
| `notify_about_volume_swap` | function | (context, instance, host, phase, old_volume_id, new_volume_id, exception=None) | exported | not declared | 1/19 | `src/nova/compute/utils.py:L675–L705` |
| `notify_about_instance_snapshot` | function | (context, instance, host, phase, snapshot_image_id) | exported | not declared | 1/17 | `src/nova/compute/utils.py:L709–L735` |
| `notify_about_resize_prep_instance` | function | (context, instance, host, phase, new_flavor) | exported | not declared | 1/17 | `src/nova/compute/utils.py:L739–L766` |
| `notify_about_server_group_update` | function | (context, event_suffix, sg_payload) | exported | not declared | 1/3 | `src/nova/compute/utils.py:L769–L777` |
| `notify_about_aggregate_update` | function | (context, event_suffix, aggregate_payload) | exported | `` (src/nova/compute/utils.py:L792) | 3/11 | `src/nova/compute/utils.py:L780–L797` |
| `notify_about_aggregate_action` | function | (context, aggregate, action, phase) | exported | not declared | 1/12 | `src/nova/compute/utils.py:L801–L812` |
| `notify_about_aggregate_cache` | function | (context, aggregate, host, image_status, index, total) | exported | not declared | 3/24 | `src/nova/compute/utils.py:L816–L851` |
| `notify_about_host_update` | function | (context, event_suffix, host_payload) | exported | `` (src/nova/compute/utils.py:L866) | 2/8 | `src/nova/compute/utils.py:L854–L870` |
| `notify_about_server_group_action` | function | (context, group, action) | exported | not declared | 1/11 | `src/nova/compute/utils.py:L874–L884` |
| `notify_about_server_group_add_member` | function | (context, group_id) | exported | not declared | 1/12 | `src/nova/compute/utils.py:L888–L899` |
| `notify_about_instance_rebuild` | function | (context, instance, host, action=fields.NotificationAction.REBUILD, phase=None, source=fields.NotificationSource.COMPUTE, exception=None, bdms=None) | exported | not declared | 1/22 | `src/nova/compute/utils.py:L903–L935` |
| `notify_about_metrics_update` | function | (context, host, host_ip, nodename, monitor_metric_list) | exported | not declared | 1/17 | `src/nova/compute/utils.py:L939–L963` |
| `notify_about_libvirt_connect_error` | function | (context, ip, exception) | exported | not declared | 1/13 | `src/nova/compute/utils.py:L967–L985` |
| `notify_about_volume_usage` | function | (context, vol_usage, host) | exported | not declared | 1/13 | `src/nova/compute/utils.py:L989–L1007` |
| `notify_about_compute_task_error` | function | (context, action, instance_uuid, request_spec, state, exception) | exported | not declared | 3/20 | `src/nova/compute/utils.py:L1011–L1042` |
| `refresh_info_cache_for_instance` | function | (context, instance) | exported | not declared | 4/7 | `src/nova/compute/utils.py:L1045–L1057` |
| `get_reboot_type` | function | (task_state, current_power_state) | exported | `'HARD'` (src/nova/compute/utils.py:L1063); `'SOFT'` (src/nova/compute/utils.py:L1065); `'HARD'` (src/nova/compute/utils.py:L1066) | 3/6 | `src/nova/compute/utils.py:L1060–L1066` |
| `get_machine_ips` | function | — | exported | `addresses` (src/nova/compute/utils.py:L1089) | 5/11 | `src/nova/compute/utils.py:L1069–L1089` |
| `upsize_quota_delta` | function | (new_flavor, old_flavor) | exported | `deltas` (src/nova/compute/utils.py:L1107) | 3/8 | `src/nova/compute/utils.py:L1092–L1107` |
| `upsize_quota_delta._quota_delta` | function | (resource) | private | `(new_flavor[resource] - old_flavor[resource])` (src/nova/compute/utils.py:L1099) | — | `src/nova/compute/utils.py:L1098–L1099` |
| `get_headroom` | function | (quotas, usages, deltas) | exported | `headroom` (src/nova/compute/utils.py:L1131) | 6/16 | `src/nova/compute/utils.py:L1110–L1131` |
| `check_num_instances_quota` | function | (context, flavor, min_count, max_count, project_id=None, user_id=None, orig_num_req=None) | exported | `check_num_instances_quota( context, flavor, min_count, allowed, project_id=project_id, user_id=user_id)` (src/nova/compute/utils.py:L1200); `max_count` (src/nova/compute/utils.py:L1230) | 13/76 | `src/nova/compute/utils.py:L1134–L1230` |
| `get_over_quota_detail` | function | (headroom, overs, quotas, requested) | exported | `overs, reqs, total_alloweds, useds` (src/nova/compute/utils.py:L1243) | 2/11 | `src/nova/compute/utils.py:L1233–L1243` |
| `remove_shelved_keys_from_system_metadata` | function | (instance) | exported | not declared | 3/4 | `src/nova/compute/utils.py:L1246–L1250` |
| `create_image` | function | (context, instance, name, image_type, image_api, extra_properties=None) | exported | `image_api.create(context, image_meta)` (src/nova/compute/utils.py:L1283) | 3/14 | `src/nova/compute/utils.py:L1253–L1283` |
| `initialize_instance_snapshot_metadata` | function | (context, instance, name, extra_properties=None) | exported | `image_meta` (src/nova/compute/utils.py:L1336) | 7/21 | `src/nova/compute/utils.py:L1286–L1336` |
| `delete_image` | function | (context, instance, image_api, image_id, log_exc_info=False) | exported | not declared | 3/10 | `src/nova/compute/utils.py:L1339–L1362` |
| `may_have_ports_or_volumes` | function | (instance) | exported | `True` (src/nova/compute/utils.py:L1379); `False` (src/nova/compute/utils.py:L1380) | 2/4 | `src/nova/compute/utils.py:L1365–L1380` |
| `get_stashed_volume_connector` | function | (bdm, instance) | exported | `connector` (src/nova/compute/utils.py:L1402); `connector` (src/nova/compute/utils.py:L1415) | 7/19 | `src/nova/compute/utils.py:L1383–L1415` |
| `EventReporter` | class | — | exported | not declared | — | `src/nova/compute/utils.py:L1418–L1454` |
| `EventReporter.__init__` | method | (self, context, event_name, host, *instance_uuids, graceful_exit=False) | public | not declared | 1/7 | `src/nova/compute/utils.py:L1425–L1431` |
| `EventReporter.__enter__` | method | (self) | public | `self` (src/nova/compute/utils.py:L1439) | 2/6 | `src/nova/compute/utils.py:L1433–L1439` |
| `EventReporter.__exit__` | method | (self, exc_type, exc_val, exc_tb) | public | `True` (src/nova/compute/utils.py:L1453); `False` (src/nova/compute/utils.py:L1454) | 4/12 | `src/nova/compute/utils.py:L1441–L1454` |
| `wrap_instance_event` | function | (prefix, graceful_exit=False) | exported | `helper` (src/nova/compute/utils.py:L1485) | 1/4 | `src/nova/compute/utils.py:L1457–L1485` |
| `wrap_instance_event.helper` | function | (function) | public | `decorated_function` (src/nova/compute/utils.py:L1484) | — | `src/nova/compute/utils.py:L1470–L1484` |
| `wrap_instance_event.helper.decorated_function` | function | (self, context, *args, **kwargs) | public | `function(self, context, *args, **kwargs)` (src/nova/compute/utils.py:L1483) | — | `src/nova/compute/utils.py:L1473–L1483` |
| `UnlimitedSemaphore` | class | — | exported | not declared | — | `src/nova/compute/utils.py:L1488–L1497` |
| `UnlimitedSemaphore.__enter__` | method | (self) | public | not declared | 1/2 | `src/nova/compute/utils.py:L1489–L1490` |
| `UnlimitedSemaphore.__exit__` | method | (self, exc_type, exc_val, exc_tb) | public | not declared | 1/2 | `src/nova/compute/utils.py:L1492–L1493` |
| `UnlimitedSemaphore.balance` | method | (self) | public | `0` (src/nova/compute/utils.py:L1497) | 1/2 | `src/nova/compute/utils.py:L1496–L1497` |
| `disk_ops_semaphore` | variable | — | exported | not declared | — | `src/nova/compute/utils.py:L1503–L1503` |
| `notify_about_instance_delete` | function | (notifier, context, instance, delete_type='delete', source=fields.NotificationSource.API) | exported | not declared | 4/26 | `src/nova/compute/utils.py:L1507–L1535` |
| `update_pci_request_with_placement_allocations` | function | (context, report_client, pci_requests, provider_mapping) | exported | `` (src/nova/compute/utils.py:L1557) | 9/30 | `src/nova/compute/utils.py:L1538–L1608` |
| `update_pci_request_with_placement_allocations.needs_update_due_to_qos` | function | (pci_request, mapping) | public | `(pci_request.requester_id and pci_request.requester_id in mapping)` (src/nova/compute/utils.py:L1560) | — | `src/nova/compute/utils.py:L1559–L1561` |
| `update_pci_request_with_placement_allocations.get_group_mapping_for_flavor_based_pci_request` | function | (pci_request, mapping) | public | `{ group_id: rp_uuids[0] for group_id, rp_uuids in mapping.items() if group_id.startswith(pci_request.request_id) }` (src/nova/compute/utils.py:L1569) | — | `src/nova/compute/utils.py:L1563–L1573` |
| `delete_arqs_if_needed` | function | (context, instance, arq_uuids=None) | exported | `` (src/nova/compute/utils.py:L1620) | 6/19 | `src/nova/compute/utils.py:L1611–L1638` |
| `check_attach_and_reserve_volume` | function | (context, volume_api, volume, instance, bdm, supports_multiattach=False, validate_az=True) | exported | not declared | 5/14 | `src/nova/compute/utils.py:L1641–L1678` |
| `UnlimitedSemaphore.balance` | property | — | public | not declared | — | `src/nova/compute/utils.py:L1495–L1497` |

## Dependencies

- `import contextlib` (src/nova/compute/utils.py:L17)
- `import functools` (src/nova/compute/utils.py:L18)
- `import inspect` (src/nova/compute/utils.py:L19)
- `import itertools` (src/nova/compute/utils.py:L20)
- `import math` (src/nova/compute/utils.py:L21)
- `import socket` (src/nova/compute/utils.py:L22)
- `import traceback` (src/nova/compute/utils.py:L23)
- `oslo_log`: imports `log` (src/nova/compute/utils.py:L25)
- `oslo_serialization`: imports `jsonutils` (src/nova/compute/utils.py:L26)
- `oslo_utils`: imports `excutils` (src/nova/compute/utils.py:L27)
- `import psutil` (src/nova/compute/utils.py:L28)
- `nova.accelerator`: imports `cyborg` (src/nova/compute/utils.py:L30)
- `nova`: imports `block_device` (src/nova/compute/utils.py:L31)
- `nova.compute`: imports `power_state` (src/nova/compute/utils.py:L32)
- `nova.compute`: imports `task_states` (src/nova/compute/utils.py:L33)
- `nova.compute`: imports `vm_states` (src/nova/compute/utils.py:L34)
- `import nova.conf` (src/nova/compute/utils.py:L35)
- `nova`: imports `exception` (src/nova/compute/utils.py:L36)
- `nova`: imports `notifications` (src/nova/compute/utils.py:L37)
- `nova.notifications.objects`: imports `aggregate as aggregate_notification` (src/nova/compute/utils.py:L38)
- `nova.notifications.objects`: imports `base as notification_base` (src/nova/compute/utils.py:L39)
- `nova.notifications.objects`: imports `compute_task as task_notification` (src/nova/compute/utils.py:L40)
- `nova.notifications.objects`: imports `exception as notification_exception` (src/nova/compute/utils.py:L41)
- `nova.notifications.objects`: imports `flavor as flavor_notification` (src/nova/compute/utils.py:L42)
- `nova.notifications.objects`: imports `instance as instance_notification` (src/nova/compute/utils.py:L43)
- `nova.notifications.objects`: imports `keypair as keypair_notification` (src/nova/compute/utils.py:L44)
- `nova.notifications.objects`: imports `libvirt as libvirt_notification` (src/nova/compute/utils.py:L45)
- `nova.notifications.objects`: imports `metrics as metrics_notification` (src/nova/compute/utils.py:L46)
- `nova.notifications.objects`: imports `request_spec as reqspec_notification` (src/nova/compute/utils.py:L47)
- `nova.notifications.objects`: imports `scheduler as scheduler_notification` (src/nova/compute/utils.py:L48)
- `nova.notifications.objects`: imports `server_group as sg_notification` (src/nova/compute/utils.py:L49)
- `nova.notifications.objects`: imports `volume as volume_notification` (src/nova/compute/utils.py:L50)
- `nova`: imports `objects` (src/nova/compute/utils.py:L51)
- `nova.objects`: imports `fields` (src/nova/compute/utils.py:L52)
- `nova`: imports `rpc` (src/nova/compute/utils.py:L53)
- `nova`: imports `safe_utils` (src/nova/compute/utils.py:L54)
- `nova`: imports `utils` (src/nova/compute/utils.py:L55)

## Side Effects

- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/utils.py:L1622)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/utils.py:L57)
- **global-mutation**: LOG = log.getLogger(__name__) (src/nova/compute/utils.py:L58)
- **global-mutation**: NON_INHERITABLE_IMAGE_PROPERTIES = frozenset([ (src/nova/compute/utils.py:L64)
- **global-mutation**: NON_INHERITABLE_IMAGE_NAMESPACES = frozenset([ (src/nova/compute/utils.py:L75)

## Security Surface

- **sink** (`db-write`): fault_obj.update(exception_to_dict(fault, message=fault_message)) (src/nova/compute/utils.py:L151)
- **sink** (`db-write`): so we need to calculate it here and update the RequestSpec. (src/nova/compute/utils.py:L290)
- **sink** (`db-write`): extra_info.update(extra_usage_info) (src/nova/compute/utils.py:L377)
- **sink** (`db-write`): usage_info.update(fault_payload) (src/nova/compute/utils.py:L432)
- **sink** (`db-write`): """Send a notification about server group update. (src/nova/compute/utils.py:L770)
- **sink** (`db-write`): :param sg_payload: payload for server group update (src/nova/compute/utils.py:L773)
- **sink** (`db-write`): """Send a notification about aggregate update. (src/nova/compute/utils.py:L781)
- **sink** (`db-write`): :param aggregate_payload: payload for aggregate update (src/nova/compute/utils.py:L784)
- **sink** (`db-write`): """Send a notification about host update. (src/nova/compute/utils.py:L855)
- **sink** (`db-write`): :param host_payload: payload for host update. It is a dict and there (src/nova/compute/utils.py:L858)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/compute/utils.py:L961)
- **sink** (`db-write`): properties.update(extra_properties or {}) (src/nova/compute/utils.py:L1272)
- **sink** (`db-write`): properties.update(extra_properties) (src/nova/compute/utils.py:L1334)
- **sink** (`db-write`): """Update the instance's PCI request based on the request group - (src/nova/compute/utils.py:L1540)

