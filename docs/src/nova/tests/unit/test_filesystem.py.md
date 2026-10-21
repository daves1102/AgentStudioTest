# src/nova/tests/unit/test_filesystem.py

## Overview

This file implements the `test_filesystem` module, defining 1 class, 11 methods, 7 imports, 6 side effects.

Lines: total 121, code 94, comment 11, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestFSCommon` | class | — | exported | not declared | — | `src/nova/tests/unit/test_filesystem.py:L24–L121` |
| `TestFSCommon.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_filesystem.py:L26–L28` |
| `TestFSCommon.test_read_sys` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_filesystem.py:L30–L35` |
| `TestFSCommon.test_read_sys_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_filesystem.py:L37–L43` |
| `TestFSCommon.test_read_sys_retry` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_filesystem.py:L45–L57` |
| `TestFSCommon.test_read_sys_retry_limit` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_filesystem.py:L59–L66` |
| `TestFSCommon.test_write_sys` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_filesystem.py:L68–L74` |
| `TestFSCommon.test_write_sys_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_filesystem.py:L76–L82` |
| `TestFSCommon.test_write_sys_retry` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_filesystem.py:L84–L96` |
| `TestFSCommon.test_write_sys_retry_limit` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_filesystem.py:L98–L105` |
| `TestFSCommon.test_is_mounted_true` | method | (self, mock_partitions) | public | not declared | 1/7 | `src/nova/tests/unit/test_filesystem.py:L108–L114` |
| `TestFSCommon.test_is_mounted_false` | method | (self, mock_partitions) | public | not declared | 1/5 | `src/nova/tests/unit/test_filesystem.py:L117–L121` |

## Dependencies

- `import io` (src/nova/tests/unit/test_filesystem.py:L13)
- `import os` (src/nova/tests/unit/test_filesystem.py:L14)
- `unittest`: imports `mock` (src/nova/tests/unit/test_filesystem.py:L15)
- `import fixtures` (src/nova/tests/unit/test_filesystem.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/test_filesystem.py:L19)
- `nova`: imports `filesystem` (src/nova/tests/unit/test_filesystem.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/test_filesystem.py:L21)

## Side Effects

- **file-io**: expected_path = os.path.join(filesystem.SYS, 'foo') (src/nova/tests/unit/test_filesystem.py:L34)
- **file-io**: expected_path = os.path.join(filesystem.SYS, 'foo') (src/nova/tests/unit/test_filesystem.py:L42)
- **file-io**: expected_path = os.path.join(filesystem.SYS, 'foo') (src/nova/tests/unit/test_filesystem.py:L53)
- **file-io**: expected_path = os.path.join(filesystem.SYS, 'foo') (src/nova/tests/unit/test_filesystem.py:L72)
- **file-io**: expected_path = os.path.join(filesystem.SYS, 'foo') (src/nova/tests/unit/test_filesystem.py:L81)
- **file-io**: expected_path = os.path.join(filesystem.SYS, 'foo') (src/nova/tests/unit/test_filesystem.py:L92)

