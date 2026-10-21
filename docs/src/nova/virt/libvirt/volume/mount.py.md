# src/nova/virt/libvirt/volume/mount.py

## Overview

This file implements the `mount` module, defining 3 classs, 2 constants, 3 functions, 15 methods, 1 variable, 11 imports, 30 side effects, 5 security surface entries.

Lines: total 423, code 271, comment 66, blank 86

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/mount.py:L29–L29` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/mount.py:L30–L30` |
| `_HostMountStateManager` | class | — | unexported | not declared | — | `src/nova/virt/libvirt/volume/mount.py:L33–L149` |
| `_HostMountStateManager.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/mount.py:L49–L50` |
| `_HostMountStateManager._reset_state` | method | (self) | private | not declared | 1/5 | `src/nova/virt/libvirt/volume/mount.py:L52–L66` |
| `_HostMountStateManager.get_state` | method | (self) | public | not declared | 3/14 | `src/nova/virt/libvirt/volume/mount.py:L69–L98` |
| `_HostMountStateManager.host_up` | method | (self, host) | public | not declared | 4/12 | `src/nova/virt/libvirt/volume/mount.py:L100–L133` |
| `_HostMountStateManager.host_down` | method | (self) | public | `` (src/nova/virt/libvirt/volume/mount.py:L142) | 2/6 | `src/nova/virt/libvirt/volume/mount.py:L135–L144` |
| `_HostMountStateManager._host_down` | method | (self) | private | not declared | 1/4 | `src/nova/virt/libvirt/volume/mount.py:L146–L149` |
| `_HostMountState` | class | — | unexported | not declared | — | `src/nova/virt/libvirt/volume/mount.py:L152–L395` |
| `_HostMountState._MountPoint` | class | — | private | not declared | — | `src/nova/virt/libvirt/volume/mount.py:L175–L194` |
| `_HostMountState._MountPoint.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/virt/libvirt/volume/mount.py:L178–L185` |
| `_HostMountState._MountPoint.add_attachment` | method | (self, vol_name, instance_uuid) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/mount.py:L187–L188` |
| `_HostMountState._MountPoint.remove_attachment` | method | (self, vol_name, instance_uuid) | public | not declared | 1/2 | `src/nova/virt/libvirt/volume/mount.py:L190–L191` |
| `_HostMountState._MountPoint.in_use` | method | (self) | public | `len(self.attachments) > 0` (src/nova/virt/libvirt/volume/mount.py:L194) | 1/2 | `src/nova/virt/libvirt/volume/mount.py:L193–L194` |
| `_HostMountState.__init__` | method | (self, host, generation) | public | not declared | 5/16 | `src/nova/virt/libvirt/volume/mount.py:L196–L238` |
| `_HostMountState._get_locked` | method | (self, mountpoint) | private | not declared | 3/7 | `src/nova/virt/libvirt/volume/mount.py:L241–L260` |
| `_HostMountState.mount` | method | (self, fstype, export, vol_name, mountpoint, instance, options) | public | not declared | 4/36 | `src/nova/virt/libvirt/volume/mount.py:L262–L337` |
| `_HostMountState.umount` | method | (self, vol_name, mountpoint, instance) | public | `mount.in_use()` (src/nova/virt/libvirt/volume/mount.py:L377) | 5/24 | `src/nova/virt/libvirt/volume/mount.py:L339–L377` |
| `_HostMountState._real_umount` | method | (self, mountpoint) | private | `False` (src/nova/virt/libvirt/volume/mount.py:L393); `True` (src/nova/virt/libvirt/volume/mount.py:L395) | 3/12 | `src/nova/virt/libvirt/volume/mount.py:L379–L395` |
| `__manager__` | variable | — | unexported | not declared | — | `src/nova/virt/libvirt/volume/mount.py:L398–L398` |
| `get_manager` | function | — | exported | `__manager__` (src/nova/virt/libvirt/volume/mount.py:L406) | 1/2 | `src/nova/virt/libvirt/volume/mount.py:L401–L406` |
| `mount` | function | (fstype, export, vol_name, mountpoint, instance, options=None) | exported | not declared | 1/4 | `src/nova/virt/libvirt/volume/mount.py:L409–L415` |
| `umount` | function | (vol_name, mountpoint, instance) | exported | `mount_state.umount(vol_name, mountpoint, instance)` (src/nova/virt/libvirt/volume/mount.py:L423) | 1/3 | `src/nova/virt/libvirt/volume/mount.py:L418–L423` |

## Dependencies

- `import collections` (src/nova/virt/libvirt/volume/mount.py:L15)
- `import contextlib` (src/nova/virt/libvirt/volume/mount.py:L16)
- `import os.path` (src/nova/virt/libvirt/volume/mount.py:L17)
- `import threading` (src/nova/virt/libvirt/volume/mount.py:L18)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/volume/mount.py:L20)
- `oslo_log`: imports `log` (src/nova/virt/libvirt/volume/mount.py:L21)
- `oslo_utils`: imports `fileutils` (src/nova/virt/libvirt/volume/mount.py:L22)
- `import nova.conf` (src/nova/virt/libvirt/volume/mount.py:L24)
- `nova`: imports `exception` (src/nova/virt/libvirt/volume/mount.py:L25)
- `import nova.privsep.fs` (src/nova/virt/libvirt/volume/mount.py:L26)
- `import nova.privsep.path` (src/nova/virt/libvirt/volume/mount.py:L27)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/libvirt/volume/mount.py:L26)
- **process-spawn**: import nova.privsep.path (src/nova/virt/libvirt/volume/mount.py:L27)
- **syscall**: state.mount(...) (src/nova/virt/libvirt/volume/mount.py:L163)
- **file-io**: mountpoint = os.path.dirname(disk.source_path) (src/nova/virt/libvirt/volume/mount.py:L228)
- **file-io**: if not os.path.ismount(mountpoint): (src/nova/virt/libvirt/volume/mount.py:L229)
- **file-io**: name = os.path.basename(disk.source_path) (src/nova/virt/libvirt/volume/mount.py:L232)
- **syscall**: def mount(self, fstype, export, vol_name, mountpoint, instance, options): (src/nova/virt/libvirt/volume/mount.py:L262)
- **syscall**: LOG.debug('_HostMountState.mount(fstype=%(fstype)s, ' (src/nova/virt/libvirt/volume/mount.py:L288)
- **file-io**: if os.path.ismount(mountpoint): (src/nova/virt/libvirt/volume/mount.py:L295)
- **file-io**: fileutils.ensure_tree(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L305)
- **process-spawn**: nova.privsep.fs.mount(fstype, export, mountpoint, options) (src/nova/virt/libvirt/volume/mount.py:L308)
- **file-io**: if os.path.ismount(mountpoint): (src/nova/virt/libvirt/volume/mount.py:L312)
- **syscall**: LOG.debug('_HostMountState.mount() for %(mountpoint)s ' (src/nova/virt/libvirt/volume/mount.py:L334)
- **syscall**: def umount(self, vol_name, mountpoint, instance): (src/nova/virt/libvirt/volume/mount.py:L339)
- **syscall**: LOG.debug('_HostMountState.umount(vol_name=%(vol_name)s, ' (src/nova/virt/libvirt/volume/mount.py:L349)
- **file-io**: mounted = os.path.ismount(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L363)
- **syscall**: mounted = self._real_umount(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L366)
- **syscall**: LOG.debug('_HostMountState.umount() for %(mountpoint)s ' (src/nova/virt/libvirt/volume/mount.py:L372)
- **syscall**: def _real_umount(self, mountpoint): (src/nova/virt/libvirt/volume/mount.py:L379)
- **process-spawn**: nova.privsep.fs.umount(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L386)
- **file-io**: if not os.path.ismount(mountpoint): (src/nova/virt/libvirt/volume/mount.py:L391)
- **process-spawn**: nova.privsep.path.rmdir(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L392)
- **syscall**: def mount(fstype, export, vol_name, mountpoint, instance, options=None): (src/nova/virt/libvirt/volume/mount.py:L409)
- **syscall**: """A convenience wrapper around _HostMountState.mount(), called via the (src/nova/virt/libvirt/volume/mount.py:L410)
- **syscall**: mount_state.mount(fstype, export, vol_name, mountpoint, instance, (src/nova/virt/libvirt/volume/mount.py:L414)
- **syscall**: def umount(vol_name, mountpoint, instance): (src/nova/virt/libvirt/volume/mount.py:L418)
- **syscall**: """A convenience wrapper around _HostMountState.umount(), called via the (src/nova/virt/libvirt/volume/mount.py:L419)
- **syscall**: return mount_state.umount(vol_name, mountpoint, instance) (src/nova/virt/libvirt/volume/mount.py:L423)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/mount.py:L29)
- **global-mutation**: LOG = log.getLogger(__name__) (src/nova/virt/libvirt/volume/mount.py:L30)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/libvirt/volume/mount.py:L26)
- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/virt/libvirt/volume/mount.py:L27)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.mount(fstype, export, mountpoint, options) (src/nova/virt/libvirt/volume/mount.py:L308)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.umount(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L386)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.rmdir(mountpoint) (src/nova/virt/libvirt/volume/mount.py:L392)

## Notes

- KB `sideEffects` entries at L262, L339, L379, L409, L418 have targets that appear to be code fragments rather than resource paths; documented as recorded.

