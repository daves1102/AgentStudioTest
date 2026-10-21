# src/nova/tests/unit/test_profiler.py

## Overview

This file implements the `test_profiler` module, defining 1 class, 1 method, 7 imports, 1 security surface entry.

Lines: total 82, code 42, comment 31, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestProfiler` | class | — | exported | not declared | — | `src/nova/tests/unit/test_profiler.py:L27–L82` |
| `TestProfiler.test_all_public_methods_are_traced` | method | (self) | public | not declared | 8/34 | `src/nova/tests/unit/test_profiler.py:L28–L82` |

## Dependencies

- `import importlib` (src/nova/tests/unit/test_profiler.py:L16)
- `import inspect` (src/nova/tests/unit/test_profiler.py:L17)
- `import os` (src/nova/tests/unit/test_profiler.py:L18)
- `oslo_utils`: imports `importutils` (src/nova/tests/unit/test_profiler.py:L20)
- `import osprofiler.opts as profiler` (src/nova/tests/unit/test_profiler.py:L21)
- `nova`: imports `conf` (src/nova/tests/unit/test_profiler.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/test_profiler.py:L24)

## Security Surface

- **entry-point** (`env`): if not os.getenv('TEST_OSPROFILER', False): (src/nova/tests/unit/test_profiler.py:L40)

