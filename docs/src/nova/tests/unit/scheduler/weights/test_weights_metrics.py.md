# src/nova/tests/unit/scheduler/weights/test_weights_metrics.py

## Overview

This file implements the `test_weights_metrics` module, defining 1 class, 2 functions, 17 methods, 3 variables, 8 imports.

Lines: total 243, code 158, comment 57, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `idle` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L26–L26` |
| `kernel` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L27–L27` |
| `user` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L28–L28` |
| `fake_metric` | function | (name, value) | exported | `monitor_metric.MonitorMetric(name=name, value=value)` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L32) | 1/2 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L31–L32` |
| `fake_list` | function | (objs) | exported | `monitor_metric.MonitorMetricList(objects=m_list)` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L37) | 2/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L35–L37` |
| `MetricsWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L40–L243` |
| `MetricsWeigherTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L41–L45` |
| `MetricsWeigherTestCase._get_weighed_host` | method | (self, hosts, setting, weight_properties=None) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, weight_properties)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L52) | 2/7 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L47–L53` |
| `MetricsWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L72) | 2/19 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L55–L73` |
| `MetricsWeigherTestCase._do_test` | method | (self, settings, expected_weight, expected_host) | private | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L75–L79` |
| `MetricsWeigherTestCase.test_single_resource_no_metrics` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L81–L88` |
| `MetricsWeigherTestCase.test_single_resource` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L90–L97` |
| `MetricsWeigherTestCase.test_multiple_resource` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L99–L106` |
| `MetricsWeigherTestCase.test_single_resource_duplicate_setting` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L108–L115` |
| `MetricsWeigherTestCase.test_single_resourcenegative_ratio` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L117–L124` |
| `MetricsWeigherTestCase.test_multiple_resource_missing_ratio` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L126–L133` |
| `MetricsWeigherTestCase.test_multiple_resource_wrong_ratio` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L135–L142` |
| `MetricsWeigherTestCase._check_parsing_result` | method | (self, weigher, setting, results) | private | not declared | 2/6 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L144–L149` |
| `MetricsWeigherTestCase.test_parse_setting` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L151–L167` |
| `MetricsWeigherTestCase.test_metric_not_found_required` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L169–L175` |
| `MetricsWeigherTestCase.test_metric_not_found_non_required` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L177–L187` |
| `MetricsWeigherTestCase.test_metrics_weigher_multiplier` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L189–L221` |
| `MetricsWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L223–L243` |

## Dependencies

- `nova`: imports `exception` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L17)
- `nova.objects`: imports `fields` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L18)
- `nova.objects`: imports `monitor_metric` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L19)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L20)
- `nova.scheduler.weights`: imports `metrics` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L22)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_metrics.py:L23)

