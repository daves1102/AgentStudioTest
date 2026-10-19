# src/nova/scheduler/client/query.py

## Overview

This file implements the `query` module, defining 1 class, 7 methods, 1 import, 4 security surface entries.

Lines: total 95, code 64, comment 14, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SchedulerQueryClient` | class | — | exported | not declared | — | `src/nova/scheduler/client/query.py:L19–L95` |
| `SchedulerQueryClient.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/client/query.py:L22–L23` |
| `SchedulerQueryClient.select_destinations` | method | (self, context, spec_obj, instance_uuids, return_objects=False, return_alternates=False) | public | `self.scheduler_rpcapi.select_destinations(context, spec_obj, instance_uuids, return_objects, return_alternates)` (src/nova/scheduler/client/query.py:L41) | 1/4 | `src/nova/scheduler/client/query.py:L25–L42` |
| `SchedulerQueryClient.update_aggregates` | method | (self, context, aggregates) | public | not declared | 1/2 | `src/nova/scheduler/client/query.py:L44–L51` |
| `SchedulerQueryClient.delete_aggregate` | method | (self, context, aggregate) | public | not declared | 1/2 | `src/nova/scheduler/client/query.py:L53–L59` |
| `SchedulerQueryClient.update_instance_info` | method | (self, context, host_name, instance_info) | public | not declared | 1/3 | `src/nova/scheduler/client/query.py:L61–L70` |
| `SchedulerQueryClient.delete_instance_info` | method | (self, context, host_name, instance_uuid) | public | not declared | 1/3 | `src/nova/scheduler/client/query.py:L72–L81` |
| `SchedulerQueryClient.sync_instance_info` | method | (self, context, host_name, instance_uuids) | public | not declared | 1/3 | `src/nova/scheduler/client/query.py:L83–L95` |

## Dependencies

- `nova.scheduler`: imports `rpcapi as scheduler_rpcapi` (src/nova/scheduler/client/query.py:L16)

## Security Surface

- **sink** (`db-write`): :param aggregates: Aggregate(s) to update (src/nova/scheduler/client/query.py:L47)
- **sink** (`db-write`): :param host_name: name of host sending the update (src/nova/scheduler/client/query.py:L66)
- **sink** (`db-write`): :param host_name: name of host sending the update (src/nova/scheduler/client/query.py:L77)
- **sink** (`db-write`): :param host_name: name of host sending the update (src/nova/scheduler/client/query.py:L90)

