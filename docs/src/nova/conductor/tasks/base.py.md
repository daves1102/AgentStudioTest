# src/nova/conductor/tasks/base.py

## Overview

This file implements the `base` module, defining 1 class, 2 functions, 4 methods, 3 imports.

Lines: total 54, code 33, comment 11, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `rollback_wrapper` | function | (original) | exported | `wrap` (src/nova/conductor/tasks/base.py:L27) | 1/4 | `src/nova/conductor/tasks/base.py:L19–L27` |
| `rollback_wrapper.wrap` | function | (self) | public | `original(self)` (src/nova/conductor/tasks/base.py:L23) | — | `src/nova/conductor/tasks/base.py:L21–L26` |
| `TaskBase` | class | — | exported | not declared | — | `src/nova/conductor/tasks/base.py:L30–L54` |
| `TaskBase.__init__` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/conductor/tasks/base.py:L32–L34` |
| `TaskBase.execute` | method | (self) | public | `self._execute()` (src/nova/conductor/tasks/base.py:L40) | 1/2 | `src/nova/conductor/tasks/base.py:L37–L40` |
| `TaskBase._execute` | method | (self) | private | not declared | 1/2 | `src/nova/conductor/tasks/base.py:L43–L47` |
| `TaskBase.rollback` | method | (self, ex) | public | not declared | 1/2 | `src/nova/conductor/tasks/base.py:L49–L54` |

## Dependencies

- `import abc` (src/nova/conductor/tasks/base.py:L13)
- `import functools` (src/nova/conductor/tasks/base.py:L14)
- `oslo_utils`: imports `excutils` (src/nova/conductor/tasks/base.py:L16)

