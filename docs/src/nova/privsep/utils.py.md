# src/nova/privsep/utils.py

## Overview

This file implements the `utils` module, defining 1 constant, 2 functions, 7 imports, 3 side effects, 2 security surface entries.

Lines: total 90, code 48, comment 28, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/privsep/utils.py:L36–L36` |
| `generate_random_string` | function | — | exported | `str(random.randint(0, sys.maxsize))` (src/nova/privsep/utils.py:L40) | 1/2 | `src/nova/privsep/utils.py:L39–L40` |
| `supports_direct_io` | function | (dirpath) | exported | `False` (src/nova/privsep/utils.py:L47); `hasDirectIO` (src/nova/privsep/utils.py:L90) | 8/38 | `src/nova/privsep/utils.py:L43–L90` |

## Dependencies

- `import errno` (src/nova/privsep/utils.py:L23)
- `import mmap` (src/nova/privsep/utils.py:L24)
- `import os` (src/nova/privsep/utils.py:L25)
- `import random` (src/nova/privsep/utils.py:L26)
- `import sys` (src/nova/privsep/utils.py:L27)
- `oslo_log`: imports `log as logging` (src/nova/privsep/utils.py:L29)
- `oslo_utils`: imports `excutils` (src/nova/privsep/utils.py:L30)

## Side Effects

- **file-io**: testfile = os.path.join(dirpath, file_name) (src/nova/privsep/utils.py:L52)
- **file-io**: fd = os.open(testfile, os.O_CREAT | os.O_WRONLY | os.O_DIRECT) (src/nova/privsep/utils.py:L57)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/privsep/utils.py:L36)

## Security Surface

- **sink** (`file-write`): m.write(b"x" * align_size) (src/nova/privsep/utils.py:L61)
- **sink** (`file-write`): os.write(fd, m) (src/nova/privsep/utils.py:L62)

