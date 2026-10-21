# src/nova/tests/unit/objects/test_task_log.py

## Overview

This file implements the `test_task_log` module, defining 6 classs, 1 constant, 4 methods, 1 variable, 6 imports, 1 side effect.

Lines: total 138, code 108, comment 11, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L22–L22` |
| `fake_task_log` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L24–L38` |
| `_TestTaskLog` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L41–L99` |
| `_TestTaskLog.test_get` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_task_log.py:L43–L57` |
| `_TestTaskLog.test_begin_task` | method | (self, mock_begin_task) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_task_log.py:L60–L78` |
| `_TestTaskLog.test_end_task` | method | (self, mock_end_task) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_task_log.py:L81–L99` |
| `TestTaskLog` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L102–L103` |
| `TestRemoteTaskLog` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L106–L107` |
| `_TestTaskLogList` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L110–L130` |
| `_TestTaskLogList.test_get_all` | method | (self, mock_get_all) | public | not declared | 2/19 | `src/nova/tests/unit/objects/test_task_log.py:L112–L130` |
| `TestTaskLogList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L133–L134` |
| `TestRemoteTaskLogList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_task_log.py:L137–L138` |

## Dependencies

- `import datetime` (src/nova/tests/unit/objects/test_task_log.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_task_log.py:L14)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_task_log.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_task_log.py:L18)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_task_log.py:L19)
- `nova`: imports `utils` (src/nova/tests/unit/objects/test_task_log.py:L20)

## Side Effects

- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_task_log.py:L22)

