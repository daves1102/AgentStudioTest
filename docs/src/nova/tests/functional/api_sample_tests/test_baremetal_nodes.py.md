# src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py

## Overview

This file implements the `test_baremetal_nodes` module, defining 1 class, 1 constant, 1 field, 3 functions, 2 methods, 2 variables, 4 imports, 4 side effects.

Lines: total 77, code 46, comment 14, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_nodes` | variable | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L23–L37` |
| `nodes` | function | (*args, **kwargs) | exported | not declared | 2/3 | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L40–L42` |
| `get_node` | function | (*args, **kwargs) | exported | `fake_nodes[0]` (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L46) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L45–L46` |
| `ports` | function | (*args, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L49–L51` |
| `fake_client` | variable | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L54–L54` |
| `BareMetalNodesSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L66–L77` |
| `BareMetalNodesSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L67–L67` |
| `BareMetalNodesSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L68–L68` |
| `BareMetalNodesSampleJsonTest.test_baremetal_nodes_list` | method | (self, mock_get_irc) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L70–L72` |
| `BareMetalNodesSampleJsonTest.test_baremetal_nodes_get` | method | (self, mock_get_irc) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L74–L77` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L15)
- `openstack.baremetal.v1`: imports `_proxy as baremetal_proxy` (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L17)
- `openstack.baremetal.v1`: imports `node` (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L18)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L20)

## Side Effects

- **network**: from openstack.baremetal.v1 import _proxy as baremetal_proxy (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L17)
- **network**: from openstack.baremetal.v1 import node (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L18)
- **network**: "nova.api.openstack.compute.baremetal_nodes" (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L61)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_baremetal_nodes.py:L67)

