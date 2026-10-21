# src/nova/tests/unit/test_thread_pool_factory.py

## Overview

This file implements the `test_thread_pool_factory` module, defining 16 classs, 34 functions, 69 methods, 12 imports, 1 security surface entry.

Lines: total 1320, code 886, comment 159, blank 275

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SpawnTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L29–L89` |
| `SpawnTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_thread_pool_factory.py:L30–L32` |
| `SpawnTestCase.test_spawn_no_context` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_thread_pool_factory.py:L34–L48` |
| `SpawnTestCase.test_spawn_no_context._fake_spawn` | function | (func, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L37–L40` |
| `SpawnTestCase.test_spawn_no_context.fake` | function | (arg) | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L42–L43` |
| `SpawnTestCase.test_spawn_context` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_thread_pool_factory.py:L50–L67` |
| `SpawnTestCase.test_spawn_context._fake_spawn` | function | (func, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L54–L58` |
| `SpawnTestCase.test_spawn_context.fake` | function | (context, kwarg1=None) | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L60–L61` |
| `SpawnTestCase.test_spawn_context_different_from_passed` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_thread_pool_factory.py:L69–L89` |
| `SpawnTestCase.test_spawn_context_different_from_passed._fake_spawn` | function | (func, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L76–L80` |
| `SpawnTestCase.test_spawn_context_different_from_passed.fake` | function | (context, kwarg1=None) | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L82–L83` |
| `ScatterGatherExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L92–L122` |
| `ScatterGatherExecutorTestCase.test_executor_is_named` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L93–L103` |
| `ScatterGatherExecutorTestCase.test_executor_type_eventlet` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L105–L112` |
| `ScatterGatherExecutorTestCase.test_executor_type_and_size_threading` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L116–L122` |
| `DefaultExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L125–L157` |
| `DefaultExecutorTestCase.test_executor_is_named` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L126–L136` |
| `DefaultExecutorTestCase.test_executor_type_and_size_eventlet` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/test_thread_pool_factory.py:L138–L147` |
| `DefaultExecutorTestCase.test_executor_type_and_size_threading` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L151–L157` |
| `LongTaskExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L160–L211` |
| `LongTaskExecutorTestCase.test_executor_is_named` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L161–L166` |
| `LongTaskExecutorTestCase.test_pool_size_eventlet_sums_builds_and_snapshots` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/test_thread_pool_factory.py:L168–L181` |
| `LongTaskExecutorTestCase.test_pool_size_threading_same_limits_no_warning` | method | (self, mock_warning) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L186–L193` |
| `LongTaskExecutorTestCase.test_pool_size_threading_different_limits_warns` | method | (self, mock_warning) | public | not declared | 1/11 | `src/nova/tests/unit/test_thread_pool_factory.py:L198–L211` |
| `MaxConcurrentBuildsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L214–L242` |
| `MaxConcurrentBuildsTestCase.test_unlimited_threading_fallback_warns` | method | (self, mock_warning) | public | not declared | 1/8 | `src/nova/tests/unit/test_thread_pool_factory.py:L219–L227` |
| `MaxConcurrentBuildsTestCase.test_unlimited_eventlet_fallback_warns` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/test_thread_pool_factory.py:L229–L242` |
| `MaxConcurrentSnapshotsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L245–L273` |
| `MaxConcurrentSnapshotsTestCase.test_unlimited_threading_fallback_warns` | method | (self, mock_warning) | public | not declared | 1/8 | `src/nova/tests/unit/test_thread_pool_factory.py:L250–L258` |
| `MaxConcurrentSnapshotsTestCase.test_unlimited_eventlet_fallback_warns` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/test_thread_pool_factory.py:L260–L273` |
| `CacheImagesExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L276–L289` |
| `CacheImagesExecutorTestCase.test_executor_is_named` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L277–L282` |
| `CacheImagesExecutorTestCase.test_executor_type_and_size` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_thread_pool_factory.py:L284–L289` |
| `SyncPowerExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L292–L305` |
| `SyncPowerExecutorTestCase.test_executor_is_named` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L293–L298` |
| `SyncPowerExecutorTestCase.test_executor_type_and_size` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_thread_pool_factory.py:L300–L305` |
| `LiveMigrationExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L308–L354` |
| `LiveMigrationExecutorTestCase.test_executor_is_named` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L309–L314` |
| `LiveMigrationExecutorTestCase.test_executor_type_and_size` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_thread_pool_factory.py:L316–L324` |
| `LiveMigrationExecutorTestCase.test_pool_size_unlimited_threading_fallback_warns` | method | (self, mock_warning) | public | not declared | 1/8 | `src/nova/tests/unit/test_thread_pool_factory.py:L329–L338` |
| `LiveMigrationExecutorTestCase.test_pool_size_unlimited_eventlet_fallback_warns` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/test_thread_pool_factory.py:L340–L354` |
| `GetExecutorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L357–L434` |
| `GetExecutorTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_thread_pool_factory.py:L359–L362` |
| `GetExecutorTestCase.test_get_executor_is_tracked` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L364–L369` |
| `GetExecutorTestCase.test_get_executor_after_shutdown_raises` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_thread_pool_factory.py:L371–L383` |
| `GetExecutorTestCase.test_concurrent_first_get_creates_only_one_executor` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/test_thread_pool_factory.py:L385–L434` |
| `GetExecutorTestCase.test_concurrent_first_get_creates_only_one_executor.mock_new_executor` | function | (*args, **kwargs) | public | `real_new_executor(*args, **kwargs)` (src/nova/tests/unit/test_thread_pool_factory.py:L399) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L396–L399` |
| `GetExecutorTestCase.test_concurrent_first_get_creates_only_one_executor._get_executor` | function | — | private | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L403–L404` |
| `ShutdownAllExecutorsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L437–L487` |
| `ShutdownAllExecutorsTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_thread_pool_factory.py:L439–L445` |
| `ShutdownAllExecutorsTestCase.test_shutdown_all_executors` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_thread_pool_factory.py:L447–L461` |
| `ShutdownAllExecutorsTestCase.test_shutdown_all_executors_shuts_down_with_wait` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_thread_pool_factory.py:L463–L471` |
| `ShutdownAllExecutorsTestCase.test_shutdown_all_executors_clears_registry` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_thread_pool_factory.py:L473–L487` |
| `ResetAllExecutorsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L490–L535` |
| `ResetAllExecutorsTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_thread_pool_factory.py:L492–L498` |
| `ResetAllExecutorsTestCase.test_reset_all_executors` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_thread_pool_factory.py:L500–L510` |
| `ResetAllExecutorsTestCase.test_reset_all_executors_shutdown_with_wait` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_thread_pool_factory.py:L512–L519` |
| `ResetAllExecutorsTestCase.test_reset_all_executors_does_not_mark_factory_shutdown` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_thread_pool_factory.py:L521–L535` |
| `SpawnOnTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L538–L608` |
| `SpawnOnTestCase.test_spawn_on_submits_work` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_thread_pool_factory.py:L539–L547` |
| `SpawnOnTestCase.test_spawn_on_warns_on_full_executor` | method | (self, mock_warning) | public | not declared | 1/17 | `src/nova/tests/unit/test_thread_pool_factory.py:L552–L585` |
| `SpawnOnTestCase.test_spawn_on_warns_on_full_executor.task` | function | — | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L563–L565` |
| `SpawnOnTestCase.test_spawn_on_initializes_profiler` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/test_thread_pool_factory.py:L587–L608` |
| `SpawnOnTestCase.test_spawn_on_initializes_profiler.task` | function | — | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L595–L596` |
| `SerializeProfileInfoTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L611–L629` |
| `SerializeProfileInfoTestCase.test_profiler_returns_trace_info` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_thread_pool_factory.py:L613–L629` |
| `ExecutorStatsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L632–L760` |
| `ExecutorStatsTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_thread_pool_factory.py:L634–L636` |
| `ExecutorStatsTestCase._task_finishes` | method | (self) | private | `` (src/nova/tests/unit/test_thread_pool_factory.py:L639) | 1/2 | `src/nova/tests/unit/test_thread_pool_factory.py:L638–L639` |
| `ExecutorStatsTestCase._task_fails` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/test_thread_pool_factory.py:L641–L642` |
| `ExecutorStatsTestCase._task_running` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/test_thread_pool_factory.py:L644–L645` |
| `ExecutorStatsTestCase.test_stats_logged_eventlet` | method | (self, mock_debug) | public | not declared | 2/23 | `src/nova/tests/unit/test_thread_pool_factory.py:L650–L684` |
| `ExecutorStatsTestCase.test_stats_logged_eventlet.cleanup` | function | — | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L665–L667` |
| `ExecutorStatsTestCase.test_stats_logged_threading` | method | (self, mock_debug) | public | not declared | 2/27 | `src/nova/tests/unit/test_thread_pool_factory.py:L689–L731` |
| `ExecutorStatsTestCase.test_stats_logged_threading.cleanup` | function | — | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L705–L707` |
| `ExecutorStatsTestCase.test_stats_skipped_if_too_frequent` | method | (self, mock_debug) | public | not declared | 1/7 | `src/nova/tests/unit/test_thread_pool_factory.py:L734–L741` |
| `ExecutorStatsTestCase.test_stats_skipped_disabled` | method | (self, mock_info) | public | not declared | 1/4 | `src/nova/tests/unit/test_thread_pool_factory.py:L744–L748` |
| `ExecutorStatsTestCase.test_stats_not_logged_by_direct_get_executor` | method | (self, mock_debug) | public | not declared | 1/5 | `src/nova/tests/unit/test_thread_pool_factory.py:L751–L760` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L763–L1320` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_one` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_thread_pool_factory.py:L764–L784` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_one.task` | function | (num, foo) | public | `foo + str(num)` (src/nova/tests/unit/test_thread_pool_factory.py:L778) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L774–L778` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_one_exception_result` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_thread_pool_factory.py:L786–L807` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_one_exception_result.task` | function | (num, foo) | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L797–L801` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_two_non_overlapping` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_thread_pool_factory.py:L809–L830` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_two_non_overlapping.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L812) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L811–L812` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_two_non_overlapping.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L815) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L814–L815` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_second_while_delaying_first` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/test_thread_pool_factory.py:L832–L884` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_second_while_delaying_first.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L837) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L835–L837` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_second_while_delaying_first.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L843) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L841–L843` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_multiple` | method | (self) | public | not declared | 3/13 | `src/nova/tests/unit/test_thread_pool_factory.py:L886–L903` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_multiple.task` | function | (i) | public | `2 * i` (src/nova/tests/unit/test_thread_pool_factory.py:L894) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L893–L894` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_multiple_executor_rejects_first_executes_second` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/test_thread_pool_factory.py:L905–L933` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_multiple_executor_rejects_first_executes_second.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L907) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L906–L907` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_multiple_executor_rejects_first_executes_second.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L910) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L909–L910` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_cancel_during_delay` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/test_thread_pool_factory.py:L935–L976` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_cancel_during_delay.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L940) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L938–L940` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_cancel_during_delay.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L943) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L942–L943` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_cancel_while_in_queue` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/test_thread_pool_factory.py:L978–L1025` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_cancel_while_in_queue.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L983) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L981–L983` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_cancel_while_in_queue.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L989) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L987–L989` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_instantaneous_shutdown` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_thread_pool_factory.py:L1027–L1036` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_wait` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_thread_pool_factory.py:L1038–L1050` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_after_shutdown_rejected` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_thread_pool_factory.py:L1052–L1067` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_while_shutting_down` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_thread_pool_factory.py:L1069–L1094` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_submit_while_shutting_down.task` | function | — | public | not declared | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1072–L1073` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_after_task_finished` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_thread_pool_factory.py:L1096–L1114` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_after_task_finished.task` | function | — | public | `` (src/nova/tests/unit/test_thread_pool_factory.py:L1105) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1104–L1105` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_no_wait_shutdown_task_finishes_normally` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/test_thread_pool_factory.py:L1116–L1155` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_no_wait_shutdown_task_finishes_normally.task` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L1121) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1119–L1121` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_no_wait_shutdown_multiple_tasks_finishes_normally` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/test_thread_pool_factory.py:L1157–L1202` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_no_wait_shutdown_multiple_tasks_finishes_normally.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L1162) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1160–L1162` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_no_wait_shutdown_multiple_tasks_finishes_normally.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L1168) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1166–L1168` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_wait_task_finishes_normally` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_thread_pool_factory.py:L1204–L1234` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_wait_task_finishes_normally.task` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L1209) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1207–L1209` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_does_not_wait_for_cancelled_task` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_thread_pool_factory.py:L1236–L1266` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_does_not_wait_for_cancelled_task.task` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L1241) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1239–L1241` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_does_not_wait_for_multiple_cancelled_tasks` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/test_thread_pool_factory.py:L1268–L1320` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_does_not_wait_for_multiple_cancelled_tasks.task1` | function | — | public | `42` (src/nova/tests/unit/test_thread_pool_factory.py:L1273) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1271–L1273` |
| `StaticallyDelayingCancellableTaskExecutorWrapperTest.test_shutdown_does_not_wait_for_multiple_cancelled_tasks.task2` | function | — | public | `13` (src/nova/tests/unit/test_thread_pool_factory.py:L1279) | — | `src/nova/tests/unit/test_thread_pool_factory.py:L1277–L1279` |

## Dependencies

- `import os` (src/nova/tests/unit/test_thread_pool_factory.py:L13)
- `import threading` (src/nova/tests/unit/test_thread_pool_factory.py:L14)
- `import time` (src/nova/tests/unit/test_thread_pool_factory.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/test_thread_pool_factory.py:L16)
- `import fixtures` (src/nova/tests/unit/test_thread_pool_factory.py:L18)
- `import futurist` (src/nova/tests/unit/test_thread_pool_factory.py:L19)
- `oslo_context`: imports `context as common_context` (src/nova/tests/unit/test_thread_pool_factory.py:L20)
- `oslo_context`: imports `fixture as context_fixture` (src/nova/tests/unit/test_thread_pool_factory.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/test_thread_pool_factory.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/test_thread_pool_factory.py:L24)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/test_thread_pool_factory.py:L25)
- `nova`: imports `utils` (src/nova/tests/unit/test_thread_pool_factory.py:L26)

## Security Surface

- **entry-point** (`env`): env = os.environ.get('OS_NOVA_DISABLE_EVENTLET_PATCHING', '').lower() (src/nova/tests/unit/test_thread_pool_factory.py:L651)

