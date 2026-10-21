# src/nova/tests/unit/pci/test_request.py

## Overview

This file implements the `test_request` module, defining 1 class, 32 methods, 1 staticmethod, 2 variables, 11 imports.

Lines: total 614, code 511, comment 32, blank 71

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_fake_alias1` | variable | — | unexported | not declared | — | `src/nova/tests/unit/pci/test_request.py:L33–L41` |
| `_fake_alias2` | variable | — | unexported | not declared | — | `src/nova/tests/unit/pci/test_request.py:L43–L50` |
| `PciRequestTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_request.py:L53–L614` |
| `PciRequestTestCase._create_fake_inst_with_pci_devs` | method | (pci_req_list, pci_dev_list) | private | `inst` (src/nova/tests/unit/pci/test_request.py:L75) | 1/9 | `src/nova/tests/unit/pci/test_request.py:L56–L75` |
| `PciRequestTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_request.py:L77–L80` |
| `PciRequestTestCase.test_get_alias_from_config_valid` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/pci/test_request.py:L82–L94` |
| `PciRequestTestCase.test_get_alias_from_config_valid_multispec` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/pci/test_request.py:L96–L121` |
| `PciRequestTestCase.test_get_alias_from_config_multispec_rejected_pci_in_placement` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/pci/test_request.py:L123–L143` |
| `PciRequestTestCase._test_get_alias_from_config_invalid` | method | (self, alias) | private | not declared | 1/5 | `src/nova/tests/unit/pci/test_request.py:L145–L149` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_device_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L151–L156` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_live_migratable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L158–L163` |
| `PciRequestTestCase.test_get_alias_from_config_device_type_vdpa` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L165–L170` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_product_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L172–L177` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_vendor_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L179–L184` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_capability_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L186–L191` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_numa_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L193–L198` |
| `PciRequestTestCase.test_get_alias_from_config_invalid_arbitrary_field` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_request.py:L200–L205` |
| `PciRequestTestCase.test_get_alias_from_config_valid_numa_policy` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/pci/test_request.py:L207–L221` |
| `PciRequestTestCase.test_get_alias_from_config_valid_rc_and_traits` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/pci/test_request.py:L223–L237` |
| `PciRequestTestCase.test_get_alias_from_config_conflicting_device_type` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/pci/test_request.py:L239–L259` |
| `PciRequestTestCase.test_get_alias_from_config_conflicting_numa_policy` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/pci/test_request.py:L261–L280` |
| `PciRequestTestCase.test_get_alias_from_config_missing_ids` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/pci/test_request.py:L282–L311` |
| `PciRequestTestCase.test_get_alias_from_config_missing_ids_or_rc_pci_in_placement` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/pci/test_request.py:L313–L343` |
| `PciRequestTestCase.test_get_alias_from_config_cached` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/pci/test_request.py:L345–L360` |
| `PciRequestTestCase._verify_result` | method | (self, expected, real) | private | not declared | 2/6 | `src/nova/tests/unit/pci/test_request.py:L362–L367` |
| `PciRequestTestCase.test_translate_alias_to_requests` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/pci/test_request.py:L369–L389` |
| `PciRequestTestCase.test_translate_alias_to_requests_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_request.py:L391–L395` |
| `PciRequestTestCase.test_translate_alias_to_requests_affinity_policy` | method | (self) | public | not declared | 2/24 | `src/nova/tests/unit/pci/test_request.py:L397–L426` |
| `PciRequestTestCase.test_get_instance_pci_request_from_vif_invalid` | method | (self, cn_get_by_host_and_node) | public | not declared | 1/26 | `src/nova/tests/unit/pci/test_request.py:L430–L463` |
| `PciRequestTestCase.test_get_instance_pci_request_from_vif` | method | (self, cn_get_by_host_and_node) | public | not declared | 1/42 | `src/nova/tests/unit/pci/test_request.py:L467–L521` |
| `PciRequestTestCase.test_get_pci_requests_from_flavor` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/pci/test_request.py:L523–L545` |
| `PciRequestTestCase.test_get_pci_requests_from_flavor_multiple` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/pci/test_request.py:L547–L567` |
| `PciRequestTestCase.test_get_pci_requests_from_flavor_including_space` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/pci/test_request.py:L569–L597` |
| `PciRequestTestCase.test_get_pci_requests_from_flavor_no_extra_spec` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_request.py:L599–L603` |
| `PciRequestTestCase.test_get_pci_requests_from_flavor_affinity_policy` | method | (self, mock_translate) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_request.py:L607–L614` |
| `PciRequestTestCase._create_fake_inst_with_pci_devs` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/pci/test_request.py:L55–L75` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/pci/test_request.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/pci/test_request.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/pci/test_request.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/pci/test_request.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/pci/test_request.py:L24)
- `nova.network`: imports `model` (src/nova/tests/unit/pci/test_request.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/pci/test_request.py:L26)
- `nova.objects`: imports `fields` (src/nova/tests/unit/pci/test_request.py:L27)
- `nova.pci`: imports `request` (src/nova/tests/unit/pci/test_request.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/pci/test_request.py:L29)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/pci/test_request.py:L30)

