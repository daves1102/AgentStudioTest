# src/nova/tests/functional/compute/test_init_host.py

## Overview

This file implements the `test_init_host` module, defining 2 classs, 2 fields, 3 functions, 3 methods, 7 imports.

Lines: total 214, code 110, comment 72, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeManagerInitHostTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_init_host.py:L24–L146` |
| `ComputeManagerInitHostTestCase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_init_host.py:L28–L28` |
| `ComputeManagerInitHostTestCase.test_migrate_disk_and_power_off_crash_finish_revert_migration` | method | (self) | public | not declared | 4/56 | `src/nova/tests/functional/compute/test_init_host.py:L30–L146` |
| `ComputeManagerInitHostTestCase.test_migrate_disk_and_power_off_crash_finish_revert_migration.fake_migrate_disk_and_power_off` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/compute/test_init_host.py:L59–L64` |
| `ComputeManagerInitHostTestCase.test_migrate_disk_and_power_off_crash_finish_revert_migration._crash_shutdown_rpc_server` | function | (service_self, rpc_server, topic) | private | not declared | — | `src/nova/tests/functional/compute/test_init_host.py:L66–L70` |
| `TestComputeRestartInstanceStuckInBuild` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_init_host.py:L149–L214` |
| `TestComputeRestartInstanceStuckInBuild.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_init_host.py:L152–L152` |
| `TestComputeRestartInstanceStuckInBuild.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/compute/test_init_host.py:L154–L156` |
| `TestComputeRestartInstanceStuckInBuild.test_restart_compute_while_instance_waiting_for_resource_claim` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/compute/test_init_host.py:L158–L214` |
| `TestComputeRestartInstanceStuckInBuild.test_restart_compute_while_instance_waiting_for_resource_claim.sleep_forever` | function | (*args, **kwargs) | public | `orig_claim(*args, **kwargs)` (src/nova/tests/functional/compute/test_init_host.py:L190) | — | `src/nova/tests/functional/compute/test_init_host.py:L188–L190` |

## Dependencies

- `import threading` (src/nova/tests/functional/compute/test_init_host.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/compute/test_init_host.py:L14)
- `nova.compute`: imports `resource_tracker` (src/nova/tests/functional/compute/test_init_host.py:L17)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/compute/test_init_host.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_init_host.py:L19)
- `nova`: imports `service as nova_service` (src/nova/tests/functional/compute/test_init_host.py:L20)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/compute/test_init_host.py:L21)

