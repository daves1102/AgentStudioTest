# src/nova/tests/unit/objects/test_monitor_metric.py

## Overview

This file implements the `test_monitor_metric` module, defining 3 classs, 6 methods, 5 variables, 6 imports.

Lines: total 109, code 80, comment 11, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_ts_now` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L21–L21` |
| `_monitor_metric_spec` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L23–L28` |
| `_monitor_metric_perc_spec` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L30–L35` |
| `_monitor_numa_metric_spec` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L37–L42` |
| `_monitor_metric_list_spec` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L44–L44` |
| `_TestMonitorMetricObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L47–L99` |
| `_TestMonitorMetricObject.test_monitor_metric_to_dict` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_monitor_metric.py:L48–L53` |
| `_TestMonitorMetricObject.test_monitor_metric_perc_to_dict` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_monitor_metric.py:L55–L61` |
| `_TestMonitorMetricObject.test_monitor_metric_list_to_list` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_monitor_metric.py:L63–L69` |
| `_TestMonitorMetricObject.test_monitor_NUMA_metric_to_dict` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_monitor_metric.py:L71–L76` |
| `_TestMonitorMetricObject.test_conversion_in_monitor_metric_list_from_json` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/objects/test_monitor_metric.py:L78–L87` |
| `_TestMonitorMetricObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_monitor_metric.py:L89–L99` |
| `TestMonitorMetricObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L102–L104` |
| `TestRemoteMonitorMetricObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_monitor_metric.py:L107–L109` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_monitor_metric.py:L13)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_monitor_metric.py:L14)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_monitor_metric.py:L16)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_monitor_metric.py:L17)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_monitor_metric.py:L18)
- `nova`: imports `utils` (src/nova/tests/unit/objects/test_monitor_metric.py:L19)

