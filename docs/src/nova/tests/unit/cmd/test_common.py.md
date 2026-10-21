# src/nova/tests/unit/cmd/test_common.py

## Overview

This file implements the `test_common` module, defining 2 classs, 1 function, 9 methods, 7 imports.

Lines: total 132, code 90, comment 15, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestCmdCommon` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_common.py:L31–L132` |
| `TestCmdCommon.test_args_decorator` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_common.py:L33–L43` |
| `TestCmdCommon.test_args_decorator.f` | function | — | public | not declared | — | `src/nova/tests/unit/cmd/test_common.py:L36–L37` |
| `TestCmdCommon.test_methods_of` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/cmd/test_common.py:L45–L60` |
| `TestCmdCommon.test_methods_of.foo` | class | — | public | not declared | — | `src/nova/tests/unit/cmd/test_common.py:L46–L53` |
| `TestCmdCommon.test_methods_of.foo.public` | method | (self) | public | not declared | — | `src/nova/tests/unit/cmd/test_common.py:L49–L50` |
| `TestCmdCommon.test_methods_of.foo._private` | method | (self) | private | not declared | — | `src/nova/tests/unit/cmd/test_common.py:L52–L53` |
| `TestCmdCommon.test_print_bash_completion_no_query_category` | method | (self, mock_CONF) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_common.py:L63–L71` |
| `TestCmdCommon.test_print_bash_completion_mismatch` | method | (self, mock_CONF) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_common.py:L74–L80` |
| `TestCmdCommon.test_print_bash_completion` | method | (self, mock_CONF, mock_method_of) | public | not declared | 2/12 | `src/nova/tests/unit/cmd/test_common.py:L84–L97` |
| `TestCmdCommon.test_get_action_fn` | method | (self, mock_CONF, mock_validate_args) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_common.py:L101–L119` |
| `TestCmdCommon.test_get_action_fn_missing_args` | method | (self, mock_CONF, mock_validate_args) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_common.py:L123–L132` |

## Dependencies

- `io`: imports `StringIO` (src/nova/tests/unit/cmd/test_common.py:L20)
- `import sys` (src/nova/tests/unit/cmd/test_common.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_common.py:L22)
- `import fixtures` (src/nova/tests/unit/cmd/test_common.py:L24)
- `nova.cmd`: imports `common as cmd_common` (src/nova/tests/unit/cmd/test_common.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/cmd/test_common.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_common.py:L28)

