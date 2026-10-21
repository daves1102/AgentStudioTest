# src/nova/tests/unit/network/test_os_vif_util.py

## Overview

This file implements the `test_os_vif_util` module, defining 1 class, 40 methods, 7 imports.

Lines: total 1334, code 1178, comment 20, blank 136

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `OSVIFUtilTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_os_vif_util.py:L25–L1334` |
| `OSVIFUtilTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_os_vif_util.py:L27–L30` |
| `OSVIFUtilTestCase.assertObjEqual` | method | (self, expect, actual) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_os_vif_util.py:L34–L38` |
| `OSVIFUtilTestCase.test_nova_to_osvif_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_os_vif_util.py:L40–L53` |
| `OSVIFUtilTestCase.test_nova_to_osvif_instance_minimal` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_os_vif_util.py:L55–L66` |
| `OSVIFUtilTestCase.test_nova_to_osvif_ips` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/network/test_os_vif_util.py:L68–L103` |
| `OSVIFUtilTestCase.test_nova_to_osvif_routes` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_os_vif_util.py:L105–L131` |
| `OSVIFUtilTestCase.test_nova_to_osvif_subnets` | method | (self) | public | not declared | 1/148 | `src/nova/tests/unit/network/test_os_vif_util.py:L133–L283` |
| `OSVIFUtilTestCase.test_nova_to_osvif_network` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_os_vif_util.py:L285–L315` |
| `OSVIFUtilTestCase.test_nova_to_osvif_network_extra` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/network/test_os_vif_util.py:L317–L356` |
| `OSVIFUtilTestCase.test_nova_to_osvif_network_labeled_no_bridge` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_os_vif_util.py:L358–L388` |
| `OSVIFUtilTestCase.test_nova_to_osvif_network_labeled_no_vlan` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_os_vif_util.py:L390–L404` |
| `OSVIFUtilTestCase.test_nova_to_osvif_network_mtu` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_os_vif_util.py:L406–L415` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_linux_bridge_unsupported` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_os_vif_util.py:L417–L433` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_agilio_ovs_fallthrough` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_os_vif_util.py:L435–L472` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_agilio_ovs_direct` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/network/test_os_vif_util.py:L474–L515` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_agilio_ovs_forwarder` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/network/test_os_vif_util.py:L517–L563` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_ovs_plain` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/network/test_os_vif_util.py:L565–L604` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_ovs_hybrid` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/network/test_os_vif_util.py:L606–L645` |
| `OSVIFUtilTestCase.test_nova_to_osvif_ovs_with_vnic_direct` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/network/test_os_vif_util.py:L647–L685` |
| `OSVIFUtilTestCase.test_nova_to_osvif_ovs_with_vnic_remote_managed` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/network/test_os_vif_util.py:L687–L718` |
| `OSVIFUtilTestCase.test_nova_to_osvif_ovs_with_vnic_vdpa` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/network/test_os_vif_util.py:L720–L758` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_ovs` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/network/test_os_vif_util.py:L760–L801` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_ovs_no_socket_path` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_os_vif_util.py:L803–L821` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_non_ovs` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_os_vif_util.py:L823–L860` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_fp_ovs_hybrid` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/network/test_os_vif_util.py:L862–L909` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_fp_ovs_plain` | method | (self) | public | not declared | 1/47 | `src/nova/tests/unit/network/test_os_vif_util.py:L911–L960` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_fp_lb` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/network/test_os_vif_util.py:L962–L1004` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vhostuser_fp_no_socket_path` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_os_vif_util.py:L1006–L1025` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_ivs_plain` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_os_vif_util.py:L1027–L1046` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_ivs_bridged` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_os_vif_util.py:L1048–L1068` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_unknown` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_os_vif_util.py:L1070–L1083` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_binding_failed` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_os_vif_util.py:L1085–L1094` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_unbound` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_os_vif_util.py:L1096–L1105` |
| `OSVIFUtilTestCase.test_nova_to_osvif_contrail_vrouter` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/network/test_os_vif_util.py:L1107–L1143` |
| `OSVIFUtilTestCase.test_nova_to_osvif_contrail_vrouter_no_socket_path` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_os_vif_util.py:L1145–L1163` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vrouter` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/network/test_os_vif_util.py:L1165–L1194` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vrouter_direct` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/network/test_os_vif_util.py:L1196–L1236` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vrouter_forwarder` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/network/test_os_vif_util.py:L1238–L1282` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_ovs_with_tap_creation` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/network/test_os_vif_util.py:L1284–L1309` |
| `OSVIFUtilTestCase.test_nova_to_osvif_vif_ovs_without_tap_creation` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/network/test_os_vif_util.py:L1311–L1334` |

## Dependencies

- `os_vif`: imports `objects as osv_objects` (src/nova/tests/unit/network/test_os_vif_util.py:L15)
- `os_vif.objects`: imports `fields as os_vif_fields` (src/nova/tests/unit/network/test_os_vif_util.py:L16)
- `nova`: imports `exception` (src/nova/tests/unit/network/test_os_vif_util.py:L18)
- `nova.network`: imports `model` (src/nova/tests/unit/network/test_os_vif_util.py:L19)
- `nova.network`: imports `os_vif_util` (src/nova/tests/unit/network/test_os_vif_util.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/network/test_os_vif_util.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/network/test_os_vif_util.py:L22)

