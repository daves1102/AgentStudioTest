# src/nova/virt/disk/vfs/api.py

## Overview

This file implements the `api` module, defining 1 class, 1 constant, 1 field, 12 methods, 1 staticmethod, 2 imports, 1 side effect.

Lines: total 141, code 93, comment 17, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/disk/vfs/api.py:L18–L18` |
| `VFS` | class | — | exported | not declared | — | `src/nova/virt/disk/vfs/api.py:L21–L141` |
| `VFS.guestfs_ready` | field | — | public | not declared | — | `src/nova/virt/disk/vfs/api.py:L36–L36` |
| `VFS.instance_for_image` | method | (image, partition) | public | `vfs` (src/nova/virt/disk/vfs/api.py:L59) | 2/12 | `src/nova/virt/disk/vfs/api.py:L39–L59` |
| `VFS.__init__` | method | (self, image, partition) | public | not declared | 1/3 | `src/nova/virt/disk/vfs/api.py:L61–L69` |
| `VFS.setup` | method | (self, mount=True) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L71–L77` |
| `VFS.teardown` | method | (self) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L79–L81` |
| `VFS.make_path` | method | (self, path) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L83–L89` |
| `VFS.append_file` | method | (self, path, content) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L91–L97` |
| `VFS.replace_file` | method | (self, path, content) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L99–L105` |
| `VFS.read_file` | method | (self, path) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L107–L109` |
| `VFS.has_file` | method | (self, path) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L111–L113` |
| `VFS.set_permissions` | method | (self, path, mode) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L115–L121` |
| `VFS.set_ownership` | method | (self, path, user, group) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L123–L133` |
| `VFS.get_image_fs` | method | (self) | public | not declared | 1/2 | `src/nova/virt/disk/vfs/api.py:L135–L141` |
| `VFS.instance_for_image` | staticmethod | — | public | not declared | — | `src/nova/virt/disk/vfs/api.py:L38–L59` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/disk/vfs/api.py:L15)
- `oslo_utils`: imports `importutils` (src/nova/virt/disk/vfs/api.py:L16)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/disk/vfs/api.py:L18)

