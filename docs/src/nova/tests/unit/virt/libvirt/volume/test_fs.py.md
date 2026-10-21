# src/nova/tests/unit/virt/libvirt/volume/test_fs.py

## Overview

This file implements the `test_fs` module, defining 2 classs, 5 constants, 4 methods, 5 imports, 6 side effects.

Lines: total 58, code 33, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_MOUNT_POINT` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L23–L23` |
| `FAKE_SHARE` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L24–L24` |
| `NORMALIZED_SHARE` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L25–L25` |
| `HASHED_SHARE` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L26–L26` |
| `FAKE_DEVICE_NAME` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L27–L27` |
| `FakeFileSystemVolumeDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L30–L36` |
| `FakeFileSystemVolumeDriver._get_mount_point_base` | method | (self) | private | `FAKE_MOUNT_POINT` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L33) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L32–L33` |
| `FakeFileSystemVolumeDriver._normalize_export` | method | (self, export) | private | `NORMALIZED_SHARE` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L36) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L35–L36` |
| `LibvirtBaseFileSystemVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L39–L58` |
| `LibvirtBaseFileSystemVolumeDriverTestCase.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L42–L51` |
| `LibvirtBaseFileSystemVolumeDriverTestCase.test_get_device_path` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L53–L58` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L19)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L20)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L21)

## Side Effects

- **file-io**: expected_path = os.path.join(FAKE_MOUNT_POINT, (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L55)
- **global-mutation**: FAKE_MOUNT_POINT = '/var/lib/nova/fake-mount' (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L23)
- **global-mutation**: FAKE_SHARE = 'fake-share' (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L24)
- **global-mutation**: NORMALIZED_SHARE = FAKE_SHARE + '-normalized' (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L25)
- **global-mutation**: HASHED_SHARE = utils.get_hash_str(NORMALIZED_SHARE) (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L26)
- **global-mutation**: FAKE_DEVICE_NAME = 'fake-device' (src/nova/tests/unit/virt/libvirt/volume/test_fs.py:L27)

