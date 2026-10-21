# src/nova/tests/unit/policies/test_server_topology.py

## Overview

This file implements the `test_server_topology` module, defining 2 classs, 1 field, 4 methods, 9 imports, 2 side effects.

Lines: total 102, code 70, comment 19, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerTopologyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_topology.py:L25–L89` |
| `ServerTopologyPolicyTest.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/policies/test_server_topology.py:L33–L64` |
| `ServerTopologyPolicyTest.test_index_server_topology_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_topology.py:L66–L71` |
| `ServerTopologyPolicyTest.test_index_host_server_topology_policy` | method | (self) | public | not declared | 3/14 | `src/nova/tests/unit/policies/test_server_topology.py:L73–L89` |
| `ServerTopologyNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_topology.py:L92–L102` |
| `ServerTopologyNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_topology.py:L97–L97` |
| `ServerTopologyNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_server_topology.py:L99–L102` |

## Dependencies

- `import fixtures` (src/nova/tests/unit/policies/test_server_topology.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_topology.py:L14)
- `nova.api.openstack.compute`: imports `server_topology` (src/nova/tests/unit/policies/test_server_topology.py:L16)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_server_topology.py:L17)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_server_topology.py:L18)
- `nova.policies`: imports `server_topology as policies` (src/nova/tests/unit/policies/test_server_topology.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_topology.py:L20)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_topology.py:L21)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_topology.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import server_topology (src/nova/tests/unit/policies/test_server_topology.py:L16)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_topology.py:L38)

