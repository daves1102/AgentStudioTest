# src/nova/filesystem.py

## Overview

This file implements the `filesystem` module, defining 3 constants, 5 functions, 6 imports, 6 side effects, 1 security surface entry.

Lines: total 122, code 78, comment 25, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/filesystem.py:L24–L24` |
| `SYS` | constant | — | exported | not declared | — | `src/nova/filesystem.py:L25–L25` |
| `RETRY_LIMIT` | constant | — | exported | not declared | — | `src/nova/filesystem.py:L26–L26` |
| `retry_if_busy` | function | (func) | exported | `wrapper` (src/nova/filesystem.py:L57) | 1/4 | `src/nova/filesystem.py:L30–L57` |
| `retry_if_busy.wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/filesystem.py:L44) | — | `src/nova/filesystem.py:L41–L56` |
| `read_sys` | function | (path) | exported | `data.read()` (src/nova/filesystem.py:L74) | 4/10 | `src/nova/filesystem.py:L63–L82` |
| `is_mounted` | function | (mountpoint) | exported | `any( part.mountpoint == mountpoint for part in psutil.disk_partitions(all=True))` (src/nova/filesystem.py:L93) | 2/4 | `src/nova/filesystem.py:L85–L95` |
| `write_sys` | function | (path, data) | exported | not declared | 4/10 | `src/nova/filesystem.py:L102–L122` |

## Dependencies

- `import functools` (src/nova/filesystem.py:L15)
- `import os` (src/nova/filesystem.py:L16)
- `import time` (src/nova/filesystem.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/filesystem.py:L19)
- `import psutil` (src/nova/filesystem.py:L20)
- `nova`: imports `exception` (src/nova/filesystem.py:L22)

## Side Effects

- **file-io**: with open(os.path.join(SYS, path), mode='r') as data: (src/nova/filesystem.py:L73)
- **file-io**: Uses psutil to read the mount table rather than os.path.ismount(), which (src/nova/filesystem.py:L88)
- **file-io**: with open(os.path.join(SYS, path), mode='w') as fd: (src/nova/filesystem.py:L113)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/filesystem.py:L24)
- **global-mutation**: SYS = '/sys' (src/nova/filesystem.py:L25)
- **global-mutation**: RETRY_LIMIT = 5 (src/nova/filesystem.py:L26)

## Security Surface

- **sink** (`file-write`): fd.write(data) (src/nova/filesystem.py:L114)

