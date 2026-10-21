# src/nova/virt/hardware.py

## Overview

This file implements the `hardware` module, defining 7 classs, 1 classmethod, 5 constants, 2 fields, 65 functions, 34 methods, 18 propertys, 20 imports, 5 side effects, 3 security surface entries.

Lines: total 3275, code 2433, comment 311, blank 531

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/hardware.py:L39–L39` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/hardware.py:L40–L40` |
| `MEMPAGES_SMALL` | constant | — | exported | not declared | — | `src/nova/virt/hardware.py:L42–L42` |
| `MEMPAGES_LARGE` | constant | — | exported | not declared | — | `src/nova/virt/hardware.py:L43–L43` |
| `MEMPAGES_ANY` | constant | — | exported | not declared | — | `src/nova/virt/hardware.py:L44–L44` |
| `VTPMConfig` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L47–L49` |
| `VTPMConfig.version` | field | — | public | not declared | — | `src/nova/virt/hardware.py:L48–L48` |
| `VTPMConfig.model` | field | — | public | not declared | — | `src/nova/virt/hardware.py:L49–L49` |
| `MemEncryptionConfig` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L52–L191` |
| `MemEncryptionConfig.model` | method | (self) | public | not declared | 1/2 | `src/nova/virt/hardware.py:L55–L56` |
| `MemEncryptionConfig.needs_locked_memory` | method | (self) | public | not declared | 1/2 | `src/nova/virt/hardware.py:L60–L61` |
| `MemEncryptionConfig.required_trait` | method | (self) | public | not declared | 1/2 | `src/nova/virt/hardware.py:L65–L66` |
| `MemEncryptionConfig.required_firmware_type` | method | (self) | public | not declared | 1/2 | `src/nova/virt/hardware.py:L70–L71` |
| `MemEncryptionConfig.required_machine_type` | method | (self) | public | not declared | 1/2 | `src/nova/virt/hardware.py:L75–L76` |
| `MemEncryptionConfig.needs_stateless_firmware` | method | (self) | public | not declared | 1/2 | `src/nova/virt/hardware.py:L80–L81` |
| `MemEncryptionConfig._check_firmware_type` | method | (self, image_meta, requesters) | private | `` (src/nova/virt/hardware.py:L87) | 2/12 | `src/nova/virt/hardware.py:L83–L95` |
| `MemEncryptionConfig._check_machine_type` | method | (self, image_meta, machine_type) | private | `` (src/nova/virt/hardware.py:L126) | 6/17 | `src/nova/virt/hardware.py:L97–L141` |
| `MemEncryptionConfig._check_stateless_firmware` | method | (self, image_meta) | private | `` (src/nova/virt/hardware.py:L147) | 3/12 | `src/nova/virt/hardware.py:L143–L155` |
| `MemEncryptionConfig.check_constraints` | method | (self, image_meta, machine_type, requesters) | public | not declared | 1/6 | `src/nova/virt/hardware.py:L157–L162` |
| `MemEncryptionConfig.__eq__` | method | (self, other) | public | `False` (src/nova/virt/hardware.py:L166); `self.model == other.model` (src/nova/virt/hardware.py:L167) | 2/4 | `src/nova/virt/hardware.py:L164–L167` |
| `MemEncryptionConfig.__hash__` | method | (self) | public | `hash(self.model)` (src/nova/virt/hardware.py:L170) | 1/2 | `src/nova/virt/hardware.py:L169–L170` |
| `MemEncryptionConfig.create` | method | (cls, model) | public | `model2cls[model]()` (src/nova/virt/hardware.py:L191) | 2/15 | `src/nova/virt/hardware.py:L173–L191` |
| `MemEncryptionConfigSev` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L194–L217` |
| `MemEncryptionConfigSev.model` | method | (self) | public | `fields.MemEncryptionModel.AMD_SEV` (src/nova/virt/hardware.py:L197) | 1/2 | `src/nova/virt/hardware.py:L196–L197` |
| `MemEncryptionConfigSev.needs_locked_memory` | method | (self) | public | `True` (src/nova/virt/hardware.py:L201) | 1/2 | `src/nova/virt/hardware.py:L200–L201` |
| `MemEncryptionConfigSev.required_trait` | method | (self) | public | `os_traits.HW_CPU_X86_AMD_SEV` (src/nova/virt/hardware.py:L205) | 1/2 | `src/nova/virt/hardware.py:L204–L205` |
| `MemEncryptionConfigSev.required_firmware_type` | method | (self) | public | `"uefi"` (src/nova/virt/hardware.py:L209) | 1/2 | `src/nova/virt/hardware.py:L208–L209` |
| `MemEncryptionConfigSev.required_machine_type` | method | (self) | public | `"q35"` (src/nova/virt/hardware.py:L213) | 1/2 | `src/nova/virt/hardware.py:L212–L213` |
| `MemEncryptionConfigSev.needs_stateless_firmware` | method | (self) | public | `False` (src/nova/virt/hardware.py:L217) | 1/2 | `src/nova/virt/hardware.py:L216–L217` |
| `MemEncryptionConfigSevEs` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L220–L227` |
| `MemEncryptionConfigSevEs.model` | method | (self) | public | `fields.MemEncryptionModel.AMD_SEV_ES` (src/nova/virt/hardware.py:L223) | 1/2 | `src/nova/virt/hardware.py:L222–L223` |
| `MemEncryptionConfigSevEs.required_trait` | method | (self) | public | `os_traits.HW_CPU_X86_AMD_SEV_ES` (src/nova/virt/hardware.py:L227) | 1/2 | `src/nova/virt/hardware.py:L226–L227` |
| `MemEncryptionConfigSevSnp` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L230–L245` |
| `MemEncryptionConfigSevSnp.model` | method | (self) | public | `fields.MemEncryptionModel.AMD_SEV_SNP` (src/nova/virt/hardware.py:L233) | 1/2 | `src/nova/virt/hardware.py:L232–L233` |
| `MemEncryptionConfigSevSnp.required_trait` | method | (self) | public | `os_traits.HW_CPU_X86_AMD_SEV_SNP` (src/nova/virt/hardware.py:L237) | 1/2 | `src/nova/virt/hardware.py:L236–L237` |
| `MemEncryptionConfigSevSnp.needs_locked_memory` | method | (self) | public | `False` (src/nova/virt/hardware.py:L241) | 1/2 | `src/nova/virt/hardware.py:L240–L241` |
| `MemEncryptionConfigSevSnp.needs_stateless_firmware` | method | (self) | public | `True` (src/nova/virt/hardware.py:L245) | 1/2 | `src/nova/virt/hardware.py:L244–L245` |
| `MemEncryptionConfigTDX` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L248–L285` |
| `MemEncryptionConfigTDX.model` | method | (self) | public | `fields.MemEncryptionModel.INTEL_TDX` (src/nova/virt/hardware.py:L251) | 1/2 | `src/nova/virt/hardware.py:L250–L251` |
| `MemEncryptionConfigTDX.needs_locked_memory` | method | (self) | public | `False` (src/nova/virt/hardware.py:L255) | 1/2 | `src/nova/virt/hardware.py:L254–L255` |
| `MemEncryptionConfigTDX.required_trait` | method | (self) | public | `os_traits.HW_CPU_X86_INTEL_TDX` (src/nova/virt/hardware.py:L259) | 1/2 | `src/nova/virt/hardware.py:L258–L259` |
| `MemEncryptionConfigTDX.required_firmware_type` | method | (self) | public | `"uefi"` (src/nova/virt/hardware.py:L263) | 1/2 | `src/nova/virt/hardware.py:L262–L263` |
| `MemEncryptionConfigTDX.required_machine_type` | method | (self) | public | `"q35"` (src/nova/virt/hardware.py:L267) | 1/2 | `src/nova/virt/hardware.py:L266–L267` |
| `MemEncryptionConfigTDX.needs_stateless_firmware` | method | (self) | public | `True` (src/nova/virt/hardware.py:L271) | 1/2 | `src/nova/virt/hardware.py:L270–L271` |
| `MemEncryptionConfigTDX.check_constraints` | method | (self, image_meta, machine_type, requesters) | public | not declared | 2/12 | `src/nova/virt/hardware.py:L273–L285` |
| `get_vcpu_pin_set` | function | — | exported | `None` (src/nova/virt/hardware.py:L295); `cpuset_ids` (src/nova/virt/hardware.py:L301) | 3/8 | `src/nova/virt/hardware.py:L288–L301` |
| `get_cpu_dedicated_set` | function | — | exported | `None` (src/nova/virt/hardware.py:L310); `cpu_ids` (src/nova/virt/hardware.py:L317) | 3/9 | `src/nova/virt/hardware.py:L304–L317` |
| `get_cpu_dedicated_set_nozero` | function | — | exported | `(get_cpu_dedicated_set() or set()) - {0}` (src/nova/virt/hardware.py:L322) | 2/2 | `src/nova/virt/hardware.py:L320–L322` |
| `get_cpu_shared_set` | function | — | exported | `None` (src/nova/virt/hardware.py:L332); `shared_ids` (src/nova/virt/hardware.py:L339) | 3/9 | `src/nova/virt/hardware.py:L325–L339` |
| `parse_cpu_spec` | function | (spec) | exported | `cpuset_ids` (src/nova/virt/hardware.py:L401) | 13/39 | `src/nova/virt/hardware.py:L342–L401` |
| `format_cpu_spec` | function | (cpuset, allow_ranges=True) | exported | `",".join(parts)` (src/nova/virt/hardware.py:L439); `",".join(str(id) for id in sorted(cpuset))` (src/nova/virt/hardware.py:L441) | 8/21 | `src/nova/virt/hardware.py:L404–L441` |
| `get_number_of_serial_ports` | function | (flavor, image_meta) | exported | `image_num_ports` (src/nova/virt/hardware.py:L482); `flavor_num_ports or image_num_ports or 1` (src/nova/virt/hardware.py:L484) | 8/14 | `src/nova/virt/hardware.py:L444–L484` |
| `InstanceInfo` | class | — | exported | not declared | — | `src/nova/virt/hardware.py:L487–L501` |
| `InstanceInfo.__init__` | method | (self, state, internal_id=None) | public | not declared | 1/3 | `src/nova/virt/hardware.py:L489–L497` |
| `InstanceInfo.__eq__` | method | (self, other) | public | `(self.__class__ == other.__class__ and self.__dict__ == other.__dict__)` (src/nova/virt/hardware.py:L500) | 2/3 | `src/nova/virt/hardware.py:L499–L501` |
| `_score_cpu_topology` | function | (topology, wanttopology) | unexported | `score` (src/nova/virt/hardware.py:L529) | 7/9 | `src/nova/virt/hardware.py:L504–L529` |
| `get_cpu_topology_constraints` | function | (flavor, image_meta) | exported | `(objects.VirtCPUTopology(sockets=sockets, cores=cores, threads=threads), objects.VirtCPUTopology(sockets=max_sockets, cores=max_cores, threads=max_threads))` (src/nova/virt/hardware.py:L678) | 22/88 | `src/nova/virt/hardware.py:L532–L681` |
| `_get_possible_cpu_topologies` | function | (vcpus, maxtopology, allow_threads) | unexported | `possible` (src/nova/virt/hardware.py:L749) | 7/32 | `src/nova/virt/hardware.py:L684–L749` |
| `_sort_possible_cpu_topologies` | function | (possible, wanttopology) | unexported | `desired` (src/nova/virt/hardware.py:L786) | 2/13 | `src/nova/virt/hardware.py:L752–L786` |
| `_get_desirable_cpu_topologies` | function | (flavor, image_meta, allow_threads=True) | unexported | `desired` (src/nova/virt/hardware.py:L819) | 1/15 | `src/nova/virt/hardware.py:L789–L819` |
| `get_best_cpu_topology` | function | (flavor, image_meta, allow_threads=True) | exported | `_get_desirable_cpu_topologies( flavor, image_meta, allow_threads)[0]` (src/nova/virt/hardware.py:L835) | 1/3 | `src/nova/virt/hardware.py:L822–L836` |
| `_numa_cell_supports_pagesize_request` | function | (host_cell, inst_cell) | unexported | `verify_pagesizes(host_cell, inst_cell, avail_pagesize[-1:])` (src/nova/virt/hardware.py:L859); `verify_pagesizes(host_cell, inst_cell, avail_pagesize[:-1])` (src/nova/virt/hardware.py:L861); `verify_pagesizes(host_cell, inst_cell, avail_pagesize)` (src/nova/virt/hardware.py:L863); `verify_pagesizes(host_cell, inst_cell, [inst_cell.pagesize])` (src/nova/virt/hardware.py:L865) | 5/12 | `src/nova/virt/hardware.py:L839–L865` |
| `_numa_cell_supports_pagesize_request.verify_pagesizes` | function | (host_cell, inst_cell, avail_pagesize) | public | `pagesize` (src/nova/virt/hardware.py:L856) | — | `src/nova/virt/hardware.py:L852–L856` |
| `_pack_instance_onto_cores` | function | (host_cell, instance_cell, num_cpu_reserved=0) | unexported | `` (src/nova/virt/hardware.py:L1050); `` (src/nova/virt/hardware.py:L1074); `` (src/nova/virt/hardware.py:L1094); `` (src/nova/virt/hardware.py:L1145); `instance_cell` (src/nova/virt/hardware.py:L1152) | 29/108 | `src/nova/virt/hardware.py:L868–L1152` |
| `_pack_instance_onto_cores._get_pinning` | function | (threads_no, sibling_set, instance_cores) | private | `None` (src/nova/virt/hardware.py:L947); `vcpus_pinning` (src/nova/virt/hardware.py:L974) | — | `src/nova/virt/hardware.py:L930–L974` |
| `_pack_instance_onto_cores._get_reserved` | function | (sibling_set, vcpus_pinning, num_cpu_reserved=0, cpu_thread_isolate=False) | private | `None` (src/nova/virt/hardware.py:L990); `cpuset_reserved or None` (src/nova/virt/hardware.py:L1025) | — | `src/nova/virt/hardware.py:L976–L1025` |
| `_numa_fit_instance_cell` | function | (host_cell, instance_cell, limits=None, cpuset_reserved=0) | unexported | `None` (src/nova/virt/hardware.py:L1190); `None` (src/nova/virt/hardware.py:L1224); `None` (src/nova/virt/hardware.py:L1248); `None` (src/nova/virt/hardware.py:L1256); `None` (src/nova/virt/hardware.py:L1273); `None` (src/nova/virt/hardware.py:L1287); `None` (src/nova/virt/hardware.py:L1304); `None` (src/nova/virt/hardware.py:L1312); `None` (src/nova/virt/hardware.py:L1329); `None` (src/nova/virt/hardware.py:L1338); `instance_cell` (src/nova/virt/hardware.py:L1341) | 20/144 | `src/nova/virt/hardware.py:L1155–L1341` |
| `_get_flavor_image_meta` | function | (key, flavor, image_meta, default=None, prefix='hw') | unexported | `flavor_value, image_value` (src/nova/virt/hardware.py:L1358) | 1/12 | `src/nova/virt/hardware.py:L1344–L1358` |
| `_get_unique_flavor_image_meta` | function | (key, flavor, image_meta, default=None, prefix='hw') | unexported | `flavor_value or image_value` (src/nova/virt/hardware.py:L1390) | 5/28 | `src/nova/virt/hardware.py:L1361–L1390` |
| `get_mem_encryption_constraint` | function | (flavor, image_meta, machine_type=None) | exported | `None` (src/nova/virt/hardware.py:L1447); `mem_enc_config` (src/nova/virt/hardware.py:L1497) | 11/47 | `src/nova/virt/hardware.py:L1393–L1497` |
| `_check_for_mem_encryption_requirement_conflicts` | function | (flavor_mem_enc_str, flavor_mem_enc, image_mem_enc, flavor, image_meta) | unexported | not declared | 5/18 | `src/nova/virt/hardware.py:L1500–L1521` |
| `_check_for_mem_encryption_model_conflicts` | function | (flavor_mem_enc_model, image_mem_enc_model, flavor, image_meta) | unexported | not declared | 5/19 | `src/nova/virt/hardware.py:L1524–L1546` |
| `_get_numa_pagesize_constraint` | function | (flavor, image_meta) | unexported | `None` (src/nova/virt/hardware.py:L1592); `check_and_return_pages_size(image_request)` (src/nova/virt/hardware.py:L1596); `pagesize` (src/nova/virt/hardware.py:L1602) | 7/21 | `src/nova/virt/hardware.py:L1549–L1602` |
| `_get_numa_pagesize_constraint.check_and_return_pages_size` | function | (request) | public | `MEMPAGES_ANY` (src/nova/virt/hardware.py:L1567); `MEMPAGES_LARGE` (src/nova/virt/hardware.py:L1569); `MEMPAGES_SMALL` (src/nova/virt/hardware.py:L1571); `int(request)` (src/nova/virt/hardware.py:L1573); `strutils.string_to_bytes( request, return_int=True) / units.Ki` (src/nova/virt/hardware.py:L1576) | — | `src/nova/virt/hardware.py:L1565–L1579` |
| `_get_constraint_mappings_from_flavor` | function | (flavor, key, func) | unexported | `hw_numa_map or None` (src/nova/virt/hardware.py:L1614) | 4/9 | `src/nova/virt/hardware.py:L1605–L1614` |
| `get_locked_memory_constraint` | function | (flavor, image_meta, mach_type=None) | exported | `True` (src/nova/virt/hardware.py:L1671); `True` (src/nova/virt/hardware.py:L1678); `locked_memory` (src/nova/virt/hardware.py:L1680) | 10/29 | `src/nova/virt/hardware.py:L1617–L1680` |
| `_get_numa_cpu_constraint` | function | (flavor, image_meta) | unexported | `image_cpu_list` (src/nova/virt/hardware.py:L1706); `flavor_cpu_list` (src/nova/virt/hardware.py:L1712) | 3/13 | `src/nova/virt/hardware.py:L1683–L1712` |
| `_get_numa_mem_constraint` | function | (flavor, image_meta) | unexported | `image_mem_list` (src/nova/virt/hardware.py:L1738); `flavor_mem_list` (src/nova/virt/hardware.py:L1744) | 3/13 | `src/nova/virt/hardware.py:L1715–L1744` |
| `_get_numa_node_count_constraint` | function | (flavor, image_meta) | unexported | `int(nodes) if nodes else nodes` (src/nova/virt/hardware.py:L1772) | 8/13 | `src/nova/virt/hardware.py:L1747–L1772` |
| `get_cpu_policy_constraint` | function | (flavor, image_meta) | exported | `cpu_policy` (src/nova/virt/hardware.py:L1823) | 11/34 | `src/nova/virt/hardware.py:L1776–L1823` |
| `get_cpu_thread_policy_constraint` | function | (flavor, image_meta) | exported | `policy` (src/nova/virt/hardware.py:L1865) | 9/25 | `src/nova/virt/hardware.py:L1827–L1865` |
| `_get_numa_topology_auto` | function | (nodes, flavor, vcpus, pcpus) | unexported | `objects.InstanceNUMATopology(cells=cells)` (src/nova/virt/hardware.py:L1898) | 4/17 | `src/nova/virt/hardware.py:L1868–L1898` |
| `_get_numa_topology_manual` | function | (nodes, flavor, vcpus, pcpus, cpu_list, mem_list) | unexported | `objects.InstanceNUMATopology(cells=cells)` (src/nova/virt/hardware.py:L1955) | 7/33 | `src/nova/virt/hardware.py:L1901–L1955` |
| `is_realtime_enabled` | function | (flavor) | exported | `strutils.bool_from_string(flavor_rt)` (src/nova/virt/hardware.py:L1960) | 1/3 | `src/nova/virt/hardware.py:L1958–L1960` |
| `_get_vcpu_pcpu_resources` | function | (flavor) | unexported | `requested_vcpu, requested_pcpu` (src/nova/virt/hardware.py:L1983) | 6/17 | `src/nova/virt/hardware.py:L1963–L1983` |
| `_get_hyperthreading_trait` | function | (flavor, image_meta) | unexported | `val` (src/nova/virt/hardware.py:L1993); `'required'` (src/nova/virt/hardware.py:L1997); `None` (src/nova/virt/hardware.py:L1999) | 4/12 | `src/nova/virt/hardware.py:L1986–L1999` |
| `get_dedicated_cpu_constraint` | function | (flavor) | exported | `None` (src/nova/virt/hardware.py:L2013); `pcpus` (src/nova/virt/hardware.py:L2030) | 6/19 | `src/nova/virt/hardware.py:L2003–L2030` |
| `get_realtime_cpu_constraint` | function | (flavor, image_meta) | exported | `None` (src/nova/virt/hardware.py:L2045); `vcpus_rt` (src/nova/virt/hardware.py:L2077) | 9/28 | `src/nova/virt/hardware.py:L2034–L2077` |
| `get_emulator_thread_policy_constraint` | function | (flavor) | exported | `None` (src/nova/virt/hardware.py:L2095); `emu_threads_policy` (src/nova/virt/hardware.py:L2102) | 3/12 | `src/nova/virt/hardware.py:L2081–L2102` |
| `get_pci_numa_policy_constraint` | function | (flavor, image_meta) | exported | `policy` (src/nova/virt/hardware.py:L2127) | 7/12 | `src/nova/virt/hardware.py:L2105–L2127` |
| `get_pmu_constraint` | function | (flavor, image_meta) | exported | `flavor_value if flavor_value is not None else image_value` (src/nova/virt/hardware.py:L2178) | 6/31 | `src/nova/virt/hardware.py:L2130–L2178` |
| `get_vif_multiqueue_constraint` | function | (flavor, image_meta) | exported | `False` (src/nova/virt/hardware.py:L2196); `flavor_value or image_value or False` (src/nova/virt/hardware.py:L2227) | 8/33 | `src/nova/virt/hardware.py:L2181–L2227` |
| `get_packed_virtqueue_constraint` | function | (flavor, image_meta) | exported | `flavor_value or image_value or False` (src/nova/virt/hardware.py:L2281) | 9/39 | `src/nova/virt/hardware.py:L2230–L2281` |
| `get_vtpm_constraint` | function | (flavor, image_meta) | exported | `None` (src/nova/virt/hardware.py:L2300); `VTPMConfig(version, model)` (src/nova/virt/hardware.py:L2322) | 7/25 | `src/nova/virt/hardware.py:L2284–L2322` |
| `get_tpm_secret_security_constraint` | function | (flavor) | exported | `flavor.get('extra_specs', {}).get('hw:tpm_secret_security')` (src/nova/virt/hardware.py:L2336) | 1/4 | `src/nova/virt/hardware.py:L2325–L2336` |
| `get_secure_boot_constraint` | function | (flavor, image_meta) | exported | `None` (src/nova/virt/hardware.py:L2355); `policy` (src/nova/virt/hardware.py:L2366) | 3/18 | `src/nova/virt/hardware.py:L2339–L2366` |
| `get_stateless_firmware_constraint` | function | (image_meta) | exported | `None` (src/nova/virt/hardware.py:L2377); `None` (src/nova/virt/hardware.py:L2382); `image_meta.properties.get('hw_firmware_stateless', False)` (src/nova/virt/hardware.py:L2384) | 3/10 | `src/nova/virt/hardware.py:L2369–L2384` |
| `numa_get_constraints` | function | (flavor, image_meta) | exported | `numa_topology` (src/nova/virt/hardware.py:L2600) | 42/99 | `src/nova/virt/hardware.py:L2387–L2600` |
| `_numa_cells_support_network_metadata` | function | (host_topology, chosen_host_cells, network_metadata) | unexported | `True` (src/nova/virt/hardware.py:L2621); `False` (src/nova/virt/hardware.py:L2670); `True` (src/nova/virt/hardware.py:L2680); `False` (src/nova/virt/hardware.py:L2700); `True` (src/nova/virt/hardware.py:L2702) | 19/57 | `src/nova/virt/hardware.py:L2603–L2702` |
| `numa_fit_instance_to_host` | function | (host_topology, instance_topology, provider_mapping, limits=None, pci_requests=None, pci_stats=None) | exported | `` (src/nova/virt/hardware.py:L2740); `` (src/nova/virt/hardware.py:L2747); `objects.InstanceNUMATopology( cells=chosen_instance_cells, emulator_threads_policy=emulator_threads_policy)` (src/nova/virt/hardware.py:L2892) | 27/102 | `src/nova/virt/hardware.py:L2705–L2894` |
| `numa_get_reserved_huge_pages` | function | — | exported | `{}` (src/nova/virt/hardware.py:L2910); `bucket` (src/nova/virt/hardware.py:L2925) | 5/16 | `src/nova/virt/hardware.py:L2897–L2925` |
| `_get_smallest_pagesize` | function | (host_cell) | unexported | `avail_pagesize[0]` (src/nova/virt/hardware.py:L2932) | 2/4 | `src/nova/virt/hardware.py:L2928–L2932` |
| `_numa_pagesize_usage_from_cell` | function | (host_cell, instance_cell, sign) | unexported | `topo` (src/nova/virt/hardware.py:L2953) | 6/18 | `src/nova/virt/hardware.py:L2935–L2953` |
| `numa_usage_from_instance_numa` | function | (host_topology, instance_topology, free=False) | exported | `host_topology` (src/nova/virt/hardware.py:L2972); `objects.NUMATopology(cells=cells)` (src/nova/virt/hardware.py:L3039) | 14/55 | `src/nova/virt/hardware.py:L2956–L3039` |
| `get_vpmems` | function | (flavor) | exported | `[]` (src/nova/virt/hardware.py:L3050); `formed_labels` (src/nova/virt/hardware.py:L3057) | 4/11 | `src/nova/virt/hardware.py:L3042–L3057` |
| `get_maxphysaddr_mode` | function | (flavor, image_meta) | exported | `None` (src/nova/virt/hardware.py:L3076); `mode` (src/nova/virt/hardware.py:L3084) | 3/15 | `src/nova/virt/hardware.py:L3060–L3084` |
| `check_hw_rescue_props` | function | (image_meta) | exported | `any(key in image_meta.properties for key in hw_rescue_props)` (src/nova/virt/hardware.py:L3091) | 2/3 | `src/nova/virt/hardware.py:L3087–L3091` |
| `get_ephemeral_encryption_constraint` | function | (flavor, image_meta) | exported | `flavor_eph_encryption or image_eph_encryption` (src/nova/virt/hardware.py:L3137) | 6/29 | `src/nova/virt/hardware.py:L3094–L3137` |
| `get_ephemeral_encryption_format` | function | (flavor, image_meta) | exported | `eph_format` (src/nova/virt/hardware.py:L3160); `None` (src/nova/virt/hardware.py:L3161) | 3/15 | `src/nova/virt/hardware.py:L3140–L3161` |
| `check_shares_supported` | function | (context, instance) | exported | not declared | 6/20 | `src/nova/virt/hardware.py:L3164–L3188` |
| `get_sound_model` | function | (flavor, image_meta) | exported | `model` (src/nova/virt/hardware.py:L3212) | 3/11 | `src/nova/virt/hardware.py:L3191–L3212` |
| `get_usb_model` | function | (flavor, image_meta) | exported | `model` (src/nova/virt/hardware.py:L3239) | 3/14 | `src/nova/virt/hardware.py:L3215–L3239` |
| `get_redirected_usb_ports` | function | (flavor, image_meta) | exported | `count` (src/nova/virt/hardware.py:L3275) | 5/19 | `src/nova/virt/hardware.py:L3242–L3275` |
| `MemEncryptionConfig.create` | classmethod | — | public | not declared | — | `src/nova/virt/hardware.py:L172–L191` |
| `MemEncryptionConfigSev.model` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L195–L197` |
| `MemEncryptionConfigSev.needs_locked_memory` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L199–L201` |
| `MemEncryptionConfigSev.required_trait` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L203–L205` |
| `MemEncryptionConfigSev.required_firmware_type` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L207–L209` |
| `MemEncryptionConfigSev.required_machine_type` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L211–L213` |
| `MemEncryptionConfigSev.needs_stateless_firmware` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L215–L217` |
| `MemEncryptionConfigSevEs.model` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L221–L223` |
| `MemEncryptionConfigSevEs.required_trait` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L225–L227` |
| `MemEncryptionConfigSevSnp.model` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L231–L233` |
| `MemEncryptionConfigSevSnp.required_trait` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L235–L237` |
| `MemEncryptionConfigSevSnp.needs_locked_memory` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L239–L241` |
| `MemEncryptionConfigSevSnp.needs_stateless_firmware` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L243–L245` |
| `MemEncryptionConfigTDX.model` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L249–L251` |
| `MemEncryptionConfigTDX.needs_locked_memory` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L253–L255` |
| `MemEncryptionConfigTDX.required_trait` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L257–L259` |
| `MemEncryptionConfigTDX.required_firmware_type` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L261–L263` |
| `MemEncryptionConfigTDX.required_machine_type` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L265–L267` |
| `MemEncryptionConfigTDX.needs_stateless_firmware` | property | — | public | not declared | — | `src/nova/virt/hardware.py:L269–L271` |

## Dependencies

- `import abc` (src/nova/virt/hardware.py:L15)
- `import collections` (src/nova/virt/hardware.py:L16)
- `import itertools` (src/nova/virt/hardware.py:L17)
- `import re` (src/nova/virt/hardware.py:L18)
- `import typing as ty` (src/nova/virt/hardware.py:L19)
- `import os_resource_classes as orc` (src/nova/virt/hardware.py:L21)
- `import os_traits` (src/nova/virt/hardware.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/virt/hardware.py:L23)
- `oslo_utils`: imports `strutils` (src/nova/virt/hardware.py:L24)
- `oslo_utils`: imports `units` (src/nova/virt/hardware.py:L25)
- `nova`: imports `compute` (src/nova/virt/hardware.py:L27)
- `import nova.conf` (src/nova/virt/hardware.py:L28)
- `nova`: imports `exception` (src/nova/virt/hardware.py:L29)
- `nova.i18n`: imports `_` (src/nova/virt/hardware.py:L30)
- `nova`: imports `objects` (src/nova/virt/hardware.py:L31)
- `nova.objects`: imports `compute_node` (src/nova/virt/hardware.py:L32)
- `nova.objects`: imports `fields` (src/nova/virt/hardware.py:L33)
- `nova.objects`: imports `service` (src/nova/virt/hardware.py:L34)
- `nova.pci`: imports `stats` (src/nova/virt/hardware.py:L35)
- `nova.scheduler.client`: imports `report` (src/nova/virt/hardware.py:L36)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/hardware.py:L39)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/hardware.py:L40)
- **global-mutation**: MEMPAGES_SMALL = -1 (src/nova/virt/hardware.py:L42)
- **global-mutation**: MEMPAGES_LARGE = -2 (src/nova/virt/hardware.py:L43)
- **global-mutation**: MEMPAGES_ANY = -3 (src/nova/virt/hardware.py:L44)

## Security Surface

- **sink** (`db-write`): """Update the host topology usage. (src/nova/virt/hardware.py:L2958)
- **sink** (`db-write`): Update the host NUMA topology based on usage by the provided instance NUMA (src/nova/virt/hardware.py:L2960)
- **sink** (`db-write`): :param host_topology: objects.NUMATopology to update usage information (src/nova/virt/hardware.py:L2963)

