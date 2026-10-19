# src/nova/scheduler/filters/aggregate_multitenancy_isolation.py

## Overview

This file implements the `aggregate_multitenancy_isolation` module, defining 1 class, 2 constants, 1 field, 1 method, 3 imports, 2 side effects, 1 security surface entry.

Lines: total 59, code 32, comment 15, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L22–L22` |
| `AggregateMultiTenancyIsolation` | class | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L25–L59` |
| `AggregateMultiTenancyIsolation.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L29–L29` |
| `AggregateMultiTenancyIsolation.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L31–L31` |
| `AggregateMultiTenancyIsolation.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L55); `True` (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L59) | 6/16 | `src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L33–L59` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L16)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L18)
- `nova.scheduler.filters`: imports `utils` (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L22)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L31)

## Security Surface

- **sink** (`db-write`): configured_tenant_ids.update(set(values)) (src/nova/scheduler/filters/aggregate_multitenancy_isolation.py:L51)

