# src/nova/objects/monitor_metric.py

## Overview

This file implements the `monitor_metric` module, defining 2 classs, 3 constants, 2 fields, 4 methods, 1 variable, 5 imports, 3 side effects.

Lines: total 119, code 67, comment 31, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FIELDS_REQUIRING_CONVERSION` | constant | — | exported | not declared | — | `src/nova/objects/monitor_metric.py:L24–L28` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/monitor_metric.py:L30–L33` |
| `MonitorMetric` | class | — | exported | not declared | — | `src/nova/objects/monitor_metric.py:L37–L80` |
| `MonitorMetric.VERSION` | constant | — | public | not declared | — | `src/nova/objects/monitor_metric.py:L41–L41` |
| `MonitorMetric.fields` | field | — | public | not declared | — | `src/nova/objects/monitor_metric.py:L43–L51` |
| `MonitorMetric.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/6 | `src/nova/objects/monitor_metric.py:L53–L58` |
| `MonitorMetric.to_dict` | method | (self) | public | `dict_to_return` (src/nova/objects/monitor_metric.py:L80) | 4/14 | `src/nova/objects/monitor_metric.py:L62–L80` |
| `MonitorMetricList` | class | — | exported | not declared | — | `src/nova/objects/monitor_metric.py:L84–L119` |
| `MonitorMetricList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/monitor_metric.py:L87–L87` |
| `MonitorMetricList.fields` | field | — | public | not declared | — | `src/nova/objects/monitor_metric.py:L89–L91` |
| `MonitorMetricList.from_json` | method | (cls, metrics) | public | `MonitorMetricList(objects=metric_list)` (src/nova/objects/monitor_metric.py:L114) | 5/9 | `src/nova/objects/monitor_metric.py:L94–L114` |
| `MonitorMetricList.to_list` | method | (self) | public | `[m.to_dict() for m in self.objects]` (src/nova/objects/monitor_metric.py:L119) | 2/2 | `src/nova/objects/monitor_metric.py:L118–L119` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/monitor_metric.py:L13)
- `oslo_utils`: imports `versionutils` (src/nova/objects/monitor_metric.py:L14)
- `nova.objects`: imports `base` (src/nova/objects/monitor_metric.py:L16)
- `nova.objects`: imports `fields` (src/nova/objects/monitor_metric.py:L17)
- `nova`: imports `utils` (src/nova/objects/monitor_metric.py:L18)

## Side Effects

- **global-mutation**: FIELDS_REQUIRING_CONVERSION = [fields.MonitorMetricType.CPU_USER_PERCENT, (src/nova/objects/monitor_metric.py:L24)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/monitor_metric.py:L41)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/monitor_metric.py:L87)

