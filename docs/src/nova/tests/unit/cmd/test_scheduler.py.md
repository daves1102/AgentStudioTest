# src/nova/tests/unit/cmd/test_scheduler.py

## Overview

This file implements the `test_scheduler` module, defining 1 class, 3 methods, 5 imports.

Lines: total 78, code 52, comment 17, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestScheduler` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_scheduler.py:L23–L78` |
| `TestScheduler.test_workers_defaults` | method | (self, get_worker_count, mock_wait, mock_serve, service_create) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_scheduler.py:L30–L36` |
| `TestScheduler.test_workers_override` | method | (self, get_worker_count, mock_wait, mock_serve, service_create) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_scheduler.py:L42–L49` |
| `TestScheduler.test_executors_destroyed_before_fork` | method | (self, mock_wait, mock_serve, service_create) | public | not declared | 1/18 | `src/nova/tests/unit/cmd/test_scheduler.py:L54–L78` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_scheduler.py:L13)
- `nova.cmd`: imports `scheduler` (src/nova/tests/unit/cmd/test_scheduler.py:L15)
- `nova`: imports `config` (src/nova/tests/unit/cmd/test_scheduler.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_scheduler.py:L17)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/cmd/test_scheduler.py:L18)

