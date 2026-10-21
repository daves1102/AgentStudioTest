# src/nova/tests/unit/virt/disk/mount/test_api.py

## Overview

This file implements the `test_api` module, defining 1 class, 4 constants, 1 function, 19 methods, 8 imports, 13 side effects, 3 security surface entries.

Lines: total 212, code 174, comment 14, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PARTITION` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_api.py:L26–L26` |
| `ORIG_DEVICE` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_api.py:L27–L27` |
| `AUTOMAP_PARTITION` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_api.py:L28–L28` |
| `MAP_PARTITION` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_api.py:L29–L29` |
| `MountTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_api.py:L32–L212` |
| `MountTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L33–L36` |
| `MountTestCase._test_map_dev` | method | (self, partition) | private | `mount` (src/nova/tests/unit/virt/disk/mount/test_api.py:L43) | 1/6 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L38–L43` |
| `MountTestCase._exists_effect` | method | (self, data) | private | `exists_effect` (src/nova/tests/unit/virt/disk/mount/test_api.py:L56) | 1/3 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L45–L56` |
| `MountTestCase._exists_effect.exists_effect` | function | (filename) | public | `v.pop(0)` (src/nova/tests/unit/virt/disk/mount/test_api.py:L51); `v` (src/nova/tests/unit/virt/disk/mount/test_api.py:L53) | — | `src/nova/tests/unit/virt/disk/mount/test_api.py:L46–L55` |
| `MountTestCase._check_calls` | method | (self, exists, filenames, trailing=0) | private | not declared | 2/5 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L58–L62` |
| `MountTestCase.test_map_dev_partition_search` | method | (self, exists) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L65–L71` |
| `MountTestCase.test_map_dev_good` | method | (self, mock_create_maps, mock_exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L76–L84` |
| `MountTestCase.test_map_dev_error` | method | (self, mock_create_maps, mock_exists) | public | not declared | 1/10 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L89–L98` |
| `MountTestCase.test_map_dev_error_then_pass` | method | (self, mock_create_maps, mock_exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L103–L111` |
| `MountTestCase.test_map_dev_automap` | method | (self, exists) | public | not declared | 1/10 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L114–L123` |
| `MountTestCase.test_map_dev_else` | method | (self, exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L126–L134` |
| `MountTestCase.test_instance_for_format_raw` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L136–L142` |
| `MountTestCase.test_instance_for_format_qcow2` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L144–L150` |
| `MountTestCase.test_instance_for_format_block` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L152–L158` |
| `MountTestCase.test_instance_for_device_loop` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L160–L167` |
| `MountTestCase.test_instance_for_device_loop_partition` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L169–L176` |
| `MountTestCase.test_instance_for_device_nbd` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L178–L185` |
| `MountTestCase.test_instance_for_device_nbd_partition` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L187–L194` |
| `MountTestCase.test_instance_for_device_block` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L196–L203` |
| `MountTestCase.test_instance_for_device_block_partiton` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_api.py:L205–L212` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/disk/mount/test_api.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/virt/disk/mount/test_api.py:L17)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/virt/disk/mount/test_api.py:L18)
- `nova.virt.disk.mount`: imports `api` (src/nova/tests/unit/virt/disk/mount/test_api.py:L19)
- `nova.virt.disk.mount`: imports `block` (src/nova/tests/unit/virt/disk/mount/test_api.py:L20)
- `nova.virt.disk.mount`: imports `loop` (src/nova/tests/unit/virt/disk/mount/test_api.py:L21)
- `nova.virt.disk.mount`: imports `nbd` (src/nova/tests/unit/virt/disk/mount/test_api.py:L22)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/disk/mount/test_api.py:L23)

## Side Effects

- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_api.py:L64)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_api.py:L73)
- **process-spawn**: @mock.patch('nova.privsep.fs.create_device_maps', (src/nova/tests/unit/virt/disk/mount/test_api.py:L74)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_api.py:L86)
- **process-spawn**: @mock.patch('nova.privsep.fs.create_device_maps', (src/nova/tests/unit/virt/disk/mount/test_api.py:L87)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_api.py:L100)
- **process-spawn**: @mock.patch('nova.privsep.fs.create_device_maps', (src/nova/tests/unit/virt/disk/mount/test_api.py:L101)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_api.py:L113)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_api.py:L125)
- **global-mutation**: PARTITION = 77 (src/nova/tests/unit/virt/disk/mount/test_api.py:L26)
- **global-mutation**: ORIG_DEVICE = "/dev/null" (src/nova/tests/unit/virt/disk/mount/test_api.py:L27)
- **global-mutation**: AUTOMAP_PARTITION = "/dev/nullp77" (src/nova/tests/unit/virt/disk/mount/test_api.py:L28)
- **global-mutation**: MAP_PARTITION = "/dev/mapper/nullp77" (src/nova/tests/unit/virt/disk/mount/test_api.py:L29)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.create_device_maps', (src/nova/tests/unit/virt/disk/mount/test_api.py:L74)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.create_device_maps', (src/nova/tests/unit/virt/disk/mount/test_api.py:L87)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.create_device_maps', (src/nova/tests/unit/virt/disk/mount/test_api.py:L101)

