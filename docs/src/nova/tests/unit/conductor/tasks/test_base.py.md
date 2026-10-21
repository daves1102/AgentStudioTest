# src/nova/tests/unit/conductor/tasks/test_base.py

## Overview

This file implements the `test_base` module, defining 2 classs, 5 methods, 3 imports.

Lines: total 53, code 31, comment 11, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeTask` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_base.py:L19–L29` |
| `FakeTask.__init__` | method | (self, context, instance, fail=False) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/tasks/test_base.py:L21–L23` |
| `FakeTask._execute` | method | (self) | private | not declared | 2/5 | `src/nova/tests/unit/conductor/tasks/test_base.py:L25–L29` |
| `TaskBaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_base.py:L32–L53` |
| `TaskBaseTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/tasks/test_base.py:L34–L36` |
| `TaskBaseTestCase.test_wrapper_exception` | method | (self, fake_rollback) | public | not declared | 2/7 | `src/nova/tests/unit/conductor/tasks/test_base.py:L39–L45` |
| `TaskBaseTestCase.test_wrapper_no_exception` | method | (self, fake_rollback) | public | not declared | 2/6 | `src/nova/tests/unit/conductor/tasks/test_base.py:L48–L53` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/conductor/tasks/test_base.py:L13)
- `nova.conductor.tasks`: imports `base` (src/nova/tests/unit/conductor/tasks/test_base.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/conductor/tasks/test_base.py:L16)

