# src/nova/compute/pci_placement_translator.py

## Overview

This file implements the `pci_placement_translator` module, defining 2 classs, 4 constants, 11 functions, 28 methods, 3 propertys, 1 staticmethod, 15 imports, 4 side effects.

Lines: total 793, code 524, comment 158, blank 111

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/pci_placement_translator.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/pci_placement_translator.py:L35–L35` |
| `PARENT_TYPES` | constant | — | exported | not declared | — | `src/nova/compute/pci_placement_translator.py:L39–L40` |
| `CHILD_TYPES` | constant | — | exported | not declared | — | `src/nova/compute/pci_placement_translator.py:L43–L44` |
| `_is_placement_tracking_enabled` | function | — | unexported | `CONF.pci.report_in_placement` (src/nova/compute/pci_placement_translator.py:L48) | 1/2 | `src/nova/compute/pci_placement_translator.py:L47–L48` |
| `_normalize_traits` | function | (traits) | unexported | `list(standard_traits) + custom_traits` (src/nova/compute/pci_placement_translator.py:L66) | 3/10 | `src/nova/compute/pci_placement_translator.py:L51–L66` |
| `get_traits` | function | (traits_str) | exported | `set()` (src/nova/compute/pci_placement_translator.py:L75); `set(_normalize_traits(traits_str.split(',')))` (src/nova/compute/pci_placement_translator.py:L76) | 2/4 | `src/nova/compute/pci_placement_translator.py:L69–L76` |
| `_get_traits_for_dev` | function | (dev_spec_tags) | unexported | `traits` (src/nova/compute/pci_placement_translator.py:L92) | 2/10 | `src/nova/compute/pci_placement_translator.py:L79–L92` |
| `_normalize_resource_class` | function | (rc) | unexported | `rc` (src/nova/compute/pci_placement_translator.py:L105) | 3/9 | `src/nova/compute/pci_placement_translator.py:L95–L105` |
| `get_resource_class` | function | (requested_name, vendor_id, product_id) | exported | `rc` (src/nova/compute/pci_placement_translator.py:L118) | 2/8 | `src/nova/compute/pci_placement_translator.py:L108–L118` |
| `_get_rc_for_dev` | function | (dev, dev_spec_tags) | unexported | `get_resource_class(rc, dev.vendor_id, dev.product_id)` (src/nova/compute/pci_placement_translator.py:L134) | 1/6 | `src/nova/compute/pci_placement_translator.py:L121–L134` |
| `PciResourceProvider` | class | — | exported | not declared | — | `src/nova/compute/pci_placement_translator.py:L137–L455` |
| `PciResourceProvider.__init__` | method | (self, name) | public | not declared | 1/8 | `src/nova/compute/pci_placement_translator.py:L140–L152` |
| `PciResourceProvider.devs` | method | (self) | public | `[self.parent_dev] if self.parent_dev else self.children_devs` (src/nova/compute/pci_placement_translator.py:L156) | 2/2 | `src/nova/compute/pci_placement_translator.py:L155–L156` |
| `PciResourceProvider.total` | method | (self) | public | `len(self.devs) + self.adjustment` (src/nova/compute/pci_placement_translator.py:L160) | 1/2 | `src/nova/compute/pci_placement_translator.py:L159–L160` |
| `PciResourceProvider.to_be_deleted` | method | (self) | public | `self.total == 0` (src/nova/compute/pci_placement_translator.py:L164) | 1/2 | `src/nova/compute/pci_placement_translator.py:L163–L164` |
| `PciResourceProvider.add_child` | method | (self, dev, dev_spec_tags) | public | not declared | 10/31 | `src/nova/compute/pci_placement_translator.py:L166–L201` |
| `PciResourceProvider.add_parent` | method | (self, dev, dev_spec_tags) | public | not declared | 5/14 | `src/nova/compute/pci_placement_translator.py:L203–L222` |
| `PciResourceProvider.remove_child` | method | (self, dev) | public | not declared | 1/2 | `src/nova/compute/pci_placement_translator.py:L224–L227` |
| `PciResourceProvider.remove_parent` | method | (self, dev) | public | not declared | 1/2 | `src/nova/compute/pci_placement_translator.py:L229–L231` |
| `PciResourceProvider._get_allocations` | method | (self) | private | `collections.Counter( [ dev.instance_uuid for dev in self.devs if "instance_uuid" in dev and dev.instance_uuid ] )` (src/nova/compute/pci_placement_translator.py:L246) | 4/8 | `src/nova/compute/pci_placement_translator.py:L233–L252` |
| `PciResourceProvider._get_inventories` | method | (self) | private | `{self.resource_class: inventory}` (src/nova/compute/pci_placement_translator.py:L269) | 1/7 | `src/nova/compute/pci_placement_translator.py:L254–L269` |
| `PciResourceProvider._handle_one_time_use` | method | (self, inventory) | private | not declared | 4/4 | `src/nova/compute/pci_placement_translator.py:L271–L285` |
| `PciResourceProvider._handle_one_time_use.is_allocated` | function | (dev) | public | `'instance_uuid' in dev and dev.instance_uuid` (src/nova/compute/pci_placement_translator.py:L275) | — | `src/nova/compute/pci_placement_translator.py:L274–L275` |
| `PciResourceProvider._adjust_for_removals_and_held_devices` | method | (self, provider_tree, rp_rc_usage) | private | `` (src/nova/compute/pci_placement_translator.py:L307) | 4/23 | `src/nova/compute/pci_placement_translator.py:L287–L328` |
| `PciResourceProvider.update_provider_tree` | method | (self, provider_tree, parent_rp_name, rp_rc_usage) | public | `` (src/nova/compute/pci_placement_translator.py:L355) | 4/25 | `src/nova/compute/pci_placement_translator.py:L330–L368` |
| `PciResourceProvider.update_allocations` | method | (self, allocations, provider_tree, same_host_instances) | public | `updated` (src/nova/compute/pci_placement_translator.py:L381); `updated` (src/nova/compute/pci_placement_translator.py:L446) | 7/30 | `src/nova/compute/pci_placement_translator.py:L370–L446` |
| `PciResourceProvider.__str__` | method | (self) | public | `( f"RP({self.name}, {self.resource_class}={self.total}, " f"traits={','.join(sorted(self.traits or set()))})" )` (src/nova/compute/pci_placement_translator.py:L450); `f"RP({self.name}, <to be deleted>)"` (src/nova/compute/pci_placement_translator.py:L455) | 3/8 | `src/nova/compute/pci_placement_translator.py:L448–L455` |
| `PlacementView` | class | — | exported | not declared | — | `src/nova/compute/pci_placement_translator.py:L458–L681` |
| `PlacementView.__init__` | method | (self, hypervisor_hostname, instances_under_same_host_resize) | public | not declared | 1/8 | `src/nova/compute/pci_placement_translator.py:L461–L468` |
| `PlacementView._get_rp_name_for_address` | method | (self, addr) | private | `f"{self.root_rp_name}_{addr.upper()}"` (src/nova/compute/pci_placement_translator.py:L471) | 1/2 | `src/nova/compute/pci_placement_translator.py:L470–L471` |
| `PlacementView._ensure_rp` | method | (self, rp_name) | private | `self.rps.setdefault(rp_name, PciResourceProvider(rp_name))` (src/nova/compute/pci_placement_translator.py:L474) | 1/2 | `src/nova/compute/pci_placement_translator.py:L473–L474` |
| `PlacementView._get_rp_name_for_child` | method | (self, dev) | private | `self._get_rp_name_for_address(dev.parent_addr)` (src/nova/compute/pci_placement_translator.py:L487) | 2/11 | `src/nova/compute/pci_placement_translator.py:L476–L487` |
| `PlacementView._add_dev` | method | (self, dev, dev_spec_tags) | private | `` (src/nova/compute/pci_placement_translator.py:L497) | 4/19 | `src/nova/compute/pci_placement_translator.py:L489–L512` |
| `PlacementView._remove_dev` | method | (self, dev) | private | not declared | 3/6 | `src/nova/compute/pci_placement_translator.py:L514–L522` |
| `PlacementView._ensure_rp_for_dev` | method | (self, dev) | private | `self._ensure_rp(rp_name)` (src/nova/compute/pci_placement_translator.py:L533); `self._ensure_rp(rp_name)` (src/nova/compute/pci_placement_translator.py:L536) | 3/13 | `src/nova/compute/pci_placement_translator.py:L524–L540` |
| `PlacementView.process_dev` | method | (self, dev, dev_spec) | public | `` (src/nova/compute/pci_placement_translator.py:L609) | 4/34 | `src/nova/compute/pci_placement_translator.py:L542–L611` |
| `PlacementView.__str__` | method | (self) | public | `( f"Placement PCI view on {self.root_rp_name}: " f"{', '.join(str(rp) for rp in self.rps.values())}" )` (src/nova/compute/pci_placement_translator.py:L614) | 2/5 | `src/nova/compute/pci_placement_translator.py:L613–L617` |
| `PlacementView.get_usage_per_rc_and_rp` | method | (allocations) | public | `rp_rc_usage` (src/nova/compute/pci_placement_translator.py:L634) | 4/10 | `src/nova/compute/pci_placement_translator.py:L620–L634` |
| `PlacementView._remove_managed_rps_from_tree_not_in_view` | method | (self, provider_tree) | private | not declared | 5/12 | `src/nova/compute/pci_placement_translator.py:L636–L650` |
| `PlacementView.update_provider_tree` | method | (self, provider_tree, allocations) | public | not declared | 2/10 | `src/nova/compute/pci_placement_translator.py:L652–L662` |
| `PlacementView.update_allocations` | method | (self, allocations, provider_tree) | public | `updated` (src/nova/compute/pci_placement_translator.py:L681) | 2/13 | `src/nova/compute/pci_placement_translator.py:L664–L681` |
| `ensure_no_dev_spec_with_devname` | function | (dev_specs) | exported | not declared | 3/10 | `src/nova/compute/pci_placement_translator.py:L684–L693` |
| `ensure_tracking_was_not_enabled_before` | function | (provider_tree) | exported | not declared | 3/14 | `src/nova/compute/pci_placement_translator.py:L696–L713` |
| `update_provider_tree_for_pci` | function | (provider_tree, nodename, pci_tracker, allocations, instances_under_same_host_resize) | exported | `False` (src/nova/compute/pci_placement_translator.py:L757); `updated` (src/nova/compute/pci_placement_translator.py:L793) | 4/32 | `src/nova/compute/pci_placement_translator.py:L716–L793` |
| `PciResourceProvider.devs` | property | — | public | not declared | — | `src/nova/compute/pci_placement_translator.py:L154–L156` |
| `PciResourceProvider.total` | property | — | public | not declared | — | `src/nova/compute/pci_placement_translator.py:L158–L160` |
| `PciResourceProvider.to_be_deleted` | property | — | public | not declared | — | `src/nova/compute/pci_placement_translator.py:L162–L164` |
| `PlacementView.get_usage_per_rc_and_rp` | staticmethod | — | public | not declared | — | `src/nova/compute/pci_placement_translator.py:L619–L634` |

## Dependencies

- `import collections` (src/nova/compute/pci_placement_translator.py:L15)
- `import copy` (src/nova/compute/pci_placement_translator.py:L16)
- `import os_resource_classes` (src/nova/compute/pci_placement_translator.py:L18)
- `import os_traits` (src/nova/compute/pci_placement_translator.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/compute/pci_placement_translator.py:L20)
- `oslo_utils`: imports `strutils` (src/nova/compute/pci_placement_translator.py:L21)
- `oslo_utils`: imports `uuidutils` (src/nova/compute/pci_placement_translator.py:L22)
- `nova.compute`: imports `provider_tree` (src/nova/compute/pci_placement_translator.py:L24)
- `import nova.conf` (src/nova/compute/pci_placement_translator.py:L25)
- `nova`: imports `exception` (src/nova/compute/pci_placement_translator.py:L26)
- `nova.i18n`: imports `_` (src/nova/compute/pci_placement_translator.py:L27)
- `nova.objects`: imports `fields` (src/nova/compute/pci_placement_translator.py:L28)
- `nova.objects`: imports `pci_device` (src/nova/compute/pci_placement_translator.py:L29)
- `nova.pci`: imports `devspec` (src/nova/compute/pci_placement_translator.py:L30)
- `nova.pci`: imports `manager as pci_manager` (src/nova/compute/pci_placement_translator.py:L31)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/pci_placement_translator.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/pci_placement_translator.py:L35)
- **global-mutation**: PARENT_TYPES = ( (src/nova/compute/pci_placement_translator.py:L39)
- **global-mutation**: CHILD_TYPES = ( (src/nova/compute/pci_placement_translator.py:L43)

