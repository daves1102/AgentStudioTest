# src/nova/tests/unit/virt/test_images.py

## Overview

This file implements the `test_images` module, defining 1 class, 22 methods, 10 imports, 10 side effects, 7 security surface entries.

Lines: total 392, code 318, comment 42, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QemuTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_images.py:L29–L392` |
| `QemuTestCase.test_qemu_info_with_bad_path` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_images.py:L30–L33` |
| `QemuTestCase.test_qemu_info_with_errors` | method | (self, path_exists, mock_exec) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_images.py:L37–L43` |
| `QemuTestCase.test_qemu_info_with_no_errors` | method | (self, path_exists, utils_execute) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_images.py:L48–L51` |
| `QemuTestCase.test_qemu_info_with_rbd_path` | method | (self, utils_execute) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_images.py:L55–L59` |
| `QemuTestCase.test_convert_image_with_errors` | method | (self, mocked_execute, mock_direct_io, mock_disk_op_sema) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_images.py:L65–L73` |
| `QemuTestCase.test_convert_image_with_prlimit_fail` | method | (self, path, mocked_execute) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_images.py:L77–L83` |
| `QemuTestCase.test_qemu_img_info_with_disk_not_found` | method | (self, exists, mocked_execute) | public | not declared | 1/12 | `src/nova/tests/unit/virt/test_images.py:L87–L101` |
| `QemuTestCase.test_fetch_to_raw_errors` | method | (self, convert_image, qemu_img_info, fetch, mock_detect, glance) | public | not declared | 1/13 | `src/nova/tests/unit/virt/test_images.py:L109–L121` |
| `QemuTestCase.test_fetch_to_raw_data_file` | method | (self, convert_image, qemu_img_info_fn, fetch, mock_detect, mock_glance) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_images.py:L129–L145` |
| `QemuTestCase.test_fetch_to_raw_from_raw` | method | (self, fetch, qemu_img_info_fn, mock_rename, mock_glance, mock_detect) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_images.py:L152–L169` |
| `QemuTestCase.test_convert_image_with_direct_io_support` | method | (self, mock_execute, mock_direct_io, mock_disk_op_sema) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_images.py:L174–L182` |
| `QemuTestCase.test_convert_image_without_direct_io_support` | method | (self, mock_execute, mock_direct_io, mock_disk_op_sema) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_images.py:L187–L195` |
| `QemuTestCase.test_convert_image_vmdk_allowed_list_checking` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/test_images.py:L197–L224` |
| `QemuTestCase.test_fetch_checks_vmdk_rules` | method | (self, mock_info, mock_fetch, mock_detect, mock_glance) | public | not declared | 1/17 | `src/nova/tests/unit/virt/test_images.py:L230–L246` |
| `QemuTestCase.test_fetch_iso_is_raw` | method | (self, mock_info, mock_fetch, mock_detect_file_format, mock_gi, mock_glance, mock_rename) | public | not declared | 1/20 | `src/nova/tests/unit/virt/test_images.py:L254–L278` |
| `QemuTestCase.test_fetch_to_raw_inspector` | method | (self, fetch, qemu_img_info, mock_detect, mock_glance) | public | not declared | 1/26 | `src/nova/tests/unit/virt/test_images.py:L284–L317` |
| `QemuTestCase.test_fetch_to_raw_inspector_disabled` | method | (self, fetch, qemu_img_info, mock_gi, mock_glance) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_images.py:L323–L334` |
| `QemuTestCase.test_fetch_inspect_ami` | method | (self, detect, imginfo, glance) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_images.py:L339–L345` |
| `QemuTestCase.test_fetch_inspect_aki` | method | (self, detect, imginfo, glance) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_images.py:L350–L356` |
| `QemuTestCase.test_fetch_inspect_ari` | method | (self, detect, imginfo, glance) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_images.py:L361–L367` |
| `QemuTestCase.test_fetch_inspect_unknown_format` | method | (self, imginfo, glance) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_images.py:L371–L376` |
| `QemuTestCase.test_fetch_inspect_disagrees_qemu` | method | (self, mock_detect, imginfo, glance) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_images.py:L381–L392` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/test_images.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_images.py:L16)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/test_images.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/virt/test_images.py:L19)
- `oslo_utils`: imports `imageutils` (src/nova/tests/unit/virt/test_images.py:L20)
- `oslo_utils.imageutils`: imports `format_inspector` (src/nova/tests/unit/virt/test_images.py:L21)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/virt/test_images.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/virt/test_images.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_images.py:L25)
- `nova.virt`: imports `images` (src/nova/tests/unit/virt/test_images.py:L26)

## Side Effects

- **process-spawn**: @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info', (src/nova/tests/unit/virt/test_images.py:L46)
- **process-spawn**: @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info', (src/nova/tests/unit/virt/test_images.py:L53)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/test_images.py:L62)
- **file-io**: """Tests that the initial os.path.exists check passes but the qemu-img (src/nova/tests/unit/virt/test_images.py:L88)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/test_images.py:L172)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=False) (src/nova/tests/unit/virt/test_images.py:L185)
- **process-spawn**: @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info') (src/nova/tests/unit/virt/test_images.py:L229)
- **file-io**: with mock.patch('os.path.exists', return_value=True): (src/nova/tests/unit/virt/test_images.py:L243)
- **process-spawn**: @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info') (src/nova/tests/unit/virt/test_images.py:L253)
- **file-io**: with mock.patch('os.path.exists', return_value=True): (src/nova/tests/unit/virt/test_images.py:L271)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info', (src/nova/tests/unit/virt/test_images.py:L46)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info', (src/nova/tests/unit/virt/test_images.py:L53)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/test_images.py:L62)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/test_images.py:L172)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=False) (src/nova/tests/unit/virt/test_images.py:L185)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info') (src/nova/tests/unit/virt/test_images.py:L229)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.unprivileged_qemu_img_info') (src/nova/tests/unit/virt/test_images.py:L253)

