# src/nova/thread_pool_factory.py

## Overview

This file implements the `thread_pool_factory` module, defining 5 classs, 1 classmethod, 10 constants, 1 field, 12 functions, 24 methods, 2 propertys, 8 staticmethods, 2 variables, 13 imports, 10 side effects.

Lines: total 650, code 460, comment 76, blank 114

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `profiler` | variable | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L29–L29` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L31–L31` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L33–L33` |
| `Executor` | variable | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L37–L38` |
| `get_max_concurrent_builds` | function | — | exported | `CONF.max_concurrent_builds` (src/nova/thread_pool_factory.py:L43); `10` (src/nova/thread_pool_factory.py:L56); `1000` (src/nova/thread_pool_factory.py:L60) | 3/13 | `src/nova/thread_pool_factory.py:L41–L60` |
| `get_max_concurrent_snapshots` | function | — | exported | `CONF.max_concurrent_snapshots` (src/nova/thread_pool_factory.py:L65); `5` (src/nova/thread_pool_factory.py:L78); `1000` (src/nova/thread_pool_factory.py:L82) | 3/13 | `src/nova/thread_pool_factory.py:L63–L82` |
| `get_max_concurrent_live_migrations` | function | — | exported | `CONF.max_concurrent_live_migrations` (src/nova/thread_pool_factory.py:L87); `5` (src/nova/thread_pool_factory.py:L99); `1000` (src/nova/thread_pool_factory.py:L103) | 3/13 | `src/nova/thread_pool_factory.py:L85–L103` |
| `ExecutorType` | class | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L106–L118` |
| `ExecutorType.DEFAULT` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L112–L112` |
| `ExecutorType.SCATTER_GATHER` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L113–L113` |
| `ExecutorType.CACHE_IMAGES` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L114–L114` |
| `ExecutorType.LONG_TASK` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L115–L115` |
| `ExecutorType.SYNC_POWER` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L116–L116` |
| `ExecutorType.LIVE_MIGRATION` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L117–L117` |
| `ExecutorType.UPDATE_RESOURCES` | constant | — | public | not declared | — | `src/nova/thread_pool_factory.py:L118–L118` |
| `ExecutorsPoolSize` | class | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L121–L185` |
| `ExecutorsPoolSize._default_pool_size` | method | — | private | `( CONF.default_thread_pool_size if utils.concurrency_mode_threading() else CONF.default_green_pool_size)` (src/nova/thread_pool_factory.py:L126) | 2/4 | `src/nova/thread_pool_factory.py:L125–L128` |
| `ExecutorsPoolSize._scatter_gather_pool_size` | method | — | private | `( CONF.cell_worker_thread_pool_size if utils.concurrency_mode_threading() else 1000)` (src/nova/thread_pool_factory.py:L132) | 2/4 | `src/nova/thread_pool_factory.py:L131–L134` |
| `ExecutorsPoolSize._cache_images_pool_size` | method | — | private | `CONF.image_cache.precache_concurrency` (src/nova/thread_pool_factory.py:L138) | 1/2 | `src/nova/thread_pool_factory.py:L137–L138` |
| `ExecutorsPoolSize._sync_power_pool_size` | method | — | private | `CONF.sync_power_state_pool_size` (src/nova/thread_pool_factory.py:L142) | 1/2 | `src/nova/thread_pool_factory.py:L141–L142` |
| `ExecutorsPoolSize._long_task_pool_size` | method | — | private | `max_builds + max_snapshots` (src/nova/thread_pool_factory.py:L166); `max_tasks` (src/nova/thread_pool_factory.py:L167) | 3/18 | `src/nova/thread_pool_factory.py:L145–L167` |
| `ExecutorsPoolSize._update_resources_pool_size` | method | — | private | `CONF.compute.update_resources_max_workers` (src/nova/thread_pool_factory.py:L171) | 1/2 | `src/nova/thread_pool_factory.py:L170–L171` |
| `ExecutorsPoolSize._EXECUTOR_POOL_SIZE` | field | — | private | not declared | — | `src/nova/thread_pool_factory.py:L173–L181` |
| `ExecutorsPoolSize.get` | method | (cls, executor_type) | public | `cls._EXECUTOR_POOL_SIZE[executor_type]()` (src/nova/thread_pool_factory.py:L185) | 1/2 | `src/nova/thread_pool_factory.py:L184–L185` |
| `ThreadPoolFactory` | class | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L188–L296` |
| `ThreadPoolFactory.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/thread_pool_factory.py:L200–L206` |
| `ThreadPoolFactory._new_executor` | method | (self, max_workers, name) | private | `executor` (src/nova/thread_pool_factory.py:L218) | 2/8 | `src/nova/thread_pool_factory.py:L208–L218` |
| `ThreadPoolFactory.get_executor` | method | (self, executor_type) | public | `executor` (src/nova/thread_pool_factory.py:L243) | 4/19 | `src/nova/thread_pool_factory.py:L220–L243` |
| `ThreadPoolFactory._teardown_all` | method | (self, mark_shutdown=True) | private | not declared | 3/11 | `src/nova/thread_pool_factory.py:L245–L256` |
| `ThreadPoolFactory.shutdown_all` | method | (self) | public | not declared | 1/2 | `src/nova/thread_pool_factory.py:L258–L279` |
| `ThreadPoolFactory.reset_all` | method | (self) | public | not declared | 1/2 | `src/nova/thread_pool_factory.py:L281–L296` |
| `FACTORY` | constant | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L299–L299` |
| `get_executor` | function | (executor_type) | exported | `FACTORY.get_executor(executor_type)` (src/nova/thread_pool_factory.py:L303) | 1/2 | `src/nova/thread_pool_factory.py:L302–L303` |
| `shutdown_all_executors` | function | — | exported | not declared | 1/2 | `src/nova/thread_pool_factory.py:L306–L308` |
| `reset_all_executors` | function | — | exported | not declared | 1/2 | `src/nova/thread_pool_factory.py:L311–L314` |
| `_serialize_profile_info` | function | — | unexported | `None` (src/nova/thread_pool_factory.py:L319); `trace_info` (src/nova/thread_pool_factory.py:L330) | 3/12 | `src/nova/thread_pool_factory.py:L317–L330` |
| `_executor_is_full` | function | (executor) | unexported | `queued_tasks and not idle_workers` (src/nova/thread_pool_factory.py:L341); `False` (src/nova/thread_pool_factory.py:L343) | 5/8 | `src/nova/thread_pool_factory.py:L333–L343` |
| `_log_executor_stats` | function | (executor, executor_type) | unexported | `` (src/nova/thread_pool_factory.py:L348); `` (src/nova/thread_pool_factory.py:L356) | 8/28 | `src/nova/thread_pool_factory.py:L346–L378` |
| `spawn_on` | function | (executor_type, func, *args, **kwargs) | exported | `executor.submit(context_wrapper, *args, **kwargs)` (src/nova/thread_pool_factory.py:L419) | 2/19 | `src/nova/thread_pool_factory.py:L381–L419` |
| `spawn_on.context_wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/thread_pool_factory.py:L417) | — | `src/nova/thread_pool_factory.py:L410–L417` |
| `spawn` | function | (func, *args, **kwargs) | exported | `spawn_on(ExecutorType.DEFAULT, func, *args, **kwargs)` (src/nova/thread_pool_factory.py:L434) | 1/5 | `src/nova/thread_pool_factory.py:L422–L434` |
| `StaticallyDelayingCancellableTaskExecutorWrapper` | class | — | exported | not declared | — | `src/nova/thread_pool_factory.py:L437–L650` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.Task` | class | — | public | not declared | — | `src/nova/thread_pool_factory.py:L454–L476` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.Task.__init__` | method | (self, delay, fn, args, kwargs) | public | not declared | 1/12 | `src/nova/thread_pool_factory.py:L455–L466` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.Task.remaining_delay` | method | (self) | public | `self.deadline - time.monotonic()` (src/nova/thread_pool_factory.py:L470) | 1/2 | `src/nova/thread_pool_factory.py:L469–L470` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.Task.__str__` | method | (self) | public | `( f"Task(fn={self.fn}, " f"remaining_delay={self.remaining_delay} " f"future={self.future})")` (src/nova/thread_pool_factory.py:L473) | 1/5 | `src/nova/thread_pool_factory.py:L472–L476` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.__init__` | method | (self, delay, executor) | public | not declared | 1/10 | `src/nova/thread_pool_factory.py:L478–L498` |
| `StaticallyDelayingCancellableTaskExecutorWrapper._log` | method | (msg, *args) | private | not declared | 1/2 | `src/nova/thread_pool_factory.py:L501–L502` |
| `StaticallyDelayingCancellableTaskExecutorWrapper._task_wrapper` | method | (task) | private | not declared | 2/5 | `src/nova/thread_pool_factory.py:L505–L514` |
| `StaticallyDelayingCancellableTaskExecutorWrapper._wait_for_deadline_then_set_running` | method | (self, task) | private | `task.future.set_running_or_notify_cancel()` (src/nova/thread_pool_factory.py:L529); `False` (src/nova/thread_pool_factory.py:L542); `task.future.set_running_or_notify_cancel()` (src/nova/thread_pool_factory.py:L555) | 5/19 | `src/nova/thread_pool_factory.py:L516–L555` |
| `StaticallyDelayingCancellableTaskExecutorWrapper._run` | method | (self) | private | `` (src/nova/thread_pool_factory.py:L568) | 6/30 | `src/nova/thread_pool_factory.py:L557–L606` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.submit_with_delay` | method | (self, fn, *args, **kwargs) | public | `task.future` (src/nova/thread_pool_factory.py:L622) | 2/11 | `src/nova/thread_pool_factory.py:L608–L622` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.shutdown` | method | (self, wait=True) | public | not declared | 3/13 | `src/nova/thread_pool_factory.py:L624–L646` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.is_alive` | method | (self) | public | `self._thread.is_alive()` (src/nova/thread_pool_factory.py:L650) | 1/2 | `src/nova/thread_pool_factory.py:L649–L650` |
| `ExecutorsPoolSize._default_pool_size` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L124–L128` |
| `ExecutorsPoolSize._scatter_gather_pool_size` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L130–L134` |
| `ExecutorsPoolSize._cache_images_pool_size` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L136–L138` |
| `ExecutorsPoolSize._sync_power_pool_size` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L140–L142` |
| `ExecutorsPoolSize._long_task_pool_size` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L144–L167` |
| `ExecutorsPoolSize._update_resources_pool_size` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L169–L171` |
| `ExecutorsPoolSize.get` | classmethod | — | public | not declared | — | `src/nova/thread_pool_factory.py:L183–L185` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.Task.remaining_delay` | property | — | public | not declared | — | `src/nova/thread_pool_factory.py:L468–L470` |
| `StaticallyDelayingCancellableTaskExecutorWrapper._log` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L500–L502` |
| `StaticallyDelayingCancellableTaskExecutorWrapper._task_wrapper` | staticmethod | — | private | not declared | — | `src/nova/thread_pool_factory.py:L504–L514` |
| `StaticallyDelayingCancellableTaskExecutorWrapper.is_alive` | property | — | public | not declared | — | `src/nova/thread_pool_factory.py:L648–L650` |

## Dependencies

- `import enum` (src/nova/thread_pool_factory.py:L13)
- `import functools` (src/nova/thread_pool_factory.py:L14)
- `import multiprocessing` (src/nova/thread_pool_factory.py:L15)
- `import queue` (src/nova/thread_pool_factory.py:L16)
- `import threading` (src/nova/thread_pool_factory.py:L17)
- `import time` (src/nova/thread_pool_factory.py:L18)
- `import typing as ty` (src/nova/thread_pool_factory.py:L19)
- `import futurist` (src/nova/thread_pool_factory.py:L21)
- `oslo_context`: imports `context as common_context` (src/nova/thread_pool_factory.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/thread_pool_factory.py:L23)
- `oslo_utils`: imports `importutils` (src/nova/thread_pool_factory.py:L24)
- `import nova.conf` (src/nova/thread_pool_factory.py:L26)
- `nova`: imports `utils` (src/nova/thread_pool_factory.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/thread_pool_factory.py:L31)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/thread_pool_factory.py:L33)
- **global-mutation**: DEFAULT = "default" (src/nova/thread_pool_factory.py:L112)
- **global-mutation**: SCATTER_GATHER = "cell_worker" (src/nova/thread_pool_factory.py:L113)
- **global-mutation**: CACHE_IMAGES = "cache_images" (src/nova/thread_pool_factory.py:L114)
- **global-mutation**: LONG_TASK = "long_task" (src/nova/thread_pool_factory.py:L115)
- **global-mutation**: SYNC_POWER = "sync_power_state" (src/nova/thread_pool_factory.py:L116)
- **global-mutation**: LIVE_MIGRATION = "live_migration" (src/nova/thread_pool_factory.py:L117)
- **global-mutation**: UPDATE_RESOURCES = "update_resources" (src/nova/thread_pool_factory.py:L118)
- **global-mutation**: FACTORY = ThreadPoolFactory() (src/nova/thread_pool_factory.py:L299)

