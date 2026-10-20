# src/nova/privsep/path.py

## Overview

This file implements the `path` module, defining 8 functions, 6 imports, 20 side effects, 9 security surface entries.

Lines: total 112, code 65, comment 21, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `writefile` | function | (path, mode, content) | exported | not declared | 2/5 | `src/nova/privsep/path.py:L29–L33` |
| `chown` | function | (path, uid=-1, gid=-1, recursive=False) | exported | `os.chown(path, uid, gid)` (src/nova/privsep/path.py:L44) | 7/13 | `src/nova/privsep/path.py:L37–L51` |
| `makedirs` | function | (path) | exported | not declared | 1/2 | `src/nova/privsep/path.py:L55–L56` |
| `chmod` | function | (path, mode) | exported | not declared | 2/4 | `src/nova/privsep/path.py:L60–L63` |
| `move_tree` | function | (source_path, dest_path) | exported | not declared | 1/2 | `src/nova/privsep/path.py:L67–L68` |
| `utime` | function | (path) | exported | not declared | 2/4 | `src/nova/privsep/path.py:L72–L80` |
| `rmdir` | function | (path) | exported | not declared | 2/4 | `src/nova/privsep/path.py:L84–L87` |
| `last_bytes` | function | (path, num) | exported | `(f.read(), remaining)` (src/nova/privsep/path.py:L112) | 3/11 | `src/nova/privsep/path.py:L91–L112` |

## Dependencies

- `import errno` (src/nova/privsep/path.py:L18)
- `import os` (src/nova/privsep/path.py:L19)
- `import shutil` (src/nova/privsep/path.py:L20)
- `oslo_utils`: imports `fileutils` (src/nova/privsep/path.py:L22)
- `nova`: imports `exception` (src/nova/privsep/path.py:L24)
- `import nova.privsep` (src/nova/privsep/path.py:L25)

## Side Effects

- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L28)
- **file-io**: if not os.path.exists(os.path.dirname(path)): (src/nova/privsep/path.py:L30)
- **file-io**: with open(path, mode) as f: (src/nova/privsep/path.py:L32)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L36)
- **file-io**: if not os.path.exists(path): (src/nova/privsep/path.py:L40)
- **file-io**: if not recursive or os.path.isfile(path): (src/nova/privsep/path.py:L43)
- **file-io**: os.chown(os.path.join(root, item), uid, gid) (src/nova/privsep/path.py:L49)
- **file-io**: os.chown(os.path.join(root, item), uid, gid) (src/nova/privsep/path.py:L51)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L54)
- **file-io**: fileutils.ensure_tree(path) (src/nova/privsep/path.py:L56)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L59)
- **file-io**: if not os.path.exists(path): (src/nova/privsep/path.py:L61)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L66)
- **file-io**: shutil.move(source_path, dest_path) (src/nova/privsep/path.py:L68)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L71)
- **file-io**: if not os.path.exists(path): (src/nova/privsep/path.py:L73)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L83)
- **file-io**: if not os.path.exists(path): (src/nova/privsep/path.py:L85)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L90)
- **file-io**: with open(path, 'rb') as f: (src/nova/privsep/path.py:L99)

## Security Surface

- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L28)
- **sink** (`file-write`): f.write(content) (src/nova/privsep/path.py:L33)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L36)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L54)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L59)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L66)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L71)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L83)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/path.py:L90)

