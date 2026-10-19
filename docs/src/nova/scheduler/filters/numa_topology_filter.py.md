# src/nova/scheduler/filters/numa_topology_filter.py

## Overview

This file implements the `numa_topology_filter` module, defining 1 class, 2 constants, 2 methods, 5 imports, 2 side effects.

Lines: total 132, code 86, comment 25, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/numa_topology_filter.py:L20–L20` |
| `NUMATopologyFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/numa_topology_filter.py:L23–L132` |
| `NUMATopologyFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/numa_topology_filter.py:L33–L33` |
| `NUMATopologyFilter._satisfies_cpu_policy` | method | (self, host_state, extra_specs, image_props) | private | `True` (src/nova/scheduler/filters/numa_topology_filter.py:L49); `True` (src/nova/scheduler/filters/numa_topology_filter.py:L52); `True` (src/nova/scheduler/filters/numa_topology_filter.py:L55); `False` (src/nova/scheduler/filters/numa_topology_filter.py:L62); `True` (src/nova/scheduler/filters/numa_topology_filter.py:L64) | 5/19 | `src/nova/scheduler/filters/numa_topology_filter.py:L35–L64` |
| `NUMATopologyFilter.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/numa_topology_filter.py:L93); `False` (src/nova/scheduler/filters/numa_topology_filter.py:L121); `True` (src/nova/scheduler/filters/numa_topology_filter.py:L123); `False` (src/nova/scheduler/filters/numa_topology_filter.py:L130); `True` (src/nova/scheduler/filters/numa_topology_filter.py:L132) | 9/52 | `src/nova/scheduler/filters/numa_topology_filter.py:L66–L132` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/numa_topology_filter.py:L13)
- `nova`: imports `objects` (src/nova/scheduler/filters/numa_topology_filter.py:L15)
- `nova.objects`: imports `fields` (src/nova/scheduler/filters/numa_topology_filter.py:L16)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/numa_topology_filter.py:L17)
- `nova.virt`: imports `hardware` (src/nova/scheduler/filters/numa_topology_filter.py:L18)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/numa_topology_filter.py:L20)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/numa_topology_filter.py:L33)

