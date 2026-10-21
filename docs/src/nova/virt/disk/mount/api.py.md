# src/nova/virt/disk/mount/api.py

## Overview

This file implements the `api` module, defining 1 class, 4 constants, 1 field, 1 function, 16 methods, 2 staticmethods, 9 imports, 21 side effects, 5 security surface entries.

Lines: total 295, code 215, comment 37, blank 43

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/api.py:L28–L28` |
| `MAX_DEVICE_WAIT` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/api.py:L30–L30` |
| `MAX_FILE_CHECKS` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/api.py:L31–L31` |
| `FILE_CHECK_INTERVAL` | constant | — | exported | not declared | — | `src/nova/virt/disk/mount/api.py:L32–L32` |
| `Mount` | class | — | exported | not declared | — | `src/nova/virt/disk/mount/api.py:L35–L295` |
| `Mount.mode` | field | — | public | not declared | — | `src/nova/virt/disk/mount/api.py:L42–L42` |
| `Mount.instance_for_format` | method | (image, mountdir, partition) | public | `importutils.import_object( "nova.virt.disk.mount.loop.LoopMount", image, mountdir, partition)` (src/nova/virt/disk/mount/api.py:L60); `importutils.import_object( "nova.virt.disk.mount.nbd.NbdMount", image, mountdir, partition)` (src/nova/virt/disk/mount/api.py:L65); `importutils.import_object( "nova.virt.disk.mount.block.BlockMount", image, mountdir, partition)` (src/nova/virt/disk/mount/api.py:L70) | 4/24 | `src/nova/virt/disk/mount/api.py:L45–L82` |
| `Mount.instance_for_device` | method | (image, mountdir, partition, device) | public | `importutils.import_object( "nova.virt.disk.mount.loop.LoopMount", image, mountdir, partition, device)` (src/nova/virt/disk/mount/api.py:L102); `importutils.import_object( "nova.virt.disk.mount.nbd.NbdMount", image, mountdir, partition, device)` (src/nova/virt/disk/mount/api.py:L107); `importutils.import_object( "nova.virt.disk.mount.block.BlockMount", image, mountdir, partition, device)` (src/nova/virt/disk/mount/api.py:L112) | 3/21 | `src/nova/virt/disk/mount/api.py:L85–L114` |
| `Mount.__init__` | method | (self, image, mount_dir, partition=None, device=None) | public | not declared | 1/8 | `src/nova/virt/disk/mount/api.py:L116–L138` |
| `Mount.reset_dev` | method | (self) | public | `` (src/nova/virt/disk/mount/api.py:L143) | 6/11 | `src/nova/virt/disk/mount/api.py:L140–L153` |
| `Mount.get_dev` | method | (self) | public | `True` (src/nova/virt/disk/mount/api.py:L159) | 1/4 | `src/nova/virt/disk/mount/api.py:L155–L159` |
| `Mount._get_dev_retry_helper` | method | (self) | private | `False` (src/nova/virt/disk/mount/api.py:L174); `True` (src/nova/virt/disk/mount/api.py:L176) | 3/11 | `src/nova/virt/disk/mount/api.py:L161–L176` |
| `Mount._inner_get_dev` | method | (self) | private | not declared | 1/2 | `src/nova/virt/disk/mount/api.py:L178–L179` |
| `Mount.unget_dev` | method | (self) | public | not declared | 1/2 | `src/nova/virt/disk/mount/api.py:L181–L183` |
| `Mount.map_dev` | method | (self) | public | `self.mapped` (src/nova/virt/disk/mount/api.py:L234) | 8/33 | `src/nova/virt/disk/mount/api.py:L185–L234` |
| `Mount.map_dev.recheck_path` | function | (map_path) | public | not declared | — | `src/nova/virt/disk/mount/api.py:L208–L210` |
| `Mount.unmap_dev` | method | (self) | public | `` (src/nova/virt/disk/mount/api.py:L239) | 4/8 | `src/nova/virt/disk/mount/api.py:L236–L244` |
| `Mount.mnt_dev` | method | (self) | public | `False` (src/nova/virt/disk/mount/api.py:L255); `True` (src/nova/virt/disk/mount/api.py:L258) | 2/11 | `src/nova/virt/disk/mount/api.py:L246–L258` |
| `Mount.unmnt_dev` | method | (self) | public | `` (src/nova/virt/disk/mount/api.py:L263) | 2/7 | `src/nova/virt/disk/mount/api.py:L260–L267` |
| `Mount.flush_dev` | method | (self) | public | not declared | 1/2 | `src/nova/virt/disk/mount/api.py:L269–L270` |
| `Mount.do_mount` | method | (self) | public | `status` (src/nova/virt/disk/mount/api.py:L281) | 5/9 | `src/nova/virt/disk/mount/api.py:L272–L281` |
| `Mount.do_umount` | method | (self) | public | not declared | 2/3 | `src/nova/virt/disk/mount/api.py:L283–L286` |
| `Mount.do_teardown` | method | (self) | public | not declared | 4/7 | `src/nova/virt/disk/mount/api.py:L288–L295` |
| `Mount.instance_for_format` | staticmethod | — | public | not declared | — | `src/nova/virt/disk/mount/api.py:L44–L82` |
| `Mount.instance_for_device` | staticmethod | — | public | not declared | — | `src/nova/virt/disk/mount/api.py:L84–L114` |

## Dependencies

- `import os` (src/nova/virt/disk/mount/api.py:L16)
- `import time` (src/nova/virt/disk/mount/api.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/virt/disk/mount/api.py:L19)
- `oslo_service`: imports `loopingcall` (src/nova/virt/disk/mount/api.py:L20)
- `oslo_utils`: imports `importutils` (src/nova/virt/disk/mount/api.py:L21)
- `nova`: imports `exception` (src/nova/virt/disk/mount/api.py:L23)
- `nova.i18n`: imports `_` (src/nova/virt/disk/mount/api.py:L24)
- `import nova.privsep.fs` (src/nova/virt/disk/mount/api.py:L25)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/virt/disk/mount/api.py:L26)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/disk/mount/api.py:L25)
- **file-io**: if os.path.isabs(device) and os.path.exists(device): (src/nova/virt/disk/mount/api.py:L148)
- **file-io**: device = os.path.basename(device) (src/nova/virt/disk/mount/api.py:L150)
- **file-io**: self.device = os.path.join('/dev', device) (src/nova/virt/disk/mount/api.py:L153)
- **file-io**: assert os.path.exists(self.device) (src/nova/virt/disk/mount/api.py:L187)
- **file-io**: automapped_path = '/dev/%sp%s' % (os.path.basename(self.device), (src/nova/virt/disk/mount/api.py:L189)
- **file-io**: elif self.partition and not os.path.exists(automapped_path): (src/nova/virt/disk/mount/api.py:L194)
- **file-io**: map_path = '/dev/mapper/%sp%s' % (os.path.basename(self.device), (src/nova/virt/disk/mount/api.py:L195)
- **file-io**: assert not os.path.exists(map_path) (src/nova/virt/disk/mount/api.py:L197)
- **process-spawn**: _out, err = nova.privsep.fs.create_device_maps(self.device) (src/nova/virt/disk/mount/api.py:L202)
- **file-io**: if not os.path.exists(map_path): (src/nova/virt/disk/mount/api.py:L209)
- **file-io**: elif self.partition and os.path.exists(automapped_path): (src/nova/virt/disk/mount/api.py:L222)
- **process-spawn**: nova.privsep.fs.remove_device_maps(self.device) (src/nova/virt/disk/mount/api.py:L242)
- **process-spawn**: out, err = nova.privsep.fs.mount(None, self.mapped_device, (src/nova/virt/disk/mount/api.py:L250)
- **process-spawn**: nova.privsep.fs.umount(self.mapped_device) (src/nova/virt/disk/mount/api.py:L266)
- **syscall**: def do_mount(self): (src/nova/virt/disk/mount/api.py:L272)
- **syscall**: def do_umount(self): (src/nova/virt/disk/mount/api.py:L283)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/disk/mount/api.py:L28)
- **global-mutation**: MAX_DEVICE_WAIT = 30 (src/nova/virt/disk/mount/api.py:L30)
- **global-mutation**: MAX_FILE_CHECKS = 6 (src/nova/virt/disk/mount/api.py:L31)
- **global-mutation**: FILE_CHECK_INTERVAL = 0.25 (src/nova/virt/disk/mount/api.py:L32)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/disk/mount/api.py:L25)
- **privilege** (`privsep-entrypoint`): _out, err = nova.privsep.fs.create_device_maps(self.device) (src/nova/virt/disk/mount/api.py:L202)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.remove_device_maps(self.device) (src/nova/virt/disk/mount/api.py:L242)
- **privilege** (`privsep-entrypoint`): out, err = nova.privsep.fs.mount(None, self.mapped_device, (src/nova/virt/disk/mount/api.py:L250)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.umount(self.mapped_device) (src/nova/virt/disk/mount/api.py:L266)

## Notes

- KB `sideEffects` entries at L272, L283 have targets that appear to be code fragments rather than resource paths; documented as recorded.

