# src/nova/compute/resource_tracker.py

## Overview

This file implements the `resource_tracker` module, defining 1 class, 3 constants, 3 functions, 68 methods, 30 imports, 3 side effects, 10 security surface entries.

Lines: total 2269, code 1527, comment 481, blank 261

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/resource_tracker.py:L55–L55` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/resource_tracker.py:L57–L57` |
| `COMPUTE_RESOURCE_SEMAPHORE` | constant | — | exported | not declared | — | `src/nova/compute/resource_tracker.py:L58–L58` |
| `_instance_in_resize_state` | function | (instance) | unexported | `True` (src/nova/compute/resource_tracker.py:L70); `True` (src/nova/compute/resource_tracker.py:L74); `False` (src/nova/compute/resource_tracker.py:L76) | 4/9 | `src/nova/compute/resource_tracker.py:L61–L76` |
| `_instance_is_live_migrating` | function | (instance) | unexported | `True` (src/nova/compute/resource_tracker.py:L84); `False` (src/nova/compute/resource_tracker.py:L85) | 3/7 | `src/nova/compute/resource_tracker.py:L79–L85` |
| `ResourceTracker` | class | — | exported | not declared | — | `src/nova/compute/resource_tracker.py:L88–L2269` |
| `ResourceTracker.__init__` | method | (self, host, driver, reportclient=None) | public | not declared | 2/23 | `src/nova/compute/resource_tracker.py:L93–L127` |
| `ResourceTracker.set_service_ref` | method | (self, service_ref) | public | not declared | 4/9 | `src/nova/compute/resource_tracker.py:L129–L139` |
| `ResourceTracker._invalidate_pci_in_placement_cached_rps` | method | (self, allocs) | private | `` (src/nova/compute/resource_tracker.py:L149) | 5/11 | `src/nova/compute/resource_tracker.py:L141–L159` |
| `ResourceTracker.instance_claim` | method | (self, context, instance, nodename, allocations, limits=None) | public | `claim` (src/nova/compute/resource_tracker.py:L242) | 5/33 | `src/nova/compute/resource_tracker.py:L162–L242` |
| `ResourceTracker.rebuild_claim` | method | (self, context, instance, nodename, allocations, limits=None, image_meta=None, migration=None) | public | `self._move_claim( context, instance, instance.flavor, nodename, migration, allocations, move_type=fields.MigrationType.EVACUATION, image_meta=image_meta, limits=limits)` (src/nova/compute/resource_tracker.py:L248) | 1/6 | `src/nova/compute/resource_tracker.py:L245–L251` |
| `ResourceTracker.resize_claim` | method | (self, context, instance, flavor, nodename, migration, allocations, image_meta=None, limits=None) | public | `self._move_claim( context, instance, flavor, nodename, migration, allocations, image_meta=image_meta, limits=limits)` (src/nova/compute/resource_tracker.py:L263) | 1/7 | `src/nova/compute/resource_tracker.py:L254–L265` |
| `ResourceTracker.live_migration_claim` | method | (self, context, instance, nodename, migration, limits, allocs) | public | `self._move_claim( context, instance, flavor, nodename, migration, allocs, move_type=fields.MigrationType.LIVE_MIGRATION, image_meta=image_meta, limits=limits, )` (src/nova/compute/resource_tracker.py:L286) | 1/10 | `src/nova/compute/resource_tracker.py:L268–L290` |
| `ResourceTracker._move_claim` | method | (self, context, instance, new_flavor, nodename, migration, allocations, move_type=None, image_meta=None, limits=None) | private | `claim` (src/nova/compute/resource_tracker.py:L410) | 9/54 | `src/nova/compute/resource_tracker.py:L292–L410` |
| `ResourceTracker._create_migration` | method | (self, context, instance, new_flavor, node, move_type=None) | private | `migration` (src/nova/compute/resource_tracker.py:L436) | 2/21 | `src/nova/compute/resource_tracker.py:L412–L436` |
| `ResourceTracker._claim_existing_migration` | method | (self, migration, node) | private | not declared | 2/8 | `src/nova/compute/resource_tracker.py:L438–L455` |
| `ResourceTracker._claim_resources` | method | (self, allocations) | private | `None` (src/nova/compute/resource_tracker.py:L462); `objects.ResourceList(objects=claimed_resources)` (src/nova/compute/resource_tracker.py:L497) | 9/29 | `src/nova/compute/resource_tracker.py:L457–L497` |
| `ResourceTracker._populate_assigned_resources` | method | (self, context, instance_by_uuid) | private | not declared | 11/14 | `src/nova/compute/resource_tracker.py:L499–L527` |
| `ResourceTracker._check_resources` | method | (self, context) | private | `` (src/nova/compute/resource_tracker.py:L538) | 5/14 | `src/nova/compute/resource_tracker.py:L529–L548` |
| `ResourceTracker._release_assigned_resources` | method | (self, resources) | private | `` (src/nova/compute/resource_tracker.py:L553) | 4/14 | `src/nova/compute/resource_tracker.py:L550–L564` |
| `ResourceTracker._add_assigned_resources` | method | (self, resources) | private | `` (src/nova/compute/resource_tracker.py:L569) | 3/7 | `src/nova/compute/resource_tracker.py:L566–L573` |
| `ResourceTracker._set_instance_host_and_node` | method | (self, instance, node) | private | not declared | 2/7 | `src/nova/compute/resource_tracker.py:L575–L594` |
| `ResourceTracker._unset_instance_host_and_node` | method | (self, instance) | private | not declared | 1/5 | `src/nova/compute/resource_tracker.py:L596–L605` |
| `ResourceTracker.abort_instance_claim` | method | (self, context, instance, nodename) | public | not declared | 1/6 | `src/nova/compute/resource_tracker.py:L608–L616` |
| `ResourceTracker._drop_pci_devices` | method | (self, instance, nodename, prefix) | private | not declared | 4/9 | `src/nova/compute/resource_tracker.py:L618–L628` |
| `ResourceTracker.drop_move_claim_at_source` | method | (self, context, instance, migration) | public | not declared | 1/7 | `src/nova/compute/resource_tracker.py:L631–L644` |
| `ResourceTracker.drop_move_claim_at_dest` | method | (self, context, instance, migration) | public | not declared | 1/8 | `src/nova/compute/resource_tracker.py:L647–L662` |
| `ResourceTracker.drop_move_claim` | method | (self, context, instance, nodename, flavor=None, prefix='new_') | public | not declared | 1/4 | `src/nova/compute/resource_tracker.py:L665–L668` |
| `ResourceTracker._drop_move_claim` | method | (self, context, instance, nodename, flavor=None, prefix='new_') | private | not declared | 4/22 | `src/nova/compute/resource_tracker.py:L670–L716` |
| `ResourceTracker.update_usage` | method | (self, context, instance, nodename) | public | `` (src/nova/compute/resource_tracker.py:L724) | 3/7 | `src/nova/compute/resource_tracker.py:L719–L732` |
| `ResourceTracker.disabled` | method | (self, nodename) | public | `(nodename not in self.compute_nodes or not self.driver.node_is_available(nodename))` (src/nova/compute/resource_tracker.py:L735) | 2/3 | `src/nova/compute/resource_tracker.py:L734–L736` |
| `ResourceTracker._init_compute_node` | method | (self, context, resources) | private | `False` (src/nova/compute/resource_tracker.py:L771); `False` (src/nova/compute/resource_tracker.py:L798); `True` (src/nova/compute/resource_tracker.py:L824) | 10/50 | `src/nova/compute/resource_tracker.py:L738–L824` |
| `ResourceTracker._setup_pci_tracker` | method | (self, context, compute_node, resources) | private | not declared | 3/9 | `src/nova/compute/resource_tracker.py:L826–L835` |
| `ResourceTracker._copy_resources` | method | (self, compute_node, resources, initial=False) | private | not declared | 4/17 | `src/nova/compute/resource_tracker.py:L837–L880` |
| `ResourceTracker.remove_node` | method | (self, nodename) | public | not declared | 1/4 | `src/nova/compute/resource_tracker.py:L882–L890` |
| `ResourceTracker._get_host_metrics` | method | (self, context, nodename) | private | `metric_list` (src/nova/compute/resource_tracker.py:L920) | 5/24 | `src/nova/compute/resource_tracker.py:L892–L920` |
| `ResourceTracker.update_available_resource` | method | (self, context, nodename, startup=False) | public | not declared | 4/14 | `src/nova/compute/resource_tracker.py:L922–L965` |
| `ResourceTracker._pair_instances_to_migrations` | method | (self, migrations, instance_by_uuid) | private | not declared | 3/8 | `src/nova/compute/resource_tracker.py:L967–L981` |
| `ResourceTracker._ensure_compute_id_for_instances` | method | (self, context, instances, node) | private | not declared | 6/16 | `src/nova/compute/resource_tracker.py:L983–L1001` |
| `ResourceTracker._update_available_resource` | method | (self, context, resources, startup=False) | private | `` (src/nova/compute/resource_tracker.py:L1015) | 9/50 | `src/nova/compute/resource_tracker.py:L1004–L1112` |
| `ResourceTracker._get_compute_node` | method | (self, context, node_uuid) | private | `objects.ComputeNode.get_by_uuid(context, node_uuid)` (src/nova/compute/resource_tracker.py:L1117) | 2/6 | `src/nova/compute/resource_tracker.py:L1114–L1120` |
| `ResourceTracker._report_hypervisor_resource_view` | method | (self, resources) | private | not declared | 2/21 | `src/nova/compute/resource_tracker.py:L1122–L1155` |
| `ResourceTracker._report_final_resource_view` | method | (self, nodename) | private | not declared | 4/35 | `src/nova/compute/resource_tracker.py:L1157–L1196` |
| `ResourceTracker._resource_change` | method | (self, compute_node) | private | `True` (src/nova/compute/resource_tracker.py:L1205); `False` (src/nova/compute/resource_tracker.py:L1206) | 2/8 | `src/nova/compute/resource_tracker.py:L1198–L1206` |
| `ResourceTracker._sync_compute_service_disabled_trait` | method | (self, context, traits) | private | not declared | 3/11 | `src/nova/compute/resource_tracker.py:L1208–L1232` |
| `ResourceTracker._should_expose_remote_managed_ports_trait` | method | (self, is_supported) | private | `(is_supported and self.pci_tracker.pci_stats.has_remote_managed_device_pools())` (src/nova/compute/resource_tracker.py:L1253) | 2/4 | `src/nova/compute/resource_tracker.py:L1234–L1254` |
| `ResourceTracker._get_traits` | method | (self, context, nodename, provider_tree) | private | `list(traits)` (src/nova/compute/resource_tracker.py:L1296) | 5/15 | `src/nova/compute/resource_tracker.py:L1256–L1296` |
| `ResourceTracker._update_to_placement` | method | (self, context, compute_node, startup) | private | not declared | 8/43 | `src/nova/compute/resource_tracker.py:L1308–L1413` |
| `ResourceTracker._update` | method | (self, context, compute_node, startup=False) | private | not declared | 5/15 | `src/nova/compute/resource_tracker.py:L1415–L1447` |
| `ResourceTracker._update_usage` | method | (self, usage, nodename, sign=1) | private | not declared | 3/21 | `src/nova/compute/resource_tracker.py:L1449–L1486` |
| `ResourceTracker._get_migration_context_resource` | method | (self, resource, instance, prefix='new_') | private | `getattr(migration_context, resource)` (src/nova/compute/resource_tracker.py:L1493); `None` (src/nova/compute/resource_tracker.py:L1494) | 3/7 | `src/nova/compute/resource_tracker.py:L1488–L1494` |
| `ResourceTracker._update_usage_from_migration` | method | (self, context, instance, migration, nodename) | private | not declared | 15/54 | `src/nova/compute/resource_tracker.py:L1496–L1577` |
| `ResourceTracker._update_usage_from_migrations` | method | (self, context, migrations, nodename) | private | not declared | 14/47 | `src/nova/compute/resource_tracker.py:L1579–L1646` |
| `ResourceTracker._release_leaked_move_claims` | method | (self, context, migrations, instance_by_uuid, nodename) | private | not declared | 10/27 | `src/nova/compute/resource_tracker.py:L1648–L1710` |
| `ResourceTracker._update_usage_from_instance` | method | (self, context, instance, nodename, is_removed=False) | private | not declared | 11/33 | `src/nova/compute/resource_tracker.py:L1712–L1759` |
| `ResourceTracker._update_usage_from_instances` | method | (self, context, instances, nodename) | private | `instance_by_uuid` (src/nova/compute/resource_tracker.py:L1786) | 3/18 | `src/nova/compute/resource_tracker.py:L1761–L1786` |
| `ResourceTracker._remove_deleted_instances_allocations` | method | (self, context, cn, migrations, instance_by_uuid) | private | `` (src/nova/compute/resource_tracker.py:L1805); `` (src/nova/compute/resource_tracker.py:L1810) | 17/79 | `src/nova/compute/resource_tracker.py:L1788–L1920` |
| `ResourceTracker.delete_allocation_for_evacuated_instance` | method | (self, context, instance, node, node_type='source') | public | not declared | 2/8 | `src/nova/compute/resource_tracker.py:L1922–L1930` |
| `ResourceTracker.delete_allocation_for_shelve_offloaded_instance` | method | (self, context, instance) | public | not declared | 1/4 | `src/nova/compute/resource_tracker.py:L1932–L1935` |
| `ResourceTracker._verify_resources` | method | (self, resources) | private | not declared | 4/8 | `src/nova/compute/resource_tracker.py:L1937–L1945` |
| `ResourceTracker._get_flavor` | method | (self, instance, prefix, migration) | private | `getattr(instance, '%sflavor' % prefix)` (src/nova/compute/resource_tracker.py:L1950); `instance.flavor` (src/nova/compute/resource_tracker.py:L1955) | 2/4 | `src/nova/compute/resource_tracker.py:L1947–L1955` |
| `ResourceTracker._get_usage_dict` | method | (self, object_or_dict, instance, **updates) | private | `usage` (src/nova/compute/resource_tracker.py:L2005) | 7/22 | `src/nova/compute/resource_tracker.py:L1957–L2005` |
| `ResourceTracker._get_usage_dict._is_bfv` | function | — | private | `is_bfv` (src/nova/compute/resource_tracker.py:L1983) | — | `src/nova/compute/resource_tracker.py:L1975–L1983` |
| `ResourceTracker._merge_provider_configs` | method | (self, provider_configs, provider_tree) | private | not declared | 17/74 | `src/nova/compute/resource_tracker.py:L2007–L2118` |
| `ResourceTracker._get_providers_to_update` | method | (self, uuid_or_name, provider_tree, source_file) | private | `[root.data() for root in provider_tree.roots if os_traits.COMPUTE_NODE in root.traits]` (src/nova/compute/resource_tracker.py:L2135); `providers_to_update` (src/nova/compute/resource_tracker.py:L2154) | 6/19 | `src/nova/compute/resource_tracker.py:L2120–L2154` |
| `ResourceTracker.build_failed` | method | (self, nodename) | public | not declared | 1/2 | `src/nova/compute/resource_tracker.py:L2156–L2158` |
| `ResourceTracker.build_succeeded` | method | (self, nodename) | public | not declared | 1/2 | `src/nova/compute/resource_tracker.py:L2160–L2162` |
| `ResourceTracker.claim_pci_devices` | method | (self, context, pci_requests, instance_numa_topology) | public | `result` (src/nova/compute/resource_tracker.py:L2178) | 1/5 | `src/nova/compute/resource_tracker.py:L2165–L2178` |
| `ResourceTracker.unclaim_pci_devices` | method | (self, context, pci_device, instance) | public | not declared | 1/3 | `src/nova/compute/resource_tracker.py:L2181–L2190` |
| `ResourceTracker.allocate_pci_devices_for_instance` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/compute/resource_tracker.py:L2193–L2200` |
| `ResourceTracker.free_pci_device_allocations_for_instance` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/compute/resource_tracker.py:L2203–L2210` |
| `ResourceTracker.free_pci_device_claims_for_instance` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/compute/resource_tracker.py:L2213–L2220` |
| `ResourceTracker.finish_evacuation` | method | (self, instance, node, migration) | public | not declared | 4/10 | `src/nova/compute/resource_tracker.py:L2223–L2241` |
| `ResourceTracker.clean_compute_node_cache` | method | (self, compute_nodes_in_db) | public | not declared | 3/7 | `src/nova/compute/resource_tracker.py:L2244–L2259` |
| `ResourceTracker.get_node_by_name` | method | (self, nodename) | public | `self.compute_nodes[nodename]` (src/nova/compute/resource_tracker.py:L2267) | 2/5 | `src/nova/compute/resource_tracker.py:L2261–L2269` |

## Dependencies

- `import collections` (src/nova/compute/resource_tracker.py:L21)
- `import copy` (src/nova/compute/resource_tracker.py:L22)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/compute/resource_tracker.py:L24)
- `import os_traits` (src/nova/compute/resource_tracker.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/compute/resource_tracker.py:L26)
- `oslo_serialization`: imports `jsonutils` (src/nova/compute/resource_tracker.py:L27)
- `oslo_utils`: imports `excutils` (src/nova/compute/resource_tracker.py:L28)
- `import retrying` (src/nova/compute/resource_tracker.py:L29)
- `nova.compute`: imports `claims` (src/nova/compute/resource_tracker.py:L31)
- `nova.compute`: imports `monitors` (src/nova/compute/resource_tracker.py:L32)
- `nova.compute`: imports `pci_placement_translator` (src/nova/compute/resource_tracker.py:L33)
- `nova.compute`: imports `provider_config` (src/nova/compute/resource_tracker.py:L34)
- `nova.compute`: imports `stats as compute_stats` (src/nova/compute/resource_tracker.py:L35)
- `nova.compute`: imports `task_states` (src/nova/compute/resource_tracker.py:L36)
- `nova.compute`: imports `utils as compute_utils` (src/nova/compute/resource_tracker.py:L37)
- `nova.compute`: imports `vm_states` (src/nova/compute/resource_tracker.py:L38)
- `import nova.conf` (src/nova/compute/resource_tracker.py:L39)
- `nova`: imports `exception` (src/nova/compute/resource_tracker.py:L40)
- `nova.i18n`: imports `_` (src/nova/compute/resource_tracker.py:L41)
- `nova`: imports `objects` (src/nova/compute/resource_tracker.py:L42)
- `nova.objects`: imports `base as obj_base` (src/nova/compute/resource_tracker.py:L43)
- `nova.objects`: imports `fields` (src/nova/compute/resource_tracker.py:L44)
- `nova.objects`: imports `migration as migration_obj` (src/nova/compute/resource_tracker.py:L45)
- `nova.pci`: imports `manager as pci_manager` (src/nova/compute/resource_tracker.py:L46)
- `nova.pci`: imports `request as pci_request` (src/nova/compute/resource_tracker.py:L47)
- `nova`: imports `rpc` (src/nova/compute/resource_tracker.py:L48)
- `nova.scheduler.client`: imports `report` (src/nova/compute/resource_tracker.py:L49)
- `nova`: imports `utils` (src/nova/compute/resource_tracker.py:L50)
- `nova.virt`: imports `hardware` (src/nova/compute/resource_tracker.py:L51)
- `nova.virt`: imports `node` (src/nova/compute/resource_tracker.py:L52)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/resource_tracker.py:L55)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/resource_tracker.py:L57)
- **global-mutation**: COMPUTE_RESOURCE_SEMAPHORE = "compute_resources" (src/nova/compute/resource_tracker.py:L58)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/compute/resource_tracker.py:L24)
- **sink** (`db-write`): """Update the resource usage and stats after a change in an (src/nova/compute/resource_tracker.py:L720)
- **sink** (`db-write`): notifier.info(context, 'compute.metrics.update', metrics_info) (src/nova/compute/resource_tracker.py:L917)
- **sink** (`db-write`): """Update partial stats locally and populate them to Scheduler.""" (src/nova/compute/resource_tracker.py:L1416)
- **sink** (`db-write`): """Update usage for a single migration.  The record may (src/nova/compute/resource_tracker.py:L1498)
- **sink** (`db-write`): """Update usage for a single instance.""" (src/nova/compute/resource_tracker.py:L1714)
- **sink** (`db-write`): :param updates: key-value pairs to update the passed object. (src/nova/compute/resource_tracker.py:L1967)
- **sink** (`db-write`): usage.update(object_or_dict) (src/nova/compute/resource_tracker.py:L2000)
- **sink** (`db-write`): providers in the update that are not present in the tree are logged (src/nova/compute/resource_tracker.py:L2009)
- **sink** (`db-write`): merged_inventory.update(inventory) (src/nova/compute/resource_tracker.py:L2110)

