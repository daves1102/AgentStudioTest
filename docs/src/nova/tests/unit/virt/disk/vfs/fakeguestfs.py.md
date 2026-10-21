# src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py

## Overview

This file implements the `fakeguestfs` module, defining 1 class, 7 constants, 24 methods, 7 side effects.

Lines: total 198, code 146, comment 13, blank 39

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `EVENT_APPLIANCE` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L16–L16` |
| `EVENT_LIBRARY` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L17–L17` |
| `EVENT_WARNING` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L18–L18` |
| `EVENT_TRACE` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L19–L19` |
| `GuestFS` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L22–L198` |
| `GuestFS.SUPPORT_CLOSE_ON_EXIT` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L23–L23` |
| `GuestFS.SUPPORT_RETURN_DICT` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L24–L24` |
| `GuestFS.CAN_SET_OWNERSHIP` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L25–L25` |
| `GuestFS.__init__` | method | (self, **kwargs) | public | not declared | 5/18 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L27–L45` |
| `GuestFS.launch` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L47–L48` |
| `GuestFS.shutdown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L50–L53` |
| `GuestFS.set_backend_settings` | method | (self, settings) | public | not declared | 1/3 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L55–L57` |
| `GuestFS.close` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L59–L60` |
| `GuestFS.add_drive_opts` | method | (self, file, *args, **kwargs) | public | not declared | 2/4 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L62–L66` |
| `GuestFS.add_drive` | method | (self, file, format=None, *args, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L68–L69` |
| `GuestFS.inspect_os` | method | (self) | public | `["/dev/guestvgf/lv_root"]` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L72) | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L71–L72` |
| `GuestFS.inspect_get_mountpoints` | method | (self, dev) | public | `dict(mountpoints)` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L80); `mountpoints` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L82) | 3/8 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L74–L82` |
| `GuestFS.mount_options` | method | (self, options, device, mntpoint) | public | not declared | 3/8 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L84–L91` |
| `GuestFS.mkdir_p` | method | (self, path) | public | not declared | 2/8 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L93–L100` |
| `GuestFS.read_file` | method | (self, path) | public | `bytes(self.files[path]["content"].encode())` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L112) | 2/10 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L102–L112` |
| `GuestFS.write` | method | (self, path, content) | public | not declared | 2/10 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L114–L124` |
| `GuestFS.write_append` | method | (self, path, content) | public | not declared | 2/10 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L126–L136` |
| `GuestFS.stat` | method | (self, path) | public | `self.files[path]["mode"]` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L142) | 2/4 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L138–L142` |
| `GuestFS.chown` | method | (self, uid, gid, path) | public | not declared | 4/7 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L144–L151` |
| `GuestFS.chmod` | method | (self, mode, path) | public | not declared | 2/4 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L153–L157` |
| `GuestFS.aug_init` | method | (self, root, flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L159–L160` |
| `GuestFS.aug_close` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L162–L163` |
| `GuestFS.aug_get` | method | (self, cfgpath) | public | `0` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L175); `105` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L177); `110` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L179); `0` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L181); `500` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L183); `600` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L185) | 11/20 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L165–L186` |
| `GuestFS.set_trace` | method | (self, enabled) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L188–L189` |
| `GuestFS.set_verbose` | method | (self, enabled) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L191–L192` |
| `GuestFS.set_event_callback` | method | (self, func, events) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L194–L195` |
| `GuestFS.vfs_type` | method | (self, dev) | public | `'ext3'` (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L198) | 1/2 | `src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L197–L198` |

## Dependencies

None.

## Side Effects

- **global-mutation**: EVENT_APPLIANCE = 0x1 (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L16)
- **global-mutation**: EVENT_LIBRARY = 0x2 (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L17)
- **global-mutation**: EVENT_WARNING = 0x3 (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L18)
- **global-mutation**: EVENT_TRACE = 0x4 (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L19)
- **global-mutation**: SUPPORT_CLOSE_ON_EXIT = True (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L23)
- **global-mutation**: SUPPORT_RETURN_DICT = True (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L24)
- **global-mutation**: CAN_SET_OWNERSHIP = True (src/nova/tests/unit/virt/disk/vfs/fakeguestfs.py:L25)

