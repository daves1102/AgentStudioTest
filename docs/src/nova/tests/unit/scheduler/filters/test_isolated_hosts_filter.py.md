# src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py

## Overview

This file implements the `test_isolated_hosts_filter` module, defining 1 class, 10 methods, 5 imports.

Lines: total 89, code 55, comment 21, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestIsolatedHostsFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L20–L89` |
| `TestIsolatedHostsFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L22–L24` |
| `TestIsolatedHostsFilter._do_test_isolated_hosts` | method | (self, host_in_list, image_in_list, set_flags=True, restrict_isolated_hosts_to_isolated_images=True) | private | `self.filt_cls.host_passes(host, spec_obj)` (src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L39) | 4/14 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L26–L39` |
| `TestIsolatedHostsFilter.test_isolated_hosts_fails_isolated_on_non_isolated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L41–L42` |
| `TestIsolatedHostsFilter.test_isolated_hosts_fails_non_isolated_on_isolated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L44–L45` |
| `TestIsolatedHostsFilter.test_isolated_hosts_passes_isolated_on_isolated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L47–L48` |
| `TestIsolatedHostsFilter.test_isolated_hosts_passes_non_isolated_on_non_isolated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L50–L51` |
| `TestIsolatedHostsFilter.test_isolated_hosts_no_config` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L53–L59` |
| `TestIsolatedHostsFilter.test_isolated_hosts_no_hosts_config` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L61–L68` |
| `TestIsolatedHostsFilter.test_isolated_hosts_no_images_config` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L70–L77` |
| `TestIsolatedHostsFilter.test_isolated_hosts_less_restrictive` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L79–L89` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L12)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L14)
- `nova.scheduler.filters`: imports `isolated_hosts_filter` (src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L16)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_isolated_hosts_filter.py:L17)

