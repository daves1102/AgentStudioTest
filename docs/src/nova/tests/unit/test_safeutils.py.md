# src/nova/tests/unit/test_safeutils.py

## Overview

This file implements the `test_safeutils` module, defining 1 class, 6 functions, 5 methods, 3 imports.

Lines: total 89, code 60, comment 13, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_closure` | function | — | exported | `wrapper` (src/nova/tests/unit/test_safeutils.py:L27) | 1/4 | `src/nova/tests/unit/test_safeutils.py:L21–L27` |
| `get_closure.wrapper` | function | (self, instance, red=None, blue=None) | public | `x` (src/nova/tests/unit/test_safeutils.py:L25) | — | `src/nova/tests/unit/test_safeutils.py:L24–L25` |
| `WrappedCodeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_safeutils.py:L30–L89` |
| `WrappedCodeTestCase._wrapper` | method | (self, function) | private | `decorated_function` (src/nova/tests/unit/test_safeutils.py:L37) | 1/4 | `src/nova/tests/unit/test_safeutils.py:L33–L37` |
| `WrappedCodeTestCase._wrapper.decorated_function` | function | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/test_safeutils.py:L35–L36` |
| `WrappedCodeTestCase.test_single_wrapped` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_safeutils.py:L39–L50` |
| `WrappedCodeTestCase.test_single_wrapped.wrapped` | function | (self, instance, red=None, blue=None) | public | not declared | — | `src/nova/tests/unit/test_safeutils.py:L41–L42` |
| `WrappedCodeTestCase.test_double_wrapped` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_safeutils.py:L52–L64` |
| `WrappedCodeTestCase.test_double_wrapped.wrapped` | function | (self, instance, red=None, blue=None) | public | not declared | — | `src/nova/tests/unit/test_safeutils.py:L55–L56` |
| `WrappedCodeTestCase.test_triple_wrapped` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_safeutils.py:L66–L79` |
| `WrappedCodeTestCase.test_triple_wrapped.wrapped` | function | (self, instance, red=None, blue=None) | public | not declared | — | `src/nova/tests/unit/test_safeutils.py:L70–L71` |
| `WrappedCodeTestCase.test_closure` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_safeutils.py:L81–L89` |

## Dependencies

- `import functools` (src/nova/tests/unit/test_safeutils.py:L15)
- `nova`: imports `safe_utils` (src/nova/tests/unit/test_safeutils.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/test_safeutils.py:L18)

