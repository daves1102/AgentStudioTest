# src/nova/virt/libvirt/volume/quobyte.py

## Overview

This file implements the `quobyte` module, defining 1 class, 8 constants, 4 functions, 6 methods, 1 variable, 12 imports, 15 side effects, 5 security surface entries.

Lines: total 215, code 157, comment 21, blank 37

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L31–L31` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L33–L33` |
| `SOURCE_PROTOCOL` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L35–L35` |
| `SOURCE_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L36–L36` |
| `DRIVER_CACHE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L37–L37` |
| `DRIVER_IO` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L38–L38` |
| `VALID_SYSD_STATES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L39–L39` |
| `SYSTEMCTL_CHECK_PATH` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L40–L40` |
| `_is_systemd` | variable | — | unexported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L43–L43` |
| `is_systemd` | function | — | exported | `_is_systemd` (src/nova/virt/libvirt/volume/quobyte.py:L51); `_is_systemd` (src/nova/virt/libvirt/volume/quobyte.py:L69) | 6/16 | `src/nova/virt/libvirt/volume/quobyte.py:L46–L69` |
| `mount_volume` | function | (volume, mnt_base, configfile=None) | exported | not declared | 2/13 | `src/nova/virt/libvirt/volume/quobyte.py:L72–L89` |
| `umount_volume` | function | (mnt_base) | exported | not declared | 4/12 | `src/nova/virt/libvirt/volume/quobyte.py:L92–L104` |
| `validate_volume` | function | (mount_path) | exported | `` (src/nova/virt/libvirt/volume/quobyte.py:L121) | 6/23 | `src/nova/virt/libvirt/volume/quobyte.py:L107–L135` |
| `LibvirtQuobyteVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/quobyte.py:L138–L215` |
| `LibvirtQuobyteVolumeDriver.__init__` | method | (self, host) | public | not declared | 1/4 | `src/nova/virt/libvirt/volume/quobyte.py:L141–L144` |
| `LibvirtQuobyteVolumeDriver._get_mount_point_base` | method | (self) | private | `CONF.libvirt.quobyte_mount_point_base` (src/nova/virt/libvirt/volume/quobyte.py:L147) | 1/2 | `src/nova/virt/libvirt/volume/quobyte.py:L146–L147` |
| `LibvirtQuobyteVolumeDriver.get_config` | method | (self, connection_info, disk_info) | public | `conf` (src/nova/virt/libvirt/volume/quobyte.py:L161) | 1/11 | `src/nova/virt/libvirt/volume/quobyte.py:L149–L161` |
| `LibvirtQuobyteVolumeDriver.connect_volume` | method | (self, connection_info, instance) | public | not declared | 6/28 | `src/nova/virt/libvirt/volume/quobyte.py:L164–L195` |
| `LibvirtQuobyteVolumeDriver.disconnect_volume` | method | (self, connection_info, instance, force=False) | public | not declared | 2/10 | `src/nova/virt/libvirt/volume/quobyte.py:L198–L209` |
| `LibvirtQuobyteVolumeDriver._normalize_export` | method | (self, export) | private | `export` (src/nova/virt/libvirt/volume/quobyte.py:L215) | 2/5 | `src/nova/virt/libvirt/volume/quobyte.py:L211–L215` |

## Dependencies

- `import os` (src/nova/virt/libvirt/volume/quobyte.py:L16)
- `import warnings` (src/nova/virt/libvirt/volume/quobyte.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/volume/quobyte.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/volume/quobyte.py:L20)
- `oslo_utils`: imports `fileutils` (src/nova/virt/libvirt/volume/quobyte.py:L21)
- `import psutil` (src/nova/virt/libvirt/volume/quobyte.py:L22)
- `import nova.conf` (src/nova/virt/libvirt/volume/quobyte.py:L24)
- `nova`: imports `exception as nova_exception` (src/nova/virt/libvirt/volume/quobyte.py:L25)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/volume/quobyte.py:L26)
- `import nova.privsep.libvirt` (src/nova/virt/libvirt/volume/quobyte.py:L27)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/quobyte.py:L28)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/volume/quobyte.py:L29)

## Side Effects

- **process-spawn**: import nova.privsep.libvirt (src/nova/virt/libvirt/volume/quobyte.py:L27)
- **file-io**: if psutil.Process(1).name() == "systemd" or os.path.exists( (src/nova/virt/libvirt/volume/quobyte.py:L55)
- **file-io**: fileutils.ensure_tree(mnt_base) (src/nova/virt/libvirt/volume/quobyte.py:L74)
- **process-spawn**: nova.privsep.libvirt.systemd_run_qb_mount(volume, mnt_base, (src/nova/virt/libvirt/volume/quobyte.py:L81)
- **process-spawn**: nova.privsep.libvirt.unprivileged_qb_mount(volume, mnt_base, (src/nova/virt/libvirt/volume/quobyte.py:L87)
- **process-spawn**: nova.privsep.libvirt.umount(mnt_base) (src/nova/virt/libvirt/volume/quobyte.py:L96)
- **process-spawn**: nova.privsep.libvirt.unprivileged_umount(mnt_base) (src/nova/virt/libvirt/volume/quobyte.py:L98)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/volume/quobyte.py:L31)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/quobyte.py:L33)
- **global-mutation**: SOURCE_PROTOCOL = 'quobyte' (src/nova/virt/libvirt/volume/quobyte.py:L35)
- **global-mutation**: SOURCE_TYPE = 'file' (src/nova/virt/libvirt/volume/quobyte.py:L36)
- **global-mutation**: DRIVER_CACHE = 'none' (src/nova/virt/libvirt/volume/quobyte.py:L37)
- **global-mutation**: DRIVER_IO = 'native' (src/nova/virt/libvirt/volume/quobyte.py:L38)
- **global-mutation**: VALID_SYSD_STATES = ["starting", "running", "degraded"] (src/nova/virt/libvirt/volume/quobyte.py:L39)
- **global-mutation**: SYSTEMCTL_CHECK_PATH = "/run/systemd/system" (src/nova/virt/libvirt/volume/quobyte.py:L40)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/virt/libvirt/volume/quobyte.py:L27)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.systemd_run_qb_mount(volume, mnt_base, (src/nova/virt/libvirt/volume/quobyte.py:L81)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unprivileged_qb_mount(volume, mnt_base, (src/nova/virt/libvirt/volume/quobyte.py:L87)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.umount(mnt_base) (src/nova/virt/libvirt/volume/quobyte.py:L96)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unprivileged_umount(mnt_base) (src/nova/virt/libvirt/volume/quobyte.py:L98)

