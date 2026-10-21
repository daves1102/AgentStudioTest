# src/nova/virt/libvirt/storage/lvm.py

## Overview

This file implements the `lvm` module, defining 2 constants, 8 functions, 8 imports, 12 side effects, 9 security surface entries.

Lines: total 192, code 134, comment 21, blank 37

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/storage/lvm.py:L33–L33` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/storage/lvm.py:L34–L34` |
| `create_volume` | function | (vg, lv, size, sparse=False) | exported | not declared | 3/22 | `src/nova/virt/libvirt/storage/lvm.py:L38–L79` |
| `create_volume.check_size` | function | (vg, lv, size) | public | not declared | — | `src/nova/virt/libvirt/storage/lvm.py:L51–L60` |
| `get_volume_group_info` | function | (vg) | exported | `{'total': int(info[0]), 'free': int(info[1]), 'used': int(info[0]) - int(info[1])}` (src/nova/virt/libvirt/storage/lvm.py:L98) | 2/8 | `src/nova/virt/libvirt/storage/lvm.py:L82–L100` |
| `list_volumes` | function | (vg) | exported | `[line.strip() for line in out.splitlines()]` (src/nova/virt/libvirt/storage/lvm.py:L112) | 2/3 | `src/nova/virt/libvirt/storage/lvm.py:L103–L112` |
| `volume_info` | function | (path) | exported | `dict(zip(*info))` (src/nova/virt/libvirt/storage/lvm.py:L137) | 3/6 | `src/nova/virt/libvirt/storage/lvm.py:L115–L137` |
| `get_volume_size` | function | (path) | exported | `int(out)` (src/nova/virt/libvirt/storage/lvm.py:L155) | 3/9 | `src/nova/virt/libvirt/storage/lvm.py:L140–L155` |
| `clear_volume` | function | (path) | exported | `` (src/nova/virt/libvirt/storage/lvm.py:L164); `` (src/nova/virt/libvirt/storage/lvm.py:L172) | 5/13 | `src/nova/virt/libvirt/storage/lvm.py:L158–L178` |
| `remove_volumes` | function | (paths) | exported | not declared | 4/10 | `src/nova/virt/libvirt/storage/lvm.py:L181–L192` |

## Dependencies

- `import os` (src/nova/virt/libvirt/storage/lvm.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/storage/lvm.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/storage/lvm.py:L25)
- `oslo_utils`: imports `units` (src/nova/virt/libvirt/storage/lvm.py:L26)
- `import nova.conf` (src/nova/virt/libvirt/storage/lvm.py:L28)
- `nova`: imports `exception` (src/nova/virt/libvirt/storage/lvm.py:L29)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/storage/lvm.py:L30)
- `import nova.privsep.fs` (src/nova/virt/libvirt/storage/lvm.py:L31)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/libvirt/storage/lvm.py:L31)
- **process-spawn**: nova.privsep.fs.lvcreate(size, lv, vg, (src/nova/virt/libvirt/storage/lvm.py:L75)
- **process-spawn**: nova.privsep.fs.lvcreate(size, lv, vg) (src/nova/virt/libvirt/storage/lvm.py:L79)
- **process-spawn**: out, err = nova.privsep.fs.vginfo(vg) (src/nova/virt/libvirt/storage/lvm.py:L92)
- **process-spawn**: out, err = nova.privsep.fs.lvlist(vg) (src/nova/virt/libvirt/storage/lvm.py:L111)
- **process-spawn**: out, err = nova.privsep.fs.lvinfo(path) (src/nova/virt/libvirt/storage/lvm.py:L131)
- **process-spawn**: out, _err = nova.privsep.fs.blockdev_size(path) (src/nova/virt/libvirt/storage/lvm.py:L149)
- **file-io**: if not os.path.exists(path): (src/nova/virt/libvirt/storage/lvm.py:L151)
- **process-spawn**: nova.privsep.fs.clear(path, volume_size, (src/nova/virt/libvirt/storage/lvm.py:L177)
- **process-spawn**: nova.privsep.fs.lvremove(path) (src/nova/virt/libvirt/storage/lvm.py:L188)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/storage/lvm.py:L33)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/storage/lvm.py:L34)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/libvirt/storage/lvm.py:L31)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvcreate(size, lv, vg, (src/nova/virt/libvirt/storage/lvm.py:L75)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvcreate(size, lv, vg) (src/nova/virt/libvirt/storage/lvm.py:L79)
- **privilege** (`privsep-entrypoint`): out, err = nova.privsep.fs.vginfo(vg) (src/nova/virt/libvirt/storage/lvm.py:L92)
- **privilege** (`privsep-entrypoint`): out, err = nova.privsep.fs.lvlist(vg) (src/nova/virt/libvirt/storage/lvm.py:L111)
- **privilege** (`privsep-entrypoint`): out, err = nova.privsep.fs.lvinfo(path) (src/nova/virt/libvirt/storage/lvm.py:L131)
- **privilege** (`privsep-entrypoint`): out, _err = nova.privsep.fs.blockdev_size(path) (src/nova/virt/libvirt/storage/lvm.py:L149)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.clear(path, volume_size, (src/nova/virt/libvirt/storage/lvm.py:L177)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.lvremove(path) (src/nova/virt/libvirt/storage/lvm.py:L188)

