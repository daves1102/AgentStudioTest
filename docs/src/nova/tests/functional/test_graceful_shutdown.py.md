# src/nova/tests/functional/test_graceful_shutdown.py

## Overview

This file implements the `test_graceful_shutdown` module, defining 4 classs, 4 constants, 2 fields, 11 functions, 28 methods, 8 imports, 4 side effects.

Lines: total 1005, code 658, comment 149, blank 198

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L43–L43` |
| `GracefulShutdownTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L46–L166` |
| `GracefulShutdownTestBase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L48–L48` |
| `GracefulShutdownTestBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L49–L49` |
| `GracefulShutdownTestBase.CAST_AS_CALL` | constant | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L50–L50` |
| `GracefulShutdownTestBase.OPERATION_TIMEOUT` | constant | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L55–L55` |
| `GracefulShutdownTestBase.MANAGER_GRACEFUL_SHUTDOWN_TIMEOUT` | constant | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L56–L56` |
| `GracefulShutdownTestBase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_graceful_shutdown.py:L58–L85` |
| `GracefulShutdownTestBase._setup_graceful_shutdown_mock` | method | (self, compute, operation_complete_event) | private | `shutdown_waiting` (src/nova/tests/functional/test_graceful_shutdown.py:L109) | 1/8 | `src/nova/tests/functional/test_graceful_shutdown.py:L87–L109` |
| `GracefulShutdownTestBase._setup_graceful_shutdown_mock.coordinated_graceful_shutdown` | function | (timeout) | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L93–L104` |
| `GracefulShutdownTestBase._stop_compute_gracefully` | method | (self, compute, timeout=30) | private | `t` (src/nova/tests/functional/test_graceful_shutdown.py:L117) | 1/7 | `src/nova/tests/functional/test_graceful_shutdown.py:L111–L117` |
| `GracefulShutdownTestBase._join_stop_thread` | method | (self, stop_thread, timeout=60) | private | not declared | 1/5 | `src/nova/tests/functional/test_graceful_shutdown.py:L119–L123` |
| `GracefulShutdownTestBase.wait_for_service_stop` | method | (self, stop_thread, host, binary='nova-compute', timeout=60) | public | not declared | 1/6 | `src/nova/tests/functional/test_graceful_shutdown.py:L125–L135` |
| `GracefulShutdownTestBase._assert_in_progress_task_count` | method | (self, compute, task_count, task_name=None) | private | not declared | 2/6 | `src/nova/tests/functional/test_graceful_shutdown.py:L137–L142` |
| `GracefulShutdownTestBase._wait_for_no_task_tracked` | method | (self, compute) | private | not declared | 1/3 | `src/nova/tests/functional/test_graceful_shutdown.py:L144–L148` |
| `GracefulShutdownTestBase._wait_for_no_task_tracked.no_task_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L145–L146` |
| `GracefulShutdownTestBase._restart_compute` | method | (self, hostname) | private | not declared | 1/5 | `src/nova/tests/functional/test_graceful_shutdown.py:L150–L161` |
| `GracefulShutdownTestBase._complete_live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | private | not declared | 1/4 | `src/nova/tests/functional/test_graceful_shutdown.py:L163–L166` |
| `TestComputeGracefulShutdown` | class | — | exported | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L169–L952` |
| `TestComputeGracefulShutdown.test_live_migration_source_compute_graceful_shutdown` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_graceful_shutdown.py:L172–L231` |
| `TestComputeGracefulShutdown.test_live_migration_dest_compute_graceful_shutdown` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_graceful_shutdown.py:L233–L292` |
| `TestComputeGracefulShutdown.test_live_migration_dest_shutdown_before_post_live_migration` | method | (self) | public | not declared | 1/32 | `src/nova/tests/functional/test_graceful_shutdown.py:L294–L339` |
| `TestComputeGracefulShutdown.test_cold_migration_source_compute_graceful_shutdown` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/test_graceful_shutdown.py:L341–L397` |
| `TestComputeGracefulShutdown.test_cold_migration_dest_compute_graceful_shutdown` | method | (self) | public | not declared | 1/35 | `src/nova/tests/functional/test_graceful_shutdown.py:L399–L453` |
| `TestComputeGracefulShutdown.test_cold_migration_dest_shutdown_before_resize_instance_completes` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_graceful_shutdown.py:L455–L499` |
| `TestComputeGracefulShutdown.test_instance_build_graceful_shutdown` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_graceful_shutdown.py:L501–L553` |
| `TestComputeGracefulShutdown.test_revert_resize_dest_compute_graceful_shutdown` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_graceful_shutdown.py:L555–L618` |
| `TestComputeGracefulShutdown.test_build_instance_track_wait_during_shutdown` | method | (self) | public | not declared | 1/35 | `src/nova/tests/functional/test_graceful_shutdown.py:L620–L671` |
| `TestComputeGracefulShutdown.test_build_instance_track_wait_during_shutdown.build_instance_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L644–L645` |
| `TestComputeGracefulShutdown.test_snapshot_instance_track_and_wait_during_shutdown` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_graceful_shutdown.py:L673–L724` |
| `TestComputeGracefulShutdown.test_snapshot_instance_track_and_wait_during_shutdown.snapshot_instance_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L699–L701` |
| `TestComputeGracefulShutdown.test_multiple_build_instance_tracked_and_shutdown_wait_for_all` | method | (self) | public | not declared | 4/57 | `src/nova/tests/functional/test_graceful_shutdown.py:L726–L814` |
| `TestComputeGracefulShutdown.test_multiple_build_instance_tracked_and_shutdown_wait_for_all._blocking_spawn` | function | (context, instance, *args, **kwargs) | private | `original_spawn(context, instance, *args, **kwargs)` (src/nova/tests/functional/test_graceful_shutdown.py:L748) | — | `src/nova/tests/functional/test_graceful_shutdown.py:L742–L748` |
| `TestComputeGracefulShutdown.test_multiple_build_instance_tracked_and_shutdown_wait_for_all.both_build_instances_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L770–L776` |
| `TestComputeGracefulShutdown.test_multiple_build_instance_tracked_and_shutdown_wait_for_all.one_task_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L794–L795` |
| `TestComputeGracefulShutdown.test_different_concurrent_operations_and_shutdown_wait_for_all` | method | (self) | public | not declared | 1/71 | `src/nova/tests/functional/test_graceful_shutdown.py:L816–L913` |
| `TestComputeGracefulShutdown.test_different_concurrent_operations_and_shutdown_wait_for_all.all_three_tasks_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L864–L869` |
| `TestComputeGracefulShutdown.test_different_concurrent_operations_and_shutdown_wait_for_all.two_tasks_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L884–L885` |
| `TestComputeGracefulShutdown.test_different_concurrent_operations_and_shutdown_wait_for_all.only_live_migration_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L894–L895` |
| `TestComputeGracefulShutdown.test_rpc_call_are_tracked` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_graceful_shutdown.py:L915–L941` |
| `TestComputeGracefulShutdown.test_rpc_call_are_tracked.pause_instance_tracked` | function | — | public | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L930–L933` |
| `TestComputeGracefulShutdown.test_periodic_tasks_skipped_once_shutdown_starts` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_graceful_shutdown.py:L943–L952` |
| `TestConductorGracefulShutdown` | class | — | exported | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L955–L973` |
| `TestConductorGracefulShutdown.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_graceful_shutdown.py:L956–L959` |
| `TestConductorGracefulShutdown.test_graceful_shutdown_completes_instantly_when_no_tasks` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_graceful_shutdown.py:L961–L973` |
| `TestSchedulerGracefulShutdown` | class | — | exported | not declared | — | `src/nova/tests/functional/test_graceful_shutdown.py:L976–L1005` |
| `TestSchedulerGracefulShutdown.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_graceful_shutdown.py:L978–L981` |
| `TestSchedulerGracefulShutdown.test_graceful_shutdown_completes_instantly_when_no_tasks` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_graceful_shutdown.py:L983–L995` |
| `TestSchedulerGracefulShutdown.test_periodic_tasks_skipped_once_shutdown_starts` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_graceful_shutdown.py:L997–L1005` |

## Dependencies

- `import threading` (src/nova/tests/functional/test_graceful_shutdown.py:L32)
- `import time` (src/nova/tests/functional/test_graceful_shutdown.py:L33)
- `unittest`: imports `mock` (src/nova/tests/functional/test_graceful_shutdown.py:L34)
- `import fixtures` (src/nova/tests/functional/test_graceful_shutdown.py:L36)
- `import nova.conf` (src/nova/tests/functional/test_graceful_shutdown.py:L38)
- `nova`: imports `test` (src/nova/tests/functional/test_graceful_shutdown.py:L39)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_graceful_shutdown.py:L40)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_graceful_shutdown.py:L41)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/test_graceful_shutdown.py:L43)
- **global-mutation**: CAST_AS_CALL = False (src/nova/tests/functional/test_graceful_shutdown.py:L50)
- **global-mutation**: OPERATION_TIMEOUT = 60 (src/nova/tests/functional/test_graceful_shutdown.py:L55)
- **global-mutation**: MANAGER_GRACEFUL_SHUTDOWN_TIMEOUT = OPERATION_TIMEOUT + 2 (src/nova/tests/functional/test_graceful_shutdown.py:L56)

