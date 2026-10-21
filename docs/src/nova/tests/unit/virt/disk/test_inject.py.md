# src/nova/tests/unit/virt/disk/test_inject.py

## Overview

This file implements the `test_inject` module, defining 1 class, 3 functions, 10 methods, 7 imports, 2 security surface entries.

Lines: total 290, code 218, comment 18, blank 54

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VirtDiskTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/test_inject.py:L26–L290` |
| `VirtDiskTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/test_inject.py:L27–L33` |
| `VirtDiskTest.test_inject_data` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/disk/test_inject.py:L35–L50` |
| `VirtDiskTest.test_inject_data_key` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/disk/test_inject.py:L52–L71` |
| `VirtDiskTest.test_inject_data_key_with_selinux` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/disk/test_inject.py:L73–L105` |
| `VirtDiskTest.test_inject_data_key_with_selinux_append_with_newline` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/disk/test_inject.py:L107–L127` |
| `VirtDiskTest.test_inject_net` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/disk/test_inject.py:L129–L143` |
| `VirtDiskTest.test_inject_metadata` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/disk/test_inject.py:L145–L160` |
| `VirtDiskTest.test_inject_admin_password` | method | (self) | public | not declared | 4/50 | `src/nova/tests/unit/virt/disk/test_inject.py:L162–L221` |
| `VirtDiskTest.test_inject_admin_password.fake_salt` | function | — | public | `"1234567890abcdef"` (src/nova/tests/unit/virt/disk/test_inject.py:L167) | — | `src/nova/tests/unit/virt/disk/test_inject.py:L166–L167` |
| `VirtDiskTest.test_inject_files_into_fs` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/disk/test_inject.py:L223–L246` |
| `VirtDiskTest.test_inject_files_into_fs_dir_exists` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/disk/test_inject.py:L248–L290` |
| `VirtDiskTest.test_inject_files_into_fs_dir_exists.fake_has_file` | function | (*args, **kwargs) | public | `True` (src/nova/tests/unit/virt/disk/test_inject.py:L255) | — | `src/nova/tests/unit/virt/disk/test_inject.py:L254–L255` |
| `VirtDiskTest.test_inject_files_into_fs_dir_exists.fake_make_path` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/disk/test_inject.py:L257–L258` |

## Dependencies

- `collections`: imports `OrderedDict` (src/nova/tests/unit/virt/disk/test_inject.py:L15)
- `import fixtures` (src/nova/tests/unit/virt/disk/test_inject.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/virt/disk/test_inject.py:L19)
- `nova.tests.unit.virt.disk.vfs`: imports `fakeguestfs` (src/nova/tests/unit/virt/disk/test_inject.py:L20)
- `nova.virt.disk`: imports `api as diskapi` (src/nova/tests/unit/virt/disk/test_inject.py:L21)
- `nova.virt.disk.vfs`: imports `guestfs as vfsguestfs` (src/nova/tests/unit/virt/disk/test_inject.py:L22)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/disk/test_inject.py:L23)

## Security Surface

- **sink** (`file-write`): vfs.handle.write("/etc/shadow", (src/nova/tests/unit/virt/disk/test_inject.py:L171)
- **sink** (`file-write`): vfs.handle.write("/etc/passwd", (src/nova/tests/unit/virt/disk/test_inject.py:L176)

