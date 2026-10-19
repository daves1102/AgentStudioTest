# src/nova/scheduler/filters/aggregate_instance_extra_specs.py

## Overview

This file implements the `aggregate_instance_extra_specs` module, defining 1 class, 2 constants, 1 field, 1 method, 1 variable, 4 imports, 2 side effects.

Lines: total 80, code 47, comment 19, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L25–L25` |
| `_SCOPE` | variable | — | unexported | not declared | — | `src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L27–L27` |
| `AggregateInstanceExtraSpecsFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L30–L80` |
| `AggregateInstanceExtraSpecsFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L34–L34` |
| `AggregateInstanceExtraSpecsFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L36–L36` |
| `AggregateInstanceExtraSpecsFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L48); `False` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L67); `False` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L79); `True` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L80) | 9/33 | `src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L38–L80` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L17)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L20)
- `nova.scheduler.filters`: imports `extra_specs_ops` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L21)
- `nova.scheduler.filters`: imports `utils` (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L25)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/aggregate_instance_extra_specs.py:L36)

