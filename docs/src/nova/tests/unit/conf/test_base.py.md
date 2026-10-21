# src/nova/tests/unit/conf/test_base.py

## Overview

This file implements the `test_base` module, defining 1 class, 1 constant, 1 method, 3 imports, 1 side effect.

Lines: total 28, code 9, comment 13, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/conf/test_base.py:L18–L18` |
| `BaseConfTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conf/test_base.py:L21–L28` |
| `BaseConfTestCase.test_graceful_shutdown_timeout_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conf/test_base.py:L23–L28` |

## Dependencies

- `import nova.conf` (src/nova/tests/unit/conf/test_base.py:L13)
- `nova.conf`: imports `base` (src/nova/tests/unit/conf/test_base.py:L14)
- `nova`: imports `test` (src/nova/tests/unit/conf/test_base.py:L15)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/conf/test_base.py:L18)

