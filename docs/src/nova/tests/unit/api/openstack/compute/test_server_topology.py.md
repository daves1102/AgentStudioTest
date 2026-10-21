# src/nova/tests/unit/api/openstack/compute/test_server_topology.py

## Overview

This file implements the `test_server_topology` module, defining 1 class, 2 fields, 6 methods, 10 imports, 1 side effect.

Lines: total 100, code 72, comment 12, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerTopologyTestV278` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L28–L100` |
| `ServerTopologyTestV278.mock_method` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L29–L29` |
| `ServerTopologyTestV278.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L30–L30` |
| `ServerTopologyTestV278.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L32–L40` |
| `ServerTopologyTestV278._fake_numa` | method | (self, cpu_pinning=None) | private | `numa.InstanceNUMATopology(cells=[ce0])` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L47) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L42–L47` |
| `ServerTopologyTestV278.test_get_topology_with_invalid_instance` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L51–L56` |
| `ServerTopologyTestV278.test_get_topology_with_no_topology` | method | (self, fake_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L59–L67` |
| `ServerTopologyTestV278.test_get_topology_cpu_pinning_with_none` | method | (self, fake_get) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L70–L90` |
| `ServerTopologyTestV278.test_hit_topology_before278` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L92–L100` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L16)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L17)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L19)
- `nova.api.openstack.compute`: imports `server_topology` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L22)
- `nova.objects`: imports `instance_numa as numa` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import server_topology (src/nova/tests/unit/api/openstack/compute/test_server_topology.py:L20)

