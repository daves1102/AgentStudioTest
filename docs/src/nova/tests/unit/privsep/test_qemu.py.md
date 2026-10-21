# src/nova/tests/unit/privsep/test_qemu.py

## Overview

This file implements the `test_qemu` module, defining 1 class, 11 methods, 7 imports, 22 side effects, 15 security surface entries.

Lines: total 228, code 174, comment 26, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QemuTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_qemu.py:L28–L228` |
| `QemuTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_qemu.py:L31–L33` |
| `QemuTestCase._test_convert_image` | method | (self, meth, mock_supports_direct_io, mock_execute) | private | not declared | 1/15 | `src/nova/tests/unit/privsep/test_qemu.py:L37–L53` |
| `QemuTestCase.test_convert_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/privsep/test_qemu.py:L55–L56` |
| `QemuTestCase.test_convert_image_unprivileged` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/privsep/test_qemu.py:L58–L59` |
| `QemuTestCase.test_convert_image_encrypted_source_to_unencrypted_dest` | method | (self, in_format, out_format, mock_tempfile, mock_execute) | public | not declared | 2/18 | `src/nova/tests/unit/privsep/test_qemu.py:L69–L90` |
| `QemuTestCase.test_convert_image_unencrypted_source_to_encrypted_dest` | method | (self, in_format, out_format, mock_tempfile, mock_execute) | public | not declared | 3/30 | `src/nova/tests/unit/privsep/test_qemu.py:L100–L135` |
| `QemuTestCase.test_convert_image_encrypted_source_and_dest` | method | (self, in_format, out_format, mock_tempfile, mock_execute) | public | not declared | 4/40 | `src/nova/tests/unit/privsep/test_qemu.py:L145–L189` |
| `QemuTestCase._test_qemu_img_info` | method | (self, method, mock_isdir, mock_execute) | private | `mock_execute.call_args` (src/nova/tests/unit/privsep/test_qemu.py:L208) | 1/13 | `src/nova/tests/unit/privsep/test_qemu.py:L193–L208` |
| `QemuTestCase.test_privileged_qemu_img_info` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/privsep/test_qemu.py:L210–L211` |
| `QemuTestCase.test_unprivileged_qemu_img_info` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/privsep/test_qemu.py:L213–L214` |
| `QemuTestCase.test_qemu_img_info_limits_config` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/privsep/test_qemu.py:L216–L228` |

## Dependencies

- `import importlib` (src/nova/tests/unit/privsep/test_qemu.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_qemu.py:L17)
- `import ddt` (src/nova/tests/unit/privsep/test_qemu.py:L19)
- `oslo_utils`: imports `units` (src/nova/tests/unit/privsep/test_qemu.py:L20)
- `import nova.privsep.qemu` (src/nova/tests/unit/privsep/test_qemu.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_qemu.py:L23)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/privsep/test_qemu.py:L24)

## Side Effects

- **process-spawn**: import nova.privsep.qemu (src/nova/tests/unit/privsep/test_qemu.py:L22)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io') (src/nova/tests/unit/privsep/test_qemu.py:L36)
- **process-spawn**: self._test_convert_image(nova.privsep.qemu.convert_image) (src/nova/tests/unit/privsep/test_qemu.py:L56)
- **process-spawn**: self._test_convert_image(nova.privsep.qemu.unprivileged_convert_image) (src/nova/tests/unit/privsep/test_qemu.py:L59)
- **file-io**: @mock.patch('tempfile.NamedTemporaryFile') (src/nova/tests/unit/privsep/test_qemu.py:L62)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/privsep/test_qemu.py:L63)
- **file-io**: mock_tempfile.return_value.__enter__.return_value = mock_file (src/nova/tests/unit/privsep/test_qemu.py:L75)
- **process-spawn**: nova.privsep.qemu.convert_image( (src/nova/tests/unit/privsep/test_qemu.py:L78)
- **file-io**: @mock.patch('tempfile.NamedTemporaryFile') (src/nova/tests/unit/privsep/test_qemu.py:L93)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/privsep/test_qemu.py:L94)
- **file-io**: mock_tempfile.return_value.__enter__.return_value = mock_file (src/nova/tests/unit/privsep/test_qemu.py:L106)
- **process-spawn**: nova.privsep.qemu.convert_image( (src/nova/tests/unit/privsep/test_qemu.py:L109)
- **file-io**: @mock.patch('tempfile.NamedTemporaryFile') (src/nova/tests/unit/privsep/test_qemu.py:L138)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/privsep/test_qemu.py:L139)
- **file-io**: mock_tempfile.return_value.__enter__.side_effect = [ (src/nova/tests/unit/privsep/test_qemu.py:L154)
- **process-spawn**: nova.privsep.qemu.convert_image( (src/nova/tests/unit/privsep/test_qemu.py:L158)
- **file-io**: @mock.patch('os.path.isdir') (src/nova/tests/unit/privsep/test_qemu.py:L192)
- **process-spawn**: *expected_cmd, prlimit=nova.privsep.qemu.QEMU_IMG_LIMITS) (src/nova/tests/unit/privsep/test_qemu.py:L207)
- **process-spawn**: self._test_qemu_img_info(nova.privsep.qemu.privileged_qemu_img_info) (src/nova/tests/unit/privsep/test_qemu.py:L211)
- **process-spawn**: self._test_qemu_img_info(nova.privsep.qemu.unprivileged_qemu_img_info) (src/nova/tests/unit/privsep/test_qemu.py:L214)
- **process-spawn**: importlib.reload(nova.privsep.qemu) (src/nova/tests/unit/privsep/test_qemu.py:L221)
- **process-spawn**: nova.privsep.qemu.unprivileged_qemu_img_info) (src/nova/tests/unit/privsep/test_qemu.py:L224)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.qemu (src/nova/tests/unit/privsep/test_qemu.py:L22)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io') (src/nova/tests/unit/privsep/test_qemu.py:L36)
- **privilege** (`privsep-entrypoint`): self._test_convert_image(nova.privsep.qemu.convert_image) (src/nova/tests/unit/privsep/test_qemu.py:L56)
- **privilege** (`privsep-entrypoint`): self._test_convert_image(nova.privsep.qemu.unprivileged_convert_image) (src/nova/tests/unit/privsep/test_qemu.py:L59)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/privsep/test_qemu.py:L63)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.convert_image( (src/nova/tests/unit/privsep/test_qemu.py:L78)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/privsep/test_qemu.py:L94)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.convert_image( (src/nova/tests/unit/privsep/test_qemu.py:L109)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/privsep/test_qemu.py:L139)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.convert_image( (src/nova/tests/unit/privsep/test_qemu.py:L158)
- **privilege** (`privsep-entrypoint`): *expected_cmd, prlimit=nova.privsep.qemu.QEMU_IMG_LIMITS) (src/nova/tests/unit/privsep/test_qemu.py:L207)
- **privilege** (`privsep-entrypoint`): self._test_qemu_img_info(nova.privsep.qemu.privileged_qemu_img_info) (src/nova/tests/unit/privsep/test_qemu.py:L211)
- **privilege** (`privsep-entrypoint`): self._test_qemu_img_info(nova.privsep.qemu.unprivileged_qemu_img_info) (src/nova/tests/unit/privsep/test_qemu.py:L214)
- **privilege** (`privsep-entrypoint`): importlib.reload(nova.privsep.qemu) (src/nova/tests/unit/privsep/test_qemu.py:L221)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.unprivileged_qemu_img_info) (src/nova/tests/unit/privsep/test_qemu.py:L224)

