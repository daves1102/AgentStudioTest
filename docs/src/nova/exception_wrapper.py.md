# src/nova/exception_wrapper.py

## Overview

This file implements the `exception_wrapper` module, defining 1 constant, 7 functions, 9 imports, 1 side effect.

Lines: total 93, code 60, comment 17, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/exception_wrapper.py:L25–L25` |
| `_emit_versioned_exception_notification` | function | (context, exception, source) | unexported | not declared | 1/14 | `src/nova/exception_wrapper.py:L29–L42` |
| `_emit_legacy_exception_notification` | function | (context, exception, service, function_name, args) | unexported | not declared | 1/6 | `src/nova/exception_wrapper.py:L45–L50` |
| `wrap_exception` | function | (service, binary) | exported | `inner` (src/nova/exception_wrapper.py:L74) | 1/3 | `src/nova/exception_wrapper.py:L53–L74` |
| `wrap_exception.inner` | function | (f) | public | `functools.wraps(f)(wrapped)` (src/nova/exception_wrapper.py:L73) | — | `src/nova/exception_wrapper.py:L58–L73` |
| `wrap_exception.inner.wrapped` | function | (self, context, *args, **kw) | public | `f(self, context, *args, **kw)` (src/nova/exception_wrapper.py:L63) | — | `src/nova/exception_wrapper.py:L59–L72` |
| `_get_call_dict` | function | (function, self, context, *args, **kw) | unexported | `_cleanse_dict(call_dict)` (src/nova/exception_wrapper.py:L88) | 1/7 | `src/nova/exception_wrapper.py:L77–L88` |
| `_cleanse_dict` | function | (original) | unexported | `{k: v for k, v in original.items() if "_pass" not in k}` (src/nova/exception_wrapper.py:L93) | 3/2 | `src/nova/exception_wrapper.py:L91–L93` |

## Dependencies

- `import functools` (src/nova/exception_wrapper.py:L13)
- `import inspect` (src/nova/exception_wrapper.py:L14)
- `oslo_utils`: imports `excutils` (src/nova/exception_wrapper.py:L16)
- `import nova.conf` (src/nova/exception_wrapper.py:L18)
- `nova.notifications.objects`: imports `base` (src/nova/exception_wrapper.py:L19)
- `nova.notifications.objects`: imports `exception as exception_obj` (src/nova/exception_wrapper.py:L20)
- `nova.objects`: imports `fields` (src/nova/exception_wrapper.py:L21)
- `nova`: imports `rpc` (src/nova/exception_wrapper.py:L22)
- `nova`: imports `safe_utils` (src/nova/exception_wrapper.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/exception_wrapper.py:L25)

