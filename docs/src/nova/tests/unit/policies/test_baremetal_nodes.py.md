# src/nova/tests/unit/policies/test_baremetal_nodes.py

## Overview

This file implements the `test_baremetal_nodes` module, defining 2 classs, 1 field, 3 methods, 6 imports, 1 side effect.

Lines: total 78, code 47, comment 14, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BaremetalNodesPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_baremetal_nodes.py:L22–L68` |
| `BaremetalNodesPolicyTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_baremetal_nodes.py:L31–L47` |
| `BaremetalNodesPolicyTest.test_index_nodes_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_baremetal_nodes.py:L49–L55` |
| `BaremetalNodesPolicyTest.test_show_node_policy` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_baremetal_nodes.py:L57–L68` |
| `BaremetalNodesNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_baremetal_nodes.py:L71–L78` |
| `BaremetalNodesNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_baremetal_nodes.py:L78–L78` |

## Dependencies

- `import fixtures` (src/nova/tests/unit/policies/test_baremetal_nodes.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_baremetal_nodes.py:L14)
- `nova.api.openstack.compute`: imports `baremetal_nodes` (src/nova/tests/unit/policies/test_baremetal_nodes.py:L16)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_baremetal_nodes.py:L17)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_baremetal_nodes.py:L18)
- `nova.tests.unit.virt.ironic`: imports `utils as ironic_utils` (src/nova/tests/unit/policies/test_baremetal_nodes.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute import baremetal_nodes (src/nova/tests/unit/policies/test_baremetal_nodes.py:L16)

