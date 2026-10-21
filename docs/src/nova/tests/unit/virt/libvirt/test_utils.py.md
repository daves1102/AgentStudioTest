# src/nova/tests/unit/virt/libvirt/test_utils.py

## Overview

This file implements the `test_utils` module, defining 3 classs, 1 constant, 8 functions, 57 methods, 25 imports, 42 side effects, 22 security surface entries.

Lines: total 926, code 773, comment 36, blank 117

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L44–L44` |
| `LibvirtUtilsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L48–L926` |
| `LibvirtUtilsTestCase.test_copy_image_local` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L51–L53` |
| `LibvirtUtilsTestCase.test_copy_image_remote_ssh` | method | (self, mock_rem_fs_remove) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L56–L60` |
| `LibvirtUtilsTestCase.test_copy_image_remote_rsync` | method | (self, mock_rem_fs_remove) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L63–L67` |
| `LibvirtUtilsTestCase.test_disk_type_from_path` | method | (self, mock_exists) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L70–L84` |
| `LibvirtUtilsTestCase.test_disk_type_ploop` | method | (self, mock_isdir, mock_exists) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L88–L93` |
| `LibvirtUtilsTestCase.test_valid_hostname_normal` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L95–L96` |
| `LibvirtUtilsTestCase.test_valid_hostname_ipv4addr` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L98–L99` |
| `LibvirtUtilsTestCase.test_valid_hostname_ipv6addr` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L101–L102` |
| `LibvirtUtilsTestCase.test_valid_hostname_bad` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L104–L105` |
| `LibvirtUtilsTestCase._test_create_image` | method | (self, path, disk_format, disk_size, mock_detect, mock_info, mock_execute, mock_ntf, backing_file=None, encryption=None, safety_check=True) | private | not declared | 7/65 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L111–L185` |
| `LibvirtUtilsTestCase.test_create_image_raw` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L187–L188` |
| `LibvirtUtilsTestCase.test_create_image_qcow2` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L190–L193` |
| `LibvirtUtilsTestCase.test_create_image_backing_file` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L195–L199` |
| `LibvirtUtilsTestCase.test_create_image_base_has_backing_file` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L201–L208` |
| `LibvirtUtilsTestCase.test_create_image_base_has_data_file` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L210–L218` |
| `LibvirtUtilsTestCase.test_create_image_size_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L220–L224` |
| `LibvirtUtilsTestCase.test_create_image_vmdk` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L226–L233` |
| `LibvirtUtilsTestCase.test_create_image_vmdk_invalid_type` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L235–L243` |
| `LibvirtUtilsTestCase.test_create_image_encryption` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L245–L253` |
| `LibvirtUtilsTestCase.test_create_ploop_image` | method | (self, fs_type, default_eph_format, expected_fs_type) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L265–L278` |
| `LibvirtUtilsTestCase.test_copy_image` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L280–L296` |
| `LibvirtUtilsTestCase.test_extract_snapshot_no_directio` | method | (self, mock_execute, mock_direct_io, mock_disk_op_sema) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L301–L319` |
| `LibvirtUtilsTestCase._do_test_extract_snapshot` | method | (self, mock_execute, mock_direct_io, mock_disk_op_sema, src_format='qcow2', dest_format='raw', out_format='raw') | private | not declared | 3/14 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L323–L336` |
| `LibvirtUtilsTestCase.test_extract_snapshot_raw` | method | (self, mock_execute) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L339–L340` |
| `LibvirtUtilsTestCase.test_extract_snapshot_iso` | method | (self, mock_execute) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L343–L344` |
| `LibvirtUtilsTestCase.test_extract_snapshot_qcow2` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L347–L349` |
| `LibvirtUtilsTestCase.test_extract_snapshot_qcow2_and_compression` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L352–L355` |
| `LibvirtUtilsTestCase.test_extract_snapshot_parallels` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L358–L362` |
| `LibvirtUtilsTestCase.test_load_file` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L364–L373` |
| `LibvirtUtilsTestCase.test_file_open` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L375–L385` |
| `LibvirtUtilsTestCase.test_get_fs_info` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L387–L415` |
| `LibvirtUtilsTestCase.test_get_fs_info.FakeStatResult` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L389–L401` |
| `LibvirtUtilsTestCase.test_get_fs_info.FakeStatResult.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L391–L401` |
| `LibvirtUtilsTestCase.test_get_fs_info.fake_statvfs` | function | (path) | public | `FakeStatResult()` (src/nova/tests/unit/virt/libvirt/test_utils.py:L407) | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L405–L407` |
| `LibvirtUtilsTestCase.test_fetch_image` | method | (self, mock_images) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L418–L427` |
| `LibvirtUtilsTestCase.test_fetch_initrd_image` | method | (self, mock_images) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L430–L443` |
| `LibvirtUtilsTestCase.test_fetch_raw_image` | method | (self, mock_convert_image, mock_direct_io, mock_disk_op_sema, mock_detect, mock_glance) | public | not declared | 1/77 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L450–L569` |
| `LibvirtUtilsTestCase.test_fetch_raw_image.fake_rename` | function | (old, new) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L453–L454` |
| `LibvirtUtilsTestCase.test_fetch_raw_image.fake_unlink` | function | (path) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L456–L457` |
| `LibvirtUtilsTestCase.test_fetch_raw_image.fake_rm_on_error` | function | (path, remove=None) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L459–L460` |
| `LibvirtUtilsTestCase.test_fetch_raw_image.fake_qemu_img_info` | function | (path, format=None) | public | `FakeImgInfo()` (src/nova/tests/unit/virt/libvirt/test_utils.py:L482) | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L462–L482` |
| `LibvirtUtilsTestCase.test_fetch_raw_image.fake_qemu_img_info.FakeImgInfo` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L463–L464` |
| `LibvirtUtilsTestCase.test_get_instance_path_at_destination` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L571–L592` |
| `LibvirtUtilsTestCase.test_get_arch` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L594–L598` |
| `LibvirtUtilsTestCase.test_is_mounted` | method | (self) | public | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L600–L656` |
| `LibvirtUtilsTestCase.test_find_disk_file_device` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L658–L678` |
| `LibvirtUtilsTestCase.test_find_disk_block_device` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L680–L700` |
| `LibvirtUtilsTestCase.test_find_disk_rbd` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L702–L724` |
| `LibvirtUtilsTestCase.test_find_disk_lxc` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L726–L745` |
| `LibvirtUtilsTestCase.test_find_disk_parallels` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L747–L767` |
| `LibvirtUtilsTestCase.test_get_machine_type_from_fallbacks` | method | (self, mock_get_arch) | public | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L770–L784` |
| `LibvirtUtilsTestCase.test_get_machine_type_from_conf` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L786–L790` |
| `LibvirtUtilsTestCase.test_get_machine_type_no_conf_or_fallback` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L792–L793` |
| `LibvirtUtilsTestCase.test_get_machine_type_missing_conf_and_fallback` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L795–L798` |
| `LibvirtUtilsTestCase.test_get_machine_type_survives_invalid_conf` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L800–L804` |
| `LibvirtUtilsTestCase.test_get_machine_type_from_image` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L806–L811` |
| `LibvirtUtilsTestCase.test_make_reverse_cpu_traits_mapping` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L813–L815` |
| `LibvirtUtilsTestCase.test_get_flags_by_flavor_specs` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L817–L833` |
| `LibvirtUtilsTestCase.test_save_migrate_vtpm` | method | (self, mock_exists, mock_ensure, mock_move, mock_chown, mock_copy) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L840–L865` |
| `LibvirtUtilsTestCase.test_save_migrate_vtpm._on_execute` | function | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L843–L844` |
| `LibvirtUtilsTestCase.test_save_migrate_vtpm._on_completion` | function | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L846–L847` |
| `LibvirtUtilsTestCase.test_save_migrate_vtpm_not_enabled` | method | (self, mock_exists, mock_copy_image, mock_chown, mock_move) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L871–L885` |
| `LibvirtUtilsTestCase.test_save_migrate_vtpm_not_enabled._dummy` | function | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_utils.py:L874–L875` |
| `LibvirtUtilsTestCase._test_restore_vtpm` | method | (self, exists, mock_isdir, mock_exists, mock_chown, mock_move, mock_makedirs, mock_chmod, mock_getpwnam, mock_getgrnam) | private | not declared | 2/17 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L895–L914` |
| `LibvirtUtilsTestCase.test_restore_vtpm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L916–L917` |
| `LibvirtUtilsTestCase.test_restore_vtpm_not_exist` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L919–L920` |
| `LibvirtUtilsTestCase.test_restore_vtpm_notdir` | method | (self, mock_isdir, mock_exists) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_utils.py:L924–L926` |

## Dependencies

- `import functools` (src/nova/tests/unit/virt/libvirt/test_utils.py:L16)
- `import grp` (src/nova/tests/unit/virt/libvirt/test_utils.py:L17)
- `import os` (src/nova/tests/unit/virt/libvirt/test_utils.py:L18)
- `import pwd` (src/nova/tests/unit/virt/libvirt/test_utils.py:L19)
- `import tempfile` (src/nova/tests/unit/virt/libvirt/test_utils.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_utils.py:L21)
- `import ddt` (src/nova/tests/unit/virt/libvirt/test_utils.py:L23)
- `import os_traits` (src/nova/tests/unit/virt/libvirt/test_utils.py:L24)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/libvirt/test_utils.py:L25)
- `oslo_utils`: imports `fileutils` (src/nova/tests/unit/virt/libvirt/test_utils.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_utils.py:L27)
- `oslo_utils.imageutils`: imports `format_inspector` (src/nova/tests/unit/virt/libvirt/test_utils.py:L28)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/virt/libvirt/test_utils.py:L30)
- `nova`: imports `context` (src/nova/tests/unit/virt/libvirt/test_utils.py:L31)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_utils.py:L32)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_utils.py:L33)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/virt/libvirt/test_utils.py:L34)
- `import nova.privsep.fs` (src/nova/tests/unit/virt/libvirt/test_utils.py:L35)
- `import nova.privsep.qemu` (src/nova/tests/unit/virt/libvirt/test_utils.py:L36)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_utils.py:L37)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_utils.py:L38)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/libvirt/test_utils.py:L39)
- `nova.virt`: imports `images` (src/nova/tests/unit/virt/libvirt/test_utils.py:L40)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/tests/unit/virt/libvirt/test_utils.py:L41)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/unit/virt/libvirt/test_utils.py:L42)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/tests/unit/virt/libvirt/test_utils.py:L35)
- **process-spawn**: import nova.privsep.qemu (src/nova/tests/unit/virt/libvirt/test_utils.py:L36)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L69)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L86)
- **file-io**: @mock.patch('os.path.isdir', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L87)
- **file-io**: @mock.patch('tempfile.NamedTemporaryFile') (src/nova/tests/unit/virt/libvirt/test_utils.py:L107)
- **process-spawn**: 'expected_fs_type': nova.privsep.fs.FS_FORMAT_EXT4}, (src/nova/tests/unit/virt/libvirt/test_utils.py:L261)
- **file-io**: with test.nested(mock.patch('oslo_utils.fileutils.ensure_tree'), (src/nova/tests/unit/virt/libvirt/test_utils.py:L268)
- **process-spawn**: mock.patch('nova.privsep.libvirt.ploop_init') (src/nova/tests/unit/virt/libvirt/test_utils.py:L269)
- **file-io**: dst_fd, dst_path = tempfile.mkstemp() (src/nova/tests/unit/virt/libvirt/test_utils.py:L281)
- **file-io**: src_fd, src_path = tempfile.mkstemp() (src/nova/tests/unit/virt/libvirt/test_utils.py:L285)
- **file-io**: with open(dst_path, 'r') as fp: (src/nova/tests/unit/virt/libvirt/test_utils.py:L291)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=False) (src/nova/tests/unit/virt/libvirt/test_utils.py:L299)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L322)
- **file-io**: dst_fd, dst_path = tempfile.mkstemp() (src/nova/tests/unit/virt/libvirt/test_utils.py:L365)
- **file-io**: with open(dst_path, 'w') as f: (src/nova/tests/unit/virt/libvirt/test_utils.py:L369)
- **file-io**: dst_fd, dst_path = tempfile.mkstemp() (src/nova/tests/unit/virt/libvirt/test_utils.py:L376)
- **file-io**: with open(dst_path, 'w') as f: (src/nova/tests/unit/virt/libvirt/test_utils.py:L380)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L448)
- **process-spawn**: @mock.patch('nova.privsep.qemu.unprivileged_convert_image') (src/nova/tests/unit/virt/libvirt/test_utils.py:L449)
- **file-io**: self.stub_out('oslo_utils.fileutils.delete_if_exists', (src/nova/tests/unit/virt/libvirt/test_utils.py:L488)
- **file-io**: old_rm_path_on_error = fileutils.remove_path_on_error (src/nova/tests/unit/virt/libvirt/test_utils.py:L496)
- **file-io**: self.stub_out('oslo_utils.fileutils.remove_path_on_error', f) (src/nova/tests/unit/virt/libvirt/test_utils.py:L498)
- **file-io**: expected_path = os.path.join(CONF.instances_path, instance['uuid']) (src/nova/tests/unit/virt/libvirt/test_utils.py:L578)
- **file-io**: expected_path = os.path.join(CONF.instances_path, instance['uuid']) (src/nova/tests/unit/virt/libvirt/test_utils.py:L584)
- **file-io**: expected_path = os.path.join(CONF.instances_path, 'fake_relative_path') (src/nova/tests/unit/virt/libvirt/test_utils.py:L591)
- **process-spawn**: @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_utils.py:L836)
- **process-spawn**: @mock.patch('nova.privsep.path.move_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L837)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L838)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L839)
- **process-spawn**: @mock.patch('nova.privsep.path.move_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L867)
- **process-spawn**: @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_utils.py:L868)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/virt/libvirt/test_utils.py:L870)
- **process-spawn**: @mock.patch('nova.privsep.path.chmod') (src/nova/tests/unit/virt/libvirt/test_utils.py:L889)
- **process-spawn**: @mock.patch('nova.privsep.path.makedirs') (src/nova/tests/unit/virt/libvirt/test_utils.py:L890)
- **process-spawn**: @mock.patch('nova.privsep.path.move_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L891)
- **process-spawn**: @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_utils.py:L892)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_utils.py:L893)
- **file-io**: @mock.patch('os.path.isdir') (src/nova/tests/unit/virt/libvirt/test_utils.py:L894)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L922)
- **file-io**: @mock.patch('os.path.isdir', return_value=False) (src/nova/tests/unit/virt/libvirt/test_utils.py:L923)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/libvirt/test_utils.py:L44)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/tests/unit/virt/libvirt/test_utils.py:L35)
- **privilege** (`privsep-entrypoint`): import nova.privsep.qemu (src/nova/tests/unit/virt/libvirt/test_utils.py:L36)
- **privilege** (`privsep-entrypoint`): 'expected_fs_type': nova.privsep.fs.FS_FORMAT_EXT4}, (src/nova/tests/unit/virt/libvirt/test_utils.py:L261)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.libvirt.ploop_init') (src/nova/tests/unit/virt/libvirt/test_utils.py:L269)
- **sink** (`file-write`): with os.fdopen(src_fd, 'w') as fp: (src/nova/tests/unit/virt/libvirt/test_utils.py:L287)
- **sink** (`file-write`): fp.write('canary') (src/nova/tests/unit/virt/libvirt/test_utils.py:L288)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=False) (src/nova/tests/unit/virt/libvirt/test_utils.py:L299)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L322)
- **sink** (`file-write`): with open(dst_path, 'w') as f: (src/nova/tests/unit/virt/libvirt/test_utils.py:L369)
- **sink** (`file-write`): f.write('hello') (src/nova/tests/unit/virt/libvirt/test_utils.py:L370)
- **sink** (`file-write`): with open(dst_path, 'w') as f: (src/nova/tests/unit/virt/libvirt/test_utils.py:L380)
- **sink** (`file-write`): f.write('hello') (src/nova/tests/unit/virt/libvirt/test_utils.py:L381)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_utils.py:L448)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.unprivileged_convert_image') (src/nova/tests/unit/virt/libvirt/test_utils.py:L449)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_utils.py:L836)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.move_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L837)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.move_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L867)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_utils.py:L868)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.chmod') (src/nova/tests/unit/virt/libvirt/test_utils.py:L889)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.makedirs') (src/nova/tests/unit/virt/libvirt/test_utils.py:L890)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.move_tree') (src/nova/tests/unit/virt/libvirt/test_utils.py:L891)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_utils.py:L892)

