# src/nova/tests/functional/compute/test_resource_tracker.py

## Overview

This file implements the `test_resource_tracker` module, defining 3 classs, 10 constants, 2 fields, 2 functions, 17 methods, 1 staticmethod, 20 imports, 11 side effects.

Lines: total 721, code 531, comment 113, blank 77

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L37–L37` |
| `VCPU` | constant | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L38–L38` |
| `MEMORY_MB` | constant | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L39–L39` |
| `DISK_GB` | constant | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L40–L40` |
| `COMPUTE_HOST` | constant | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L41–L41` |
| `IronicResourceTrackerTest` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L44–L277` |
| `IronicResourceTrackerTest.FLAVOR_FIXTURES` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L51–L72` |
| `IronicResourceTrackerTest.COMPUTE_NODE_FIXTURES` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L74–L126` |
| `IronicResourceTrackerTest.INSTANCE_FIXTURES` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L128–L138` |
| `IronicResourceTrackerTest._set_client` | method | (self, client) | private | not declared | 1/3 | `src/nova/tests/functional/compute/test_resource_tracker.py:L140–L145` |
| `IronicResourceTrackerTest.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/compute/test_resource_tracker.py:L147–L177` |
| `IronicResourceTrackerTest.setUp.fake_upt` | function | (provider_tree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L161–L172` |
| `IronicResourceTrackerTest.create_fixtures` | method | (self) | public | `instances` (src/nova/tests/functional/compute/test_resource_tracker.py:L208) | 4/19 | `src/nova/tests/functional/compute/test_resource_tracker.py:L179–L208` |
| `IronicResourceTrackerTest.test_node_stats_isolation` | method | (self) | public | not declared | 2/33 | `src/nova/tests/functional/compute/test_resource_tracker.py:L213–L277` |
| `IronicResourceTrackerTest.test_node_stats_isolation._assert_stats` | function | — | private | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L258–L268` |
| `TestUpdateComputeNodeReservedAndAllocationRatio` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L280–L478` |
| `TestUpdateComputeNodeReservedAndAllocationRatio.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L286–L286` |
| `TestUpdateComputeNodeReservedAndAllocationRatio._get_reserved_host_values_from_config` | method | — | private | `{ 'VCPU': CONF.reserved_host_cpus, 'MEMORY_MB': CONF.reserved_host_memory_mb, 'DISK_GB': compute_utils.convert_mb_to_ceil_gb( CONF.reserved_host_disk_mb) }` (src/nova/tests/functional/compute/test_resource_tracker.py:L290) | 1/7 | `src/nova/tests/functional/compute/test_resource_tracker.py:L289–L295` |
| `TestUpdateComputeNodeReservedAndAllocationRatio._assert_reserved_inventory` | method | (self, inventories) | private | not declared | 2/7 | `src/nova/tests/functional/compute/test_resource_tracker.py:L297–L303` |
| `TestUpdateComputeNodeReservedAndAllocationRatio.test_update_inventory_reserved_and_allocation_ratio_from_conf` | method | (self) | public | not declared | 3/46 | `src/nova/tests/functional/compute/test_resource_tracker.py:L305–L374` |
| `TestUpdateComputeNodeReservedAndAllocationRatio.test_allocation_ratio_create_with_initial_allocation_ratio` | method | (self) | public | not declared | 2/26 | `src/nova/tests/functional/compute/test_resource_tracker.py:L376–L413` |
| `TestUpdateComputeNodeReservedAndAllocationRatio.test_allocation_ratio_overwritten_from_config` | method | (self) | public | not declared | 5/42 | `src/nova/tests/functional/compute/test_resource_tracker.py:L415–L478` |
| `TestProviderConfig` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L481–L721` |
| `TestProviderConfig.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L486–L486` |
| `TestProviderConfig.BASE_CONFIG` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L488–L493` |
| `TestProviderConfig.EMPTY_PROVIDER` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L494–L503` |
| `TestProviderConfig.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/compute/test_resource_tracker.py:L505–L511` |
| `TestProviderConfig._create_config_entry` | method | (self, id_value, id_method="uuid", cfg_file=None) | private | `cfg_file` (src/nova/tests/functional/compute/test_resource_tracker.py:L543) | 2/19 | `src/nova/tests/functional/compute/test_resource_tracker.py:L513–L543` |
| `TestProviderConfig._assert_inventory_and_traits` | method | (self, provider, config) | private | not declared | 25/50 | `src/nova/tests/functional/compute/test_resource_tracker.py:L545–L617` |
| `TestProviderConfig._place_config_file` | method | (self, file_name, file_data) | private | not declared | 1/3 | `src/nova/tests/functional/compute/test_resource_tracker.py:L619–L627` |
| `TestProviderConfig.test_single_config_file` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/compute/test_resource_tracker.py:L629–L643` |
| `TestProviderConfig.test_multiple_config_files` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/compute/test_resource_tracker.py:L645–L662` |
| `TestProviderConfig.test_multiple_compute_nodes` | method | (self) | public | not declared | 4/15 | `src/nova/tests/functional/compute/test_resource_tracker.py:L664–L690` |
| `TestProviderConfig.test_end_to_end` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/compute/test_resource_tracker.py:L692–L721` |
| `TestUpdateComputeNodeReservedAndAllocationRatio._get_reserved_host_values_from_config` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/compute/test_resource_tracker.py:L288–L295` |

## Dependencies

- `import copy` (src/nova/tests/functional/compute/test_resource_tracker.py:L13)
- `import os` (src/nova/tests/functional/compute/test_resource_tracker.py:L14)
- `unittest`: imports `mock` (src/nova/tests/functional/compute/test_resource_tracker.py:L15)
- `import fixtures` (src/nova/tests/functional/compute/test_resource_tracker.py:L17)
- `import os_resource_classes as orc` (src/nova/tests/functional/compute/test_resource_tracker.py:L18)
- `import os_traits` (src/nova/tests/functional/compute/test_resource_tracker.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/compute/test_resource_tracker.py:L20)
- `import yaml` (src/nova/tests/functional/compute/test_resource_tracker.py:L21)
- `nova.compute`: imports `power_state` (src/nova/tests/functional/compute/test_resource_tracker.py:L23)
- `nova.compute`: imports `resource_tracker` (src/nova/tests/functional/compute/test_resource_tracker.py:L24)
- `nova.compute`: imports `task_states` (src/nova/tests/functional/compute/test_resource_tracker.py:L25)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/functional/compute/test_resource_tracker.py:L26)
- `nova.compute`: imports `vm_states` (src/nova/tests/functional/compute/test_resource_tracker.py:L27)
- `nova`: imports `conf` (src/nova/tests/functional/compute/test_resource_tracker.py:L28)
- `nova`: imports `context` (src/nova/tests/functional/compute/test_resource_tracker.py:L29)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_resource_tracker.py:L30)
- `nova`: imports `test` (src/nova/tests/functional/compute/test_resource_tracker.py:L31)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/compute/test_resource_tracker.py:L32)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/compute/test_resource_tracker.py:L33)
- `nova.virt`: imports `driver as virt_driver` (src/nova/tests/functional/compute/test_resource_tracker.py:L34)

## Side Effects

- **file-io**: with open(os.path.join(self.pconf_loc, file_name), "w") as open_file: (src/nova/tests/functional/compute/test_resource_tracker.py:L626)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/compute/test_resource_tracker.py:L37)
- **global-mutation**: VCPU = orc.VCPU (src/nova/tests/functional/compute/test_resource_tracker.py:L38)
- **global-mutation**: MEMORY_MB = orc.MEMORY_MB (src/nova/tests/functional/compute/test_resource_tracker.py:L39)
- **global-mutation**: DISK_GB = orc.DISK_GB (src/nova/tests/functional/compute/test_resource_tracker.py:L40)
- **global-mutation**: COMPUTE_HOST = 'compute-host' (src/nova/tests/functional/compute/test_resource_tracker.py:L41)
- **global-mutation**: FLAVOR_FIXTURES = { (src/nova/tests/functional/compute/test_resource_tracker.py:L51)
- **global-mutation**: COMPUTE_NODE_FIXTURES = { (src/nova/tests/functional/compute/test_resource_tracker.py:L74)
- **global-mutation**: INSTANCE_FIXTURES = { (src/nova/tests/functional/compute/test_resource_tracker.py:L128)
- **global-mutation**: BASE_CONFIG = { (src/nova/tests/functional/compute/test_resource_tracker.py:L488)
- **global-mutation**: EMPTY_PROVIDER = { (src/nova/tests/functional/compute/test_resource_tracker.py:L494)

