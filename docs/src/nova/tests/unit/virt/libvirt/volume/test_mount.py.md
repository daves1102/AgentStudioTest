# src/nova/tests/unit/virt/libvirt/volume/test_mount.py

## Overview

This file implements the `test_mount` module, defining 5 classs, 1 classmethod, 1 constant, 1 field, 12 functions, 29 methods, 1 staticmethod, 14 imports, 45 side effects, 3 security surface entries.

Lines: total 672, code 439, comment 105, blank 128

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MAX_WAIT` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L38–L38` |
| `ThreadController` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L41–L169` |
| `ThreadController.all_threads` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L65–L65` |
| `ThreadController.__init__` | method | (self, fn) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L67–L101` |
| `ThreadController.__init__.deferred_start` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L91–L97` |
| `ThreadController.current` | method | (cls) | public | `cls.all_threads.get(threading.current_thread())` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L105) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L104–L105` |
| `ThreadController._ensure_running` | method | (self) | private | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L107–L110` |
| `ThreadController.waitpoint` | method | (self, name) | public | not declared | 2/11 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L112–L124` |
| `ThreadController.runto` | method | (self, name) | public | not declared | 3/10 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L126–L146` |
| `ThreadController.start` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L148–L152` |
| `ThreadController.finish` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L154–L169` |
| `MountFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L172–L202` |
| `MountFixture.__init__` | method | (self, test) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L173–L178` |
| `MountFixture.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L180–L193` |
| `MountFixture._fake_mount` | method | (self, fstype, export, mountpoint, options) | private | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L195–L196` |
| `MountFixture._fake_umount` | method | (self, mountpoint) | private | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L198–L199` |
| `MountFixture._fake_ismount` | method | (self, mountpoint) | private | `mountpoint in self.mounts` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L202) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L201–L202` |
| `HostMountStateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L205–L607` |
| `HostMountStateTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L206–L209` |
| `HostMountStateTestCase.test_init` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L211–L261` |
| `HostMountStateTestCase.test_init.fake_disk` | function | (disk) | public | `libvirt_disk` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L218) | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L214–L218` |
| `HostMountStateTestCase.test_init.mock_guest` | function | (uuid, disks) | public | `guest` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L224) | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L220–L224` |
| `HostMountStateTestCase._get_clean_hostmountstate` | method | — | private | `mount._HostMountState(host, 0)` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L269) | 1/4 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L264–L269` |
| `HostMountStateTestCase._sentinel_mount` | method | (self, m, vol, mountpoint=mock.sentinel.mountpoint, instance=None) | private | not declared | 2/8 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L271–L279` |
| `HostMountStateTestCase._sentinel_umount` | method | (self, m, vol, mountpoint=mock.sentinel.mountpoint, instance=mock.sentinel.instance) | private | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L281–L283` |
| `HostMountStateTestCase.test_mount_umount` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L285–L328` |
| `HostMountStateTestCase.test_mount_umount_multi_attach` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L330–L359` |
| `HostMountStateTestCase.test_mount_concurrent` | method | (self) | public | not declared | 2/72 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L361–L489` |
| `HostMountStateTestCase.test_mount_concurrent.mount_a` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L376–L380` |
| `HostMountStateTestCase.test_mount_concurrent.mount_b` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L382–L385` |
| `HostMountStateTestCase.test_mount_concurrent.mount_c` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L387–L388` |
| `HostMountStateTestCase.test_mount_concurrent.mount_d` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L390–L391` |
| `HostMountStateTestCase.test_mount_concurrent.trap_mount` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L398–L402` |
| `HostMountStateTestCase.test_mount_concurrent.trap_umount` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L404–L408` |
| `HostMountStateTestCase.test_mount_concurrent_no_interfere` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L491–L532` |
| `HostMountStateTestCase.test_mount_concurrent_no_interfere.mount_a` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L496–L502` |
| `HostMountStateTestCase.test_mount_concurrent_no_interfere.mount_b` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L504–L509` |
| `HostMountStateTestCase.test_mount_after_failed_umount` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L534–L569` |
| `HostMountStateTestCase.test_umount_log_failure` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L572–L581` |
| `HostMountStateTestCase.test_mount_failure` | method | (self, mock_log_exc) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L584–L607` |
| `MountManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L610–L672` |
| `MountManagerTestCase.FakeHostMountState` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L611–L618` |
| `MountManagerTestCase.FakeHostMountState.__init__` | method | (self, host, generation) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L612–L618` |
| `MountManagerTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L620–L628` |
| `MountManagerTestCase._get_state` | method | (self) | private | `state` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L632) | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L630–L632` |
| `MountManagerTestCase.test_host_up_down` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L634–L641` |
| `MountManagerTestCase.test_host_up_waits_for_completion` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L643–L672` |
| `MountManagerTestCase.test_host_up_waits_for_completion.txn` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L646–L648` |
| `ThreadController.current` | classmethod | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L103–L105` |
| `HostMountStateTestCase._get_clean_hostmountstate` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L263–L269` |

## Dependencies

- `import os.path` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L15)
- `import threading` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L16)
- `import time` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L18)
- `import fixtures` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L20)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L25)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L26)
- `nova.virt.libvirt`: imports `config as libvirt_config` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L27)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L28)
- `nova.virt.libvirt`: imports `host as libvirt_host` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L29)
- `nova.virt.libvirt.volume`: imports `mount` (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L30)

## Side Effects

- **process-spawn**: 'nova.privsep.fs.mount', side_effect=self._fake_mount)).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L184)
- **process-spawn**: 'nova.privsep.fs.umount', side_effect=self._fake_umount)).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L186)
- **file-io**: 'os.path.ismount', side_effect=self._fake_ismount)).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L188)
- **file-io**: 'oslo_utils.fileutils.ensure_tree')).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L191)
- **process-spawn**: 'nova.privsep.path.rmdir')).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L193)
- **syscall**: def _fake_mount(self, fstype, export, mountpoint, options): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L195)
- **syscall**: def _fake_umount(self, mountpoint): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L198)
- **syscall**: def _fake_ismount(self, mountpoint): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L201)
- **file-io**: libvirt_disk.source_path = os.path.join(*disk[1]) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L217)
- **syscall**: def _sentinel_mount(self, m, vol, mountpoint=mock.sentinel.mountpoint, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L271)
- **syscall**: m.mount(mock.sentinel.fstype, mock.sentinel.export, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L277)
- **syscall**: def _sentinel_umount(self, m, vol, mountpoint=mock.sentinel.mountpoint, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L281)
- **syscall**: m.umount(vol, mountpoint, instance) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L283)
- **syscall**: def test_mount_umount(self): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L285)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L291)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_b) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L300)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L309)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_b) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L318)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a, instance=instance_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L341)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a, instance=instance_b) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L349)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a, instance=instance_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L353)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a, instance=instance_b) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L357)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L378)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L380)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_b) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L384)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_b) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L385)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_c) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L388)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_d) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L391)
- **syscall**: def trap_mount(*args, **kwargs): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L398)
- **syscall**: self.mountfixture._fake_mount(*args, **kwargs) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L401)
- **syscall**: def trap_umount(*args, **kwargs): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L404)
- **syscall**: self.mountfixture._fake_umount(*args, **kwargs) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L407)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L498)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L501)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L506)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol, (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L508)
- **syscall**: def test_mount_after_failed_umount(self): (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L534)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L543)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L551)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L560)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L567)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L578)
- **syscall**: self._sentinel_umount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L579)
- **syscall**: self._sentinel_mount(m, mock.sentinel.vol_a) (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L600)
- **global-mutation**: MAX_WAIT = 2 (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L38)

## Security Surface

- **privilege** (`privsep-entrypoint`): 'nova.privsep.fs.mount', side_effect=self._fake_mount)).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L184)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.fs.umount', side_effect=self._fake_umount)).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L186)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.path.rmdir')).mock (src/nova/tests/unit/virt/libvirt/volume/test_mount.py:L193)

## Notes

- KB `sideEffects` entries at L195, L198, L201, L271, L281, L285, L398, L404, L534 have targets that appear to be code fragments rather than resource paths; documented as recorded.

