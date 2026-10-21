# src/nova/tests/functional/db/test_compute_node.py

## Overview

This file implements the `test_compute_node` module, defining 1 class, 1 constant, 9 methods, 4 variables, 9 imports, 1 side effect.

Lines: total 297, code 220, comment 34, blank 43

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/db/test_compute_node.py:L24–L24` |
| `_HOSTNAME` | variable | — | unexported | not declared | — | `src/nova/tests/functional/db/test_compute_node.py:L26–L26` |
| `_NODENAME` | variable | — | unexported | not declared | — | `src/nova/tests/functional/db/test_compute_node.py:L27–L27` |
| `_VIRT_DRIVER_AVAIL_RESOURCES` | variable | — | unexported | not declared | — | `src/nova/tests/functional/db/test_compute_node.py:L29–L41` |
| `fake_compute_obj` | variable | — | exported | not declared | — | `src/nova/tests/functional/db/test_compute_node.py:L43–L77` |
| `ComputeNodeTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_compute_node.py:L80–L297` |
| `ComputeNodeTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_compute_node.py:L82–L84` |
| `ComputeNodeTestCase._create_zero_and_none_cn` | method | (self) | private | not declared | 3/22 | `src/nova/tests/functional/db/test_compute_node.py:L86–L111` |
| `ComputeNodeTestCase.test_get_all_by_uuids` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/db/test_compute_node.py:L113–L154` |
| `ComputeNodeTestCase.test_get_by_hypervisor_type` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/db/test_compute_node.py:L156–L171` |
| `ComputeNodeTestCase.test_numa_topology_online_migration_when_load` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/db/test_compute_node.py:L173–L207` |
| `ComputeNodeTestCase.test_ratio_online_migration_when_load` | method | (self) | public | not declared | 2/13 | `src/nova/tests/functional/db/test_compute_node.py:L209–L229` |
| `ComputeNodeTestCase.test_migrate_empty_ratio` | method | (self) | public | not declared | 3/14 | `src/nova/tests/functional/db/test_compute_node.py:L231–L250` |
| `ComputeNodeTestCase.test_migrate_none_or_zero_ratio_with_none_ratio_conf` | method | (self) | public | not declared | 3/19 | `src/nova/tests/functional/db/test_compute_node.py:L252–L277` |
| `ComputeNodeTestCase.test_migrate_none_or_zero_ratio_with_not_empty_ratio` | method | (self) | public | not declared | 2/15 | `src/nova/tests/functional/db/test_compute_node.py:L279–L297` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/db/test_compute_node.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/db/test_compute_node.py:L14)
- `import nova.conf` (src/nova/tests/functional/db/test_compute_node.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_compute_node.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/db/test_compute_node.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_compute_node.py:L19)
- `nova.objects`: imports `compute_node` (src/nova/tests/functional/db/test_compute_node.py:L20)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/functional/db/test_compute_node.py:L21)
- `nova`: imports `test` (src/nova/tests/functional/db/test_compute_node.py:L22)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/db/test_compute_node.py:L24)

