# src/nova/tests/unit/pci/test_utils.py

## Overview

This file implements the `test_utils` module, defining 9 classs, 40 methods, 7 imports, 9 side effects, 3 security surface entries.

Lines: total 430, code 359, comment 15, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PciDeviceMatchTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L28–L74` |
| `PciDeviceMatchTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L29–L33` |
| `PciDeviceMatchTestCase.test_single_spec_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L35–L39` |
| `PciDeviceMatchTestCase.test_multiple_spec_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L41–L45` |
| `PciDeviceMatchTestCase.test_spec_mismatch` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L47–L51` |
| `PciDeviceMatchTestCase.test_spec_extra_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_utils.py:L53–L56` |
| `PciDeviceMatchTestCase.test_spec_list` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_utils.py:L58–L65` |
| `PciDeviceMatchTestCase.test_spec_list_no_matching` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_utils.py:L67–L70` |
| `PciDeviceMatchTestCase.test_spec_list_wrong_type` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L72–L74` |
| `PciDeviceAddressParserTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L77–L88` |
| `PciDeviceAddressParserTestCase.test_parse_address` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L78–L80` |
| `PciDeviceAddressParserTestCase.test_parse_address_wrong` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L82–L84` |
| `PciDeviceAddressParserTestCase.test_parse_address_invalid_character` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L86–L88` |
| `GetFunctionByIfnameTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L91–L119` |
| `GetFunctionByIfnameTestCase.test_virtual_function` | method | (self, mock_readlink, *args) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L95–L100` |
| `GetFunctionByIfnameTestCase.test_physical_function` | method | (self, mock_readlink, *args) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_utils.py:L104–L113` |
| `GetFunctionByIfnameTestCase.test_exception` | method | (self, *args) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_utils.py:L116–L119` |
| `IsPhysicalFunctionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L122–L140` |
| `IsPhysicalFunctionTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L124–L126` |
| `IsPhysicalFunctionTestCase.test_virtual_function` | method | (self, *args) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L129–L131` |
| `IsPhysicalFunctionTestCase.test_physical_function` | method | (self, *args) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L134–L136` |
| `IsPhysicalFunctionTestCase.test_exception` | method | (self, *args) | public | not declared | 1/2 | `src/nova/tests/unit/pci/test_utils.py:L139–L140` |
| `GetIfnameByPciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L143–L170` |
| `GetIfnameByPciAddressTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L145–L147` |
| `GetIfnameByPciAddressTestCase.test_physical_function_inferface_name` | method | (self, mock_listdir) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L150–L154` |
| `GetIfnameByPciAddressTestCase.test_virtual_function_inferface_name` | method | (self, mock_listdir) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L157–L161` |
| `GetIfnameByPciAddressTestCase.test_exception` | method | (self, mock_listdir) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_utils.py:L164–L170` |
| `GetMacByPciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L173–L224` |
| `GetMacByPciAddressTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_utils.py:L174–L181` |
| `GetMacByPciAddressTestCase.test_get_mac` | method | (self, mock_join, mock_listdir) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_utils.py:L185–L192` |
| `GetMacByPciAddressTestCase.test_get_mac_fails` | method | (self, mock_join, mock_listdir) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_utils.py:L196–L202` |
| `GetMacByPciAddressTestCase.test_get_mac_fails_empty` | method | (self, mock_join, mock_listdir) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_utils.py:L206–L213` |
| `GetMacByPciAddressTestCase.test_get_physical_function_mac` | method | (self, mock_join, mock_listdir) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_utils.py:L217–L224` |
| `GetVfNumByPciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L227–L253` |
| `GetVfNumByPciAddressTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L229–L234` |
| `GetVfNumByPciAddressTestCase.test_vf_number_found` | method | (self, mock_iglob, mock_readlink) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_utils.py:L238–L242` |
| `GetVfNumByPciAddressTestCase.test_vf_number_not_found` | method | (self, mock_iglob, mock_readlink) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_utils.py:L246–L253` |
| `GetProductIDByPfPciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L256–L316` |
| `GetProductIDByPfPciAddressTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L257–L259` |
| `GetProductIDByPfPciAddressTestCase.test_sriov_vf_device_read` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L274–L276` |
| `GetProductIDByPfPciAddressTestCase.test_sriov_vf_device_read_value_error` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L291–L296` |
| `GetProductIDByPfPciAddressTestCase.test_sriov_vf_device_read_io_error` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L311–L316` |
| `GetPciIdsByPciAddressTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_utils.py:L319–L430` |
| `GetPciIdsByPciAddressTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_utils.py:L320–L322` |
| `GetPciIdsByPciAddressTestCase.test_get_pci_ids` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_utils.py:L341–L344` |
| `GetPciIdsByPciAddressTestCase.test_get_pci_ids_value_error_vendor` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L358–L363` |
| `GetPciIdsByPciAddressTestCase.test_get_pci_ids_value_error_product` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L382–L387` |
| `GetPciIdsByPciAddressTestCase.test_get_pci_ids_io_error_vendor` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L401–L406` |
| `GetPciIdsByPciAddressTestCase.test_get_pci_ids_io_error_product` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_utils.py:L425–L430` |

## Dependencies

- `import glob` (src/nova/tests/unit/pci/test_utils.py:L17)
- `import os` (src/nova/tests/unit/pci/test_utils.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/pci/test_utils.py:L19)
- `import fixtures` (src/nova/tests/unit/pci/test_utils.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/pci/test_utils.py:L23)
- `nova.pci`: imports `utils` (src/nova/tests/unit/pci/test_utils.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/pci/test_utils.py:L25)

## Side Effects

- **file-io**: @mock.patch('os.path.isdir', return_value=True) (src/nova/tests/unit/pci/test_utils.py:L93)
- **file-io**: @mock.patch('os.path.isdir', return_value=True) (src/nova/tests/unit/pci/test_utils.py:L102)
- **file-io**: @mock.patch('os.path.isdir', return_value=False) (src/nova/tests/unit/pci/test_utils.py:L115)
- **file-io**: @mock.patch('os.path.isdir', return_value=True) (src/nova/tests/unit/pci/test_utils.py:L128)
- **file-io**: @mock.patch('os.path.isdir', return_value=True) (src/nova/tests/unit/pci/test_utils.py:L133)
- **file-io**: @mock.patch('os.path.isdir', return_value=False) (src/nova/tests/unit/pci/test_utils.py:L138)
- **file-io**: self.fake_file = os.path.join(self.tmpdir.path, "address") (src/nova/tests/unit/pci/test_utils.py:L179)
- **file-io**: with open(self.fake_file, "w") as f: (src/nova/tests/unit/pci/test_utils.py:L180)
- **file-io**: with open(self.fake_file, "w") as f: (src/nova/tests/unit/pci/test_utils.py:L207)

## Security Surface

- **sink** (`file-write`): with open(self.fake_file, "w") as f: (src/nova/tests/unit/pci/test_utils.py:L180)
- **sink** (`file-write`): f.write("a0:36:9f:72:00:00\n") (src/nova/tests/unit/pci/test_utils.py:L181)
- **sink** (`file-write`): with open(self.fake_file, "w") as f: (src/nova/tests/unit/pci/test_utils.py:L207)

