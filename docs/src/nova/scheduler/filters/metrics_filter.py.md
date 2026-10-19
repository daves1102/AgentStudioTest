# src/nova/scheduler/filters/metrics_filter.py

## Overview

This file implements the `metrics_filter` module, defining 1 class, 3 constants, 2 methods, 4 imports, 3 side effects.

Lines: total 54, code 30, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/metrics_filter.py:L22–L22` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/metrics_filter.py:L24–L24` |
| `MetricsFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/metrics_filter.py:L27–L54` |
| `MetricsFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/metrics_filter.py:L35–L35` |
| `MetricsFilter.__init__` | method | (self) | public | not declared | 2/7 | `src/nova/scheduler/filters/metrics_filter.py:L37–L43` |
| `MetricsFilter.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/metrics_filter.py:L53); `True` (src/nova/scheduler/filters/metrics_filter.py:L54) | 3/10 | `src/nova/scheduler/filters/metrics_filter.py:L45–L54` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/metrics_filter.py:L16)
- `import nova.conf` (src/nova/scheduler/filters/metrics_filter.py:L18)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/metrics_filter.py:L19)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/filters/metrics_filter.py:L20)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/metrics_filter.py:L22)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/filters/metrics_filter.py:L24)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/metrics_filter.py:L35)

