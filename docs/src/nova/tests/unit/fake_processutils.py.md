# src/nova/tests/unit/fake_processutils.py

## Overview

This file implements the `fake_processutils` module, defining 1 constant, 6 functions, 2 variables, 4 imports, 1 side effect.

Lines: total 105, code 61, comment 16, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_processutils.py:L24–L24` |
| `_fake_execute_repliers` | variable | — | unexported | not declared | — | `src/nova/tests/unit/fake_processutils.py:L26–L26` |
| `_fake_execute_log` | variable | — | unexported | not declared | — | `src/nova/tests/unit/fake_processutils.py:L27–L27` |
| `fake_execute_get_log` | function | — | exported | `_fake_execute_log` (src/nova/tests/unit/fake_processutils.py:L31) | 1/2 | `src/nova/tests/unit/fake_processutils.py:L30–L31` |
| `fake_execute_clear_log` | function | — | exported | not declared | 1/3 | `src/nova/tests/unit/fake_processutils.py:L34–L36` |
| `fake_execute_set_repliers` | function | (repliers) | exported | not declared | 1/3 | `src/nova/tests/unit/fake_processutils.py:L39–L42` |
| `fake_execute_default_reply_handler` | function | (*ignore_args, **ignore_kwargs) | exported | `'', ''` (src/nova/tests/unit/fake_processutils.py:L51) | 1/2 | `src/nova/tests/unit/fake_processutils.py:L45–L51` |
| `fake_execute` | function | (*cmd_parts, **kwargs) | exported | `reply` (src/nova/tests/unit/fake_processutils.py:L99) | 6/32 | `src/nova/tests/unit/fake_processutils.py:L54–L99` |
| `stub_out_processutils_execute` | function | (test) | exported | not declared | 1/4 | `src/nova/tests/unit/fake_processutils.py:L102–L105` |

## Dependencies

- `import re` (src/nova/tests/unit/fake_processutils.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/fake_processutils.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/fake_processutils.py:L20)
- `nova`: imports `utils` (src/nova/tests/unit/fake_processutils.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/fake_processutils.py:L24)

