# src/nova/scheduler/rpcapi.py

## Overview

This file implements the `rpcapi` module, defining 1 class, 3 constants, 7 methods, 6 imports, 3 side effects.

Lines: total 185, code 137, comment 17, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/rpcapi.py:L27–L27` |
| `RPC_TOPIC` | constant | — | exported | not declared | — | `src/nova/scheduler/rpcapi.py:L28–L28` |
| `SchedulerAPI` | class | — | exported | not declared | — | `src/nova/scheduler/rpcapi.py:L32–L185` |
| `SchedulerAPI.VERSION_ALIASES` | constant | — | public | not declared | — | `src/nova/scheduler/rpcapi.py:L110–L121` |
| `SchedulerAPI.__init__` | method | (self) | public | not declared | 1/8 | `src/nova/scheduler/rpcapi.py:L123–L130` |
| `SchedulerAPI.select_destinations` | method | (self, ctxt, spec_obj, instance_uuids, return_objects=False, return_alternates=False) | public | `cctxt.call(ctxt, 'select_destinations', **msg_args)` (src/nova/scheduler/rpcapi.py:L160) | 6/27 | `src/nova/scheduler/rpcapi.py:L132–L160` |
| `SchedulerAPI.update_aggregates` | method | (self, ctxt, aggregates) | public | not declared | 1/3 | `src/nova/scheduler/rpcapi.py:L162–L165` |
| `SchedulerAPI.delete_aggregate` | method | (self, ctxt, aggregate) | public | not declared | 1/3 | `src/nova/scheduler/rpcapi.py:L167–L170` |
| `SchedulerAPI.update_instance_info` | method | (self, ctxt, host_name, instance_info) | public | not declared | 1/4 | `src/nova/scheduler/rpcapi.py:L172–L175` |
| `SchedulerAPI.delete_instance_info` | method | (self, ctxt, host_name, instance_uuid) | public | not declared | 1/4 | `src/nova/scheduler/rpcapi.py:L177–L180` |
| `SchedulerAPI.sync_instance_info` | method | (self, ctxt, host_name, instance_uuids) | public | not declared | 1/4 | `src/nova/scheduler/rpcapi.py:L182–L185` |

## Dependencies

- `import oslo_messaging as messaging` (src/nova/scheduler/rpcapi.py:L19)
- `import nova.conf` (src/nova/scheduler/rpcapi.py:L21)
- `nova`: imports `exception as exc` (src/nova/scheduler/rpcapi.py:L22)
- `nova.objects`: imports `base as objects_base` (src/nova/scheduler/rpcapi.py:L23)
- `nova`: imports `profiler` (src/nova/scheduler/rpcapi.py:L24)
- `nova`: imports `rpc` (src/nova/scheduler/rpcapi.py:L25)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/rpcapi.py:L27)
- **global-mutation**: RPC_TOPIC = "scheduler" (src/nova/scheduler/rpcapi.py:L28)
- **global-mutation**: VERSION_ALIASES = { (src/nova/scheduler/rpcapi.py:L110)

