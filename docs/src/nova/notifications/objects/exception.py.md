# src/nova/notifications/objects/exception.py

## Overview

This file implements the `exception` module, defining 2 classs, 1 classmethod, 2 constants, 2 fields, 2 methods, 5 imports, 2 side effects.

Lines: total 85, code 48, comment 26, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ExceptionPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/exception.py:L22–L75` |
| `ExceptionPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/exception.py:L25–L25` |
| `ExceptionPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/exception.py:L26–L32` |
| `ExceptionPayload.__init__` | method | (self, module_name, function_name, exception, exception_message, traceback) | public | not declared | 1/8 | `src/nova/notifications/objects/exception.py:L34–L41` |
| `ExceptionPayload.from_exception` | method | (cls, fault) | public | `cls( function_name=function_name, module_name=module_name, exception=fault.__class__.__name__, exception_message=str(fault), # NOTE(stephenfin): the first argument to format_exception is # ignored sin` (src/nova/notifications/objects/exception.py:L67) | 3/17 | `src/nova/notifications/objects/exception.py:L44–L75` |
| `ExceptionNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/exception.py:L80–L85` |
| `ExceptionNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/exception.py:L82–L82` |
| `ExceptionNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/exception.py:L83–L85` |
| `ExceptionPayload.from_exception` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/exception.py:L43–L75` |

## Dependencies

- `import inspect` (src/nova/notifications/objects/exception.py:L13)
- `import traceback as tb` (src/nova/notifications/objects/exception.py:L14)
- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/exception.py:L16)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/exception.py:L17)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/exception.py:L18)

## Side Effects

- **global-mutation**: VERSION = '1.1' (src/nova/notifications/objects/exception.py:L25)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/exception.py:L82)

