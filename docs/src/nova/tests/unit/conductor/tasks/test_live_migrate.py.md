# src/nova/tests/unit/conductor/tasks/test_live_migrate.py

## Overview

This file implements the `test_live_migrate` module, defining 1 class, 3 functions, 43 methods, 4 variables, 17 imports.

Lines: total 1002, code 867, comment 42, blank 93

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_limits1` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L34–L34` |
| `fake_selection1` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L35–L37` |
| `fake_limits2` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L38–L38` |
| `fake_selection2` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L39–L41` |
| `LiveMigrationTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L44–L1002` |
| `LiveMigrationTaskTestCase.setUp` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L45–L84` |
| `LiveMigrationTaskTestCase._generate_task` | method | (self) | private | not declared | 1/6 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L86–L91` |
| `LiveMigrationTaskTestCase.test_execute_with_destination` | method | (self, mock_get_az) | public | not declared | 1/55 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L95–L158` |
| `LiveMigrationTaskTestCase.test_execute_without_destination` | method | (self, mock_get_az) | public | not declared | 1/31 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L162–L194` |
| `LiveMigrationTaskTestCase.test_check_instance_is_active_passes_when_paused` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L196–L198` |
| `LiveMigrationTaskTestCase.test_check_instance_is_active_fails_when_shutdown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L200–L203` |
| `LiveMigrationTaskTestCase.test_check_instance_has_no_numa_passes_no_numa` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L206–L211` |
| `LiveMigrationTaskTestCase.test_check_instance_has_no_numa_passes_non_kvm` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L214–L222` |
| `LiveMigrationTaskTestCase.test_check_instance_has_no_numa_passes_workaround` | method | (self, mock_get_min_ver, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L227–L237` |
| `LiveMigrationTaskTestCase.test_check_instance_has_no_numa_fails` | method | (self, mock_get_min_ver, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L242–L253` |
| `LiveMigrationTaskTestCase.test_check_instance_has_no_numa_new_svc_passes` | method | (self, mock_get_min_ver, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L258–L268` |
| `LiveMigrationTaskTestCase.test_check_instance_host_is_up` | method | (self, mock_is_up, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L272–L278` |
| `LiveMigrationTaskTestCase.test_check_instance_host_is_up_fails_if_not_up` | method | (self, mock_is_up, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L282–L290` |
| `LiveMigrationTaskTestCase.test_check_instance_host_is_up_fails_if_not_found` | method | (self, mock) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L294–L296` |
| `LiveMigrationTaskTestCase.test_check_destination_fails_with_same_dest` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L298–L302` |
| `LiveMigrationTaskTestCase.test_check_destination_fails_with_not_enough_memory` | method | (self, mock_get_first) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L306–L318` |
| `LiveMigrationTaskTestCase.test_check_compatible_fails_with_hypervisor_diff` | method | (self, mock_get_info) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L321–L332` |
| `LiveMigrationTaskTestCase.test_check_compatible_fails_with_hypervisor_too_old` | method | (self, mock_get_info) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L335–L347` |
| `LiveMigrationTaskTestCase.test_skip_hypervisor_version_check_on_lm_raise_ex` | method | (self, mock_get_info) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L350–L362` |
| `LiveMigrationTaskTestCase.test_skip_hypervisor_version_check_on_lm_do_not_raise_ex` | method | (self, mock_get_info) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L365–L377` |
| `LiveMigrationTaskTestCase.test_check_requested_destination` | method | (self, mock_check) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L381–L394` |
| `LiveMigrationTaskTestCase.test_check_requested_destination_fails_different_cells` | method | (self, mock_get_host_mapping, mock_check, mock_is_up, mock_get_info, mock_get_host) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L405–L426` |
| `LiveMigrationTaskTestCase.test_find_destination_works` | method | (self, mock_gengrp, mock_setup, mock_reset, mock_select, mock_check, mock_call) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L438–L459` |
| `LiveMigrationTaskTestCase.test_find_destination_no_image_works` | method | (self, mock_gengrp, mock_setup, mock_select, mock_check, mock_call) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L470–L484` |
| `LiveMigrationTaskTestCase._test_find_destination_retry_hypervisor_raises` | method | (self, error, mock_setup, mock_select, mock_check, mock_call, mock_remove) | private | not declared | 1/15 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L495–L511` |
| `LiveMigrationTaskTestCase.test_find_destination_retry_with_old_hypervisor` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L513–L515` |
| `LiveMigrationTaskTestCase.test_find_destination_retry_with_invalid_hypervisor_type` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L517–L519` |
| `LiveMigrationTaskTestCase.test_find_destination_retry_with_invalid_livem_checks` | method | (self, mock_gengrp, mock_setup, mock_select, mock_check, mock_call, mock_remove) | public | not declared | 1/18 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L532–L551` |
| `LiveMigrationTaskTestCase.test_find_destination_retry_with_failed_migration_pre_checks` | method | (self, mock_gengrp, mock_setup, mock_select, mock_check, mock_call, mock_remove) | public | not declared | 1/19 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L564–L584` |
| `LiveMigrationTaskTestCase.test_find_destination_retry_exceeds_max` | method | (self, mock_gengrp, mock_setup, mock_select, mock_check, mock_remove, mock_save) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L597–L613` |
| `LiveMigrationTaskTestCase.test_find_destination_when_runs_out_of_hosts` | method | (self, mock_gengrp, mock_setup, mock_select) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L620–L628` |
| `LiveMigrationTaskTestCase.test_find_destination_with_remoteError` | method | (self, m_from_primitives, m_setup_instance_group, m_build_request_spec, m_get_image_from_system_metadata) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L634–L646` |
| `LiveMigrationTaskTestCase.test_call_livem_checks_on_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L648–L655` |
| `LiveMigrationTaskTestCase.test_bind_ports_on_destination_merges_profiles` | method | (self, mock_bind_ports, mock_get_binding_profile_alloc) | public | not declared | 1/20 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L659–L685` |
| `LiveMigrationTaskTestCase.test_bind_ports_on_destination_merges_profiles_extended_res_req` | method | (self, mock_bind_ports, mock_get_binding_profile_alloc) | public | not declared | 1/35 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L689–L731` |
| `LiveMigrationTaskTestCase.test_bind_ports_on_destination_migration_data` | method | (self, mock_bind_ports) | public | not declared | 1/14 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L738–L757` |
| `LiveMigrationTaskTestCase.test_bind_ports_on_destination_provider_mapping` | method | (self, mock_bind_ports, mock_get_binding_profile_alloc) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L761–L783` |
| `LiveMigrationTaskTestCase.test_find_destination_with_resource_request` | method | (self, mock_setup, mock_reset, mock_select, mock_check, mock_call, mock_fill_provider_mapping, mock_update_pci_req) | public | not declared | 1/27 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L797–L830` |
| `LiveMigrationTaskTestCase.test_get_source_cell_mapping_not_found` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L835–L842` |
| `LiveMigrationTaskTestCase.test_get_destination_cell_mapping_not_found` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L847–L854` |
| `LiveMigrationTaskTestCase.test_remove_host_allocations` | method | (self, remove_provider) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L858–L861` |
| `LiveMigrationTaskTestCase.test_check_can_migrate_pci` | method | (self, mock_get_pci, mock_warn) | public | not declared | 1/61 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L865–L976` |
| `LiveMigrationTaskTestCase.test_check_can_migrate_pci._test` | function | (instance_pci_reqs, supp_binding_ext_retval, supp_vif_related_pci_alloc_retval, mock_supp_vif_related_pci_alloc, mock_supp_port_binding_ext) | private | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L882–L897` |
| `LiveMigrationTaskTestCase.test_check_can_migrate_pci._assert_precheck_error` | function | (msg) | private | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L899–L911` |
| `LiveMigrationTaskTestCase.test_check_can_migrate_specific_resources` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L978–L1002` |
| `LiveMigrationTaskTestCase.test_check_can_migrate_specific_resources._test` | function | (resources, supp_lm_vpmem_retval, mock_support_lm_vpmem) | private | not declared | — | `src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L983–L986` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L13)
- `import oslo_messaging as messaging` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L17)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L19)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L20)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L21)
- `nova.conductor.tasks`: imports `live_migrate` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L22)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L25)
- `nova.scheduler.client`: imports `query` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L26)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L27)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L28)
- `nova`: imports `servicegroup` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L30)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/conductor/tasks/test_live_migrate.py:L31)

