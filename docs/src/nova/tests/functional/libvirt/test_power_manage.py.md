# src/nova/tests/functional/libvirt/test_power_manage.py

## Overview

This file implements the `test_power_manage` module, defining 10 classs, 2 constants, 33 methods, 1 property, 10 imports, 2 side effects.

Lines: total 502, code 340, comment 71, blank 91

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PowerManagementTestsBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L27–L91` |
| `PowerManagementTestsBase.ADDITIONAL_FILTERS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L29–L29` |
| `PowerManagementTestsBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L31–L31` |
| `PowerManagementTestsBase.setUp` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_power_manage.py:L33–L70` |
| `PowerManagementTestsBase._assert_server_cpus_state` | method | (self, server, expected='online') | private | `instance_pcpus` (src/nova/tests/functional/libvirt/test_power_manage.py:L79) | 2/8 | `src/nova/tests/functional/libvirt/test_power_manage.py:L72–L79` |
| `PowerManagementTestsBase._assert_cpu_set_state` | method | (self, cpu_set, expected='online') | private | not declared | 6/11 | `src/nova/tests/functional/libvirt/test_power_manage.py:L81–L91` |
| `FakeCore` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L94–L109` |
| `FakeCore.__init__` | method | (self, i) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_power_manage.py:L96–L98` |
| `FakeCore.online` | method | (self) | public | `self.power_state == 'online'` (src/nova/tests/functional/libvirt/test_power_manage.py:L102) | 1/2 | `src/nova/tests/functional/libvirt/test_power_manage.py:L101–L102` |
| `FakeCore.online` | method | (self, state) | public | not declared | 2/5 | `src/nova/tests/functional/libvirt/test_power_manage.py:L105–L109` |
| `CoresStub` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L112–L120` |
| `CoresStub.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_power_manage.py:L114–L115` |
| `CoresStub.__call__` | method | (self, i) | public | `self.cores[i]` (src/nova/tests/functional/libvirt/test_power_manage.py:L120) | 2/4 | `src/nova/tests/functional/libvirt/test_power_manage.py:L117–L120` |
| `PowerManagementLiveMigrationTestsBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L123–L163` |
| `PowerManagementLiveMigrationTestsBase.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_power_manage.py:L126–L159` |
| `PowerManagementLiveMigrationTestsBase.assert_cores` | method | (self, host, cores, online=True) | public | not declared | 2/3 | `src/nova/tests/functional/libvirt/test_power_manage.py:L161–L163` |
| `PowerManagementLiveMigrationTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L166–L189` |
| `PowerManagementLiveMigrationTests.test_live_migrate_server` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_power_manage.py:L168–L177` |
| `PowerManagementLiveMigrationTests.test_live_migrate_server_with_emulator_threads_isolate` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_power_manage.py:L179–L189` |
| `PowerManagementLiveMigrationRollbackTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L192–L221` |
| `PowerManagementLiveMigrationRollbackTests._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_power_manage.py:L195–L198` |
| `PowerManagementLiveMigrationRollbackTests.test_live_migrate_server_rollback` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_power_manage.py:L200–L208` |
| `PowerManagementLiveMigrationRollbackTests.test_live_migrate_server_with_emulator_threads_isolate_rollback` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_power_manage.py:L210–L221` |
| `PowerManagementTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L224–L375` |
| `PowerManagementTests.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_power_manage.py:L227–L245` |
| `PowerManagementTests.test_compute_service_starts_with_power_management_and_zero_pcpu` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_power_manage.py:L247–L253` |
| `PowerManagementTests.test_create_server` | method | (self) | public | `server` (src/nova/tests/functional/libvirt/test_power_manage.py:L268) | 1/11 | `src/nova/tests/functional/libvirt/test_power_manage.py:L255–L268` |
| `PowerManagementTests.test_delete_server` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_power_manage.py:L270–L275` |
| `PowerManagementTests.test_delete_server_device_busy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_power_manage.py:L277–L295` |
| `PowerManagementTests.test_create_server_with_emulator_threads_isolate` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_power_manage.py:L297–L311` |
| `PowerManagementTests.test_start_stop_server_with_emulator_threads_isolate` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_power_manage.py:L313–L331` |
| `PowerManagementTests.test_stop_start_server` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_power_manage.py:L333–L344` |
| `PowerManagementTests.test_resize` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_power_manage.py:L346–L367` |
| `PowerManagementTests.test_changing_strategy_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_power_manage.py:L369–L375` |
| `PowerManagementTestsGovernor` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L378–L420` |
| `PowerManagementTestsGovernor.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_power_manage.py:L381–L397` |
| `PowerManagementTestsGovernor.test_create` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_power_manage.py:L399–L410` |
| `PowerManagementTestsGovernor.test_changing_strategy_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_power_manage.py:L412–L420` |
| `PowerManagementTestsGovernorNotSupported` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L423–L453` |
| `PowerManagementTestsGovernorNotSupported.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_power_manage.py:L426–L441` |
| `PowerManagementTestsGovernorNotSupported.test_enabling_governor_strategy_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_power_manage.py:L443–L446` |
| `PowerManagementTestsGovernorNotSupported.test_enabling_cpu_state_strategy_works` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_power_manage.py:L448–L453` |
| `PowerManagementMixedInstances` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L456–L502` |
| `PowerManagementMixedInstances.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_power_manage.py:L461–L482` |
| `PowerManagementMixedInstances.test_standard_server_works_and_passes` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_power_manage.py:L484–L502` |
| `FakeCore.online` | property | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_power_manage.py:L100–L102` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/libvirt/test_power_manage.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_power_manage.py:L15)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_power_manage.py:L17)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_power_manage.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_power_manage.py:L19)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_power_manage.py:L20)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_power_manage.py:L21)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_power_manage.py:L22)
- `nova.virt`: imports `hardware` (src/nova/tests/functional/libvirt/test_power_manage.py:L23)
- `nova.virt.libvirt.cpu`: imports `api as cpu_api` (src/nova/tests/functional/libvirt/test_power_manage.py:L24)

## Side Effects

- **global-mutation**: ADDITIONAL_FILTERS = ['NUMATopologyFilter'] (src/nova/tests/functional/libvirt/test_power_manage.py:L29)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_power_manage.py:L31)

