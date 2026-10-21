# src/nova/tests/unit/test_exception_wrapper.py

## Overview

This file implements the `test_exception_wrapper` module, defining 1 class, 3 functions, 7 methods, 6 imports.

Lines: total 143, code 103, comment 15, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `bad_function_exception` | function | (self, context, extra, blah="a", boo="b", zoo=None) | exported | not declared | 1/2 | `src/nova/tests/unit/test_exception_wrapper.py:L25–L26` |
| `bad_function_unknown_module` | function | (self, context) | exported | not declared | 1/4 | `src/nova/tests/unit/test_exception_wrapper.py:L29–L45` |
| `good_function` | function | (self, context) | exported | `99` (src/nova/tests/unit/test_exception_wrapper.py:L49) | 1/2 | `src/nova/tests/unit/test_exception_wrapper.py:L48–L49` |
| `WrapExceptionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_exception_wrapper.py:L52–L143` |
| `WrapExceptionTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_exception_wrapper.py:L53–L56` |
| `WrapExceptionTestCase.test_cleanse_dict` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_exception_wrapper.py:L58–L63` |
| `WrapExceptionTestCase.test_wrap_exception_good_return` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_exception_wrapper.py:L65–L70` |
| `WrapExceptionTestCase.test_wrap_exception_unknown_module` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_exception_wrapper.py:L72–L81` |
| `WrapExceptionTestCase.test_wrap_exception_with_notifier` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/test_exception_wrapper.py:L83–L116` |
| `WrapExceptionTestCase.test_wrap_exception_notification_not_emitted_if_disabled` | method | (self, mock_notification, mock_notifier) | public | not declared | 1/9 | `src/nova/tests/unit/test_exception_wrapper.py:L121–L130` |
| `WrapExceptionTestCase.test_wrap_exception_notification_not_emitted_if_unversioned` | method | (self, mock_notifier) | public | not declared | 1/9 | `src/nova/tests/unit/test_exception_wrapper.py:L134–L143` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_exception_wrapper.py:L17)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/test_exception_wrapper.py:L19)
- `nova`: imports `exception_wrapper` (src/nova/tests/unit/test_exception_wrapper.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/test_exception_wrapper.py:L21)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/test_exception_wrapper.py:L22)
- `lxml`: imports `etree` (src/nova/tests/unit/test_exception_wrapper.py:L43)

