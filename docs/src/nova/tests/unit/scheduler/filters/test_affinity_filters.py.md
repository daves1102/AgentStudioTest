# src/nova/tests/unit/scheduler/filters/test_affinity_filters.py

## Overview

This file implements the `test_affinity_filters` module, defining 4 classs, 25 methods, 6 imports.

Lines: total 252, code 191, comment 16, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestDifferentHostFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L23–L54` |
| `TestDifferentHostFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L25–L27` |
| `TestDifferentHostFilter.test_affinity_different_filter_passes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L29–L36` |
| `TestDifferentHostFilter.test_affinity_different_filter_fails` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L38–L45` |
| `TestDifferentHostFilter.test_affinity_different_filter_handles_none` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L47–L54` |
| `TestSameHostFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L57–L96` |
| `TestSameHostFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L59–L61` |
| `TestSameHostFilter.test_affinity_same_filter_passes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L63–L70` |
| `TestSameHostFilter.test_affinity_same_filter_no_list_passes` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L72–L78` |
| `TestSameHostFilter.test_affinity_same_filter_fails` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L80–L87` |
| `TestSameHostFilter.test_affinity_same_filter_handles_none` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L89–L96` |
| `TestSimpleCIDRAffinityFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L99–L140` |
| `TestSimpleCIDRAffinityFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L101–L103` |
| `TestSimpleCIDRAffinityFilter.test_affinity_simple_cidr_filter_passes` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L105–L117` |
| `TestSimpleCIDRAffinityFilter.test_affinity_simple_cidr_filter_fails` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L119–L131` |
| `TestSimpleCIDRAffinityFilter.test_affinity_simple_cidr_filter_handles_none` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L133–L140` |
| `TestGroupAffinityFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L143–L252` |
| `TestGroupAffinityFilter._test_group_anti_affinity_filter_passes` | method | (self, filt_cls, policy) | private | not declared | 1/13 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L145–L157` |
| `TestGroupAffinityFilter.test_group_anti_affinity_filter_passes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L159–L162` |
| `TestGroupAffinityFilter._test_group_anti_affinity_filter_fails` | method | (self, filt_cls, policy) | private | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L164–L174` |
| `TestGroupAffinityFilter.test_group_anti_affinity_filter_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L176–L179` |
| `TestGroupAffinityFilter._test_group_anti_affinity_filter_with_rules` | method | (self, rules, members) | private | `filt_cls.host_passes(host_wit_2_inst, spec_obj)` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L194) | 1/13 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L181–L194` |
| `TestGroupAffinityFilter.test_group_anti_affinity_filter_with_rules_fail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L196–L204` |
| `TestGroupAffinityFilter.test_group_anti_affinity_filter_with_rules_pass` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L206–L214` |
| `TestGroupAffinityFilter.test_group_anti_affinity_filter_allows_instance_to_same_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L216–L225` |
| `TestGroupAffinityFilter._test_group_affinity_filter_passes` | method | (self, filt_cls, policy) | private | not declared | 1/11 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L227–L237` |
| `TestGroupAffinityFilter.test_group_affinity_filter_passes` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L239–L241` |
| `TestGroupAffinityFilter._test_group_affinity_filter_fails` | method | (self, filt_cls, policy) | private | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L243–L248` |
| `TestGroupAffinityFilter.test_group_affinity_filter_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L250–L252` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L15)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L17)
- `nova.scheduler.filters`: imports `affinity_filter` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L19)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_affinity_filters.py:L20)

