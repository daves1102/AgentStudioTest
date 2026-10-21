# src/nova/manager.py

## Overview

This file implements the `manager` module, defining 3 classs, 2 constants, 1 field, 1 function, 15 methods, 8 imports, 2 side effects.

Lines: total 331, code 253, comment 18, blank 60

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/manager.py:L66–L66` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/manager.py:L67–L67` |
| `skip_automatic_rpc_tracking` | function | (func) | exported | `func` (src/nova/manager.py:L81) | 1/3 | `src/nova/manager.py:L70–L81` |
| `PeriodicTasks` | class | — | exported | not declared | — | `src/nova/manager.py:L84–L86` |
| `PeriodicTasks.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/manager.py:L85–L86` |
| `ManagerMeta` | class | — | exported | not declared | — | `src/nova/manager.py:L89–L105` |
| `Manager` | class | — | exported | not declared | — | `src/nova/manager.py:L108–L331` |
| `Manager.__trace_args__` | field | — | public | not declared | — | `src/nova/manager.py:L109–L109` |
| `Manager.__init__` | method | (self, host=None, service_name='undefined') | public | not declared | 2/15 | `src/nova/manager.py:L111–L125` |
| `Manager.periodic_tasks` | method | (self, context, raise_on_error=False) | public | `` (src/nova/manager.py:L131); `self.run_periodic_tasks(context, raise_on_error=raise_on_error)` (src/nova/manager.py:L132) | 2/5 | `src/nova/manager.py:L127–L132` |
| `Manager.init_host` | method | (self, service_ref) | public | not declared | 1/2 | `src/nova/manager.py:L134–L144` |
| `Manager.set_shutdown_in_progress` | method | (self) | public | not declared | 1/2 | `src/nova/manager.py:L146–L147` |
| `Manager.graceful_shutdown` | method | (self, timeout) | public | not declared | 1/2 | `src/nova/manager.py:L149–L155` |
| `Manager.cleanup_host` | method | (self) | public | not declared | 1/2 | `src/nova/manager.py:L157–L162` |
| `Manager.pre_start_hook` | method | (self, service_ref) | public | not declared | 1/2 | `src/nova/manager.py:L164–L174` |
| `Manager.post_start_hook` | method | (self) | public | not declared | 1/2 | `src/nova/manager.py:L176–L183` |
| `Manager.reset` | method | (self) | public | not declared | 1/2 | `src/nova/manager.py:L185–L189` |
| `Manager._record_task_start` | method | (self, task_name, instance_uuid=None, request_id=None) | private | `key` (src/nova/manager.py:L220) | 2/19 | `src/nova/manager.py:L191–L220` |
| `Manager._record_task_end` | method | (self, key, future=None, failed=False) | private | `` (src/nova/manager.py:L251) | 9/27 | `src/nova/manager.py:L222–L268` |
| `Manager._summarize_in_progress_tasks` | method | (self) | private | `', '.join( '%s(instance=%s, request_id=%s, elapsed=%s)' % ( t['name'], t['instance_uuid'], t['request_id'], time.monotonic() - t['start_time']) for t in self._in_progress_tasks.values())` (src/nova/manager.py:L271) | 2/6 | `src/nova/manager.py:L270–L275` |
| `Manager._summarize_failed_tasks` | method | (self) | private | `', '.join( '%s(instance=%s, request_id=%s)' % ( t['name'], t['instance_uuid'], t['request_id']) for t in self._failed_tasks.values())` (src/nova/manager.py:L278) | 2/5 | `src/nova/manager.py:L277–L281` |
| `Manager._wait_for_in_progress_tasks` | method | (self, timeout) | private | `` (src/nova/manager.py:L297); `` (src/nova/manager.py:L316) | 7/39 | `src/nova/manager.py:L283–L331` |

## Dependencies

- `import threading` (src/nova/manager.py:L54)
- `import time` (src/nova/manager.py:L55)
- `oslo_log`: imports `log as logging` (src/nova/manager.py:L57)
- `oslo_service`: imports `periodic_task` (src/nova/manager.py:L58)
- `import nova.conf` (src/nova/manager.py:L60)
- `import nova.db.main.api` (src/nova/manager.py:L61)
- `nova`: imports `profiler` (src/nova/manager.py:L62)
- `nova`: imports `rpc` (src/nova/manager.py:L63)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/manager.py:L66)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/manager.py:L67)

