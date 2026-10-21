# src/nova/tests/unit/pci/test_manager.py

## Overview

This file implements the `test_manager` module, defining 1 class, 42 methods, 20 variables, 13 imports.

Lines: total 1020, code 828, comment 86, blank 106

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_pci` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L33–L42` |
| `fake_pci_1` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L43–L44` |
| `fake_pci_2` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L45–L45` |
| `fake_pci_devs` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L47–L47` |
| `fake_pci_3` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L49–L51` |
| `fake_pci_4` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L52–L55` |
| `fake_pci_5` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L56–L59` |
| `fake_pci_6` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L60–L63` |
| `fake_pci_7` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L64–L67` |
| `fake_pci_8` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L68–L71` |
| `fake_pci_devs_tree` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L72–L72` |
| `fake_db_dev` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L74–L94` |
| `fake_db_dev_1` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L95–L99` |
| `fake_db_dev_2` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L100–L102` |
| `fake_db_devs` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L103–L103` |
| `fake_db_dev_3` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L105–L108` |
| `fake_db_dev_4` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L109–L113` |
| `fake_db_dev_5` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L114–L118` |
| `fake_db_devs_tree` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L119–L119` |
| `fake_pci_requests` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L121–L125` |
| `PciDevTrackerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_manager.py:L129–L1020` |
| `PciDevTrackerTestCase._create_fake_instance` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/pci/test_manager.py:L130–L136` |
| `PciDevTrackerTestCase._fake_get_pci_devices` | method | (self, ctxt, node_id) | private | `self.fake_devs` (src/nova/tests/unit/pci/test_manager.py:L139) | 1/2 | `src/nova/tests/unit/pci/test_manager.py:L138–L139` |
| `PciDevTrackerTestCase._fake_pci_device_update` | method | (self, ctxt, node_id, address, value) | private | `fake_return` (src/nova/tests/unit/pci/test_manager.py:L145) | 1/5 | `src/nova/tests/unit/pci/test_manager.py:L141–L145` |
| `PciDevTrackerTestCase._fake_pci_device_destroy` | method | (self, ctxt, node_id, address) | private | not declared | 1/2 | `src/nova/tests/unit/pci/test_manager.py:L147–L148` |
| `PciDevTrackerTestCase._create_pci_requests_object` | method | (self, requests, instance_uuid=None) | private | `objects.InstancePCIRequests( instance_uuid=instance_uuid, requests=pci_reqs)` (src/nova/tests/unit/pci/test_manager.py:L158) | 3/11 | `src/nova/tests/unit/pci/test_manager.py:L150–L160` |
| `PciDevTrackerTestCase._create_tracker` | method | (self, fake_devs) | private | not declared | 1/4 | `src/nova/tests/unit/pci/test_manager.py:L162–L165` |
| `PciDevTrackerTestCase.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_manager.py:L167–L178` |
| `PciDevTrackerTestCase.test_pcidev_tracker_create` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/pci/test_manager.py:L180–L189` |
| `PciDevTrackerTestCase.test_pcidev_tracker_create_device_tree` | method | (self) | public | not declared | 6/16 | `src/nova/tests/unit/pci/test_manager.py:L191–L209` |
| `PciDevTrackerTestCase.test_pcidev_tracker_create_device_tree_pf_only` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/pci/test_manager.py:L211–L222` |
| `PciDevTrackerTestCase.test_pcidev_tracker_create_device_tree_vf_only` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/pci/test_manager.py:L224–L235` |
| `PciDevTrackerTestCase.test_update_devices_from_hypervisor_resources` | method | (self, mock_vf) | public | not declared | 1/16 | `src/nova/tests/unit/pci/test_manager.py:L241–L258` |
| `PciDevTrackerTestCase.test_update_devices_from_hypervisor_resources_with_tag` | method | (self, data, _mock_vf) | public | not declared | 2/28 | `src/nova/tests/unit/pci/test_manager.py:L263–L292` |
| `PciDevTrackerTestCase.test_update_devices_from_hypervisor_resources_with_multiple_tags` | method | (self, _mock_vf) | public | not declared | 2/37 | `src/nova/tests/unit/pci/test_manager.py:L295–L333` |
| `PciDevTrackerTestCase.test_update_devices_from_hypervisor_resources_with_invalid_tag` | method | (self, data, _mock_vf, mock_debug) | public | not declared | 1/28 | `src/nova/tests/unit/pci/test_manager.py:L339–L369` |
| `PciDevTrackerTestCase.test_update_devices_from_hypervisor_resources_32bit_domain` | method | (self, mock_debug) | public | not declared | 1/28 | `src/nova/tests/unit/pci/test_manager.py:L372–L407` |
| `PciDevTrackerTestCase.test_set_hvdev_new_dev` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/pci/test_manager.py:L409–L420` |
| `PciDevTrackerTestCase.test_set_hvdev_new_dev_tree_maintained` | method | (self) | public | not declared | 6/14 | `src/nova/tests/unit/pci/test_manager.py:L422–L441` |
| `PciDevTrackerTestCase.test_set_hvdev_changed` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/pci/test_manager.py:L443–L449` |
| `PciDevTrackerTestCase.test_set_hvdev_remove` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/pci/test_manager.py:L451–L456` |
| `PciDevTrackerTestCase.test_set_hvdev_remove_tree_maintained` | method | (self) | public | not declared | 8/16 | `src/nova/tests/unit/pci/test_manager.py:L458–L478` |
| `PciDevTrackerTestCase.test_set_hvdev_remove_tree_maintained_with_allocations` | method | (self) | public | not declared | 11/33 | `src/nova/tests/unit/pci/test_manager.py:L480–L526` |
| `PciDevTrackerTestCase.test_set_hvdev_changed_stal` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_manager.py:L528–L537` |
| `PciDevTrackerTestCase._get_device_by_address` | method | (self, address) | private | `devs[0]` (src/nova/tests/unit/pci/test_manager.py:L542) | 5/8 | `src/nova/tests/unit/pci/test_manager.py:L539–L546` |
| `PciDevTrackerTestCase.test_set_hvdevs_unavailable_vf_removed` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/pci/test_manager.py:L548–L584` |
| `PciDevTrackerTestCase.test_set_hvdevs_unavailable_pf_removed` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/pci/test_manager.py:L586–L618` |
| `PciDevTrackerTestCase.test_claim_available_pf_while_child_vf_is_unavailable` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/pci/test_manager.py:L620–L676` |
| `PciDevTrackerTestCase.test_claim_available_pf_while_children_vfs_are_in_mixed_state` | method | (self) | public | not declared | 1/49 | `src/nova/tests/unit/pci/test_manager.py:L678–L738` |
| `PciDevTrackerTestCase.test_claim_available_pf_while_a_child_is_used` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/pci/test_manager.py:L740–L779` |
| `PciDevTrackerTestCase.test_update_pci_for_instance_active` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_manager.py:L781–L790` |
| `PciDevTrackerTestCase.test_update_pci_for_instance_fail` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/pci/test_manager.py:L792–L808` |
| `PciDevTrackerTestCase.test_pci_claim_instance_with_numa` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/pci/test_manager.py:L810–L830` |
| `PciDevTrackerTestCase.test_pci_claim_instance_with_numa_fail` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/pci/test_manager.py:L832–L843` |
| `PciDevTrackerTestCase.test_update_pci_for_instance_deleted` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/pci/test_manager.py:L845–L857` |
| `PciDevTrackerTestCase.test_save` | method | (self, migrate_mock) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_manager.py:L861–L870` |
| `PciDevTrackerTestCase.test_save_removed` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/pci/test_manager.py:L872–L889` |
| `PciDevTrackerTestCase.test_clean_usage` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/pci/test_manager.py:L891–L919` |
| `PciDevTrackerTestCase.test_clean_usage_no_request_match_no_claims` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/pci/test_manager.py:L921–L933` |
| `PciDevTrackerTestCase.test_free_devices` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/pci/test_manager.py:L935–L947` |
| `PciDevTrackerTestCase.test_free_device` | method | (self) | public | not declared | 3/20 | `src/nova/tests/unit/pci/test_manager.py:L949–L968` |
| `PciDevTrackerTestCase.test_free_instance_claims` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/pci/test_manager.py:L970–L994` |
| `PciDevTrackerTestCase.test_free_instance_allocations` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/pci/test_manager.py:L996–L1020` |

## Dependencies

- `import copy` (src/nova/tests/unit/pci/test_manager.py:L16)
- `import ddt` (src/nova/tests/unit/pci/test_manager.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/pci/test_manager.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/pci/test_manager.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/pci/test_manager.py:L21)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/pci/test_manager.py:L23)
- `nova`: imports `context` (src/nova/tests/unit/pci/test_manager.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/pci/test_manager.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/pci/test_manager.py:L26)
- `nova.objects`: imports `fields` (src/nova/tests/unit/pci/test_manager.py:L27)
- `nova.pci`: imports `manager` (src/nova/tests/unit/pci/test_manager.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/pci/test_manager.py:L29)
- `nova.tests.unit.pci`: imports `fakes as pci_fakes` (src/nova/tests/unit/pci/test_manager.py:L30)

