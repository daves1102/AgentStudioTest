# src/nova/scheduler/filters/io_ops_filter.py

## Overview

This file implements the `io_ops_filter` module, defining 2 classs, 3 constants, 3 methods, 4 imports, 3 side effects.

Lines: total 70, code 41, comment 14, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/io_ops_filter.py:L22–L22` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/io_ops_filter.py:L24–L24` |
| `IoOpsFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/io_ops_filter.py:L27–L48` |
| `IoOpsFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/io_ops_filter.py:L30–L30` |
| `IoOpsFilter._get_max_io_ops_per_host` | method | (self, host_state, spec_obj) | private | `CONF.filter_scheduler.max_io_ops_per_host` (src/nova/scheduler/filters/io_ops_filter.py:L33) | 1/2 | `src/nova/scheduler/filters/io_ops_filter.py:L32–L33` |
| `IoOpsFilter.host_passes` | method | (self, host_state, spec_obj) | public | `passes` (src/nova/scheduler/filters/io_ops_filter.py:L48) | 2/11 | `src/nova/scheduler/filters/io_ops_filter.py:L35–L48` |
| `AggregateIoOpsFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/io_ops_filter.py:L51–L70` |
| `AggregateIoOpsFilter._get_max_io_ops_per_host` | method | (self, host_state, spec_obj) | private | `value` (src/nova/scheduler/filters/io_ops_filter.py:L70) | 2/12 | `src/nova/scheduler/filters/io_ops_filter.py:L57–L70` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/io_ops_filter.py:L16)
- `import nova.conf` (src/nova/scheduler/filters/io_ops_filter.py:L18)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/io_ops_filter.py:L19)
- `nova.scheduler.filters`: imports `utils` (src/nova/scheduler/filters/io_ops_filter.py:L20)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/io_ops_filter.py:L22)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/filters/io_ops_filter.py:L24)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/io_ops_filter.py:L30)

