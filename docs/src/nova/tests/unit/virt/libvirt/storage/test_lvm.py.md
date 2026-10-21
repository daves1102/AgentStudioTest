# src/nova/tests/unit/virt/libvirt/storage/test_lvm.py

## Overview

This file implements the `test_lvm` module, defining 1 class, 1 constant, 1 function, 7 methods, 7 imports, 9 side effects, 7 security surface entries.

Lines: total 128, code 91, comment 18, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L26–L26` |
| `LvmTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L29–L128` |
| `LvmTestCase.test_get_volume_size` | method | (self, mock_blockdev_size) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L31–L34` |
| `LvmTestCase.test_get_volume_size_not_found` | method | (self, mock_blockdev_size) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L40–L42` |
| `LvmTestCase.test_get_volume_size_not_found_file` | method | (self, mock_blockdev_size) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L48–L50` |
| `LvmTestCase.test_get_volume_size_unexpected_error` | method | (self, mock_blockdev_size, mock_path_exists) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L56–L59` |
| `LvmTestCase.test_lvm_clear` | method | (self, mock_clear) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L62–L112` |
| `LvmTestCase.test_lvm_clear.fake_lvm_size` | function | (path) | public | `lvm_size` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L64) | — | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L63–L64` |
| `LvmTestCase.test_lvm_clear_ignore_lvm_not_found` | method | (self, mock_blockdev_size) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L118–L119` |
| `LvmTestCase.test_fail_remove_all_logical_volumes` | method | (self, mock_clear, mock_lvremove) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L124–L128` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L16)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L18)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L19)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L23)
- `nova.virt.libvirt.storage`: imports `lvm` (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L24)

## Side Effects

- **process-spawn**: @mock.patch('nova.privsep.fs.blockdev_size') (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L30)
- **process-spawn**: @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L36)
- **process-spawn**: @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L44)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L52)
- **process-spawn**: @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L53)
- **process-spawn**: @mock.patch('nova.privsep.fs.clear') (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L61)
- **process-spawn**: @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L114)
- **process-spawn**: @mock.patch('nova.privsep.fs.lvremove', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L122)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L26)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.blockdev_size') (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L30)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L36)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L44)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L53)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.clear') (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L61)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.blockdev_size', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L114)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.lvremove', (src/nova/tests/unit/virt/libvirt/storage/test_lvm.py:L122)

