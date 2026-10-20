# src/nova/privsep/idmapshift.py

## Overview

This file implements the `idmapshift` module, defining 2 constants, 9 functions, 3 imports, 7 side effects, 1 security surface entry.

Lines: total 141, code 94, comment 13, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/privsep/idmapshift.py:L45–L45` |
| `NOBODY_ID` | constant | — | exported | not declared | — | `src/nova/privsep/idmapshift.py:L46–L46` |
| `find_target_id` | function | (fsid, mappings, nobody, memo) | exported | `memo[fsid]` (src/nova/privsep/idmapshift.py:L58) | 4/9 | `src/nova/privsep/idmapshift.py:L49–L58` |
| `print_chown` | function | (path, uid, gid, target_uid, target_gid) | exported | not declared | 1/2 | `src/nova/privsep/idmapshift.py:L61–L62` |
| `shift_path` | function | (path, uid_mappings, gid_mappings, nobody, uid_memo, gid_memo) | exported | not declared | 1/8 | `src/nova/privsep/idmapshift.py:L65–L72` |
| `shift_dir` | function | (fsdir, uid_mappings, gid_mappings, nobody) | exported | not declared | 4/12 | `src/nova/privsep/idmapshift.py:L75–L90` |
| `shift_dir.shift_path_short` | function | (p) | public | not declared | — | `src/nova/privsep/idmapshift.py:L79–L81` |
| `confirm_path` | function | (path, uid_ranges, gid_ranges, nobody) | exported | `uid_in_range and gid_in_range` (src/nova/privsep/idmapshift.py:L112) | 10/16 | `src/nova/privsep/idmapshift.py:L93–L112` |
| `get_ranges` | function | (maps) | exported | `[(target, target + count - 1) for (start, target, count) in maps]` (src/nova/privsep/idmapshift.py:L116) | 2/2 | `src/nova/privsep/idmapshift.py:L115–L116` |
| `confirm_dir` | function | (fsdir, uid_mappings, gid_mappings, nobody) | exported | `False` (src/nova/privsep/idmapshift.py:L124); `False` (src/nova/privsep/idmapshift.py:L129); `False` (src/nova/privsep/idmapshift.py:L133); `True` (src/nova/privsep/idmapshift.py:L134) | 7/15 | `src/nova/privsep/idmapshift.py:L119–L134` |
| `shift` | function | (path, uid_map, gid_map) | exported | `` (src/nova/privsep/idmapshift.py:L140) | 2/4 | `src/nova/privsep/idmapshift.py:L138–L141` |

## Dependencies

- `import os` (src/nova/privsep/idmapshift.py:L39)
- `oslo_log`: imports `log as logging` (src/nova/privsep/idmapshift.py:L41)
- `import nova.privsep` (src/nova/privsep/idmapshift.py:L43)

## Side Effects

- **file-io**: path = os.path.join(root, d) (src/nova/privsep/idmapshift.py:L86)
- **file-io**: path = os.path.join(root, f) (src/nova/privsep/idmapshift.py:L89)
- **file-io**: path = os.path.join(root, d) (src/nova/privsep/idmapshift.py:L127)
- **file-io**: path = os.path.join(root, f) (src/nova/privsep/idmapshift.py:L131)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/idmapshift.py:L137)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/privsep/idmapshift.py:L45)
- **global-mutation**: NOBODY_ID = 65534 (src/nova/privsep/idmapshift.py:L46)

## Security Surface

- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/idmapshift.py:L137)

