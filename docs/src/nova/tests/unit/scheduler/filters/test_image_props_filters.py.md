# src/nova/tests/unit/scheduler/filters/test_image_props_filters.py

## Overview

This file implements the `test_image_props_filters` module, defining 1 class, 18 methods, 6 imports.

Lines: total 303, code 264, comment 17, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestImagePropsFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L22–L303` |
| `TestImagePropsFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L24–L26` |
| `TestImagePropsFilter.test_image_properties_filter_passes_same_inst_props_and_version` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L28–L44` |
| `TestImagePropsFilter.test_image_properties_filter_uses_default_conf_value` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L46–L59` |
| `TestImagePropsFilter.test_image_properties_filter_fails_different_inst_props` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L61–L76` |
| `TestImagePropsFilter.test_image_properties_filter_fails_different_hyper_version` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L78–L95` |
| `TestImagePropsFilter.test_image_properties_filter_passes_partial_inst_props` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L97–L111` |
| `TestImagePropsFilter.test_image_properties_filter_fails_partial_inst_props` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L113–L127` |
| `TestImagePropsFilter.test_image_properties_filter_passes_without_inst_props` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L129–L139` |
| `TestImagePropsFilter.test_image_properties_filter_fails_without_host_props` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L141–L153` |
| `TestImagePropsFilter.test_image_properties_filter_passes_without_hyper_version` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L155–L170` |
| `TestImagePropsFilter.test_image_properties_filter_fails_with_unsupported_hyper_ver` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L172–L188` |
| `TestImagePropsFilter.test_image_properties_filter_pv_mode_compat` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L190–L204` |
| `TestImagePropsFilter.test_image_properties_filter_hvm_mode_compat` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L206–L220` |
| `TestImagePropsFilter.test_image_properties_filter_xen_arch_compat` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L222–L236` |
| `TestImagePropsFilter.test_image_properties_filter_xen_hv_type_compat` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L238–L252` |
| `TestImagePropsFilter.test_image_properties_filter_baremetal_vmmode_compat` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L254–L269` |
| `TestImagePropsFilter.test_image_properties_filter_pass_maxphysaddr_bits` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L271–L286` |
| `TestImagePropsFilter.test_image_properties_filter_fails_maxphysaddr_bits` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L288–L303` |

## Dependencies

- `oslo_utils`: imports `versionutils` (src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L15)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L16)
- `nova.scheduler.filters`: imports `image_props_filter` (src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L18)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_image_props_filters.py:L19)

