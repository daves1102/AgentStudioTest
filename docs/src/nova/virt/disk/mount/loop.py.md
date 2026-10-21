# src/nova/virt/disk/mount/loop.py

## Overview

This file implements the `loop` module, defining 1 class, 1 constant, 1 field, 3 methods, 4 imports, 4 side effects, 3 security surface entries.

Lines: total 60, code 30, comment 20, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/loop.py:L22–L22` |
| `LoopMount` | class | — | exported | not declared | — | `src/nova/virt/disk/mount/loop.py:L25–L60` |
| `LoopMount.mode` | field | — | public | not declared | — | `src/nova/virt/disk/mount/loop.py:L27–L27` |
| `LoopMount._inner_get_dev` | method | (self) | private | `False` (src/nova/virt/disk/mount/loop.py:L36); `True` (src/nova/virt/disk/mount/loop.py:L41) | 2/12 | `src/nova/virt/disk/mount/loop.py:L29–L41` |
| `LoopMount.get_dev` | method | (self) | public | `self._get_dev_retry_helper()` (src/nova/virt/disk/mount/loop.py:L48) | 1/2 | `src/nova/virt/disk/mount/loop.py:L43–L48` |
| `LoopMount.unget_dev` | method | (self) | public | `` (src/nova/virt/disk/mount/loop.py:L52) | 2/7 | `src/nova/virt/disk/mount/loop.py:L50–L60` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/disk/mount/loop.py:L16)
- `nova.i18n`: imports `_` (src/nova/virt/disk/mount/loop.py:L18)
- `import nova.privsep.fs` (src/nova/virt/disk/mount/loop.py:L19)
- `nova.virt.disk.mount`: imports `api` (src/nova/virt/disk/mount/loop.py:L20)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/disk/mount/loop.py:L19)
- **process-spawn**: out, err = nova.privsep.fs.loopsetup(self.image.path) (src/nova/virt/disk/mount/loop.py:L30)
- **process-spawn**: nova.privsep.fs.loopremove(self.device) (src/nova/virt/disk/mount/loop.py:L58)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/disk/mount/loop.py:L22)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/disk/mount/loop.py:L19)
- **privilege** (`privsep-entrypoint`): out, err = nova.privsep.fs.loopsetup(self.image.path) (src/nova/virt/disk/mount/loop.py:L30)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.loopremove(self.device) (src/nova/virt/disk/mount/loop.py:L58)

