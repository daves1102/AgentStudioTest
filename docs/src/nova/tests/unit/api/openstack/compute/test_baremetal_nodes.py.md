# src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py

## Overview

This file implements the `test_baremetal_nodes` module, defining 2 classs, 1 field, 14 methods, 10 imports, 1 side effect.

Lines: total 195, code 146, comment 15, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BareMetalNodesTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L29–L173` |
| `BareMetalNodesTest.mod` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L30–L30` |
| `BareMetalNodesTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L32–L42` |
| `BareMetalNodesTest._setup` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L44–L45` |
| `BareMetalNodesTest.test_index_ironic` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L47–L64` |
| `BareMetalNodesTest.test_index_ironic_missing_properties` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L66–L83` |
| `BareMetalNodesTest.test_show_ironic` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L85–L106` |
| `BareMetalNodesTest.test_show_ironic_no_properties` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L108–L129` |
| `BareMetalNodesTest.test_show_ironic_no_interfaces` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L131–L142` |
| `BareMetalNodesTest.test_show_ironic_node_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L144–L153` |
| `BareMetalNodesTest.test_create_ironic_not_supported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L155–L158` |
| `BareMetalNodesTest.test_delete_ironic_not_supported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L160–L163` |
| `BareMetalNodesTest.test_add_interface_ironic_not_supported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L165–L168` |
| `BareMetalNodesTest.test_remove_interface_ironic_not_supported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L170–L173` |
| `BareMetalNodesTestV236` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L176–L195` |
| `BareMetalNodesTestV236.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L178–L181` |
| `BareMetalNodesTestV236.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L183–L195` |

## Dependencies

- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L16)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L18)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L19)
- `nova.api.openstack.compute`: imports `baremetal_nodes` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L25)
- `nova.tests.unit.virt.ironic`: imports `utils as ironic_utils` (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import baremetal_nodes (src/nova/tests/unit/api/openstack/compute/test_baremetal_nodes.py:L21)

