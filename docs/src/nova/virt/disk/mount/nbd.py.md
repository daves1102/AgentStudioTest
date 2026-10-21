# src/nova/virt/disk/mount/nbd.py

## Overview

This file implements the `nbd` module, defining 1 class, 3 constants, 1 field, 7 methods, 1 staticmethod, 11 imports, 15 side effects, 5 security surface entries.

Lines: total 137, code 93, comment 22, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/nbd.py:L30–L30` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/nbd.py:L32–L32` |
| `NBD_DEVICE_RE` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/nbd.py:L34–L34` |
| `NbdMount` | class | — | exported | not declared | — | `src/nova/virt/disk/mount/nbd.py:L37–L137` |
| `NbdMount.mode` | field | — | public | not declared | — | `src/nova/virt/disk/mount/nbd.py:L39–L39` |
| `NbdMount._detect_nbd_devices` | method | — | private | `list(filter(NBD_DEVICE_RE.match, os.listdir('/sys/block/')))` (src/nova/virt/disk/mount/nbd.py:L44) | 1/2 | `src/nova/virt/disk/mount/nbd.py:L42–L44` |
| `NbdMount._find_unused` | method | (self, devices) | private | `device` (src/nova/virt/disk/mount/nbd.py:L50); `None` (src/nova/virt/disk/mount/nbd.py:L55) | 4/10 | `src/nova/virt/disk/mount/nbd.py:L46–L55` |
| `NbdMount._allocate_nbd` | method | (self) | private | `None` (src/nova/virt/disk/mount/nbd.py:L61); `None` (src/nova/virt/disk/mount/nbd.py:L69); `os.path.join('/dev', device)` (src/nova/virt/disk/mount/nbd.py:L70) | 3/12 | `src/nova/virt/disk/mount/nbd.py:L57–L70` |
| `NbdMount._inner_get_dev` | method | (self) | private | `False` (src/nova/virt/disk/mount/nbd.py:L76); `False` (src/nova/virt/disk/mount/nbd.py:L90); `False` (src/nova/virt/disk/mount/nbd.py:L113); `True` (src/nova/virt/disk/mount/nbd.py:L117) | 8/34 | `src/nova/virt/disk/mount/nbd.py:L73–L117` |
| `NbdMount.get_dev` | method | (self) | public | `self._get_dev_retry_helper()` (src/nova/virt/disk/mount/nbd.py:L121) | 1/2 | `src/nova/virt/disk/mount/nbd.py:L119–L121` |
| `NbdMount.unget_dev` | method | (self) | public | `` (src/nova/virt/disk/mount/nbd.py:L125) | 2/7 | `src/nova/virt/disk/mount/nbd.py:L123–L129` |
| `NbdMount.flush_dev` | method | (self) | public | not declared | 2/3 | `src/nova/virt/disk/mount/nbd.py:L131–L137` |
| `NbdMount._detect_nbd_devices` | staticmethod | — | private | not declared | — | `src/nova/virt/disk/mount/nbd.py:L41–L44` |

## Dependencies

- `import os` (src/nova/virt/disk/mount/nbd.py:L16)
- `import random` (src/nova/virt/disk/mount/nbd.py:L17)
- `import re` (src/nova/virt/disk/mount/nbd.py:L18)
- `import time` (src/nova/virt/disk/mount/nbd.py:L19)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/disk/mount/nbd.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/virt/disk/mount/nbd.py:L22)
- `import nova.conf` (src/nova/virt/disk/mount/nbd.py:L24)
- `nova.i18n`: imports `_` (src/nova/virt/disk/mount/nbd.py:L25)
- `import nova.privsep.fs` (src/nova/virt/disk/mount/nbd.py:L26)
- `nova`: imports `utils` (src/nova/virt/disk/mount/nbd.py:L27)
- `nova.virt.disk.mount`: imports `api` (src/nova/virt/disk/mount/nbd.py:L28)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/disk/mount/nbd.py:L26)
- **file-io**: return list(filter(NBD_DEVICE_RE.match, os.listdir('/sys/block/'))) (src/nova/virt/disk/mount/nbd.py:L44)
- **file-io**: if not os.path.exists(os.path.join('/sys/block/', device, 'pid')): (src/nova/virt/disk/mount/nbd.py:L48)
- **file-io**: if not os.path.exists('/var/lock/qemu-nbd-%s' % device): (src/nova/virt/disk/mount/nbd.py:L49)
- **file-io**: if not os.path.exists('/sys/block/nbd0'): (src/nova/virt/disk/mount/nbd.py:L58)
- **file-io**: return os.path.join('/dev', device) (src/nova/virt/disk/mount/nbd.py:L70)
- **process-spawn**: _out, err = nova.privsep.fs.nbd_connect(device, self.image.path) (src/nova/virt/disk/mount/nbd.py:L83)
- **file-io**: pidfile = "/sys/block/%s/pid" % os.path.basename(device) (src/nova/virt/disk/mount/nbd.py:L94)
- **file-io**: if os.path.exists(pidfile): (src/nova/virt/disk/mount/nbd.py:L96)
- **process-spawn**: _out, err = nova.privsep.fs.nbd_disconnect(device) (src/nova/virt/disk/mount/nbd.py:L106)
- **process-spawn**: nova.privsep.fs.nbd_disconnect(self.device) (src/nova/virt/disk/mount/nbd.py:L127)
- **process-spawn**: nova.privsep.fs.blockdev_flush(self.device) (src/nova/virt/disk/mount/nbd.py:L137)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/disk/mount/nbd.py:L30)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/disk/mount/nbd.py:L32)
- **global-mutation**: NBD_DEVICE_RE = re.compile('nbd[0-9]+') (src/nova/virt/disk/mount/nbd.py:L34)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/disk/mount/nbd.py:L26)
- **privilege** (`privsep-entrypoint`): _out, err = nova.privsep.fs.nbd_connect(device, self.image.path) (src/nova/virt/disk/mount/nbd.py:L83)
- **privilege** (`privsep-entrypoint`): _out, err = nova.privsep.fs.nbd_disconnect(device) (src/nova/virt/disk/mount/nbd.py:L106)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.nbd_disconnect(self.device) (src/nova/virt/disk/mount/nbd.py:L127)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.blockdev_flush(self.device) (src/nova/virt/disk/mount/nbd.py:L137)

