# src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py

## Overview

This file implements the `test_vzstorage` module, defining 1 class, 1 function, 7 methods, 7 imports, 2 side effects.

Lines: total 120, code 88, comment 12, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtVZStorageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L24–L120` |
| `LibvirtVZStorageTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L27–L32` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L34–L37` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver_opts_negative` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L39–L51` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver_share_fmt_neg` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L53–L68` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver_connect` | method | (self, mock_synchronized) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L72–L90` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver_connect.brick_conn_vol` | function | (data) | public | `{'path': 'vstorage://testcluster'}` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L74) | — | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L73–L74` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver_disconnect` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L92–L104` |
| `LibvirtVZStorageTestCase.test_libvirt_vzstorage_driver_get_config` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L106–L120` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L14)
- `os_brick.initiator`: imports `connector` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L16)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L18)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L19)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L20)
- `nova.virt.libvirt.volume`: imports `vzstorage` (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L21)

## Side Effects

- **file-io**: export_mnt_base = os.path.join(self.mnt_base, (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L109)
- **file-io**: file_path = os.path.join(export_mnt_base, self.name) (src/nova/tests/unit/virt/libvirt/volume/test_vzstorage.py:L111)

