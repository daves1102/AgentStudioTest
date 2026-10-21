# src/nova/tests/functional/libvirt/test_numa_servers.py

## Overview

This file implements the `test_numa_servers` module, defining 6 classs, 4 constants, 3 functions, 44 methods, 13 imports, 4 side effects, 2 security surface entries.

Lines: total 1640, code 1050, comment 254, blank 336

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L32–L32` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L33–L33` |
| `NUMAServersTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L36–L53` |
| `NUMAServersTestBase.ADDITIONAL_FILTERS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L37–L37` |
| `NUMAServersTestBase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L39–L53` |
| `NUMAServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L56–L1098` |
| `NUMAServersTest._run_build_test` | method | (self, flavor_id, end_status='ACTIVE', filter_called_on_error=True, expected_usage=None) | private | `created_server` (src/nova/tests/functional/libvirt/test_numa_servers.py:L98) | 6/30 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L58–L98` |
| `NUMAServersTest.test_create_server_with_numa_topology` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L100–L121` |
| `NUMAServersTest.test_create_server_with_numa_topology_and_cpu_topology_and_pinning` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L123–L150` |
| `NUMAServersTest.test_create_server_with_numa_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L152–L165` |
| `NUMAServersTest.test_create_server_with_hugepages` | method | (self) | public | not declared | 2/20 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L167–L197` |
| `NUMAServersTest.test_create_server_with_hugepages_fails` | method | (self) | public | not declared | 2/14 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L199–L222` |
| `NUMAServersTest.test_create_server_with_dedicated_policy` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L224–L249` |
| `NUMAServersTest.test_create_server_with_mixed_policy` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L251–L303` |
| `NUMAServersTest.test_create_server_with_mixed_policy_fails` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L305–L347` |
| `NUMAServersTest.test_create_server_with_mixed_policy_asymmetric_multi_numa` | method | (self) | public | not declared | 1/47 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L349–L417` |
| `NUMAServersTest.test_create_server_with_dedicated_policy_old_configuration` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L419–L442` |
| `NUMAServersTest.test_create_server_with_isolate_thread_policy_old_configuration` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L444–L479` |
| `NUMAServersTest.test_create_server_with_dedicated_policy_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L481–L501` |
| `NUMAServersTest.test_create_server_with_dedicated_policy_quota_fails` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L503–L529` |
| `NUMAServersTest.test_create_server_with_isolate_thread_policy_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L531–L552` |
| `NUMAServersTest.test_create_server_with_pcpu` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L554–L576` |
| `NUMAServersTest.test_create_server_with_pcpu_fails` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L578–L597` |
| `NUMAServersTest.test_create_server_with_pcpu_quota_fails` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L599–L622` |
| `NUMAServersTest._inspect_filter_numa_topology` | method | (self, cell_count) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L624–L635` |
| `NUMAServersTest._inspect_request_spec` | method | (self, server, cell_count) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L637–L641` |
| `NUMAServersTest.test_resize_revert_server_with_numa` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L643–L713` |
| `NUMAServersTest.test_resize_vcpu_to_pcpu` | method | (self) | public | not declared | 8/60 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L715–L816` |
| `NUMAServersTest.test_resize_bug_1879878` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L818–L894` |
| `NUMAServersTest.test_resize_bug_1879878.fake_confirm_migration` | function | (*args, **kwargs) | public | `orig_confirm(*args, **kwargs)` (src/nova/tests/functional/libvirt/test_numa_servers.py:L853) | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L832–L853` |
| `NUMAServersTest._assert_pinned_cpus` | method | (self, hostname, expected_number_of_pinned) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L896–L903` |
| `NUMAServersTest._create_server_and_resize_bug_1944759` | method | (self) | private | `server, src_host, dst_host` (src/nova/tests/functional/libvirt/test_numa_servers.py:L957) | 1/30 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L905–L957` |
| `NUMAServersTest._create_server_and_resize_bug_1944759.inject_periodic_to_finish_resize` | function | (*args, **kwargs) | public | `orig_rpc_finish_resize(*args, **kwargs)` (src/nova/tests/functional/libvirt/test_numa_servers.py:L932) | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L930–L932` |
| `NUMAServersTest.test_resize_confirm_bug_1944759` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L959–L978` |
| `NUMAServersTest.test_resize_revert_bug_1944759` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L980–L1001` |
| `NUMAServersTest.test_resize_dedicated_policy_race_on_dest_bug_1953359` | method | (self) | public | not declared | 1/44 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1003–L1098` |
| `NUMAServersTest.test_resize_dedicated_policy_race_on_dest_bug_1953359.fake_finish_resize` | function | (*args, **kwargs) | public | `orig_finish_resize(*args, **kwargs)` (src/nova/tests/functional/libvirt/test_numa_servers.py:L1074) | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1048–L1074` |
| `NUMAServerTestWithCountingQuotaFromPlacement` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1101–L1105` |
| `NUMAServerTestWithCountingQuotaFromPlacement.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1103–L1105` |
| `ReshapeForPCPUsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1108–L1340` |
| `ReshapeForPCPUsTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1111–L1111` |
| `ReshapeForPCPUsTest.test_vcpu_to_pcpu_reshape` | method | (self) | public | not declared | 3/133 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1113–L1340` |
| `NUMAServersWithNetworksTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1343–L1538` |
| `NUMAServersWithNetworksTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1345–L1359` |
| `NUMAServersWithNetworksTest._test_create_server_with_networks` | method | (self, flavor_id, networks, end_status='ACTIVE') | private | `self._create_server( flavor_id=flavor_id, networks=networks, expected_state=end_status)` (src/nova/tests/functional/libvirt/test_numa_servers.py:L1366) | 1/7 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1361–L1369` |
| `NUMAServersWithNetworksTest.test_create_server_with_single_physnet` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1371–L1380` |
| `NUMAServersWithNetworksTest.test_create_server_with_multiple_physnets` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1382–L1398` |
| `NUMAServersWithNetworksTest.test_create_server_with_multiple_physnets_fail` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1400–L1416` |
| `NUMAServersWithNetworksTest.test_create_server_with_physnet_and_tunneled_net` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1418–L1433` |
| `NUMAServersWithNetworksTest.test_attach_interface_with_network_affinity_violation` | method | (self) | public | not declared | 1/31 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1445–L1494` |
| `NUMAServersWithNetworksTest.test_cold_migrate_with_physnet` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1496–L1538` |
| `NUMAServersRebuildTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1541–L1640` |
| `NUMAServersRebuildTests.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1543–L1548` |
| `NUMAServersRebuildTests._create_active_server` | method | (self, server_args=None) | private | `self._wait_for_state_change(server, 'ACTIVE')` (src/nova/tests/functional/libvirt/test_numa_servers.py:L1562) | 2/13 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1550–L1562` |
| `NUMAServersRebuildTests.test_rebuild_server_with_numa` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1564–L1587` |
| `NUMAServersRebuildTests.test_rebuild_server_with_numa_inplace_fails` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1589–L1608` |
| `NUMAServersRebuildTests.test_rebuild_server_with_different_numa_topology_fails` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_numa_servers.py:L1610–L1640` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_numa_servers.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_numa_servers.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_numa_servers.py:L19)
- `import testtools` (src/nova/tests/functional/libvirt/test_numa_servers.py:L20)
- `import nova` (src/nova/tests/functional/libvirt/test_numa_servers.py:L22)
- `nova.compute`: imports `manager` (src/nova/tests/functional/libvirt/test_numa_servers.py:L23)
- `nova.conf`: imports `neutron as neutron_conf` (src/nova/tests/functional/libvirt/test_numa_servers.py:L24)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_numa_servers.py:L25)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_numa_servers.py:L26)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_numa_servers.py:L27)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_numa_servers.py:L28)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/libvirt/test_numa_servers.py:L29)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_numa_servers.py:L30)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_numa_servers.py:L32)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_numa_servers.py:L33)
- **global-mutation**: ADDITIONAL_FILTERS = ['NUMATopologyFilter'] (src/nova/tests/functional/libvirt/test_numa_servers.py:L37)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_numa_servers.py:L1111)

## Security Surface

- **sink** (`db-write`): basic_server.update(server_args) (src/nova/tests/functional/libvirt/test_numa_servers.py:L1560)
- **sink** (`db-write`): self.glance.update(ctx, self.image_ref_1, image_meta) (src/nova/tests/functional/libvirt/test_numa_servers.py:L1631)

