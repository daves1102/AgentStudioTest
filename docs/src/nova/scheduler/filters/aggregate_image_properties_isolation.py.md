# src/nova/scheduler/filters/aggregate_image_properties_isolation.py

## Overview

This file implements the `aggregate_image_properties_isolation` module, defining 1 class, 3 constants, 1 field, 1 method, 4 imports, 3 side effects.

Lines: total 83, code 52, comment 18, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L22–L22` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L24–L24` |
| `AggregateImagePropertiesIsolation` | class | — | exported | not declared | — | `src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L27–L83` |
| `AggregateImagePropertiesIsolation.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L31–L31` |
| `AggregateImagePropertiesIsolation.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L33–L33` |
| `AggregateImagePropertiesIsolation.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L82); `True` (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L83) | 9/39 | `src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L35–L83` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L16)
- `import nova.conf` (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L18)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L19)
- `nova.scheduler.filters`: imports `utils` (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L20)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L22)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L24)
- **global-mutation**: RUN_ON_REBUILD = True (src/nova/scheduler/filters/aggregate_image_properties_isolation.py:L33)

