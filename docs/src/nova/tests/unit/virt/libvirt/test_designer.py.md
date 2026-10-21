# src/nova/tests/unit/virt/libvirt/test_designer.py

## Overview

This file implements the `test_designer` module, defining 1 class, 19 methods, 6 imports.

Lines: total 244, code 202, comment 18, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DesignerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_designer.py:L24–L244` |
| `DesignerTestCase.test_set_vif_bandwidth_config_no_extra_specs` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L26–L36` |
| `DesignerTestCase.test_set_vif_guest_frontend_config` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L38–L47` |
| `DesignerTestCase.test_set_vif_guest_frontend_config_rx_queue_size` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L49–L58` |
| `DesignerTestCase.test_set_vif_host_backend_ethernet_config_libvirt_1_3_3` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L60–L65` |
| `DesignerTestCase.test_set_vif_host_backend_802qbg_config` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L67–L84` |
| `DesignerTestCase.test_set_vif_host_backend_802qbh_config_direct` | method | (self, mock_pci) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L88–L101` |
| `DesignerTestCase.test_set_vif_host_backend_802qbh_config_hostdev` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L103–L113` |
| `DesignerTestCase.test_set_vif_host_backend_hw_veb_direct` | method | (self, mock_pci) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L117–L129` |
| `DesignerTestCase.test_set_vif_host_backend_hw_veb_hostdev` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L131–L141` |
| `DesignerTestCase.test_set_vif_host_backend_hostdev_pci_config` | method | (self, mock_pci_fields) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L146–L154` |
| `DesignerTestCase.test_set_vif_host_backend_direct_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L156–L163` |
| `DesignerTestCase.test_set_vif_host_backend_vhostuser_config` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L165–L174` |
| `DesignerTestCase.test_set_vif_host_backend_vdpa_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L176–L183` |
| `DesignerTestCase.test_set_vif_host_backend_vdpa_config_queue_size` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L185–L193` |
| `DesignerTestCase.test_set_vif_host_backend_vhostuser_config_queue_size` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L195–L204` |
| `DesignerTestCase.test_set_vif_host_backend_vhostuser_config_tx_queue_size` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L206–L215` |
| `DesignerTestCase.test_set_vif_host_backend_vhostuser_config_rx_queue_size` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L217–L226` |
| `DesignerTestCase.test_set_vif_host_backend_vhostuser_config_tapname` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L228–L239` |
| `DesignerTestCase.test_set_vif_mtu_config` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_designer.py:L241–L244` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_designer.py:L15)
- `nova.pci`: imports `utils as pci_utils` (src/nova/tests/unit/virt/libvirt/test_designer.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_designer.py:L18)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/virt/libvirt/test_designer.py:L19)
- `nova.virt.libvirt`: imports `config` (src/nova/tests/unit/virt/libvirt/test_designer.py:L20)
- `nova.virt.libvirt`: imports `designer` (src/nova/tests/unit/virt/libvirt/test_designer.py:L21)

