# src/nova/tests/unit/objects/test_instance_numa.py

## Overview

This file implements the `test_instance_numa` module, defining 6 classs, 1 function, 22 methods, 3 variables, 10 imports.

Lines: total 575, code 404, comment 79, blank 92

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_instance_uuid` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L27–L27` |
| `fake_obj_numa_topology` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L29–L40` |
| `fake_db_topology` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L42–L50` |
| `get_fake_obj_numa_topology` | function | (context) | exported | `fake_obj_numa_topology_cpy` (src/nova/tests/unit/objects/test_instance_numa.py:L56) | 1/4 | `src/nova/tests/unit/objects/test_instance_numa.py:L53–L56` |
| `_TestInstanceNUMACell` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L59–L219` |
| `_TestInstanceNUMACell.test_siblings` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/objects/test_instance_numa.py:L61–L113` |
| `_TestInstanceNUMACell.test_pin` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_numa.py:L115–L133` |
| `_TestInstanceNUMACell.test_pin_vcpus` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance_numa.py:L135–L149` |
| `_TestInstanceNUMACell.test_cpu_pinning` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance_numa.py:L151–L159` |
| `_TestInstanceNUMACell.test_cpuset_reserved` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_instance_numa.py:L161–L163` |
| `_TestInstanceNUMACell.test_clear_host_pinning` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_numa.py:L165–L177` |
| `_TestInstanceNUMACell.test_emulator_threads_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_numa.py:L179–L184` |
| `_TestInstanceNUMACell.test_obj_make_compatible` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/objects/test_instance_numa.py:L186–L219` |
| `TestInstanceNUMACell` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L222–L225` |
| `TestInstanceNUMACellRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L228–L231` |
| `_TestInstanceNUMATopology` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L234–L563` |
| `_TestInstanceNUMATopology.test_create` | method | (self, mock_update) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_numa.py:L237–L241` |
| `_TestInstanceNUMATopology._test_get_by_instance_uuid` | method | (self) | private | not declared | 2/12 | `src/nova/tests/unit/objects/test_instance_numa.py:L243–L254` |
| `_TestInstanceNUMATopology.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_instance_numa.py:L257–L259` |
| `_TestInstanceNUMATopology.test_get_by_instance_uuid_missing` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_numa.py:L262–L267` |
| `_TestInstanceNUMATopology.test_cpu_policy` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_instance_numa.py:L269–L289` |
| `_TestInstanceNUMATopology.test_cpu_policy__error` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_instance_numa.py:L291–L312` |
| `_TestInstanceNUMATopology.test_cpuset_reserved` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance_numa.py:L314–L326` |
| `_TestInstanceNUMATopology.test_obj_make_compatible_numa` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_numa.py:L328–L339` |
| `_TestInstanceNUMATopology.test_obj_from_db_obj` | method | (self) | public | not declared | 3/22 | `src/nova/tests/unit/objects/test_instance_numa.py:L341–L375` |
| `_TestInstanceNUMATopology.test_obj_from_db_obj_no_pinning` | method | (self) | public | not declared | 3/22 | `src/nova/tests/unit/objects/test_instance_numa.py:L377–L415` |
| `_TestInstanceNUMATopology.test__migrate_legacy_dedicated_instance_cpuset_dedicate_1_4` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_instance_numa.py:L417–L452` |
| `_TestInstanceNUMATopology.test__migrate_legacy_dedicated_instance_cpuset_shared_1_4` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_instance_numa.py:L454–L489` |
| `_TestInstanceNUMATopology.test__migrate_legacy_dedicated_instance_cpuset_dedicated_half_migrated` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_instance_numa.py:L491–L524` |
| `_TestInstanceNUMATopology.test__migrate_legacy_dedicated_instance_cpuset_mixed_1_4` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_instance_numa.py:L526–L563` |
| `TestInstanceNUMATopology` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L566–L569` |
| `TestInstanceNUMATopologyRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_numa.py:L572–L575` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_instance_numa.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_numa.py:L14)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_instance_numa.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance_numa.py:L17)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_instance_numa.py:L18)
- `import testtools` (src/nova/tests/unit/objects/test_instance_numa.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance_numa.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance_numa.py:L22)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_instance_numa.py:L23)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_numa.py:L24)

