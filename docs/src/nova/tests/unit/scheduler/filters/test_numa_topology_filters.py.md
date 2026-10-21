# src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py

## Overview

This file implements the `test_numa_topology_filters` module, defining 1 class, 20 methods, 8 imports.

Lines: total 418, code 343, comment 29, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNUMATopologyFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L25–L418` |
| `TestNUMATopologyFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L27–L29` |
| `TestNUMATopologyFilter._get_spec_obj` | method | (self, numa_topology, network_metadata=None) | private | `spec_obj` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L43) | 2/10 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L31–L43` |
| `TestNUMATopologyFilter.test_numa_topology_filter_pass` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L45–L60` |
| `TestNUMATopologyFilter.test_numa_topology_filter_numa_instance_no_numa_host_fail` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L62–L72` |
| `TestNUMATopologyFilter.test_numa_topology_filter_numa_host_no_numa_instance_pass` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L74–L78` |
| `TestNUMATopologyFilter.test_numa_topology_filter_fail_fit` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L80–L95` |
| `TestNUMATopologyFilter.test_numa_topology_filter_fail_memory` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L97–L110` |
| `TestNUMATopologyFilter.test_numa_topology_filter_fail_cpu` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L112–L124` |
| `TestNUMATopologyFilter.test_numa_topology_filter_pass_set_limit` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L126–L144` |
| `TestNUMATopologyFilter._do_test_numa_topology_filter_cpu_policy` | method | (self, numa_topology, cpu_policy, cpu_thread_policy, passes) | private | not declared | 4/55 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L146–L207` |
| `TestNUMATopologyFilter.test_numa_topology_filter_fail_cpu_thread_policy_require` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L209–L215` |
| `TestNUMATopologyFilter.test_numa_topology_filter_pass_cpu_thread_policy_require` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L217–L223` |
| `TestNUMATopologyFilter.test_numa_topology_filter_pass_cpu_thread_policy_others` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L225–L233` |
| `TestNUMATopologyFilter.test_numa_topology_filter_pass_mempages` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L235–L250` |
| `TestNUMATopologyFilter.test_numa_topology_filter_fail_mempages` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L252–L265` |
| `TestNUMATopologyFilter._get_fake_host_state_with_networks` | method | (self) | private | `fakes.FakeHostState('host1', 'node1', { 'numa_topology': host_topology, 'pci_stats': None, 'cpu_allocation_ratio': 16.0, 'ram_allocation_ratio': 1.5, 'allocation_candidates': [{"mappings": {}}], })` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L295) | 1/34 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L267–L301` |
| `TestNUMATopologyFilter.test_numa_topology_filter_pass_networks` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L303–L325` |
| `TestNUMATopologyFilter.test_numa_topology_filter_fail_networks` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L327–L342` |
| `TestNUMATopologyFilter.test_filters_candidates` | method | (self, mock_numa_fit) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L345–L384` |
| `TestNUMATopologyFilter.test_filter_fails_if_no_matching_candidate_left` | method | (self, mock_numa_fit) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L387–L418` |

## Dependencies

- `import itertools` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L18)
- `nova.objects`: imports `fields` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L19)
- `nova.scheduler.filters`: imports `numa_topology_filter` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L21)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_numa_topology_filters.py:L22)

