# src/nova/tests/unit/pci/test_devspec.py

## Overview

This file implements the `test_devspec` module, defining 8 classs, 1 field, 63 methods, 1 variable, 6 imports, 1 side effect.

Lines: total 708, code 585, comment 31, blank 92

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `dev` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L22–L25` |
| `PciAddressSpecTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L28–L30` |
| `PciAddressSpecTestCase.test_pci_address_spec_abstact_instance_fail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/pci/test_devspec.py:L29–L30` |
| `PhysicalPciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L33–L100` |
| `PhysicalPciAddressTestCase.pci_addr` | field | — | public | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L34–L37` |
| `PhysicalPciAddressTestCase.test_init_by_dict` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_devspec.py:L39–L44` |
| `PhysicalPciAddressTestCase.test_init_by_dict_invalid_address_values` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/pci/test_devspec.py:L46–L55` |
| `PhysicalPciAddressTestCase.test_init_by_dict_missing_values` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/pci/test_devspec.py:L57–L62` |
| `PhysicalPciAddressTestCase.test_init_by_string` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_devspec.py:L64–L70` |
| `PhysicalPciAddressTestCase.test_init_by_string_invalid_values` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_devspec.py:L72–L79` |
| `PhysicalPciAddressTestCase.test_init_by_string_missing_values` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/pci/test_devspec.py:L81–L85` |
| `PhysicalPciAddressTestCase.test_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L87–L91` |
| `PhysicalPciAddressTestCase.test_false_match` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_devspec.py:L93–L100` |
| `PciAddressGlobSpecTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L103–L143` |
| `PciAddressGlobSpecTestCase.test_init` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_devspec.py:L104–L110` |
| `PciAddressGlobSpecTestCase.test_init_invalid_address` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/pci/test_devspec.py:L112–L116` |
| `PciAddressGlobSpecTestCase.test_init_invalid_values` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_devspec.py:L118–L125` |
| `PciAddressGlobSpecTestCase.test_match` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_devspec.py:L127–L134` |
| `PciAddressGlobSpecTestCase.test_false_match` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_devspec.py:L136–L143` |
| `PciAddressRegexSpecTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L146–L192` |
| `PciAddressRegexSpecTestCase.test_init` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_devspec.py:L147–L156` |
| `PciAddressRegexSpecTestCase.test_init_invalid_address` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_devspec.py:L158–L166` |
| `PciAddressRegexSpecTestCase.test_match` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/pci/test_devspec.py:L168–L179` |
| `PciAddressRegexSpecTestCase.test_false_match` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/pci/test_devspec.py:L181–L192` |
| `PciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L195–L366` |
| `PciAddressTestCase.test_wrong_address` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L196–L200` |
| `PciAddressTestCase.test_address_too_big` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L202–L206` |
| `PciAddressTestCase.test_address_invalid_character` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_devspec.py:L208–L214` |
| `PciAddressTestCase.test_max_func` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L216–L224` |
| `PciAddressTestCase.test_max_domain` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L226–L234` |
| `PciAddressTestCase.test_max_bus` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L236–L244` |
| `PciAddressTestCase.test_max_slot` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L246–L254` |
| `PciAddressTestCase.test_address_is_undefined` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_devspec.py:L256–L259` |
| `PciAddressTestCase.test_partial_address` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_devspec.py:L261–L268` |
| `PciAddressTestCase.test_partial_address_func` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_devspec.py:L270–L277` |
| `PciAddressTestCase.test_address_is_pf` | method | (self, mock_is_physical_function) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_devspec.py:L280–L283` |
| `PciAddressTestCase.test_address_pf_no_parent_addr` | method | (self, mock_is_physical_function) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_devspec.py:L286–L291` |
| `PciAddressTestCase.test_spec_regex_match` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L293–L301` |
| `PciAddressTestCase.test_spec_regex_no_match` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L303–L311` |
| `PciAddressTestCase.test_spec_invalid_regex` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L313–L321` |
| `PciAddressTestCase.test_spec_invalid_regex2` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L323–L331` |
| `PciAddressTestCase.test_spec_partial_bus_regex` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_devspec.py:L333–L340` |
| `PciAddressTestCase.test_spec_partial_address_regex` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_devspec.py:L342–L349` |
| `PciAddressTestCase.test_spec_invalid_address` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L351–L355` |
| `PciAddressTestCase.test_address_is_pf_regex` | method | (self, mock_is_physical_function) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L358–L366` |
| `PciDevSpecTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L369–L451` |
| `PciDevSpecTestCase.test_spec_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L370–L374` |
| `PciDevSpecTestCase.test_invalid_vendor_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L376–L380` |
| `PciDevSpecTestCase.test_vendor_id_out_of_range` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L382–L390` |
| `PciDevSpecTestCase.test_invalid_product_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L392–L396` |
| `PciDevSpecTestCase.test_product_id_out_of_range` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_devspec.py:L398–L406` |
| `PciDevSpecTestCase.test_devname_and_address` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L408–L412` |
| `PciDevSpecTestCase.test_blank_devname` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/pci/test_devspec.py:L414–L419` |
| `PciDevSpecTestCase.test_by_name` | method | (self, mock_get_function_by_ifname) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_devspec.py:L423–L426` |
| `PciDevSpecTestCase.test_invalid_name` | method | (self, mock_get_function_by_ifname) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_devspec.py:L430–L433` |
| `PciDevSpecTestCase.test_pci_obj` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/pci/test_devspec.py:L435–L451` |
| `PciDevSpecRemoteManagedTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L454–L690` |
| `PciDevSpecRemoteManagedTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_devspec.py:L456–L463` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_unknown_raises` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L467–L471` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_pf_raises` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_devspec.py:L479–L491` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_vf_by_pf` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/pci/test_devspec.py:L499–L536` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_vf_by_pf_raises` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/pci/test_devspec.py:L544–L571` |
| `PciDevSpecRemoteManagedTestCase.test_not_remote_managed_pf_match` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_devspec.py:L575–L580` |
| `PciDevSpecRemoteManagedTestCase.test_no_remote_managed_specified_pf_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L584–L588` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_specified_vf_match` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_devspec.py:L592–L597` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_specified_no_serial_vf_no_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/pci/test_devspec.py:L601–L612` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_specified_empty_serial_vf_no_match` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/pci/test_devspec.py:L616–L628` |
| `PciDevSpecRemoteManagedTestCase.test_not_remote_managed_vf_match` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_devspec.py:L632–L637` |
| `PciDevSpecRemoteManagedTestCase.test_no_remote_managed_specified_vf_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_devspec.py:L641–L645` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_vf_match_by_pci_obj` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/pci/test_devspec.py:L651–L668` |
| `PciDevSpecRemoteManagedTestCase.test_remote_managed_vf_no_match_by_pci_obj` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/pci/test_devspec.py:L674–L690` |
| `PciDevSpecOTUTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_devspec.py:L693–L708` |
| `PciDevSpecOTUTestCase.test_missing_config` | method | (self, mock_isdir) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_devspec.py:L696–L708` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/pci/test_devspec.py:L14)
- `nova`: imports `exception` (src/nova/tests/unit/pci/test_devspec.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/pci/test_devspec.py:L17)
- `nova.pci`: imports `devspec` (src/nova/tests/unit/pci/test_devspec.py:L18)
- `nova.pci.request`: imports `PCI_REMOTE_MANAGED_TAG` (src/nova/tests/unit/pci/test_devspec.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/pci/test_devspec.py:L20)

## Side Effects

- **file-io**: @mock.patch('os.path.isdir', return_value=True) (src/nova/tests/unit/pci/test_devspec.py:L695)

