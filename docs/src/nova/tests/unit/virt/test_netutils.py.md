# src/nova/tests/unit/virt/test_netutils.py

## Overview

This file implements the `test_netutils` module, defining 1 class, 5 methods, 4 imports.

Lines: total 64, code 39, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNetUtilsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_netutils.py:L19–L64` |
| `TestNetUtilsTestCase._get_fake_instance_nw_info` | method | (self, num_networks, dhcp_server, mtu) | private | `network_info` (src/nova/tests/unit/virt/test_netutils.py:L29) | 3/8 | `src/nova/tests/unit/virt/test_netutils.py:L21–L29` |
| `TestNetUtilsTestCase.test_get_cached_vifs_with_vlan_no_nw_info` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_netutils.py:L31–L34` |
| `TestNetUtilsTestCase.test_get_cached_vifs_with_vlan_with_no_vlan_details` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_netutils.py:L36–L40` |
| `TestNetUtilsTestCase.test_get_cached_vifs_with_vlan` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_netutils.py:L42–L52` |
| `TestNetUtilsTestCase.test__get_link_mtu` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/virt/test_netutils.py:L54–L64` |

## Dependencies

- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/test_netutils.py:L13)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_netutils.py:L14)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/unit/virt/test_netutils.py:L15)
- `nova.virt`: imports `netutils` (src/nova/tests/unit/virt/test_netutils.py:L16)

