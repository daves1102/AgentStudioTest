# src/nova/scheduler/weights/metrics.py

## Overview

This file implements the `metrics` module, defining 1 class, 1 constant, 4 methods, 4 imports, 1 side effect.

Lines: total 77, code 43, comment 20, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/metrics.py:L35–L35` |
| `MetricsWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/metrics.py:L38–L77` |
| `MetricsWeigher.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/weights/metrics.py:L39–L40` |
| `MetricsWeigher._parse_setting` | method | (self) | private | not declared | 1/5 | `src/nova/scheduler/weights/metrics.py:L42–L46` |
| `MetricsWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'metrics_weight_multiplier', CONF.metrics.weight_multiplier)` (src/nova/scheduler/weights/metrics.py:L50) | 1/4 | `src/nova/scheduler/weights/metrics.py:L48–L52` |
| `MetricsWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `CONF.metrics.weight_of_unavailable` (src/nova/scheduler/weights/metrics.py:L75); `value` (src/nova/scheduler/weights/metrics.py:L77) | 7/16 | `src/nova/scheduler/weights/metrics.py:L54–L77` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/metrics.py:L29)
- `nova`: imports `exception` (src/nova/scheduler/weights/metrics.py:L30)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/metrics.py:L31)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/metrics.py:L32)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/metrics.py:L35)

