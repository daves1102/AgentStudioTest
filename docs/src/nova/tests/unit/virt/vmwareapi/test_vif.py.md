# src/nova/tests/unit/virt/vmwareapi/test_vif.py

## Overview

This file implements the `test_vif` module, defining 1 class, 15 methods, 10 imports.

Lines: total 267, code 230, comment 15, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VMwareVifTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L30–L267` |
| `VMwareVifTestCase.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L31–L50` |
| `VMwareVifTestCase.test_get_vif_info_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L52–L55` |
| `VMwareVifTestCase.test_get_vif_info_empty_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L57–L60` |
| `VMwareVifTestCase.test_get_vif_info` | method | (self, mock_get_network_ref) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L63–L72` |
| `VMwareVifTestCase.test_get_network_ref_ovs_integration_bridge` | method | (self, mock_check) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L75–L90` |
| `VMwareVifTestCase.test_get_network_ref_ovs` | method | (self, mock_check) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L93–L107` |
| `VMwareVifTestCase.test_get_network_ref_ovs_logical_switch_id` | method | (self, mock_check) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L110–L126` |
| `VMwareVifTestCase.test_get_network_ref_dvs` | method | (self, mock_network_name) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L129–L145` |
| `VMwareVifTestCase.test_get_network_ref_dvs_vif_details` | method | (self, mock_network_name) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L148–L165` |
| `VMwareVifTestCase.test_get_network_ref_dvs_no_match` | method | (self, mock_network_name) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L169–L179` |
| `VMwareVifTestCase.test_get_network_ref_invalid_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L181–L190` |
| `VMwareVifTestCase.test_check_invalid_ovs_version` | method | (self, mock_version, mock_warning) | public | not declared | 3/9 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L195–L204` |
| `VMwareVifTestCase.test_get_network_ref_dvs_provider` | method | (self, mock_network_name) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L207–L222` |
| `VMwareVifTestCase.test_raise_neutron_network_dvs` | method | (self, mock_network_name) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L226–L238` |
| `VMwareVifTestCase.test_get_network_ref_dvs_with_dvs_pg_id` | method | (self, mock_network_name) | public | not declared | 1/25 | `src/nova/tests/unit/virt/vmwareapi/test_vif.py:L241–L267` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L16)
- `oslo_vmware`: imports `vim_util` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L20)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L22)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L23)
- `nova.tests.unit.virt.vmwareapi`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L24)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L25)
- `nova.virt.vmwareapi`: imports `network_util` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L26)
- `nova.virt.vmwareapi`: imports `vif` (src/nova/tests/unit/virt/vmwareapi/test_vif.py:L27)

