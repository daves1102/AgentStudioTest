# src/nova/tests/functional/libvirt/test_pci_in_placement.py

## Overview

This file implements the `test_pci_in_placement` module, defining 5 classs, 9 constants, 40 methods, 11 imports, 9 side effects, 1 security surface entry.

Lines: total 2485, code 1923, comment 372, blank 190

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L28–L28` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L29–L29` |
| `WARN_PCI_TRACKER_HELD_DEVICE` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L32–L41` |
| `WARN_PCI_PLACEMENT_HELD_DEVICE` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L43–L54` |
| `PlacementPCIReportingTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L57–L120` |
| `PlacementPCIReportingTests.PCI_RC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L58–L58` |
| `PlacementPCIReportingTests.PF_RC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L59–L59` |
| `PlacementPCIReportingTests.VF_RC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L60–L60` |
| `PlacementPCIReportingTests.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L64–L64` |
| `PlacementPCIReportingTests.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L65–L86` |
| `PlacementPCIReportingTests.setUp` | method | (self) | public | not declared | 2/19 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L88–L120` |
| `PlacementPCIInventoryReportingTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L123–L1259` |
| `PlacementPCIInventoryReportingTests.test_new_compute_init_with_pci_devs` | method | (self) | public | not declared | 1/65 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L125–L206` |
| `PlacementPCIInventoryReportingTests.test_new_compute_init_with_pci_dev_custom_rc` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L208–L251` |
| `PlacementPCIInventoryReportingTests.test_dependent_device_config_is_rejected` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L253–L286` |
| `PlacementPCIInventoryReportingTests.test_sibling_vfs_with_contradicting_resource_classes_rejected` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L288–L320` |
| `PlacementPCIInventoryReportingTests.test_sibling_vfs_with_contradicting_traits_rejected` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L322–L355` |
| `PlacementPCIInventoryReportingTests.test_neutron_sriov_devs_ignored` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L357–L380` |
| `PlacementPCIInventoryReportingTests.test_devname_based_dev_spec_rejected` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L382–L403` |
| `PlacementPCIInventoryReportingTests.test_remove_pci` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L405–L441` |
| `PlacementPCIInventoryReportingTests.test_remove_one_vf` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L443–L489` |
| `PlacementPCIInventoryReportingTests.test_remove_all_vfs` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L491–L532` |
| `PlacementPCIInventoryReportingTests.test_remove_all_vfs_add_pf` | method | (self) | public | not declared | 1/45 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L534–L587` |
| `PlacementPCIInventoryReportingTests.test_remove_pf_add_vfs` | method | (self) | public | not declared | 1/45 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L589–L642` |
| `PlacementPCIInventoryReportingTests.test_device_reconfiguration` | method | (self) | public | not declared | 1/89 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L644–L741` |
| `PlacementPCIInventoryReportingTests._create_one_compute_with_a_pf_consumed_by_an_instance` | method | (self) | private | `server, compute1_expected_placement_view` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L796) | 1/46 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L743–L796` |
| `PlacementPCIInventoryReportingTests.test_device_reconfiguration_with_allocations_config_change_warn` | method | (self) | public | not declared | 1/39 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L798–L851` |
| `PlacementPCIInventoryReportingTests.test_device_reconfiguration_with_allocations_config_change_stop` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L853–L891` |
| `PlacementPCIInventoryReportingTests.test_device_reconfiguration_with_allocations_hyp_change` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L893–L918` |
| `PlacementPCIInventoryReportingTests.test_pf_devspec_removed_while_allocated` | method | (self) | public | not declared | 1/48 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L920–L989` |
| `PlacementPCIInventoryReportingTests._create_one_compute_with_vfs_one_consumed_by_an_instance` | method | (self, num_vfs) | private | `server, compute1_expected_placement_view` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1046) | 1/48 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L991–L1046` |
| `PlacementPCIInventoryReportingTests.test_last_vf_devspec_removed_while_allocated` | method | (self) | public | not declared | 1/43 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1048–L1111` |
| `PlacementPCIInventoryReportingTests.test_non_last_vf_devspec_removed_while_allocated` | method | (self) | public | not declared | 1/53 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1113–L1188` |
| `PlacementPCIInventoryReportingTests.test_reporting_disabled_nothing_is_reported` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1190–L1215` |
| `PlacementPCIInventoryReportingTests.test_reporting_cannot_be_disable_once_it_is_enabled` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1217–L1259` |
| `PlacementPCIAllocationHealingTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1262–L1935` |
| `PlacementPCIAllocationHealingTests.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1263–L1272` |
| `PlacementPCIAllocationHealingTests.test_heal_single_pci_allocation` | method | (self) | public | not declared | 1/41 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1274–L1327` |
| `PlacementPCIAllocationHealingTests.test_heal_multiple_allocations` | method | (self) | public | not declared | 1/76 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1329–L1427` |
| `PlacementPCIAllocationHealingTests.test_heal_partial_allocations` | method | (self) | public | not declared | 1/69 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1429–L1517` |
| `PlacementPCIAllocationHealingTests.test_heal_partial_allocations_during_resize_downsize` | method | (self) | public | not declared | 1/123 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1519–L1678` |
| `PlacementPCIAllocationHealingTests.test_heal_partial_allocations_during_resize_change_dev_type` | method | (self) | public | not declared | 1/111 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1680–L1816` |
| `PlacementPCIAllocationHealingTests.test_heal_allocation_during_same_host_resize` | method | (self) | public | not declared | 1/84 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1818–L1935` |
| `SimpleRCAndTraitBasedPCIAliasTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1939–L2044` |
| `SimpleRCAndTraitBasedPCIAliasTests.setUp` | method | (self) | public | not declared | 1/41 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L1940–L1984` |
| `SimpleRCAndTraitBasedPCIAliasTests.test_boot_with_custom_rc_and_traits_no_matching_device` | method | (self, pci_alias) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2003–L2018` |
| `SimpleRCAndTraitBasedPCIAliasTests.test_boot_with_custom_rc_and_traits_succeeds` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2020–L2044` |
| `RCAndTraitBasedPCIAliasTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2047–L2485` |
| `RCAndTraitBasedPCIAliasTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2048–L2050` |
| `RCAndTraitBasedPCIAliasTests.test_device_claim_consistent_with_placement_allocation` | method | (self) | public | not declared | 1/60 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2052–L2143` |
| `RCAndTraitBasedPCIAliasTests.test_vf_with_split_allocation` | method | (self) | public | not declared | 1/77 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2145–L2242` |
| `RCAndTraitBasedPCIAliasTests.test_3vfs_asymmetric_split_between_pfs` | method | (self) | public | not declared | 1/62 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2244–L2318` |
| `RCAndTraitBasedPCIAliasTests.test_one_time_use_workflow` | method | (self) | public | not declared | 1/68 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2320–L2411` |
| `RCAndTraitBasedPCIAliasTests.test_otu_configured_late` | method | (self) | public | not declared | 1/58 | `src/nova/tests/functional/libvirt/test_pci_in_placement.py:L2413–L2485` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L14)
- `import ddt` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L16)
- `import fixtures` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L17)
- `import os_resource_classes` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L18)
- `import os_traits` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L19)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L21)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L22)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L24)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L25)
- `nova.tests.functional.libvirt`: imports `test_pci_sriov_servers` (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L26)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L28)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L29)
- **global-mutation**: WARN_PCI_TRACKER_HELD_DEVICE = ( (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L32)
- **global-mutation**: WARN_PCI_PLACEMENT_HELD_DEVICE = ( (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L43)
- **global-mutation**: PCI_RC = f"CUSTOM_PCI_{fakelibvirt.PCI_VEND_ID}_{fakelibvirt.PCI_PROD_ID}" (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L58)
- **global-mutation**: PF_RC = f"CUSTOM_PCI_{fakelibvirt.PCI_VEND_ID}_{fakelibvirt.PF_PROD_ID}" (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L59)
- **global-mutation**: VF_RC = f"CUSTOM_PCI_{fakelibvirt.PCI_VEND_ID}_{fakelibvirt.VF_PROD_ID}" (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L60)
- **global-mutation**: PCI_DEVICE_SPEC = [] (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L64)
- **global-mutation**: PCI_ALIAS = [ (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L65)

## Security Surface

- **sink** (`db-write`): "update conflict: Inventory for 'CUSTOM_PCI_8086_1528' on " (src/nova/tests/functional/libvirt/test_pci_in_placement.py:L889)

