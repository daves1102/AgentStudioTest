# src/nova/tests/unit/virt/test_hardware.py

## Overview

This file implements the `test_hardware` module, defining 35 classs, 1 constant, 15 fields, 3 functions, 228 methods, 1 staticmethod, 15 imports, 1 side effect.

Lines: total 6448, code 5643, comment 248, blank 557

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L33–L33` |
| `InstanceInfoTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L36–L57` |
| `InstanceInfoTests.test_instance_info_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L38–L41` |
| `InstanceInfoTests.test_instance_info` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L43–L47` |
| `InstanceInfoTests.test_instance_info_equals` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_hardware.py:L49–L57` |
| `CPUSetTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L60–L241` |
| `CPUSetTestCase.test_get_vcpu_pin_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L61–L64` |
| `CPUSetTestCase.test_get_vcpu_pin_set__unset` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L66–L69` |
| `CPUSetTestCase.test_get_vcpu_pin_set__invalid` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_hardware.py:L71–L73` |
| `CPUSetTestCase.test_get_cpu_shared_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L75–L78` |
| `CPUSetTestCase.test_get_cpu_shared_set__unset` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L80–L83` |
| `CPUSetTestCase.test_get_cpu_shared_set__error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_hardware.py:L85–L87` |
| `CPUSetTestCase.test_get_cpu_dedicated_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L89–L92` |
| `CPUSetTestCase.test_get_cpu_dedicated_set_nozero` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L94–L97` |
| `CPUSetTestCase.test_get_cpu_dedicated_set__unset` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L99–L102` |
| `CPUSetTestCase.test_get_cpu_dedicated_set__error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_hardware.py:L104–L106` |
| `CPUSetTestCase.test_parse_cpu_spec_valid_syntax_works` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L108–L143` |
| `CPUSetTestCase.test_parse_cpu_spec_invalid_syntax_raises` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/test_hardware.py:L145–L192` |
| `CPUSetTestCase.test_format_cpu_spec` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/test_hardware.py:L194–L241` |
| `VCPUTopologyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L244–L789` |
| `VCPUTopologyTest.test_validate_config` | method | (self) | public | not declared | 3/170 | `src/nova/tests/unit/virt/test_hardware.py:L246–L417` |
| `VCPUTopologyTest.test_invalid_flavor_values` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/virt/test_hardware.py:L419–L439` |
| `VCPUTopologyTest.test_possible_topologies` | method | (self) | public | not declared | 4/109 | `src/nova/tests/unit/virt/test_hardware.py:L441–L551` |
| `VCPUTopologyTest.test_sorting_topologies` | method | (self) | public | not declared | 3/86 | `src/nova/tests/unit/virt/test_hardware.py:L553–L641` |
| `VCPUTopologyTest.test_best_config` | method | (self) | public | not declared | 2/145 | `src/nova/tests/unit/virt/test_hardware.py:L643–L789` |
| `NUMATopologyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L792–L2529` |
| `NUMATopologyTest.test_cpu_policy_constraint` | method | (self) | public | not declared | 4/219 | `src/nova/tests/unit/virt/test_hardware.py:L794–L1014` |
| `NUMATopologyTest.test_topology_constraints` | method | (self) | public | not declared | 5/940 | `src/nova/tests/unit/virt/test_hardware.py:L1016–L2021` |
| `NUMATopologyTest.test_host_usage_contiguous` | method | (self) | public | not declared | 1/96 | `src/nova/tests/unit/virt/test_hardware.py:L2023–L2131` |
| `NUMATopologyTest.test_host_usage_contiguous_pages_compute` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/test_hardware.py:L2133–L2172` |
| `NUMATopologyTest.test_host_usage_sparse` | method | (self) | public | not declared | 1/85 | `src/nova/tests/unit/virt/test_hardware.py:L2174–L2263` |
| `NUMATopologyTest.test_host_usage_cumulative_with_free` | method | (self) | public | not declared | 1/64 | `src/nova/tests/unit/virt/test_hardware.py:L2265–L2337` |
| `NUMATopologyTest._topo_usage_reserved_page_size` | method | (self) | private | `hosttopo, instance1` (src/nova/tests/unit/virt/test_hardware.py:L2375) | 1/37 | `src/nova/tests/unit/virt/test_hardware.py:L2339–L2375` |
| `NUMATopologyTest.test_numa_get_reserved_huge_pages` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L2377–L2388` |
| `NUMATopologyTest.test_reserved_hugepages_success` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_hardware.py:L2390–L2408` |
| `NUMATopologyTest.test_reserved_huge_pages_invalid_format` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L2410–L2414` |
| `NUMATopologyTest.test_reserved_huge_pages_invalid_value` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L2416–L2420` |
| `NUMATopologyTest.test_topo_usage_none` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/virt/test_hardware.py:L2422–L2459` |
| `NUMATopologyTest.test_topo_usage_with_network_metadata` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/test_hardware.py:L2461–L2493` |
| `NUMATopologyTest.assertNUMACellMatches` | method | (self, expected_cell, got_cell) | public | not declared | 3/7 | `src/nova/tests/unit/virt/test_hardware.py:L2495–L2502` |
| `NUMATopologyTest.test_json` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/virt/test_hardware.py:L2504–L2529` |
| `VirtNUMATopologyCellUsageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L2532–L2685` |
| `VirtNUMATopologyCellUsageTestCase.test_fit_instance_cell_no_host_mempages` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L2533–L2570` |
| `VirtNUMATopologyCellUsageTestCase.test_fit_instance_cell_no_guest_mempages` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/test_hardware.py:L2572–L2613` |
| `VirtNUMATopologyCellUsageTestCase.test_fit_instance_cell_mempages` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/test_hardware.py:L2615–L2648` |
| `VirtNUMATopologyCellUsageTestCase.test_fit_instance_cell_with_limit` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/test_hardware.py:L2650–L2685` |
| `VirtNUMAHostTopologyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L2688–L2868` |
| `VirtNUMAHostTopologyTestCase.setUp` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/virt/test_hardware.py:L2689–L2730` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_success_no_limits` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_hardware.py:L2732–L2740` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_success_limits` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L2742–L2746` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_fails_no_limits` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L2748–L2751` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_cumulative_fails_limits` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_hardware.py:L2753–L2762` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_cumulative_success_limits` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L2764–L2774` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_success_limits_with_networks` | method | (self, mock_supports) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L2778–L2791` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_fails_limits_with_networks` | method | (self, mock_supports) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_hardware.py:L2795–L2810` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_pci_success` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_hardware.py:L2812–L2825` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_pci_fail` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_hardware.py:L2827–L2840` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_pci_avoided` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L2842–L2868` |
| `VirtNUMAHostTopologyTestCase.test_get_fitting_pci_avoided._create_pci_stats` | function | (node) | private | `stats.PciDeviceStats( objects.NUMATopology(), [objects.PciDevicePool.from_dict(test_dict)])` (src/nova/tests/unit/virt/test_hardware.py:L2847) | — | `src/nova/tests/unit/virt/test_hardware.py:L2844–L2849` |
| `NumberOfSerialPortsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L2871–L2909` |
| `NumberOfSerialPortsTest.test_flavor` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L2872–L2877` |
| `NumberOfSerialPortsTest.test_image_meta` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L2879–L2884` |
| `NumberOfSerialPortsTest.test_flavor_invalid_value` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L2886–L2892` |
| `NumberOfSerialPortsTest.test_image_meta_smaller_than_flavor` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L2894–L2900` |
| `NumberOfSerialPortsTest.test_flavor_smaller_than_image_meta` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_hardware.py:L2902–L2909` |
| `VirtLockMemoryTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L2912–L2976` |
| `VirtLockMemoryTestCase._test_get_locked_memory_constraint` | method | (self, spec=None, props=None, mach_type=None) | private | `hw.get_locked_memory_constraint(flavor, image_meta, mach_type)` (src/nova/tests/unit/virt/test_hardware.py:L2918) | 3/6 | `src/nova/tests/unit/virt/test_hardware.py:L2913–L2918` |
| `VirtLockMemoryTestCase.test_get_locked_memory_constraint_image` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L2920–L2924` |
| `VirtLockMemoryTestCase.test_get_locked_memory_conflict` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_hardware.py:L2926–L2939` |
| `VirtLockMemoryTestCase.test_get_locked_memory_constraint_forbidden` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_hardware.py:L2941–L2951` |
| `VirtLockMemoryTestCase.test_get_locked_memory_constraint_image_false` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L2953–L2958` |
| `VirtLockMemoryTestCase.test_get_locked_memory_constraint_mem_enc_accepted` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L2960–L2966` |
| `VirtLockMemoryTestCase.test_get_locked_memory_constraint_mem_enc_matched` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_hardware.py:L2968–L2976` |
| `VirtMemoryPagesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L2979–L3198` |
| `VirtMemoryPagesTestCase.test_cell_instance_pagesize` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L2980–L2987` |
| `VirtMemoryPagesTestCase.test_numa_pagesize_usage_from_cell` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/test_hardware.py:L2989–L3007` |
| `VirtMemoryPagesTestCase._test_get_requested_mempages_pagesize` | method | (self, spec=None, props=None) | private | `hw._get_numa_pagesize_constraint(flavor, image_meta)` (src/nova/tests/unit/virt/test_hardware.py:L3013) | 3/5 | `src/nova/tests/unit/virt/test_hardware.py:L3009–L3013` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_flavor_swipe` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_hardware.py:L3015–L3026` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_flavor_specific` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L3028–L3032` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_flavor_invalid` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/test_hardware.py:L3034–L3051` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesizes_from_flavor_suffix_sweep` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/test_hardware.py:L3053–L3067` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_image_flavor_any` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L3069–L3074` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_image_flavor_large` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L3076–L3081` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_image_forbidden` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L3083–L3088` |
| `VirtMemoryPagesTestCase.test_get_requested_mempages_pagesize_from_image_forbidden2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L3090–L3094` |
| `VirtMemoryPagesTestCase.test_cell_accepts_request_wipe` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/test_hardware.py:L3096–L3125` |
| `VirtMemoryPagesTestCase.test_cell_accepts_request_large_pass` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/test_hardware.py:L3127–L3144` |
| `VirtMemoryPagesTestCase.test_cell_accepts_request_custom_pass` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/test_hardware.py:L3146–L3162` |
| `VirtMemoryPagesTestCase.test_cell_accepts_request_remainder_memory` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/test_hardware.py:L3164–L3180` |
| `VirtMemoryPagesTestCase.test_cell_accepts_request_host_mempages` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/test_hardware.py:L3182–L3198` |
| `_CPUPinningTestCaseBase` | class | — | unexported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L3201–L3236` |
| `_CPUPinningTestCaseBase.assertEqualTopology` | method | (self, expected, got) | public | not declared | 2/4 | `src/nova/tests/unit/virt/test_hardware.py:L3202–L3205` |
| `_CPUPinningTestCaseBase.assertInstanceCellPinned` | method | (self, instance_cell, cell_ids=None) | public | not declared | 2/9 | `src/nova/tests/unit/virt/test_hardware.py:L3207–L3217` |
| `_CPUPinningTestCaseBase.assertPinningPreferThreads` | method | (self, instance_cell, host_cell) | public | not declared | 6/13 | `src/nova/tests/unit/virt/test_hardware.py:L3219–L3236` |
| `CPUPinningCellTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L3239–L3951` |
| `CPUPinningCellTestCase.test_get_pinning_inst_too_large_cpu` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3240–L3263` |
| `CPUPinningCellTestCase.test_get_pinning_inst_not_avail` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3265–L3288` |
| `CPUPinningCellTestCase.test_get_pinning_no_sibling_fits_empty` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/virt/test_hardware.py:L3290–L3316` |
| `CPUPinningCellTestCase.test_get_pinning_no_sibling_fits_w_usage` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_hardware.py:L3318–L3343` |
| `CPUPinningCellTestCase.test_get_pinning_instance_siblings_fits` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/virt/test_hardware.py:L3345–L3371` |
| `CPUPinningCellTestCase.test_get_pinning_instance_siblings_host_siblings_fits_empty` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/virt/test_hardware.py:L3373–L3399` |
| `CPUPinningCellTestCase.test_get_pinning_instance_siblings_host_siblings_fits_empty_2` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/virt/test_hardware.py:L3401–L3427` |
| `CPUPinningCellTestCase.test_get_pinning_instance_siblings_host_siblings_fits_w_usage` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_hardware.py:L3429–L3454` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_fit_single_core` | method | (self) | public | not declared | 2/24 | `src/nova/tests/unit/virt/test_hardware.py:L3456–L3481` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_fit` | method | (self) | public | not declared | 2/24 | `src/nova/tests/unit/virt/test_hardware.py:L3483–L3508` |
| `CPUPinningCellTestCase.test_get_pinning_require_policy_no_siblings` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/virt/test_hardware.py:L3510–L3533` |
| `CPUPinningCellTestCase.test_get_pinning_require_policy_too_few_siblings` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3535–L3558` |
| `CPUPinningCellTestCase.test_get_pinning_require_policy_fits` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L3560–L3584` |
| `CPUPinningCellTestCase.test_get_pinning_require_policy_fits_w_usage` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L3586–L3610` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_instance_odd_fit` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3612–L3634` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_instance_fit_optimize_threads` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3636–L3658` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_instance_odd_fit_w_usage` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3660–L3682` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_instance_mixed_siblings` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3684–L3706` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_instance_odd_fit_orphan_only` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3708–L3730` |
| `CPUPinningCellTestCase.test_get_pinning_host_siblings_large_instance_odd_fit` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L3732–L3757` |
| `CPUPinningCellTestCase.test_get_pinning_isolate_policy_too_few_fully_free_cores` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L3760–L3785` |
| `CPUPinningCellTestCase.test_get_pinning_isolate_policy_no_fully_free_cores` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3788–L3813` |
| `CPUPinningCellTestCase.test_get_pinning_isolate_policy_fits` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_hardware.py:L3816–L3840` |
| `CPUPinningCellTestCase.test_get_pinning_isolate_policy_fits_ht_host` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L3843–L3868` |
| `CPUPinningCellTestCase.test_get_pinning_isolate_policy_fits_w_usage` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L3871–L3896` |
| `CPUPinningCellTestCase.test_get_pinning_isolate_policy_bug_1889633` | method | (self, mock_log) | public | not declared | 1/27 | `src/nova/tests/unit/virt/test_hardware.py:L3900–L3928` |
| `CPUPinningCellTestCase.test_get_pinning_mixed_policy_bug_1898272` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/test_hardware.py:L3930–L3951` |
| `CPUPinningTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L3954–L4655` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_single_cell` | method | (self) | public | not declared | 2/35 | `src/nova/tests/unit/virt/test_hardware.py:L3955–L3991` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_single_cell_w_usage` | method | (self) | public | not declared | 2/35 | `src/nova/tests/unit/virt/test_hardware.py:L3993–L4029` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_single_cell_fail` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/test_hardware.py:L4031–L4065` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_fit` | method | (self) | public | not declared | 2/42 | `src/nova/tests/unit/virt/test_hardware.py:L4067–L4110` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_barely_fit` | method | (self) | public | not declared | 2/51 | `src/nova/tests/unit/virt/test_hardware.py:L4112–L4165` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_fail_capacity` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/test_hardware.py:L4167–L4208` |
| `CPUPinningTestCase.test_host_numa_fit_instance_to_host_fail_topology` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/test_hardware.py:L4210–L4242` |
| `CPUPinningTestCase.test_cpu_pinning_usage_from_instances` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/test_hardware.py:L4244–L4272` |
| `CPUPinningTestCase.test_cpu_pinning_usage_from_instances_free` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/test_hardware.py:L4274–L4302` |
| `CPUPinningTestCase.test_host_usage_from_instances_fail` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/test_hardware.py:L4304–L4331` |
| `CPUPinningTestCase.test_host_usage_from_instances_isolate` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L4333–L4358` |
| `CPUPinningTestCase.test_host_usage_from_instances_isolate_free` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L4360–L4385` |
| `CPUPinningTestCase.test_host_usage_from_instances_isolated_without_siblings` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L4387–L4412` |
| `CPUPinningTestCase.test_host_usage_from_instances_isolated_without_siblings_free` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L4414–L4439` |
| `CPUPinningTestCase.test_host_usage_from_mixed_instance` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/test_hardware.py:L4441–L4470` |
| `CPUPinningTestCase.test_host_usage_from_mixed_instance_free` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/test_hardware.py:L4472–L4502` |
| `CPUPinningTestCase.test_host_usage_from_mixed_instance_emu_isolate` | method | (self) | public | not declared | 2/28 | `src/nova/tests/unit/virt/test_hardware.py:L4504–L4537` |
| `CPUPinningTestCase.test_host_usage_from_mixed_instance_emu_isolate_free` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/virt/test_hardware.py:L4539–L4573` |
| `CPUPinningTestCase.test_host_usage_from_mixed_instance_cpu_isolate` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/test_hardware.py:L4575–L4614` |
| `CPUPinningTestCase.test_host_usage_from_mixed_instance_cpu_isolate_free` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/test_hardware.py:L4616–L4655` |
| `CPUSReservedCellTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L4658–L4696` |
| `CPUSReservedCellTestCase._test_reserved` | method | (self, reserved) | private | `hw._numa_fit_instance_cell( host_cell, inst_cell, limits, reserved, )` (src/nova/tests/unit/virt/test_hardware.py:L4680) | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L4659–L4682` |
| `CPUSReservedCellTestCase.test_no_reserved` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L4684–L4687` |
| `CPUSReservedCellTestCase.test_reserved` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L4689–L4692` |
| `CPUSReservedCellTestCase.test_reserved_exceeded` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_hardware.py:L4694–L4696` |
| `CPURealtimeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L4699–L4855` |
| `CPURealtimeTestCase.test_success_flavor` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4700–L4710` |
| `CPURealtimeTestCase.test_success_image` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4712–L4723` |
| `CPURealtimeTestCase.test_success_image_no_exclusion` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4725–L4735` |
| `CPURealtimeTestCase.test_success_image_leading_space` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4737–L4747` |
| `CPURealtimeTestCase.test_success_image_no_implicit_exclusion` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4749–L4759` |
| `CPURealtimeTestCase.test_no_mask_configured` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4761–L4771` |
| `CPURealtimeTestCase.test_invalid_mask_no_rt_cpus` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4773–L4785` |
| `CPURealtimeTestCase.test_invalid_mask_exclude_out_of_range` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4787–L4799` |
| `CPURealtimeTestCase.test_explicit_range` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4801–L4813` |
| `CPURealtimeTestCase.test_invalid_mask_no_exclusion_wo_emulator_policy` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4815–L4828` |
| `CPURealtimeTestCase.test_all_cpus_w_emulator_policy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_hardware.py:L4830–L4840` |
| `CPURealtimeTestCase.test_invalid_mask_rt_cpus_out_of_range` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4842–L4855` |
| `EmulatorThreadsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L4858–L5218` |
| `EmulatorThreadsTestCase._host_topology` | method | — | private | `objects.NUMATopology(cells=[ objects.NUMACell( id=0, cpuset=set(), pcpuset=set([0, 1]), memory=2048, cpu_usage=0, memory_usage=0, socket=0, pinned_cpus=set(), siblings=[set([0]), set([1])], mempages=[` (src/nova/tests/unit/virt/test_hardware.py:L4862) | 1/26 | `src/nova/tests/unit/virt/test_hardware.py:L4861–L4886` |
| `EmulatorThreadsTestCase.test_single_node_not_defined` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_hardware.py:L4888–L4898` |
| `EmulatorThreadsTestCase.test_single_node_shared` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4900–L4912` |
| `EmulatorThreadsTestCase.test_single_node_isolate` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L4914–L4926` |
| `EmulatorThreadsTestCase.test_single_node_isolate_exceeded` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L4928–L4939` |
| `EmulatorThreadsTestCase.test_multi_nodes_isolate` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/test_hardware.py:L4941–L4959` |
| `EmulatorThreadsTestCase.test_multi_nodes_isolate_exceeded` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_hardware.py:L4961–L4979` |
| `EmulatorThreadsTestCase.test_multi_nodes_isolate_full_usage` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/test_hardware.py:L4981–L4999` |
| `EmulatorThreadsTestCase.test_isolate_usage` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_hardware.py:L5001–L5016` |
| `EmulatorThreadsTestCase.test_isolate_full_usage` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L5018–L5042` |
| `EmulatorThreadsTestCase.test_isolate_w_isolate_thread_alloc` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L5045–L5072` |
| `EmulatorThreadsTestCase.test_isolate_w_isolate_thread_alloc_usage` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/test_hardware.py:L5075–L5103` |
| `EmulatorThreadsTestCase._test_mixed_instance` | method | (self, policy=None) | private | `inst_topo` (src/nova/tests/unit/virt/test_hardware.py:L5130) | 3/25 | `src/nova/tests/unit/virt/test_hardware.py:L5105–L5130` |
| `EmulatorThreadsTestCase.test_mixed_instance_not_define` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L5132–L5138` |
| `EmulatorThreadsTestCase.test_mixed_instance_shared` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L5140–L5147` |
| `EmulatorThreadsTestCase.test_mixed_instance_isolated` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L5149–L5156` |
| `EmulatorThreadsTestCase.test_asymmetric_host` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L5158–L5188` |
| `EmulatorThreadsTestCase.test_asymmetric_host_w_isolate_thread_alloc` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_hardware.py:L5191–L5218` |
| `NetworkRequestSupportTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5221–L5344` |
| `NetworkRequestSupportTestCase.setUp` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/test_hardware.py:L5224–L5257` |
| `NetworkRequestSupportTestCase.test_no_required_networks` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L5259–L5268` |
| `NetworkRequestSupportTestCase.test_missing_networks` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_hardware.py:L5270–L5280` |
| `NetworkRequestSupportTestCase.test_physnet_networks` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L5282–L5301` |
| `NetworkRequestSupportTestCase.test_tunnel_network` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_hardware.py:L5303–L5321` |
| `NetworkRequestSupportTestCase.test_multiple_networks` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L5323–L5344` |
| `MemEncryptionNotRequiredTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5347–L5384` |
| `MemEncryptionNotRequiredTestCase._test_encrypted_memory_support_not_required` | method | (self, flavor=None, image_meta=None) | private | not declared | 3/7 | `src/nova/tests/unit/virt/test_hardware.py:L5348–L5356` |
| `MemEncryptionNotRequiredTestCase.test_requirement_disabled` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_hardware.py:L5358–L5359` |
| `MemEncryptionNotRequiredTestCase.test_require_false_extra_spec` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/test_hardware.py:L5361–L5365` |
| `MemEncryptionNotRequiredTestCase.test_require_false_image_prop` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/test_hardware.py:L5367–L5373` |
| `MemEncryptionNotRequiredTestCase.test_require_both_false` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/virt/test_hardware.py:L5375–L5384` |
| `GetMemEncryptionConfigTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5387–L5424` |
| `GetMemEncryptionConfigTestCase.test_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L5388–L5391` |
| `GetMemEncryptionConfigTestCase.test_sev` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L5393–L5399` |
| `GetMemEncryptionConfigTestCase.test_sev_es` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L5401–L5407` |
| `GetMemEncryptionConfigTestCase.test_sev_snp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_hardware.py:L5409–L5416` |
| `GetMemEncryptionConfigTestCase.test_tdx` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L5418–L5424` |
| `MemEncryptionFlavorImageConflictTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5427–L5478` |
| `MemEncryptionFlavorImageConflictTestCase._test_encrypted_memory_support_conflict` | method | (self, extra_spec, image_prop_in, image_prop_out) | private | not declared | 1/32 | `src/nova/tests/unit/virt/test_hardware.py:L5428–L5464` |
| `MemEncryptionFlavorImageConflictTestCase.test_require_encrypted_memory_support_conflict1` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/virt/test_hardware.py:L5466–L5471` |
| `MemEncryptionFlavorImageConflictTestCase.test_require_encrypted_memory_support_conflict2` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/virt/test_hardware.py:L5473–L5478` |
| `MemEncryptionRequestedInvalidImagePropsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5481–L5502` |
| `MemEncryptionRequestedInvalidImagePropsTestCase.flavor_name` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5482–L5482` |
| `MemEncryptionRequestedInvalidImagePropsTestCase.image_name` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5483–L5483` |
| `MemEncryptionRequestedInvalidImagePropsTestCase.image_id` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5484–L5484` |
| `MemEncryptionRequestedInvalidImagePropsTestCase.model` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5485–L5485` |
| `MemEncryptionRequestedInvalidImagePropsTestCase._test_encrypted_memory_support_raises` | method | (self, enc_extra_spec, enc_image_prop, image_props, error_data) | private | not declared | 3/16 | `src/nova/tests/unit/virt/test_hardware.py:L5487–L5502` |
| `MemEncryptionRequestedWithoutUEFITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5505–L5546` |
| `MemEncryptionRequestedWithoutUEFITestCase.expected_exception` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5507–L5507` |
| `MemEncryptionRequestedWithoutUEFITestCase.expected_error` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5508–L5512` |
| `MemEncryptionRequestedWithoutUEFITestCase._test_encrypted_memory_support_no_uefi` | method | (self, enc_extra_spec, enc_image_prop, requesters) | private | not declared | 2/12 | `src/nova/tests/unit/virt/test_hardware.py:L5514–L5525` |
| `MemEncryptionRequestedWithoutUEFITestCase.test_flavor_requires_encrypted_memory_support_no_uefi` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/test_hardware.py:L5527–L5531` |
| `MemEncryptionRequestedWithoutUEFITestCase.test_image_requires_encrypted_memory_support_no_uefi` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/test_hardware.py:L5533–L5537` |
| `MemEncryptionRequestedWithoutUEFITestCase.test_flavor_image_require_encrypted_memory_support_no_uefi` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/virt/test_hardware.py:L5539–L5546` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5549–L5614` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.expected_exception` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5551–L5551` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.expected_error` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5552–L5554` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase._test_encrypted_memory_support_pc` | method | (self, enc_extra_spec, enc_image_prop) | private | not declared | 1/10 | `src/nova/tests/unit/virt/test_hardware.py:L5556–L5565` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase._test_encrypted_memory_support_pc_image_id` | method | (self, image_meta, error_data) | private | not declared | 1/9 | `src/nova/tests/unit/virt/test_hardware.py:L5567–L5575` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.test_flavor_requires_encrypted_memory_support_pc` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/virt/test_hardware.py:L5577–L5579` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.test_image_requires_encrypted_memory_support_pc` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/virt/test_hardware.py:L5581–L5583` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.test_flavor_image_require_encrypted_memory_support_pc` | method | (self) | public | not declared | 3/5 | `src/nova/tests/unit/virt/test_hardware.py:L5585–L5589` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.test_encrypted_memory_support_pc_no_image_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L5591–L5601` |
| `MemEncryptionRequestedWithInvalidMachineTypeTestCase.test_encrypted_memory_support_pc_has_image_id` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L5603–L5614` |
| `MemEncryptionRequestedWithoutStatelessFirmware` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5618–L5634` |
| `MemEncryptionRequestedWithoutStatelessFirmware.expected_exception` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5620–L5620` |
| `MemEncryptionRequestedWithoutStatelessFirmware.expected_error` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5621–L5624` |
| `MemEncryptionRequestedWithoutStatelessFirmware.test_encrypted_memory_support_without_stateless` | method | (self, model) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_hardware.py:L5627–L5634` |
| `MemEncryptionRequestedWithoutDisabledVideoModel` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5637–L5653` |
| `MemEncryptionRequestedWithoutDisabledVideoModel.expected_exception` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5639–L5639` |
| `MemEncryptionRequestedWithoutDisabledVideoModel.expected_error` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5640–L5643` |
| `MemEncryptionRequestedWithoutDisabledVideoModel.test_encrypted_memory_support_without_disabled_video` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_hardware.py:L5645–L5653` |
| `MemEncryptionRequiredTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5656–L5762` |
| `MemEncryptionRequiredTestCase.flavor_name` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5657–L5657` |
| `MemEncryptionRequiredTestCase.image_name` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5658–L5658` |
| `MemEncryptionRequiredTestCase.image_id` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5659–L5659` |
| `MemEncryptionRequiredTestCase._test_encrypted_memory_support_required` | method | (self, extra_specs, image_props, requesters, mock_log) | private | not declared | 2/9 | `src/nova/tests/unit/virt/test_hardware.py:L5662–L5685` |
| `MemEncryptionRequiredTestCase._test_encrypted_memory_support_required._test_get_mem_encryption_constraint` | function | — | private | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5667–L5680` |
| `MemEncryptionRequiredTestCase.test_require_encrypted_memory_support_extra_spec` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/test_hardware.py:L5687–L5693` |
| `MemEncryptionRequiredTestCase.test_require_encrypted_memory_support_image_prop` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/test_hardware.py:L5695–L5701` |
| `MemEncryptionRequiredTestCase.test_require_encrypted_memory_support_both_required` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/virt/test_hardware.py:L5703–L5712` |
| `MemEncryptionRequiredTestCase.test_encrypted_memory_support_flavor_for_volume` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/test_hardware.py:L5714–L5731` |
| `MemEncryptionRequiredTestCase.test_encrypted_memory_support_no_id_for_volume` | method | (self, mock_log) | public | not declared | 1/23 | `src/nova/tests/unit/virt/test_hardware.py:L5734–L5762` |
| `PCINUMAAffinityPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5765–L5832` |
| `PCINUMAAffinityPolicyTest.test_get_pci_numa_policy_flavor` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/test_hardware.py:L5767–L5777` |
| `PCINUMAAffinityPolicyTest.test_get_pci_numa_policy_image` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/test_hardware.py:L5779–L5788` |
| `PCINUMAAffinityPolicyTest.test_get_pci_numa_policy_no_conflict` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/virt/test_hardware.py:L5790–L5803` |
| `PCINUMAAffinityPolicyTest.test_get_pci_numa_policy_conflict` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_hardware.py:L5805–L5819` |
| `PCINUMAAffinityPolicyTest.test_get_pci_numa_policy_invalid` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_hardware.py:L5821–L5832` |
| `PMUEnabledTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5835–L5882` |
| `PMUEnabledTest.test_pmu_image_and_flavor_conflict` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_hardware.py:L5837–L5851` |
| `PMUEnabledTest.test_pmu_image_and_flavor_same_value` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L5853–L5861` |
| `PMUEnabledTest.test_pmu_image_only` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_hardware.py:L5863–L5873` |
| `PMUEnabledTest.test_pmu_flavor_only` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_hardware.py:L5875–L5882` |
| `VIFMultiqueueEnabledTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5886–L5926` |
| `VIFMultiqueueEnabledTest.test_get_vif_multiqueue_constraint` | method | (self, flavor_policy, image_policy, expected) | public | not declared | 5/21 | `src/nova/tests/unit/virt/test_hardware.py:L5901–L5926` |
| `VIFVirtioEnabledTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5930–L5973` |
| `VIFVirtioEnabledTest.test_get_vif_virtio_constraint` | method | (self, flavor_policy, image_policy, expected) | public | not declared | 5/23 | `src/nova/tests/unit/virt/test_hardware.py:L5946–L5973` |
| `VTPMConfigTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L5977–L6054` |
| `VTPMConfigTest.test_get_vtpm_constraint` | method | (self, flavor_version, flavor_model, image_version, image_model, expected) | public | not declared | 7/26 | `src/nova/tests/unit/virt/test_hardware.py:L6000–L6032` |
| `VTPMConfigTest.test_get_tpm_secret_security_constraint` | method | (self, flavor_security, expected) | public | not declared | 2/9 | `src/nova/tests/unit/virt/test_hardware.py:L6043–L6054` |
| `SecureBootPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L6058–L6100` |
| `SecureBootPolicyTest.test_get_secure_boot_constraint` | method | (self, flavor_policy, image_policy, expected) | public | not declared | 5/21 | `src/nova/tests/unit/virt/test_hardware.py:L6075–L6100` |
| `MaxphysaddrModeTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L6104–L6146` |
| `MaxphysaddrModeTest.test_get_maxphysaddr_mode` | method | (self, flavor_policy, image_policy, expected) | public | not declared | 5/21 | `src/nova/tests/unit/virt/test_hardware.py:L6121–L6146` |
| `StatelessFirmwareConstraintTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L6150–L6185` |
| `StatelessFirmwareConstraintTest.test_get_stateless_firmware_constraint` | method | (self, firmware_stateless, firmware_type, expected, warn, mock_log) | public | not declared | 4/19 | `src/nova/tests/unit/virt/test_hardware.py:L6165–L6185` |
| `RescuePropertyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L6189–L6200` |
| `RescuePropertyTestCase.test_check_hw_rescue_props` | method | (self, props=None, expected=None) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L6197–L6200` |
| `HostCellsSortingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L6203–L6448` |
| `HostCellsSortingTestCase.setUp` | method | (self) | public | not declared | 1/90 | `src/nova/tests/unit/virt/test_hardware.py:L6214–L6317` |
| `HostCellsSortingTestCase.setUp._create_pci_stats` | function | (node, count) | private | `stats.PciDeviceStats( objects.NUMATopology(), [objects.PciDevicePool.from_dict(test_dict)])` (src/nova/tests/unit/virt/test_hardware.py:L6223) | — | `src/nova/tests/unit/virt/test_hardware.py:L6217–L6225` |
| `HostCellsSortingTestCase.assertInstanceNUMAcellOrder` | method | (self, list_to_check, instance_topo) | public | not declared | 2/3 | `src/nova/tests/unit/virt/test_hardware.py:L6319–L6321` |
| `HostCellsSortingTestCase.test_sort_host_numa_cell_num_equal_instance_cell_num` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_hardware.py:L6323–L6326` |
| `HostCellsSortingTestCase.test_sort_no_pci_stats_no_shared_cpu_policy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_hardware.py:L6328–L6342` |
| `HostCellsSortingTestCase.test_sort_no_pci_stats_shared_cpu_policy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_hardware.py:L6344–L6358` |
| `HostCellsSortingTestCase.test_sort_pci_stats_pci_req_no_shared_cpu_policy` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_hardware.py:L6360–L6383` |
| `HostCellsSortingTestCase.test_sort_pci_stats_pci_req_shared_cpu_policy` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_hardware.py:L6385–L6408` |
| `HostCellsSortingTestCase.test_sort_pci_stats_no_pci_req_no_shared_cpu_policy` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/test_hardware.py:L6410–L6428` |
| `HostCellsSortingTestCase.test_sort_pci_stats_no_pci_req_shared_cpu_policy` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/test_hardware.py:L6430–L6448` |
| `EmulatorThreadsTestCase._host_topology` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/virt/test_hardware.py:L4860–L4886` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/test_hardware.py:L15)
- `import copy` (src/nova/tests/unit/virt/test_hardware.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_hardware.py:L17)
- `import ddt` (src/nova/tests/unit/virt/test_hardware.py:L19)
- `import testtools` (src/nova/tests/unit/virt/test_hardware.py:L20)
- `import nova.conf` (src/nova/tests/unit/virt/test_hardware.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/virt/test_hardware.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/virt/test_hardware.py:L24)
- `nova.objects`: imports `fields` (src/nova/tests/unit/virt/test_hardware.py:L25)
- `nova.pci`: imports `stats` (src/nova/tests/unit/virt/test_hardware.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_hardware.py:L27)
- `nova.tests.unit`: imports `fake_pci_device_pools as fake_pci` (src/nova/tests/unit/virt/test_hardware.py:L28)
- `nova.tests.unit.image.fake`: imports `fake_image_obj` (src/nova/tests/unit/virt/test_hardware.py:L29)
- `nova.virt`: imports `hardware as hw` (src/nova/tests/unit/virt/test_hardware.py:L30)
- `import os_traits as ot` (src/nova/tests/unit/virt/test_hardware.py:L31)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/test_hardware.py:L33)

