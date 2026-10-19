# src/nova/objects/task_log.py

## Overview

This file implements the `task_log` module, defining 2 classs, 2 constants, 2 fields, 5 methods, 1 variable, 3 imports, 2 side effects.

Lines: total 89, code 64, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/task_log.py:L17–L20` |
| `TaskLog` | class | — | exported | not declared | — | `src/nova/objects/task_log.py:L24–L70` |
| `TaskLog.VERSION` | constant | — | public | not declared | — | `src/nova/objects/task_log.py:L26–L26` |
| `TaskLog.fields` | field | — | public | not declared | — | `src/nova/objects/task_log.py:L28–L38` |
| `TaskLog._from_db_object` | method | (context, task_log, db_task_log) | private | `task_log` (src/nova/objects/task_log.py:L46) | 2/6 | `src/nova/objects/task_log.py:L41–L46` |
| `TaskLog.get` | method | (cls, context, task_name, period_beginning, period_ending, host, state=None) | public | `cls._from_db_object(context, cls(context), db_task_log)` (src/nova/objects/task_log.py:L56) | 2/6 | `src/nova/objects/task_log.py:L51–L56` |
| `TaskLog.begin_task` | method | (self) | public | not declared | 1/5 | `src/nova/objects/task_log.py:L59–L63` |
| `TaskLog.end_task` | method | (self) | public | not declared | 1/5 | `src/nova/objects/task_log.py:L66–L70` |
| `TaskLogList` | class | — | exported | not declared | — | `src/nova/objects/task_log.py:L74–L89` |
| `TaskLogList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/task_log.py:L76–L76` |
| `TaskLogList.fields` | field | — | public | not declared | — | `src/nova/objects/task_log.py:L77–L79` |
| `TaskLogList.get_all` | method | (cls, context, task_name, period_beginning, period_ending, host=None, state=None) | public | `base.obj_make_list(context, cls(context), db_task_logs)` (src/nova/objects/task_log.py:L89) | 1/6 | `src/nova/objects/task_log.py:L84–L89` |

## Dependencies

- `nova.db.main`: imports `api as db` (src/nova/objects/task_log.py:L13)
- `nova.objects`: imports `base` (src/nova/objects/task_log.py:L14)
- `nova.objects`: imports `fields` (src/nova/objects/task_log.py:L15)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/task_log.py:L26)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/task_log.py:L76)

