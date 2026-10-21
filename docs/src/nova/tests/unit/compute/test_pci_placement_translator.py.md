# src/nova/tests/unit/compute/test_pci_placement_translator.py

## Overview

This file implements the `test_pci_placement_translator` module, defining 1 class, 2 functions, 23 methods, 12 imports.

Lines: total 662, code 548, comment 39, blank 75

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `dev` | function | (v, p) | exported | `pci_device.PciDevice(vendor_id=v, product_id=p)` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L31) | 1/2 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L30–L31` |
| `TestTranslator` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L38–L662` |
| `TestTranslator.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L39–L45` |
| `TestTranslator.test_translator_skips_devices_without_matching_spec` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L47–L79` |
| `TestTranslator.test_trait_normalization` | method | (self, trait_names, expected_traits) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L96–L100` |
| `TestTranslator.test_resource_class_normalization` | method | (self, pci_dev, rc_name, expected_rc) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L117–L123` |
| `TestTranslator.test_dependent_device_pf_then_vf` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L125–L155` |
| `TestTranslator.test_dependent_device_vf_then_pf` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L157–L195` |
| `TestTranslator.test_mixed_rc_for_sibling_vfs` | method | (self) | public | not declared | 2/44 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L197–L244` |
| `TestTranslator.test_translator_maps_pci_device_to_rp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L246–L275` |
| `TestTranslator.test_otu_decorates_with_trait` | method | (self) | public | not declared | 2/75 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L277–L359` |
| `TestTranslator.test_otu_reservation_workflow` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L361–L408` |
| `TestTranslator.test_otu_reservation_workflow.assert_inventory` | function | (addr, reserved) | public | not declared | — | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L385–L389` |
| `TestTranslator.test_update_provider_tree_for_pci_update_pools` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L410–L428` |
| `TestTranslator._convert_defaultdict_to_dict` | method | (self, d) | private | `d` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L432); `{k: self._convert_defaultdict_to_dict(v) for k, v in d.items()}` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L433) | 3/4 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L430–L433` |
| `TestTranslator.test_get_usage_per_rc_and_rp_no_allocations` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L435–L438` |
| `TestTranslator.test_get_usage_per_rc_and_rp_empty_consumer` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L440–L445` |
| `TestTranslator.test_get_usage_per_rc_and_rp` | method | (self) | public | not declared | 1/58 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L447–L505` |
| `TestTranslator.test_remove_managed_rps_empty_view` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L507–L517` |
| `TestTranslator.test_remove_managed_rps_new_rp_in_view` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L519–L539` |
| `TestTranslator.test_remove_managed_rps_no_rp_change` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L541–L565` |
| `TestTranslator.test_remove_managed_rps_rp_removed_from_view` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L567–L581` |
| `TestTranslator.test_adjust_for_removals_no_allocation_no_adjustment` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L583–L592` |
| `TestTranslator.test_adjust_for_removals_allocated_configured_no_adjustment` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L594–L615` |
| `TestTranslator.test_adjust_for_removals_allocated_removed` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L617–L643` |
| `TestTranslator.test_adjust_for_removals_allocated_removed_no_inventory` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_pci_placement_translator.py:L645–L662` |

## Dependencies

- `import collections` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L15)
- `import ddt` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L16)
- `import os_traits` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L19)
- `nova.compute`: imports `pci_placement_translator as ppt` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L21)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L23)
- `nova.objects`: imports `fields` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L24)
- `nova.objects`: imports `pci_device` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L25)
- `nova.pci`: imports `devspec` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_pci_placement_translator.py:L27)

