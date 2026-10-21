# src/nova/tests/unit/virt/vmwareapi/test_network_util.py

## Overview

This file implements the `test_network_util` module, defining 2 classs, 3 functions, 8 methods, 3 variables, 8 imports.

Lines: total 168, code 127, comment 15, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ResultSet` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L29–L29` |
| `ObjectContent` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L30–L30` |
| `DynamicProperty` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L31–L31` |
| `GetNetworkWithTheNameTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L34–L155` |
| `GetNetworkWithTheNameTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L36–L44` |
| `GetNetworkWithTheNameTestCase._build_cluster_networks` | method | (self, networks) | private | `ResultSet(objects=objects)` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L88) | 2/14 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L46–L88` |
| `GetNetworkWithTheNameTestCase.test_get_network_no_match` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L90–L110` |
| `GetNetworkWithTheNameTestCase.test_get_network_no_match.mock_call_method` | function | (module, method, *args, **kwargs) | public | `networks` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L99); `result` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L103) | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L97–L103` |
| `GetNetworkWithTheNameTestCase._get_network_dvs_match` | method | (self, name) | private | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L112–L132` |
| `GetNetworkWithTheNameTestCase._get_network_dvs_match.mock_call_method` | function | (module, method, *args, **kwargs) | public | `networks` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L119); `result` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L125) | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L117–L125` |
| `GetNetworkWithTheNameTestCase.test_get_network_dvs_exact_match` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L134–L135` |
| `GetNetworkWithTheNameTestCase.test_get_network_dvs_match` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L137–L138` |
| `GetNetworkWithTheNameTestCase.test_get_network_network_match` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L140–L155` |
| `GetNetworkWithTheNameTestCase.test_get_network_network_match.mock_call_method` | function | (module, method, *args, **kwargs) | public | `networks` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L146); `'fake_net'` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L148) | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L144–L148` |
| `GetDVSNetworkNameTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L158–L168` |
| `GetDVSNetworkNameTestCase.test__get_name_from_dvs_name` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L160–L168` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L18)
- `oslo_vmware`: imports `vim_util` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L22)
- `nova.tests.unit.virt.vmwareapi`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L23)
- `nova.tests.unit.virt.vmwareapi`: imports `stubs` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L24)
- `nova.virt.vmwareapi`: imports `network_util` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L25)
- `nova.virt.vmwareapi`: imports `session` (src/nova/tests/unit/virt/vmwareapi/test_network_util.py:L26)

