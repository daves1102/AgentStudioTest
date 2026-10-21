# src/nova/tests/unit/objects/test_network_request.py

## Overview

This file implements the `test_network_request` module, defining 3 classs, 3 constants, 10 methods, 3 imports, 3 side effects.

Lines: total 148, code 109, comment 21, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_network_request.py:L20–L20` |
| `ARQ_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_network_request.py:L21–L21` |
| `DEV_PROFILE` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_network_request.py:L22–L22` |
| `_TestNetworkRequestObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_network_request.py:L25–L138` |
| `_TestNetworkRequestObject.test_basic` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_network_request.py:L26–L32` |
| `_TestNetworkRequestObject.test_load` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_network_request.py:L34–L38` |
| `_TestNetworkRequestObject.test_to_tuple` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_network_request.py:L40–L49` |
| `_TestNetworkRequestObject.test_from_tuples` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_network_request.py:L51–L60` |
| `_TestNetworkRequestObject.test_list_as_tuples` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_network_request.py:L62–L69` |
| `_TestNetworkRequestObject.test_is_single_unspecified` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_network_request.py:L71–L81` |
| `_TestNetworkRequestObject.test_auto_allocate` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_network_request.py:L83–L100` |
| `_TestNetworkRequestObject.test_no_allocate` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_network_request.py:L102–L119` |
| `_TestNetworkRequestObject.test_obj_make_compatible_pre_1_2` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_network_request.py:L121–L128` |
| `_TestNetworkRequestObject.test_obj_make_compatible_pre_1_3` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_network_request.py:L130–L138` |
| `TestNetworkRequestObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_network_request.py:L141–L143` |
| `TestNetworkRequestRemoteObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_network_request.py:L146–L148` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/objects/test_network_request.py:L15)
- `nova.objects`: imports `network_request` (src/nova/tests/unit/objects/test_network_request.py:L16)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_network_request.py:L17)

## Side Effects

- **global-mutation**: FAKE_UUID = '0C5C9AD2-F967-4E92-A7F3-24410F697440' (src/nova/tests/unit/objects/test_network_request.py:L20)
- **global-mutation**: ARQ_UUID = '1F1EF29A-D9F3-4E92-A7F3-24410F697CEB' (src/nova/tests/unit/objects/test_network_request.py:L21)
- **global-mutation**: DEV_PROFILE = "smart_nic" (src/nova/tests/unit/objects/test_network_request.py:L22)

