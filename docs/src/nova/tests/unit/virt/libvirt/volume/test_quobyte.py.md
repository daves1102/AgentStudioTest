# src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py

## Overview

This file implements the `test_quobyte` module, defining 2 classs, 1 constant, 6 functions, 25 methods, 13 imports, 25 side effects, 7 security surface entries.

Lines: total 509, code 404, comment 15, blank 90

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuobyteTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L36–L321` |
| `QuobyteTestCase.TEST_MNT_POINT` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L39–L39` |
| `QuobyteTestCase.assertRaisesAndMessageMatches` | method | (self, excClass, msg, callableObj, *args, **kwargs) | public | not declared | 3/13 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L41–L56` |
| `QuobyteTestCase.get_mock_partitions` | method | (self) | public | `[mypart]` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L62) | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L58–L62` |
| `QuobyteTestCase.test_quobyte_is_systemd_ok` | method | (self, value, mock_execute, mock_proc) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L67–L75` |
| `QuobyteTestCase.test_quobyte_is_systemd_not` | method | (self, mock_exists, mock_proc) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L79–L83` |
| `QuobyteTestCase.test_quobyte_is_systemd_invalid_state` | method | (self, mock_exists, mock_execute, mock_proc) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L88–L99` |
| `QuobyteTestCase.test_quobyte_mount_volume_not_systemd` | method | (self, cfg_file, mock_mount, mock_ensure_tree) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L104–L117` |
| `QuobyteTestCase.test_quobyte_mount_volume_systemd` | method | (self, cfg_file, mock_ensure_tree, mock_privsep_sysdr) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L122–L135` |
| `QuobyteTestCase.test_quobyte_mount_volume_fails` | method | (self, mock_mount, mock_ensure_tree) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L140–L150` |
| `QuobyteTestCase.test_quobyte_umount_volume_non_sysd` | method | (self, mock_lv_umount) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L153–L162` |
| `QuobyteTestCase.test_quobyte_umount_volume_sysd` | method | (self, mock_lv_umount) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L165–L174` |
| `QuobyteTestCase.test_quobyte_umount_volume_warns` | method | (self, mock_execute, mock_debug) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L178–L195` |
| `QuobyteTestCase.test_quobyte_umount_volume_warns.exec_side_effect` | function | (*cmd, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L185–L188` |
| `QuobyteTestCase.test_quobyte_umount_volume_fails` | method | (self, mock_unmount, mock_exception) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L200–L213` |
| `QuobyteTestCase.test_validate_volume_all_good_prefix_val` | method | (self, stat_mock, part_mock) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L217–L232` |
| `QuobyteTestCase.test_validate_volume_all_good_prefix_val.statMockCall` | function | (*args) | public | `stat_result` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L225); `os.stat(args)` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L226) | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L221–L226` |
| `QuobyteTestCase.test_validate_volume_all_good_fs_type` | method | (self, stat_mock, part_mock) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L236–L253` |
| `QuobyteTestCase.test_validate_volume_all_good_fs_type.statMockCall` | function | (*args) | public | `stat_result` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L246); `os.stat(args)` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L247) | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L242–L247` |
| `QuobyteTestCase.test_validate_volume_mount_not_working` | method | (self, stat_mock, part_mock) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L257–L271` |
| `QuobyteTestCase.test_validate_volume_mount_not_working.statMockCall` | function | (*args) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L261–L263` |
| `QuobyteTestCase.test_validate_volume_no_mtab_entry` | method | (self, part_mock) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L274–L284` |
| `QuobyteTestCase.test_validate_volume_wrong_mount_type` | method | (self, part_mock) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L287–L301` |
| `QuobyteTestCase.test_validate_volume_stale_mount` | method | (self, part_mock, stat_mock) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L305–L321` |
| `QuobyteTestCase.test_validate_volume_stale_mount.statMockCall` | function | (*args) | public | `stat_result` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L312); `os.stat(args)` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L313) | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L308–L313` |
| `LibvirtQuobyteVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L324–L509` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_mount` | method | (self, mock_is_mounted, mock_mount_volume, mock_validate_volume, mock_umount_volume) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L332–L365` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_umount` | method | (self, mock_umount_volume, mock_validate_volume) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L369–L395` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_already_mounted` | method | (self, mock_is_mounted, mock_umount_volume, mock_validate_volume) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L400–L428` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_qcow2` | method | (self, mock_mount_volume, mock_validate_volume, mock_umount) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L433–L467` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_mount_non_quobyte_volume` | method | (self, mock_is_mounted) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L470–L491` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_mount_non_quobyte_volume.exe_side_effect` | function | (*cmd, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L481–L483` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_normalize_export_with_protocol` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L493–L500` |
| `LibvirtQuobyteVolumeDriverTestCase.test_libvirt_quobyte_driver_normalize_export_without_protocol` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L502–L509` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L17)
- `import traceback` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L19)
- `import ddt` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L21)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L22)
- `oslo_utils`: imports `fileutils` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L23)
- `import psutil` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L24)
- `nova`: imports `exception as nova_exception` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L27)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L28)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L29)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L30)
- `nova.virt.libvirt.volume`: imports `quobyte` (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L31)

## Side Effects

- **process-spawn**: @mock.patch('nova.privsep.libvirt.unprivileged_qb_mount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L103)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L108)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.systemd_run_qb_mount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L120)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L126)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.unprivileged_qb_mount', (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L138)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L143)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.unprivileged_umount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L152)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L156)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.umount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L164)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L168)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.umount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L177)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L181)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.umount', (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L198)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L203)
- **syscall**: def test_validate_volume_stale_mount(self, part_mock, stat_mock): (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L305)
- **syscall**: def test_libvirt_quobyte_driver_mount(self, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L332)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L344)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L346)
- **syscall**: def test_libvirt_quobyte_driver_umount(self, mock_umount_volume, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L369)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L377)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L379)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L411)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L413)
- **file-io**: export_mnt_base = os.path.join(mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L447)
- **global-mutation**: TEST_MNT_POINT = mock.sentinel.TEST_MNT_POINT (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L39)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.unprivileged_qb_mount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L103)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.systemd_run_qb_mount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L120)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.unprivileged_qb_mount', (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L138)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.unprivileged_umount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L152)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.umount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L164)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.umount') (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L177)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.umount', (src/nova/tests/unit/virt/libvirt/volume/test_quobyte.py:L198)

## Notes

- KB `sideEffects` entries at L305, L332, L369 have targets that appear to be code fragments rather than resource paths; documented as recorded.

