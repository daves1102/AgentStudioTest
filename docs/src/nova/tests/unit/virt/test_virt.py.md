# src/nova/tests/unit/virt/test_virt.py

## Overview

This file implements the `test_virt` module, defining 4 classs, 1 constant, 6 functions, 15 methods, 7 imports, 19 side effects, 7 security surface entries.

Lines: total 326, code 254, comment 19, blank 53

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PROC_MOUNTS_CONTENTS` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt.py:L26–L31` |
| `TestVirtDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt.py:L34–L130` |
| `TestVirtDriver.test_block_device` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/test_virt.py:L35–L83` |
| `TestVirtDriver.test_swap_is_usable` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt.py:L85–L91` |
| `TestVirtDriver.test_image_type_exclude_list` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt.py:L93–L103` |
| `TestVirtDriver.test_block_device_info_get_encrypted_disks` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_virt.py:L105–L130` |
| `FakeMount` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt.py:L133–L157` |
| `FakeMount.__init__` | method | (self, image, mount_dir, partition=None, device=None) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt.py:L134–L140` |
| `FakeMount.do_mount` | method | (self) | public | `True` (src/nova/tests/unit/virt/test_virt.py:L147) | 1/6 | `src/nova/tests/unit/virt/test_virt.py:L142–L147` |
| `FakeMount.do_umount` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt.py:L149–L151` |
| `FakeMount.do_teardown` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt.py:L153–L157` |
| `TestDiskImage` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt.py:L160–L220` |
| `TestDiskImage.mock_proc_mounts` | method | (self, mock_open) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt.py:L161–L163` |
| `TestDiskImage.test_mount` | method | (self, mock_open) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_virt.py:L166–L180` |
| `TestDiskImage.test_mount.fake_instance_for_format` | function | (image, mountdir, partition) | public | `fakemount` (src/nova/tests/unit/virt/test_virt.py:L173) | — | `src/nova/tests/unit/virt/test_virt.py:L172–L173` |
| `TestDiskImage.test_umount` | method | (self, mock_open) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_virt.py:L183–L200` |
| `TestDiskImage.test_umount.fake_instance_for_format` | function | (image, mountdir, partition) | public | `fakemount` (src/nova/tests/unit/virt/test_virt.py:L191) | — | `src/nova/tests/unit/virt/test_virt.py:L190–L191` |
| `TestDiskImage.test_teardown` | method | (self, mock_open) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_virt.py:L203–L220` |
| `TestDiskImage.test_teardown.fake_instance_for_format` | function | (image, mountdir, partition) | public | `fakemount` (src/nova/tests/unit/virt/test_virt.py:L211) | — | `src/nova/tests/unit/virt/test_virt.py:L210–L211` |
| `TestVirtDisk` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt.py:L223–L326` |
| `TestVirtDisk.test_lxc_setup_container` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_virt.py:L224–L241` |
| `TestVirtDisk.test_lxc_setup_container.proc_mounts` | function | (mount_point) | public | `None` (src/nova/tests/unit/virt/test_virt.py:L229) | — | `src/nova/tests/unit/virt/test_virt.py:L228–L229` |
| `TestVirtDisk.test_lxc_setup_container.fake_instance_for_format` | function | (image, mountdir, partition) | public | `FakeMount(image, mountdir, partition)` (src/nova/tests/unit/virt/test_virt.py:L232) | — | `src/nova/tests/unit/virt/test_virt.py:L231–L232` |
| `TestVirtDisk.test_lxc_teardown_container` | method | (self, mock_blockdev_flush, mock_remove_maps, mock_nbd_disconnect, mock_umount, mock_loopremove, mock_exist) | public | not declared | 1/36 | `src/nova/tests/unit/virt/test_virt.py:L249–L301` |
| `TestVirtDisk.test_lxc_teardown_container.proc_mounts` | function | (mount_point) | public | `mount_points[mount_point]` (src/nova/tests/unit/virt/test_virt.py:L260) | — | `src/nova/tests/unit/virt/test_virt.py:L253–L260` |
| `TestVirtDisk.test_lxc_teardown_container_with_namespace_cleaned` | method | (self, mock_nbd_disconnect, mock_loopremove, mock_device_for_path, mock_exists) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_virt.py:L308–L326` |

## Dependencies

- `import io` (src/nova/tests/unit/virt/test_virt.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_virt.py:L17)
- `import os_traits` (src/nova/tests/unit/virt/test_virt.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_virt.py:L21)
- `nova.virt.disk`: imports `api as disk_api` (src/nova/tests/unit/virt/test_virt.py:L22)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/test_virt.py:L23)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/test_virt.py:L24)

## Side Effects

- **syscall**: def do_mount(self): (src/nova/tests/unit/virt/test_virt.py:L142)
- **syscall**: def do_umount(self): (src/nova/tests/unit/virt/test_virt.py:L149)
- **syscall**: def test_mount(self, mock_open): (src/nova/tests/unit/virt/test_virt.py:L166)
- **syscall**: dev = diskimage.mount() (src/nova/tests/unit/virt/test_virt.py:L178)
- **syscall**: def test_umount(self, mock_open): (src/nova/tests/unit/virt/test_virt.py:L183)
- **syscall**: dev = diskimage.mount() (src/nova/tests/unit/virt/test_virt.py:L196)
- **syscall**: diskimage.umount() (src/nova/tests/unit/virt/test_virt.py:L199)
- **syscall**: dev = diskimage.mount() (src/nova/tests/unit/virt/test_virt.py:L216)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/test_virt.py:L234)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/test_virt.py:L243)
- **process-spawn**: @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/test_virt.py:L244)
- **process-spawn**: @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/test_virt.py:L245)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/test_virt.py:L246)
- **process-spawn**: @mock.patch('nova.privsep.fs.remove_device_maps') (src/nova/tests/unit/virt/test_virt.py:L247)
- **process-spawn**: @mock.patch('nova.privsep.fs.blockdev_flush') (src/nova/tests/unit/virt/test_virt.py:L248)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/test_virt.py:L303)
- **process-spawn**: @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/test_virt.py:L306)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/test_virt.py:L307)
- **global-mutation**: PROC_MOUNTS_CONTENTS = """rootfs / rootfs rw 0 0 (src/nova/tests/unit/virt/test_virt.py:L26)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/test_virt.py:L244)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/test_virt.py:L245)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/test_virt.py:L246)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.remove_device_maps') (src/nova/tests/unit/virt/test_virt.py:L247)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.blockdev_flush') (src/nova/tests/unit/virt/test_virt.py:L248)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/test_virt.py:L306)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/test_virt.py:L307)

## Notes

- KB `sideEffects` entries at L142, L149, L166, L183 have targets that appear to be code fragments rather than resource paths; documented as recorded.

