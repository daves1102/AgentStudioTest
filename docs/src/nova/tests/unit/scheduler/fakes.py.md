# src/nova/tests/unit/scheduler/fakes.py

## Overview

This file implements the `fakes` module, defining 1 class, 5 constants, 2 functions, 1 method, 4 imports, 5 side effects.

Lines: total 227, code 194, comment 17, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NUMA_TOPOLOGY` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/fakes.py:L29–L55` |
| `NUMA_TOPOLOGIES_W_HT` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/fakes.py:L57–L112` |
| `COMPUTE_NODES` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/fakes.py:L114–L168` |
| `get_fake_alloc_reqs` | function | — | exported | `[ { 'allocations': { cn.uuid: { 'resources': { 'VCPU': 1, 'MEMORY_MB': 512, 'DISK_GB': 512, }, } } } for cn in COMPUTE_NODES ]` (src/nova/tests/unit/scheduler/fakes.py:L172) | 2/14 | `src/nova/tests/unit/scheduler/fakes.py:L171–L184` |
| `RESOURCE_PROVIDERS` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/fakes.py:L187–L204` |
| `SERVICES` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/fakes.py:L206–L211` |
| `get_service_by_host` | function | (host) | exported | `services[0]` (src/nova/tests/unit/scheduler/fakes.py:L216) | 3/3 | `src/nova/tests/unit/scheduler/fakes.py:L214–L216` |
| `FakeHostState` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/fakes.py:L219–L227` |
| `FakeHostState.__init__` | method | (self, host, node, attribute_dict, instances=None) | public | not declared | 4/8 | `src/nova/tests/unit/scheduler/fakes.py:L220–L227` |

## Dependencies

- `import datetime` (src/nova/tests/unit/scheduler/fakes.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/scheduler/fakes.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/fakes.py:L23)
- `nova.scheduler`: imports `host_manager` (src/nova/tests/unit/scheduler/fakes.py:L24)

## Side Effects

- **global-mutation**: NUMA_TOPOLOGY = objects.NUMATopology(cells=[ (src/nova/tests/unit/scheduler/fakes.py:L29)
- **global-mutation**: NUMA_TOPOLOGIES_W_HT = [ (src/nova/tests/unit/scheduler/fakes.py:L57)
- **global-mutation**: COMPUTE_NODES = [ (src/nova/tests/unit/scheduler/fakes.py:L114)
- **global-mutation**: RESOURCE_PROVIDERS = [ (src/nova/tests/unit/scheduler/fakes.py:L187)
- **global-mutation**: SERVICES = [ (src/nova/tests/unit/scheduler/fakes.py:L206)

