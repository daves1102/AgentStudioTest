# src/nova/virt/disk/vfs/guestfs.py

## Overview

This file implements the `guestfs` module, defining 1 class, 2 constants, 3 functions, 18 methods, 1 staticmethod, 2 variables, 9 imports, 2 side effects, 1 security surface entry.

Lines: total 361, code 263, comment 42, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L28–L28` |
| `guestfs` | variable | — | exported | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L30–L30` |
| `forceTCG` | variable | — | exported | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L31–L31` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L33–L33` |
| `force_tcg` | function | (force=True) | exported | not declared | 1/3 | `src/nova/virt/disk/vfs/guestfs.py:L36–L44` |
| `VFSGuestFS` | class | — | exported | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L47–L361` |
| `VFSGuestFS.__init__` | method | (self, image, partition=None) | public | not declared | 3/11 | `src/nova/virt/disk/vfs/guestfs.py:L55–L73` |
| `VFSGuestFS.inspect_capabilities` | method | (self) | public | `self` (src/nova/virt/disk/vfs/guestfs.py:L97) | 4/18 | `src/nova/virt/disk/vfs/guestfs.py:L75–L97` |
| `VFSGuestFS.configure_debug` | method | (self) | public | not declared | 2/11 | `src/nova/virt/disk/vfs/guestfs.py:L99–L118` |
| `VFSGuestFS.configure_debug.log_callback` | function | (ev, eh, buf, array) | public | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L105–L111` |
| `VFSGuestFS.setup_os` | method | (self) | public | not declared | 2/5 | `src/nova/virt/disk/vfs/guestfs.py:L120–L124` |
| `VFSGuestFS.setup_os_static` | method | (self) | public | not declared | 2/7 | `src/nova/virt/disk/vfs/guestfs.py:L126–L133` |
| `VFSGuestFS.setup_os_inspect` | method | (self) | public | not declared | 3/12 | `src/nova/virt/disk/vfs/guestfs.py:L135–L149` |
| `VFSGuestFS.setup_os_root` | method | (self, root) | public | not declared | 5/24 | `src/nova/virt/disk/vfs/guestfs.py:L151–L178` |
| `VFSGuestFS.setup` | method | (self, mount=True) | public | not declared | 13/53 | `src/nova/virt/disk/vfs/guestfs.py:L180–L255` |
| `VFSGuestFS.teardown` | method | (self) | public | not declared | 8/22 | `src/nova/virt/disk/vfs/guestfs.py:L257–L284` |
| `VFSGuestFS._canonicalize_path` | method | (path) | private | `'/' + path` (src/nova/virt/disk/vfs/guestfs.py:L289); `path` (src/nova/virt/disk/vfs/guestfs.py:L290) | 2/4 | `src/nova/virt/disk/vfs/guestfs.py:L287–L290` |
| `VFSGuestFS.make_path` | method | (self, path) | public | not declared | 1/4 | `src/nova/virt/disk/vfs/guestfs.py:L292–L295` |
| `VFSGuestFS.append_file` | method | (self, path, content) | public | not declared | 1/4 | `src/nova/virt/disk/vfs/guestfs.py:L297–L300` |
| `VFSGuestFS.replace_file` | method | (self, path, content) | public | not declared | 1/4 | `src/nova/virt/disk/vfs/guestfs.py:L302–L305` |
| `VFSGuestFS.read_file` | method | (self, path) | public | `data.decode()` (src/nova/virt/disk/vfs/guestfs.py:L316); `data` (src/nova/virt/disk/vfs/guestfs.py:L317) | 2/7 | `src/nova/virt/disk/vfs/guestfs.py:L307–L317` |
| `VFSGuestFS.has_file` | method | (self, path) | public | `True` (src/nova/virt/disk/vfs/guestfs.py:L324); `False` (src/nova/virt/disk/vfs/guestfs.py:L326) | 2/8 | `src/nova/virt/disk/vfs/guestfs.py:L319–L326` |
| `VFSGuestFS.set_permissions` | method | (self, path, mode) | public | not declared | 1/5 | `src/nova/virt/disk/vfs/guestfs.py:L328–L332` |
| `VFSGuestFS.set_ownership` | method | (self, path, user, group) | public | not declared | 3/15 | `src/nova/virt/disk/vfs/guestfs.py:L334–L358` |
| `VFSGuestFS.set_ownership._get_item_id` | function | (id_path) | private | `int(self.handle.aug_get("/files/etc/" + id_path))` (src/nova/virt/disk/vfs/guestfs.py:L344) | — | `src/nova/virt/disk/vfs/guestfs.py:L342–L350` |
| `VFSGuestFS.get_image_fs` | method | (self) | public | `self.handle.vfs_type('/dev/sda')` (src/nova/virt/disk/vfs/guestfs.py:L361) | 1/2 | `src/nova/virt/disk/vfs/guestfs.py:L360–L361` |
| `VFSGuestFS._canonicalize_path` | staticmethod | — | private | not declared | — | `src/nova/virt/disk/vfs/guestfs.py:L286–L290` |

## Dependencies

- `import os` (src/nova/virt/disk/vfs/guestfs.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/virt/disk/vfs/guestfs.py:L17)
- `oslo_utils`: imports `importutils` (src/nova/virt/disk/vfs/guestfs.py:L18)
- `import nova.conf` (src/nova/virt/disk/vfs/guestfs.py:L20)
- `nova`: imports `exception` (src/nova/virt/disk/vfs/guestfs.py:L21)
- `nova.i18n`: imports `_` (src/nova/virt/disk/vfs/guestfs.py:L22)
- `nova`: imports `utils` (src/nova/virt/disk/vfs/guestfs.py:L23)
- `nova.virt.disk.vfs`: imports `api as vfs` (src/nova/virt/disk/vfs/guestfs.py:L24)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/virt/disk/vfs/guestfs.py:L25)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/disk/vfs/guestfs.py:L28)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/disk/vfs/guestfs.py:L33)

## Security Surface

- **sink** (`file-write`): self.handle.write(path, content) (src/nova/virt/disk/vfs/guestfs.py:L305)

