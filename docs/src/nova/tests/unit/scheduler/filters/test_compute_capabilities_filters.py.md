# src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py

## Overview

This file implements the `test_compute_capabilities_filters` module, defining 1 class, 25 methods, 4 imports, 2 security surface entries.

Lines: total 207, code 153, comment 15, blank 39

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestComputeCapabilitiesFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L19–L207` |
| `TestComputeCapabilitiesFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L21–L23` |
| `TestComputeCapabilitiesFilter._do_test_compute_filter_extra_specs` | method | (self, ecaps, especs, passes) | private | not declared | 2/10 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L25–L36` |
| `TestComputeCapabilitiesFilter.test_compute_filter_passes_without_extra_specs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L38–L43` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fails_without_host_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L45–L49` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fails_without_capabilities` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L51–L59` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_cpu_info_as_text_type` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L61–L71` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_cpu_info_with_backward_compatibility` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L73–L83` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fail_cpu_info_with_backward_compatibility` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L85–L95` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fail_cpu_info_as_text_type_not_valid` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L97–L103` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_maxphysaddr_bits` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L105–L111` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fails_maxphysaddr_bits` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L113–L119` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fails_without_maxphysaddr_bits` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L121–L127` |
| `TestComputeCapabilitiesFilter.test_compute_filter_passes_extra_specs_simple` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L129–L133` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fails_extra_specs_simple` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L135–L139` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_extra_specs_simple_with_scope` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L141–L145` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_extra_specs_same_as_scope` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L147–L152` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_self_defined_specs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L154–L159` |
| `TestComputeCapabilitiesFilter.test_compute_filter_extra_specs_simple_with_wrong_scope` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L161–L165` |
| `TestComputeCapabilitiesFilter.test_compute_filter_extra_specs_pass_multi_level_with_scope` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L167–L171` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_ram_with_backward_compatibility` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L173–L177` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fail_ram_with_backward_compatibility` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L179–L183` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_cpu_with_backward_compatibility` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L185–L189` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fail_cpu_with_backward_compatibility` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L191–L195` |
| `TestComputeCapabilitiesFilter.test_compute_filter_pass_disk_with_backward_compatibility` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L197–L201` |
| `TestComputeCapabilitiesFilter.test_compute_filter_fail_disk_with_backward_compatibility` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L203–L207` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L13)
- `nova.scheduler.filters`: imports `compute_capabilities_filter` (src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L14)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L15)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L16)

## Security Surface

- **sink** (`db-write`): capabilities.update(ecaps) (src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L29)
- **sink** (`db-write`): host_state.update(capabilities) (src/nova/tests/unit/scheduler/filters/test_compute_capabilities_filters.py:L33)

