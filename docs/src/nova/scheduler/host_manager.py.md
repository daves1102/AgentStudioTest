# src/nova/scheduler/host_manager.py

## Overview

This file implements the `host_manager` module, defining 3 classs, 3 constants, 15 functions, 38 methods, 15 imports, 3 side effects, 15 security surface entries.

Lines: total 976, code 724, comment 120, blank 132

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/host_manager.py:L39–L39` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/host_manager.py:L41–L41` |
| `HOST_INSTANCE_SEMAPHORE` | constant | — | exported | not declared | — | `src/nova/scheduler/host_manager.py:L42–L42` |
| `ReadOnlyDict` | class | — | exported | not declared | — | `src/nova/scheduler/host_manager.py:L45–L69` |
| `ReadOnlyDict.__init__` | method | (self, source=None) | public | not declared | 2/4 | `src/nova/scheduler/host_manager.py:L48–L51` |
| `ReadOnlyDict.__setitem__` | method | (self, key, item) | public | not declared | 1/2 | `src/nova/scheduler/host_manager.py:L53–L54` |
| `ReadOnlyDict.__delitem__` | method | (self, key) | public | not declared | 1/2 | `src/nova/scheduler/host_manager.py:L56–L57` |
| `ReadOnlyDict.clear` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/host_manager.py:L59–L60` |
| `ReadOnlyDict.pop` | method | (self, key, *args) | public | not declared | 1/2 | `src/nova/scheduler/host_manager.py:L62–L63` |
| `ReadOnlyDict.popitem` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/host_manager.py:L65–L66` |
| `ReadOnlyDict.update` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/host_manager.py:L68–L69` |
| `set_update_time_on_success` | function | (function) | exported | `decorated_function` (src/nova/scheduler/host_manager.py:L94) | 1/4 | `src/nova/scheduler/host_manager.py:L73–L94` |
| `set_update_time_on_success.decorated_function` | function | (self, spec_obj) | public | `return_value` (src/nova/scheduler/host_manager.py:L92) | — | `src/nova/scheduler/host_manager.py:L77–L92` |
| `HostState` | class | — | exported | not declared | — | `src/nova/scheduler/host_manager.py:L97–L339` |
| `HostState.__init__` | method | (self, host, node, cell_uuid) | public | not declared | 1/33 | `src/nova/scheduler/host_manager.py:L103–L156` |
| `HostState.update` | method | (self, compute=None, service=None, aggregates=None, inst_dict=None) | public | `_locked_update(self, compute, service, aggregates, inst_dict)` (src/nova/scheduler/host_manager.py:L182) | 1/5 | `src/nova/scheduler/host_manager.py:L158–L182` |
| `HostState.update._locked_update` | function | (self, compute, service, aggregates, inst_dict) | private | not declared | — | `src/nova/scheduler/host_manager.py:L163–L180` |
| `HostState._update_from_compute_node` | method | (self, compute) | private | `` (src/nova/scheduler/host_manager.py:L191); `` (src/nova/scheduler/host_manager.py:L195) | 12/52 | `src/nova/scheduler/host_manager.py:L184–L262` |
| `HostState.consume_from_request` | method | (self, spec_obj) | public | `_locked(self, spec_obj)` (src/nova/scheduler/host_manager.py:L276) | 1/5 | `src/nova/scheduler/host_manager.py:L264–L276` |
| `HostState.consume_from_request._locked` | function | (self, spec_obj) | private | not declared | — | `src/nova/scheduler/host_manager.py:L269–L274` |
| `HostState._locked_consume_from_request` | method | (self, spec_obj) | private | not declared | 7/33 | `src/nova/scheduler/host_manager.py:L278–L322` |
| `HostState.__repr__` | method | (self) | public | `( "(%(host)s, %(node)s) ram: %(free_ram)sMB " "disk: %(free_disk)sMB io_ops: %(num_io_ops)s " "instances: %(num_instances)s, " "allocation_candidates: %(num_a_c)s" % { "host": self.host, "node": self.` (src/nova/scheduler/host_manager.py:L325) | 1/16 | `src/nova/scheduler/host_manager.py:L324–L339` |
| `HostManager` | class | — | exported | not declared | — | `src/nova/scheduler/host_manager.py:L342–L976` |
| `HostManager.host_state_cls` | method | (self, host, node, cell, **kwargs) | public | `HostState(host, node, cell)` (src/nova/scheduler/host_manager.py:L347) | 1/2 | `src/nova/scheduler/host_manager.py:L346–L347` |
| `HostManager.__init__` | method | (self) | public | not declared | 4/20 | `src/nova/scheduler/host_manager.py:L349–L372` |
| `HostManager._load_filters` | method | (self) | private | `CONF.filter_scheduler.enabled_filters` (src/nova/scheduler/host_manager.py:L375) | 1/2 | `src/nova/scheduler/host_manager.py:L374–L375` |
| `HostManager._init_aggregates` | method | (self) | private | not declared | 3/7 | `src/nova/scheduler/host_manager.py:L377–L383` |
| `HostManager.update_aggregates` | method | (self, aggregates) | public | not declared | 3/6 | `src/nova/scheduler/host_manager.py:L385–L391` |
| `HostManager._update_aggregate` | method | (self, aggregate) | private | not declared | 5/8 | `src/nova/scheduler/host_manager.py:L393–L402` |
| `HostManager.delete_aggregate` | method | (self, aggregate) | public | not declared | 4/6 | `src/nova/scheduler/host_manager.py:L404–L411` |
| `HostManager._init_instance_info` | method | (self, computes_by_cell=None) | private | not declared | 1/3 | `src/nova/scheduler/host_manager.py:L413–L472` |
| `HostManager._init_instance_info._async_init_instance_info` | function | (computes_by_cell) | private | not declared | — | `src/nova/scheduler/host_manager.py:L425–L469` |
| `HostManager._choose_host_filters` | method | (self, filter_cls_names) | private | `good_filters` (src/nova/scheduler/host_manager.py:L496) | 6/17 | `src/nova/scheduler/host_manager.py:L474–L496` |
| `HostManager.get_filtered_hosts` | method | (self, hosts, spec_obj, index=0) | public | `[]` (src/nova/scheduler/host_manager.py:L597); `name_to_cls_map.values()` (src/nova/scheduler/host_manager.py:L611); `[]` (src/nova/scheduler/host_manager.py:L613); `self.filter_handler.get_filtered_objects(self.enabled_filters, hosts, spec_obj, index)` (src/nova/scheduler/host_manager.py:L616) | 19/31 | `src/nova/scheduler/host_manager.py:L498–L617` |
| `HostManager.get_filtered_hosts._strip_ignore_hosts` | function | (host_map, hosts_to_ignore) | private | not declared | — | `src/nova/scheduler/host_manager.py:L501–L509` |
| `HostManager.get_filtered_hosts._match_forced_hosts` | function | (host_map, hosts_to_force) | private | not declared | — | `src/nova/scheduler/host_manager.py:L511–L526` |
| `HostManager.get_filtered_hosts._match_forced_nodes` | function | (host_map, nodes_to_force) | private | not declared | — | `src/nova/scheduler/host_manager.py:L528–L542` |
| `HostManager.get_filtered_hosts._get_hosts_matching_request` | function | (hosts, requested_destination) | private | `iter(requested_nodes)` (src/nova/scheduler/host_manager.py:L578) | — | `src/nova/scheduler/host_manager.py:L544–L578` |
| `HostManager.get_weighed_hosts` | method | (self, hosts, spec_obj) | public | `self.weight_handler.get_weighed_objects(self.weighers, hosts, spec_obj)` (src/nova/scheduler/host_manager.py:L621) | 1/3 | `src/nova/scheduler/host_manager.py:L619–L622` |
| `HostManager._get_computes_for_cells` | method | (self, context, cells, compute_uuids) | private | `compute_nodes, services` (src/nova/scheduler/host_manager.py:L664) | 5/18 | `src/nova/scheduler/host_manager.py:L624–L664` |
| `HostManager._get_computes_for_cells.targeted_operation` | function | (cctxt) | public | `services, objects.ComputeNodeList.get_all(cctxt)` (src/nova/scheduler/host_manager.py:L644); `services, objects.ComputeNodeList.get_all_by_uuids( cctxt, compute_uuids)` (src/nova/scheduler/host_manager.py:L646) | — | `src/nova/scheduler/host_manager.py:L640–L647` |
| `HostManager._get_cell_by_host` | method | (self, ctxt, host) | private | `host_mapping.cell_mapping` (src/nova/scheduler/host_manager.py:L670); `` (src/nova/scheduler/host_manager.py:L674) | 2/8 | `src/nova/scheduler/host_manager.py:L666–L674` |
| `HostManager.get_compute_nodes_by_host_or_node` | method | (self, ctxt, host, node, cell=None) | public | `nodes` (src/nova/scheduler/host_manager.py:L727) | 10/25 | `src/nova/scheduler/host_manager.py:L676–L727` |
| `HostManager.get_compute_nodes_by_host_or_node.return_empty_list_for_not_found` | function | (func) | public | `wrapper` (src/nova/scheduler/host_manager.py:L685) | — | `src/nova/scheduler/host_manager.py:L678–L685` |
| `HostManager.get_compute_nodes_by_host_or_node.return_empty_list_for_not_found.wrapper` | function | (*args, **kwargs) | public | `ret` (src/nova/scheduler/host_manager.py:L684) | — | `src/nova/scheduler/host_manager.py:L679–L684` |
| `HostManager.get_compute_nodes_by_host_or_node._get_by_host_and_node` | function | (ctxt) | private | `objects.ComputeNodeList(objects=[compute_node])` (src/nova/scheduler/host_manager.py:L691) | — | `src/nova/scheduler/host_manager.py:L688–L691` |
| `HostManager.get_compute_nodes_by_host_or_node._get_by_host` | function | (ctxt) | private | `objects.ComputeNodeList.get_all_by_host(ctxt, host)` (src/nova/scheduler/host_manager.py:L695) | — | `src/nova/scheduler/host_manager.py:L694–L695` |
| `HostManager.get_compute_nodes_by_host_or_node._get_by_node` | function | (ctxt) | private | `objects.ComputeNodeList(objects=[compute_node])` (src/nova/scheduler/host_manager.py:L700) | — | `src/nova/scheduler/host_manager.py:L698–L700` |
| `HostManager.refresh_cells_caches` | method | (self) | public | not declared | 10/19 | `src/nova/scheduler/host_manager.py:L729–L764` |
| `HostManager.get_host_states_by_uuids` | method | (self, context, compute_uuids, spec_obj) | public | `self._get_host_states(context, compute_nodes, services)` (src/nova/scheduler/host_manager.py:L787) | 8/17 | `src/nova/scheduler/host_manager.py:L766–L787` |
| `HostManager._get_host_states` | method | (self, context, compute_nodes, services) | private | `(host_state_map[host] for host in seen_nodes)` (src/nova/scheduler/host_manager.py:L826) | 6/26 | `src/nova/scheduler/host_manager.py:L789–L826` |
| `HostManager._get_aggregates_info` | method | (self, host) | private | `[self.aggs_by_id[agg_id] for agg_id in self.host_aggregates_map[host]]` (src/nova/scheduler/host_manager.py:L829) | 2/3 | `src/nova/scheduler/host_manager.py:L828–L830` |
| `HostManager._get_cell_mapping_for_host` | method | (self, context, host_name) | private | `self.cells[cell_uuid]` (src/nova/scheduler/host_manager.py:L848); `cell_mapping` (src/nova/scheduler/host_manager.py:L861) | 3/13 | `src/nova/scheduler/host_manager.py:L832–L861` |
| `HostManager._get_instances_by_host` | method | (self, context, host_name) | private | `{}` (src/nova/scheduler/host_manager.py:L872); `{uuid: objects.Instance(cctxt, uuid=uuid) for uuid in uuids}` (src/nova/scheduler/host_manager.py:L877) | 3/10 | `src/nova/scheduler/host_manager.py:L863–L877` |
| `HostManager._get_instance_info` | method | (self, context, compute) | private | `inst_dict` (src/nova/scheduler/host_manager.py:L895) | 3/8 | `src/nova/scheduler/host_manager.py:L879–L895` |
| `HostManager._recreate_instance_info` | method | (self, context, host_name) | private | not declared | 1/5 | `src/nova/scheduler/host_manager.py:L897–L904` |
| `HostManager.update_instance_info` | method | (self, context, host_name, instance_info) | public | not declared | 5/18 | `src/nova/scheduler/host_manager.py:L907–L932` |
| `HostManager.delete_instance_info` | method | (self, context, host_name, instance_uuid) | public | not declared | 2/10 | `src/nova/scheduler/host_manager.py:L935–L950` |
| `HostManager.sync_instance_info` | method | (self, context, host_name, instance_uuids) | public | `` (src/nova/scheduler/host_manager.py:L969) | 3/17 | `src/nova/scheduler/host_manager.py:L953–L976` |

## Dependencies

- `import collections` (src/nova/scheduler/host_manager.py:L20)
- `import datetime` (src/nova/scheduler/host_manager.py:L21)
- `import functools` (src/nova/scheduler/host_manager.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/host_manager.py:L24)
- `oslo_utils`: imports `timeutils` (src/nova/scheduler/host_manager.py:L25)
- `import nova.conf` (src/nova/scheduler/host_manager.py:L27)
- `nova`: imports `context as context_module` (src/nova/scheduler/host_manager.py:L28)
- `nova`: imports `exception` (src/nova/scheduler/host_manager.py:L29)
- `nova`: imports `objects` (src/nova/scheduler/host_manager.py:L30)
- `nova.pci`: imports `stats as pci_stats` (src/nova/scheduler/host_manager.py:L31)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/host_manager.py:L32)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/host_manager.py:L33)
- `nova`: imports `thread_pool_factory` (src/nova/scheduler/host_manager.py:L34)
- `nova`: imports `utils` (src/nova/scheduler/host_manager.py:L35)
- `nova.virt`: imports `hardware` (src/nova/scheduler/host_manager.py:L36)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/host_manager.py:L39)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/host_manager.py:L41)
- **global-mutation**: HOST_INSTANCE_SEMAPHORE = "host_instance" (src/nova/scheduler/host_manager.py:L42)

## Security Surface

- **sink** (`db-write`): self.data.update(source) (src/nova/scheduler/host_manager.py:L51)
- **sink** (`db-write`): def update(self): (src/nova/scheduler/host_manager.py:L68)
- **sink** (`db-write`): def update(self, compute=None, service=None, aggregates=None, (src/nova/scheduler/host_manager.py:L158)
- **sink** (`db-write`): """Update all information about a host.""" (src/nova/scheduler/host_manager.py:L160)
- **sink** (`db-write`): LOG.debug("Update host state from compute node: %s", compute) (src/nova/scheduler/host_manager.py:L169)
- **sink** (`db-write`): LOG.debug("Update host state with aggregates: %s", aggregates) (src/nova/scheduler/host_manager.py:L172)
- **sink** (`db-write`): LOG.debug("Update host state with service dict: %s", service) (src/nova/scheduler/host_manager.py:L175)
- **sink** (`db-write`): LOG.debug("Update host state with instances: %s", (src/nova/scheduler/host_manager.py:L178)
- **sink** (`db-write`): """Update information about a host from a ComputeNode object.""" (src/nova/scheduler/host_manager.py:L185)
- **sink** (`db-write`): """Incrementally update host state from a RequestSpec object.""" (src/nova/scheduler/host_manager.py:L265)
- **sink** (`db-write`): host/node to select hosts to launch a server: (src/nova/scheduler/host_manager.py:L550)
- **sink** (`db-write`): services.update({service.host: service (src/nova/scheduler/host_manager.py:L662)
- **sink** (`db-write`): host_state.update(compute, (src/nova/scheduler/host_manager.py:L819)
- **sink** (`db-write`): LOG.info("Received an update from an unknown host '%s'. " (src/nova/scheduler/host_manager.py:L931)
- **sink** (`db-write`): LOG.info("Received a delete update from an unknown host '%s'. " (src/nova/scheduler/host_manager.py:L949)

