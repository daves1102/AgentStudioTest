# src/nova/tests/unit/test_exception.py

## Overview

This file implements the `test_exception` module, defining 13 classs, 18 methods, 1 staticmethod, 5 imports.

Lines: total 171, code 107, comment 19, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NovaExceptionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_exception.py:L26–L116` |
| `NovaExceptionTestCase.test_default_error_msg` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_exception.py:L27–L32` |
| `NovaExceptionTestCase.test_default_error_msg.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L28–L29` |
| `NovaExceptionTestCase.test_error_msg` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_exception.py:L34–L37` |
| `NovaExceptionTestCase.test_default_error_msg_with_kwargs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_exception.py:L39–L45` |
| `NovaExceptionTestCase.test_default_error_msg_with_kwargs.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L40–L41` |
| `NovaExceptionTestCase.test_error_msg_exception_with_kwargs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_exception.py:L47–L53` |
| `NovaExceptionTestCase.test_error_msg_exception_with_kwargs.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L48–L49` |
| `NovaExceptionTestCase.test_default_error_code` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_exception.py:L55–L60` |
| `NovaExceptionTestCase.test_default_error_code.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L56–L57` |
| `NovaExceptionTestCase.test_error_code_from_kwarg` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_exception.py:L62–L67` |
| `NovaExceptionTestCase.test_error_code_from_kwarg.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L63–L64` |
| `NovaExceptionTestCase.test_format_message_local` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_exception.py:L69–L74` |
| `NovaExceptionTestCase.test_format_message_local.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L70–L71` |
| `NovaExceptionTestCase.test_format_message_remote` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_exception.py:L76–L85` |
| `NovaExceptionTestCase.test_format_message_remote.FakeNovaException_Remote` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L77–L81` |
| `NovaExceptionTestCase.test_format_message_remote.FakeNovaException_Remote.__str__` | method | (self) | public | `"print the whole trace"` (src/nova/tests/unit/test_exception.py:L81) | — | `src/nova/tests/unit/test_exception.py:L80–L81` |
| `NovaExceptionTestCase.test_format_message_remote_error` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_exception.py:L87–L99` |
| `NovaExceptionTestCase.test_format_message_remote_error.FakeNovaException_Remote` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L95–L96` |
| `NovaExceptionTestCase.test_repr` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_exception.py:L101–L116` |
| `NovaExceptionTestCase.test_repr.FakeNovaException` | class | — | public | not declared | — | `src/nova/tests/unit/test_exception.py:L102–L103` |
| `ConvertedExceptionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_exception.py:L119–L135` |
| `ConvertedExceptionTestCase.test_instantiate` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_exception.py:L120–L124` |
| `ConvertedExceptionTestCase.test_instantiate_without_title_known_code` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_exception.py:L126–L128` |
| `ConvertedExceptionTestCase.test_instantiate_without_title_unknown_code` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_exception.py:L130–L132` |
| `ConvertedExceptionTestCase.test_instantiate_bad_code` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_exception.py:L134–L135` |
| `ExceptionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_exception.py:L138–L148` |
| `ExceptionTestCase._raise_exc` | method | (exc) | private | not declared | 1/2 | `src/nova/tests/unit/test_exception.py:L140–L141` |
| `ExceptionTestCase.test_exceptions_raise` | method | (self) | public | not declared | 3/5 | `src/nova/tests/unit/test_exception.py:L143–L148` |
| `ExceptionValidMessageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_exception.py:L151–L171` |
| `ExceptionValidMessageTestCase.test_messages` | method | (self) | public | not declared | 7/14 | `src/nova/tests/unit/test_exception.py:L153–L171` |
| `ExceptionTestCase._raise_exc` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/test_exception.py:L139–L141` |

## Dependencies

- `import inspect` (src/nova/tests/unit/test_exception.py:L17)
- `import fixtures` (src/nova/tests/unit/test_exception.py:L19)
- `webob.util`: imports `status_reasons` (src/nova/tests/unit/test_exception.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/test_exception.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/test_exception.py:L23)

