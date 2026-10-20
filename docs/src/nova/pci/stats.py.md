# src/nova/pci/stats.py

## Overview

This file implements the `stats` module, defining 1 class, 2 constants, 2 fields, 1 function, 34 methods, 3 staticmethods, 1 variable, 14 imports, 2 side effects, 2 security surface entries.

Lines: total 1075, code 746, comment 179, blank 150

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/pci/stats.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/pci/stats.py:L35–L35` |
| `Pool` | variable | — | exported | not declared | — | `src/nova/pci/stats.py:L41–L41` |
| `PciDeviceStats` | class | — | exported | not declared | — | `src/nova/pci/stats.py:L44–L1075` |
| `PciDeviceStats.pool_keys` | field | — | public | not declared | — | `src/nova/pci/stats.py:L68–L68` |
| `PciDeviceStats.ignored_spec_tags` | field | — | public | not declared | — | `src/nova/pci/stats.py:L73–L73` |
| `PciDeviceStats.__init__` | method | (self, numa_topology, stats=None, dev_filter=None) | public | not declared | 4/13 | `src/nova/pci/stats.py:L83–L95` |
| `PciDeviceStats._equal_properties` | method | (self, dev, entry, matching_keys) | private | `all(dev.get(prop) == entry.get(prop) for prop in matching_keys)` (src/nova/pci/stats.py:L100) | 2/5 | `src/nova/pci/stats.py:L97–L101` |
| `PciDeviceStats._find_pool` | method | (self, dev_pool) | private | `pool` (src/nova/pci/stats.py:L114); `None` (src/nova/pci/stats.py:L116) | 5/11 | `src/nova/pci/stats.py:L103–L116` |
| `PciDeviceStats._ensure_remote_managed_tag` | method | (dev, pool) | private | `` (src/nova/pci/stats.py:L130) | 3/8 | `src/nova/pci/stats.py:L119–L138` |
| `PciDeviceStats._create_pool_keys_from_dev` | method | (self, dev) | private | `None` (src/nova/pci/stats.py:L152); `pool` (src/nova/pci/stats.py:L182) | 8/21 | `src/nova/pci/stats.py:L140–L182` |
| `PciDeviceStats._get_pool_with_device_type_mismatch` | method | (self, dev) | private | `pool, device` (src/nova/pci/stats.py:L196); `None` (src/nova/pci/stats.py:L197); `None` (src/nova/pci/stats.py:L199) | 5/10 | `src/nova/pci/stats.py:L184–L199` |
| `PciDeviceStats.update_device` | method | (self, dev) | public | `None` (src/nova/pci/stats.py:L205) | 2/8 | `src/nova/pci/stats.py:L201–L210` |
| `PciDeviceStats.add_device` | method | (self, dev) | public | not declared | 3/12 | `src/nova/pci/stats.py:L212–L224` |
| `PciDeviceStats._decrease_pool_count` | method | (pool_list, pool, count=1) | private | `count` (src/nova/pci/stats.py:L240) | 2/10 | `src/nova/pci/stats.py:L227–L240` |
| `PciDeviceStats.remove_device` | method | (self, dev) | public | not declared | 3/9 | `src/nova/pci/stats.py:L242–L251` |
| `PciDeviceStats.get_free_devs` | method | (self) | public | `free_devs` (src/nova/pci/stats.py:L257) | 2/5 | `src/nova/pci/stats.py:L253–L257` |
| `PciDeviceStats._allocate_devs` | method | (self, pool, num, request_id) | private | `alloc_devices` (src/nova/pci/stats.py:L268) | 2/10 | `src/nova/pci/stats.py:L259–L268` |
| `PciDeviceStats.consume_requests` | method | (self, pci_requests, numa_cells=None) | public | `alloc_devices` (src/nova/pci/stats.py:L332) | 10/46 | `src/nova/pci/stats.py:L270–L332` |
| `PciDeviceStats._handle_device_dependents` | method | (self, pci_dev) | private | `` (src/nova/pci/stats.py:L362) | 8/18 | `src/nova/pci/stats.py:L334–L362` |
| `PciDeviceStats._filter_pools_for_spec` | method | (self, pools, request) | private | `[ pool for pool in pools if utils.pci_device_prop_match(pool, request_specs) ]` (src/nova/pci/stats.py:L388) | 4/9 | `src/nova/pci/stats.py:L364–L391` |
| `PciDeviceStats._filter_pools_for_spec.ignore_keys` | function | (spec) | public | `{ k: v for k, v in spec.items() if k not in self.ignored_spec_tags }` (src/nova/pci/stats.py:L381) | — | `src/nova/pci/stats.py:L380–L385` |
| `PciDeviceStats._filter_pools_for_numa_cells` | method | (self, pools, request, numa_cells) | private | `pools` (src/nova/pci/stats.py:L419); `filtered_pools` (src/nova/pci/stats.py:L440); `self._filter_pools_for_socket_affinity(pools, numa_cells)` (src/nova/pci/stats.py:L449); `filtered_pools` (src/nova/pci/stats.py:L468); `sorted( pools, key=lambda pool: pool.get('numa_node') not in numa_cell_ids)` (src/nova/pci/stats.py:L473) | 18/30 | `src/nova/pci/stats.py:L393–L474` |
| `PciDeviceStats._filter_pools_for_socket_affinity` | method | (self, pools, numa_cells) | private | `[]` (src/nova/pci/stats.py:L488); `[ pool for pool in pools if any( utils.pci_device_prop_match(pool, [{'numa_node': numa_node}]) for numa_node in allowed_numa_nodes ) ]` (src/nova/pci/stats.py:L506) | 11/24 | `src/nova/pci/stats.py:L476–L511` |
| `PciDeviceStats._filter_pools_for_unrequested_pfs` | method | (self, pools, request) | private | `pools` (src/nova/pci/stats.py:L535) | 5/12 | `src/nova/pci/stats.py:L513–L535` |
| `PciDeviceStats._filter_pools_for_unrequested_vdpa_devices` | method | (self, pools, request) | private | `pools` (src/nova/pci/stats.py:L561) | 5/14 | `src/nova/pci/stats.py:L537–L561` |
| `PciDeviceStats._filter_pools_for_unrequested_remote_managed_devices` | method | (self, pools, request) | private | `pools` (src/nova/pci/stats.py:L582) | 5/9 | `src/nova/pci/stats.py:L563–L582` |
| `PciDeviceStats._filter_pools_based_on_placement_allocation` | method | (self, pools, request, rp_uuids) | private | `pools` (src/nova/pci/stats.py:L597); `matching_pools` (src/nova/pci/stats.py:L622) | 6/20 | `src/nova/pci/stats.py:L584–L622` |
| `PciDeviceStats._filter_pools_for_live_migratable_devices` | method | (self, pools, request) | private | `pools` (src/nova/pci/stats.py:L654) | 11/12 | `src/nova/pci/stats.py:L624–L654` |
| `PciDeviceStats._filter_pools` | method | (self, pools, request, numa_cells, rp_uuids) | private | `None` (src/nova/pci/stats.py:L700); `None` (src/nova/pci/stats.py:L717); `None` (src/nova/pci/stats.py:L734); `None` (src/nova/pci/stats.py:L788); `pools` (src/nova/pci/stats.py:L790) | 20/83 | `src/nova/pci/stats.py:L656–L790` |
| `PciDeviceStats.support_requests` | method | (self, requests, provider_mapping, numa_cells=None) | public | `False` (src/nova/pci/stats.py:L832); `True` (src/nova/pci/stats.py:L834) | 2/12 | `src/nova/pci/stats.py:L792–L834` |
| `PciDeviceStats._apply_request` | method | (self, pools, request, rp_uuids, numa_cells=None) | private | `False` (src/nova/pci/stats.py:L869); `False` (src/nova/pci/stats.py:L883); `True` (src/nova/pci/stats.py:L896) | 8/28 | `src/nova/pci/stats.py:L836–L896` |
| `PciDeviceStats._get_rp_uuids_for_request` | method | (self, provider_mapping, request) | private | `[]` (src/nova/pci/stats.py:L913); `[]` (src/nova/pci/stats.py:L924); `rp_uuids.split(',')` (src/nova/pci/stats.py:L928); `[ rp_uuids[0] for group_id, rp_uuids in provider_mapping.items() if group_id.startswith(request.request_id) ]` (src/nova/pci/stats.py:L934) | 6/17 | `src/nova/pci/stats.py:L898–L938` |
| `PciDeviceStats.apply_requests` | method | (self, requests, provider_mapping, numa_cells=None) | public | not declared | 3/10 | `src/nova/pci/stats.py:L940–L973` |
| `PciDeviceStats.__iter__` | method | (self) | public | `iter(pools)` (src/nova/pci/stats.py:L983) | 3/8 | `src/nova/pci/stats.py:L975–L983` |
| `PciDeviceStats.clear` | method | (self) | public | not declared | 1/2 | `src/nova/pci/stats.py:L985–L987` |
| `PciDeviceStats.__eq__` | method | (self, other) | public | `NotImplemented` (src/nova/pci/stats.py:L991); `self.pools == other.pools` (src/nova/pci/stats.py:L992) | 2/4 | `src/nova/pci/stats.py:L989–L992` |
| `PciDeviceStats.to_device_pools_obj` | method | (self) | public | `pci_device_pool.from_pci_stats(stats)` (src/nova/pci/stats.py:L997) | 2/3 | `src/nova/pci/stats.py:L994–L997` |
| `PciDeviceStats.has_remote_managed_device_pools` | method | (self) | public | `bool(pools)` (src/nova/pci/stats.py:L1010) | 1/7 | `src/nova/pci/stats.py:L999–L1010` |
| `PciDeviceStats.populate_pools_metadata_from_assigned_devices` | method | (self) | public | not declared | 7/16 | `src/nova/pci/stats.py:L1012–L1047` |
| `PciDeviceStats._assert_one_pool_per_rp_uuid` | method | (pools) | private | `not split_rp_uuids` (src/nova/pci/stats.py:L1075) | 6/18 | `src/nova/pci/stats.py:L1050–L1075` |
| `PciDeviceStats._ensure_remote_managed_tag` | staticmethod | — | private | not declared | — | `src/nova/pci/stats.py:L118–L138` |
| `PciDeviceStats._decrease_pool_count` | staticmethod | — | private | not declared | — | `src/nova/pci/stats.py:L226–L240` |
| `PciDeviceStats._assert_one_pool_per_rp_uuid` | staticmethod | — | private | not declared | — | `src/nova/pci/stats.py:L1049–L1075` |

## Dependencies

- `import collections` (src/nova/pci/stats.py:L17)
- `import collections.abc` (src/nova/pci/stats.py:L18)
- `import copy` (src/nova/pci/stats.py:L19)
- `import typing as ty` (src/nova/pci/stats.py:L20)
- `oslo_config`: imports `cfg` (src/nova/pci/stats.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/pci/stats.py:L23)
- `oslo_utils`: imports `strutils` (src/nova/pci/stats.py:L24)
- `nova`: imports `exception` (src/nova/pci/stats.py:L26)
- `nova`: imports `objects` (src/nova/pci/stats.py:L27)
- `nova.objects`: imports `fields` (src/nova/pci/stats.py:L28)
- `nova.objects`: imports `pci_device_pool` (src/nova/pci/stats.py:L29)
- `nova.pci.request`: imports `PCI_REMOTE_MANAGED_TAG` (src/nova/pci/stats.py:L30)
- `nova.pci`: imports `utils` (src/nova/pci/stats.py:L31)
- `nova.pci`: imports `whitelist` (src/nova/pci/stats.py:L32)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/pci/stats.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/pci/stats.py:L35)

## Security Surface

- **sink** (`db-write`): pool.update( (src/nova/pci/stats.py:L157)
- **sink** (`db-write`): """Update a device to its matching pool.""" (src/nova/pci/stats.py:L202)

