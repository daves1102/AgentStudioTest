# src/nova/scheduler/filters/compute_capabilities_filter.py

## Overview

This file implements the `compute_capabilities_filter` module, defining 1 class, 2 constants, 1 field, 3 methods, 4 imports, 2 side effects.

Lines: total 123, code 82, comment 25, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/compute_capabilities_filter.py:L23–L23` |
| `ComputeCapabilitiesFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/compute_capabilities_filter.py:L26–L123` |
| `ComputeCapabilitiesFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/compute_capabilities_filter.py:L30–L30` |
| `ComputeCapabilitiesFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/compute_capabilities_filter.py:L32–L32` |
| `ComputeCapabilitiesFilter._get_capabilities` | method | (self, host_state, scope) | private | `None` (src/nova/scheduler/filters/compute_capabilities_filter.py:L47); `None` (src/nova/scheduler/filters/compute_capabilities_filter.py:L60); `None` (src/nova/scheduler/filters/compute_capabilities_filter.py:L65); `cap` (src/nova/scheduler/filters/compute_capabilities_filter.py:L66) | 8/32 | `src/nova/scheduler/filters/compute_capabilities_filter.py:L34–L66` |
| `ComputeCapabilitiesFilter._satisfies_extra_specs` | method | (self, host_state, flavor) | private | `True` (src/nova/scheduler/filters/compute_capabilities_filter.py:L73); `False` (src/nova/scheduler/filters/compute_capabilities_filter.py:L106); `False` (src/nova/scheduler/filters/compute_capabilities_filter.py:L113); `True` (src/nova/scheduler/filters/compute_capabilities_filter.py:L114) | 10/30 | `src/nova/scheduler/filters/compute_capabilities_filter.py:L68–L114` |
| `ComputeCapabilitiesFilter.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/compute_capabilities_filter.py:L122); `True` (src/nova/scheduler/filters/compute_capabilities_filter.py:L123) | 2/7 | `src/nova/scheduler/filters/compute_capabilities_filter.py:L116–L123` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/compute_capabilities_filter.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/scheduler/filters/compute_capabilities_filter.py:L17)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/compute_capabilities_filter.py:L19)
- `nova.scheduler.filters`: imports `extra_specs_ops` (src/nova/scheduler/filters/compute_capabilities_filter.py:L20)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/compute_capabilities_filter.py:L23)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/compute_capabilities_filter.py:L32)

