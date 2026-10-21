# src/nova/tests/unit/virt/disk/test_api.py

## Overview

This file implements the `test_api` module, defining 2 classs, 1 field, 13 methods, 1 staticmethod, 9 imports, 13 side effects, 3 security surface entries.

Lines: total 220, code 163, comment 19, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeMount` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/test_api.py:L29–L40` |
| `FakeMount.device` | field | — | public | not declared | — | `src/nova/tests/unit/virt/disk/test_api.py:L30–L30` |
| `FakeMount.instance_for_format` | method | (image, mountdir, partition) | public | `FakeMount()` (src/nova/tests/unit/virt/disk/test_api.py:L34) | 1/2 | `src/nova/tests/unit/virt/disk/test_api.py:L33–L34` |
| `FakeMount.get_dev` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/test_api.py:L36–L37` |
| `FakeMount.unget_dev` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/disk/test_api.py:L39–L40` |
| `APITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/test_api.py:L43–L220` |
| `APITestCase.test_can_resize_need_fs_type_specified` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/disk/test_api.py:L45–L49` |
| `APITestCase.test_is_image_extendable_raw` | method | (self, mock_exec) | public | not declared | 1/6 | `src/nova/tests/unit/virt/disk/test_api.py:L52–L57` |
| `APITestCase.test_resize2fs_success` | method | (self, mock_exec) | public | not declared | 1/12 | `src/nova/tests/unit/virt/disk/test_api.py:L60–L73` |
| `APITestCase.test_resize2fs_success_as_root` | method | (self, mock_fsck, mock_resize, mock_exec) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/test_api.py:L78–L87` |
| `APITestCase.test_resize2fs_e2fsck_fails` | method | (self, mock_exec) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/test_api.py:L91–L99` |
| `APITestCase.test_extend_qcow_success` | method | (self, mock_exec, mock_inst, mock_resize, mock_extendable, mock_can_resize) | public | not declared | 1/28 | `src/nova/tests/unit/virt/disk/test_api.py:L108–L140` |
| `APITestCase.test_extend_qcow_no_resize` | method | (self, mock_execute, mock_extendable, mock_can_resize_image) | public | not declared | 1/12 | `src/nova/tests/unit/virt/disk/test_api.py:L146–L160` |
| `APITestCase.test_extend_ploop` | method | (self, mock_ploop_resize, mock_can_resize_image) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/test_api.py:L165–L174` |
| `APITestCase.test_extend_raw_success` | method | (self, mock_exec, mock_resize, mock_can_resize) | public | not declared | 1/13 | `src/nova/tests/unit/virt/disk/test_api.py:L180–L194` |
| `APITestCase.test_extend_vmdk_failure` | method | (self, mock_exec, mock_resize, mock_can_resize) | public | not declared | 1/13 | `src/nova/tests/unit/virt/disk/test_api.py:L200–L220` |
| `FakeMount.instance_for_format` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/virt/disk/test_api.py:L32–L34` |

## Dependencies

- `import tempfile` (src/nova/tests/unit/virt/disk/test_api.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/disk/test_api.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/disk/test_api.py:L19)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/disk/test_api.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/virt/disk/test_api.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/virt/disk/test_api.py:L23)
- `nova.virt.disk`: imports `api` (src/nova/tests/unit/virt/disk/test_api.py:L24)
- `nova.virt.disk.mount`: imports `api as mount` (src/nova/tests/unit/virt/disk/test_api.py:L25)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/disk/test_api.py:L26)

## Side Effects

- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L46)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L53)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L61)
- **process-spawn**: @mock.patch('nova.privsep.fs.resize2fs') (src/nova/tests/unit/virt/disk/test_api.py:L76)
- **process-spawn**: @mock.patch('nova.privsep.fs.e2fsck') (src/nova/tests/unit/virt/disk/test_api.py:L77)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L80)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L92)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L110)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L148)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.ploop_resize') (src/nova/tests/unit/virt/disk/test_api.py:L164)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L166)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L182)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/test_api.py:L203)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.resize2fs') (src/nova/tests/unit/virt/disk/test_api.py:L76)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.e2fsck') (src/nova/tests/unit/virt/disk/test_api.py:L77)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.ploop_resize') (src/nova/tests/unit/virt/disk/test_api.py:L164)

