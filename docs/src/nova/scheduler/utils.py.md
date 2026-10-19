# src/nova/scheduler/utils.py

## Overview

This file implements the `utils` module, defining 1 class, 5 constants, 27 functions, 27 methods, 2 propertys, 5 variables, 23 imports, 7 side effects, 3 security surface entries.

Lines: total 1560, code 1064, comment 255, blank 241

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/utils.py:L43–L43` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/utils.py:L45–L45` |
| `GroupDetails` | variable | — | exported | not declared | — | `src/nova/scheduler/utils.py:L47–L48` |
| `ResourceRequest` | class | — | exported | not declared | — | `src/nova/scheduler/utils.py:L51–L589` |
| `ResourceRequest.XS_RES_PREFIX` | constant | — | public | not declared | — | `src/nova/scheduler/utils.py:L54–L54` |
| `ResourceRequest.XS_TRAIT_PREFIX` | constant | — | public | not declared | — | `src/nova/scheduler/utils.py:L55–L55` |
| `ResourceRequest.XS_KEYPAT` | constant | — | public | not declared | — | `src/nova/scheduler/utils.py:L57–L58` |
| `ResourceRequest.__init__` | method | (self) | public | not declared | 1/9 | `src/nova/scheduler/utils.py:L60–L77` |
| `ResourceRequest.from_request_spec` | method | (cls, request_spec, enable_pinning_translate=True) | public | `res_req` (src/nova/scheduler/utils.py:L203) | 11/42 | `src/nova/scheduler/utils.py:L80–L203` |
| `ResourceRequest.from_request_groups` | method | (cls, request_groups, request_level_params, group_policy) | public | `res_req` (src/nova/scheduler/utils.py:L223) | 2/15 | `src/nova/scheduler/utils.py:L206–L223` |
| `ResourceRequest._process_requested_resources` | method | (self, request_spec) | private | not declared | 4/7 | `src/nova/scheduler/utils.py:L225–L231` |
| `ResourceRequest._process_extra_specs` | method | (self, flavor) | private | `` (src/nova/scheduler/utils.py:L235) | 7/15 | `src/nova/scheduler/utils.py:L233–L257` |
| `ResourceRequest._process_image_meta` | method | (self, image) | private | `` (src/nova/scheduler/utils.py:L261) | 4/5 | `src/nova/scheduler/utils.py:L259–L267` |
| `ResourceRequest._translate_secure_boot_request` | method | (self, flavor, image) | private | `` (src/nova/scheduler/utils.py:L272) | 2/7 | `src/nova/scheduler/utils.py:L269–L276` |
| `ResourceRequest._translate_maxphysaddr_request` | method | (self, flavor, image) | private | `` (src/nova/scheduler/utils.py:L282) | 5/12 | `src/nova/scheduler/utils.py:L278–L293` |
| `ResourceRequest._translate_stateless_firmware_request` | method | (self, image) | private | not declared | 2/4 | `src/nova/scheduler/utils.py:L295–L298` |
| `ResourceRequest._translate_vtpm_request` | method | (self, flavor, image) | private | `` (src/nova/scheduler/utils.py:L303) | 4/14 | `src/nova/scheduler/utils.py:L300–L318` |
| `ResourceRequest._translate_mem_encryption_request` | method | (self, flavor, image) | private | `` (src/nova/scheduler/utils.py:L333) | 2/11 | `src/nova/scheduler/utils.py:L320–L342` |
| `ResourceRequest._translate_vpmems_request` | method | (self, flavor) | private | `` (src/nova/scheduler/utils.py:L351) | 4/14 | `src/nova/scheduler/utils.py:L344–L361` |
| `ResourceRequest._translate_pinning_policies` | method | (self, flavor, image) | private | not declared | 8/38 | `src/nova/scheduler/utils.py:L363–L427` |
| `ResourceRequest._translate_pci_numa_affinity_policy` | method | (self, flavor, image) | private | not declared | 2/8 | `src/nova/scheduler/utils.py:L429–L437` |
| `ResourceRequest.group_policy` | method | (self) | public | `self._group_policy` (src/nova/scheduler/utils.py:L441) | 1/2 | `src/nova/scheduler/utils.py:L440–L441` |
| `ResourceRequest.group_policy` | method | (self, value) | public | not declared | 1/2 | `src/nova/scheduler/utils.py:L444–L445` |
| `ResourceRequest.get_request_group` | method | (self, ident) | public | `self._rg_by_id[ident]` (src/nova/scheduler/utils.py:L453) | 2/7 | `src/nova/scheduler/utils.py:L447–L453` |
| `ResourceRequest._add_request_group` | method | (self, request_group) | private | not declared | 4/14 | `src/nova/scheduler/utils.py:L455–L500` |
| `ResourceRequest._add_resource` | method | (self, rclass, amount, group=None) | private | not declared | 1/2 | `src/nova/scheduler/utils.py:L502–L507` |
| `ResourceRequest._add_trait` | method | (self, trait_name, trait_type, group=None) | private | not declared | 1/2 | `src/nova/scheduler/utils.py:L509–L514` |
| `ResourceRequest._add_group_policy` | method | (self, policy) | private | `` (src/nova/scheduler/utils.py:L522) | 2/7 | `src/nova/scheduler/utils.py:L516–L523` |
| `ResourceRequest.get_num_of_suffixed_groups` | method | (self) | public | `len([ident for ident in self._rg_by_id.keys() if ident is not None])` (src/nova/scheduler/utils.py:L526) | 3/3 | `src/nova/scheduler/utils.py:L525–L527` |
| `ResourceRequest.merged_resources` | method | (self) | public | `dict(ret)` (src/nova/scheduler/utils.py:L542) | 3/7 | `src/nova/scheduler/utils.py:L529–L542` |
| `ResourceRequest.strip_zeros` | method | (self) | public | not declared | 4/6 | `src/nova/scheduler/utils.py:L544–L551` |
| `ResourceRequest.to_querystring` | method | (self) | public | `parse.urlencode(sorted(qparams))` (src/nova/scheduler/utils.py:L578) | 8/16 | `src/nova/scheduler/utils.py:L553–L578` |
| `ResourceRequest.all_required_traits` | method | (self) | public | `traits` (src/nova/scheduler/utils.py:L585) | 2/5 | `src/nova/scheduler/utils.py:L581–L585` |
| `ResourceRequest.__str__` | method | (self) | public | `', '.join(sorted( list(str(rg) for rg in list(self._rg_by_id.values()))))` (src/nova/scheduler/utils.py:L588) | 2/3 | `src/nova/scheduler/utils.py:L587–L589` |
| `build_request_spec` | function | (image, instances, flavor=None) | exported | `jsonutils.to_primitive(request_spec)` (src/nova/scheduler/utils.py:L646) | 7/24 | `src/nova/scheduler/utils.py:L592–L646` |
| `resources_from_flavor` | function | (instance, flavor) | exported | `resources_from_flavor_and_bfv(flavor, is_bfv)` (src/nova/scheduler/utils.py:L659) | 1/4 | `src/nova/scheduler/utils.py:L649–L659` |
| `resources_from_flavor_and_bfv` | function | (flavor, is_bfv) | exported | `res_req.merged_resources()` (src/nova/scheduler/utils.py:L681) | 1/4 | `src/nova/scheduler/utils.py:L662–L681` |
| `request_spec_for_limits` | function | (flavor, is_bfv, port_resource_requests=None, dp_request_groups=None) | exported | `req_spec` (src/nova/scheduler/utils.py:L718) | 5/20 | `src/nova/scheduler/utils.py:L684–L718` |
| `resources_from_request_spec` | function | (ctxt, spec_obj, host_manager, enable_pinning_translate=True) | exported | `res_req` (src/nova/scheduler/utils.py:L831) | 27/67 | `src/nova/scheduler/utils.py:L721–L831` |
| `claim_resources_on_destination` | function | (context, reportclient, instance, source_node, dest_node, source_allocations=None, consumer_generation=None) | exported | not declared | 5/47 | `src/nova/scheduler/utils.py:L834–L948` |
| `set_vm_state_and_notify` | function | (context, instance_uuid, service, method, updates, ex, request_spec) | exported | not declared | 3/31 | `src/nova/scheduler/utils.py:L951–L1003` |
| `build_filter_properties` | function | (scheduler_hints, forced_host, forced_node, flavor) | exported | `filter_properties` (src/nova/scheduler/utils.py:L1018) | 3/10 | `src/nova/scheduler/utils.py:L1006–L1018` |
| `populate_filter_properties` | function | (filter_properties, selection) | exported | not declared | 4/10 | `src/nova/scheduler/utils.py:L1021–L1041` |
| `populate_retry` | function | (filter_properties, instance_uuid) | exported | `` (src/nova/scheduler/utils.py:L1059) | 6/27 | `src/nova/scheduler/utils.py:L1044–L1079` |
| `_log_compute_error` | function | (instance_uuid, retry) | unexported | `` (src/nova/scheduler/utils.py:L1088); `` (src/nova/scheduler/utils.py:L1092) | 3/12 | `src/nova/scheduler/utils.py:L1082–L1098` |
| `_add_retry_host` | function | (filter_properties, host, node) | unexported | `` (src/nova/scheduler/utils.py:L1108) | 2/6 | `src/nova/scheduler/utils.py:L1101–L1110` |
| `parse_options` | function | (opts, sep='=', converter=str, name="") | exported | `good` (src/nova/scheduler/utils.py:L1142) | 7/19 | `src/nova/scheduler/utils.py:L1113–L1142` |
| `validate_filter` | function | (filter) | exported | `filter in CONF.filter_scheduler.enabled_filters` (src/nova/scheduler/utils.py:L1147) | 1/2 | `src/nova/scheduler/utils.py:L1145–L1147` |
| `validate_weigher` | function | (weigher) | exported | `True` (src/nova/scheduler/utils.py:L1154); `weigher in weight_classes` (src/nova/scheduler/utils.py:L1155) | 2/5 | `src/nova/scheduler/utils.py:L1150–L1155` |
| `_SUPPORTS_AFFINITY` | variable | — | unexported | not declared | — | `src/nova/scheduler/utils.py:L1158–L1158` |
| `_SUPPORTS_ANTI_AFFINITY` | variable | — | unexported | not declared | — | `src/nova/scheduler/utils.py:L1159–L1159` |
| `_SUPPORTS_SOFT_AFFINITY` | variable | — | unexported | not declared | — | `src/nova/scheduler/utils.py:L1160–L1160` |
| `_SUPPORTS_SOFT_ANTI_AFFINITY` | variable | — | unexported | not declared | — | `src/nova/scheduler/utils.py:L1161–L1161` |
| `reset_globals` | function | — | exported | not declared | 1/9 | `src/nova/scheduler/utils.py:L1164–L1172` |
| `_get_group_details` | function | (context, instance_uuid, user_group_hosts=None) | unexported | `` (src/nova/scheduler/utils.py:L1204); `` (src/nova/scheduler/utils.py:L1210); `GroupDetails(hosts=user_hosts \| group_hosts, policy=group.policy, members=group.members)` (src/nova/scheduler/utils.py:L1234) | 17/49 | `src/nova/scheduler/utils.py:L1175–L1235` |
| `_get_instance_group_hosts_all_cells` | function | (context, instance_group) | unexported | `hosts` (src/nova/scheduler/utils.py:L1258) | 3/9 | `src/nova/scheduler/utils.py:L1238–L1258` |
| `_get_instance_group_hosts_all_cells.get_hosts_in_cell` | function | (cell_context) | public | `cell_instance_group.get_hosts()` (src/nova/scheduler/utils.py:L1246) | — | `src/nova/scheduler/utils.py:L1239–L1246` |
| `setup_instance_group` | function | (context, request_spec) | exported | not declared | 7/19 | `src/nova/scheduler/utils.py:L1261–L1300` |
| `request_is_rebuild` | function | (spec_obj) | exported | `False` (src/nova/scheduler/utils.py:L1309); `False` (src/nova/scheduler/utils.py:L1311); `check_type == ['rebuild']` (src/nova/scheduler/utils.py:L1313) | 3/7 | `src/nova/scheduler/utils.py:L1303–L1313` |
| `claim_resources` | function | (ctx, client, spec_obj, instance_uuid, alloc_req, allocation_request_version=None) | exported | `True` (src/nova/scheduler/utils.py:L1343); `client.claim_resources(ctx, instance_uuid, alloc_req, project_id, user_id, allocation_request_version=allocation_request_version, consumer_generation=None)` (src/nova/scheduler/utils.py:L1370) | 4/17 | `src/nova/scheduler/utils.py:L1316–L1372` |
| `get_weight_multiplier` | function | (host_state, multiplier_name, multiplier_config) | exported | `value` (src/nova/scheduler/utils.py:L1399) | 2/11 | `src/nova/scheduler/utils.py:L1375–L1399` |
| `fill_provider_mapping` | function | (request_spec, host_selection) | exported | `` (src/nova/scheduler/utils.py:L1413) | 3/6 | `src/nova/scheduler/utils.py:L1402–L1431` |
| `fill_provider_mapping_based_on_allocation` | function | (context, report_client, request_spec, allocation) | exported | `` (src/nova/scheduler/utils.py:L1462) | 3/10 | `src/nova/scheduler/utils.py:L1434–L1481` |
| `get_aggregates_for_routed_network` | function | (context, network_api, report_client, network_uuid) | exported | `aggregates` (src/nova/scheduler/utils.py:L1524) | 4/12 | `src/nova/scheduler/utils.py:L1485–L1524` |
| `get_aggregates_for_routed_subnet` | function | (context, network_api, report_client, subnet_id) | exported | `agg_info.aggregates` (src/nova/scheduler/utils.py:L1559); `[]` (src/nova/scheduler/utils.py:L1560) | 4/11 | `src/nova/scheduler/utils.py:L1528–L1560` |
| `ResourceRequest.group_policy` | property | — | public | not declared | — | `src/nova/scheduler/utils.py:L439–L441` |
| `ResourceRequest.all_required_traits` | property | — | public | not declared | — | `src/nova/scheduler/utils.py:L580–L585` |

## Dependencies

- `import collections` (src/nova/scheduler/utils.py:L17)
- `import re` (src/nova/scheduler/utils.py:L18)
- `import sys` (src/nova/scheduler/utils.py:L19)
- `urllib`: imports `parse` (src/nova/scheduler/utils.py:L20)
- `import os_resource_classes as orc` (src/nova/scheduler/utils.py:L22)
- `import os_traits` (src/nova/scheduler/utils.py:L23)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/utils.py:L24)
- `oslo_serialization`: imports `jsonutils` (src/nova/scheduler/utils.py:L25)
- `nova.compute`: imports `flavors` (src/nova/scheduler/utils.py:L27)
- `nova.compute`: imports `utils as compute_utils` (src/nova/scheduler/utils.py:L28)
- `import nova.conf` (src/nova/scheduler/utils.py:L29)
- `nova`: imports `context as nova_context` (src/nova/scheduler/utils.py:L30)
- `nova`: imports `exception` (src/nova/scheduler/utils.py:L31)
- `nova.i18n`: imports `_` (src/nova/scheduler/utils.py:L32)
- `nova`: imports `objects` (src/nova/scheduler/utils.py:L33)
- `nova.objects`: imports `base as obj_base` (src/nova/scheduler/utils.py:L34)
- `nova.objects`: imports `fields as obj_fields` (src/nova/scheduler/utils.py:L35)
- `nova.objects`: imports `instance as obj_instance` (src/nova/scheduler/utils.py:L36)
- `nova.pci`: imports `request as pci_request` (src/nova/scheduler/utils.py:L37)
- `nova`: imports `rpc` (src/nova/scheduler/utils.py:L38)
- `nova.scheduler.filters`: imports `utils as filters_utils` (src/nova/scheduler/utils.py:L39)
- `nova.virt`: imports `hardware` (src/nova/scheduler/utils.py:L40)
- `nova.scheduler.client`: imports `report` (src/nova/scheduler/utils.py:L921)

## Side Effects

- **network**: https://docs.openstack.org/placement/train/specs/train/implemented/2005575-nested-magic-1.html#arbit (src/nova/scheduler/utils.py:L100)
- **network**: https://docs.openstack.org/placement/train/specs/train/implemented/placement-resource-provider-reque (src/nova/scheduler/utils.py:L109)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/utils.py:L43)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/utils.py:L45)
- **global-mutation**: XS_RES_PREFIX = 'resources' (src/nova/scheduler/utils.py:L54)
- **global-mutation**: XS_TRAIT_PREFIX = 'trait' (src/nova/scheduler/utils.py:L55)
- **global-mutation**: XS_KEYPAT = re.compile(r"^(%s)([a-zA-Z0-9_-]{1,64})?:(.*)$" % (src/nova/scheduler/utils.py:L57)

## Security Surface

- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/scheduler/utils.py:L861)
- **sink** (`db-write`): :raises: AllocationUpdateFailed: If a parallel consumer update changed the (src/nova/scheduler/utils.py:L864)
- **sink** (`db-write`): :param instance_uuid: The UUID of the instance to update. (src/nova/scheduler/utils.py:L956)

