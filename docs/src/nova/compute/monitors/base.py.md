# src/nova/compute/monitors/base.py

## Overview

This file implements the `base` module, defining 2 classs, 4 methods, 2 imports.

Lines: total 74, code 48, comment 11, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MonitorBase` | class | — | exported | not declared | — | `src/nova/compute/monitors/base.py:L18–L56` |
| `MonitorBase.__init__` | method | (self, compute_manager) | public | not declared | 1/3 | `src/nova/compute/monitors/base.py:L26–L28` |
| `MonitorBase.get_metric_names` | method | (self) | public | not declared | 1/2 | `src/nova/compute/monitors/base.py:L31–L40` |
| `MonitorBase.populate_metrics` | method | (self, metric_list) | public | not declared | 1/2 | `src/nova/compute/monitors/base.py:L43–L56` |
| `CPUMonitorBase` | class | — | exported | not declared | — | `src/nova/compute/monitors/base.py:L59–L74` |
| `CPUMonitorBase.get_metric_names` | method | (self) | public | `set([ fields.MonitorMetricType.CPU_FREQUENCY, fields.MonitorMetricType.CPU_USER_TIME, fields.MonitorMetricType.CPU_KERNEL_TIME, fields.MonitorMetricType.CPU_IDLE_TIME, fields.MonitorMetricType.CPU_IOW` (src/nova/compute/monitors/base.py:L63) | 1/13 | `src/nova/compute/monitors/base.py:L62–L74` |

## Dependencies

- `import abc` (src/nova/compute/monitors/base.py:L13)
- `nova.objects`: imports `fields` (src/nova/compute/monitors/base.py:L15)

