# src/nova/tests/unit/virt/disk/vfs/test_guestfs.py

## Overview

This file implements the `test_guestfs` module, defining 1 class, 28 methods, 1 variable, 9 imports, 1 side effect.

Lines: total 372, code 283, comment 22, blank 67

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `os_uname` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L27–L29` |
| `VirtDiskVFSGuestFSTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L32–L372` |
| `VirtDiskVFSGuestFSTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L33–L47` |
| `VirtDiskVFSGuestFSTest._do_test_appliance_setup_inspect` | method | (self, image, drives, forcetcg) | private | not declared | 3/33 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L49–L86` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_auto` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L88–L90` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_tcg` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L92–L94` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_raw` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L96–L98` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_lvm` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L100–L102` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_rbd` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L104–L111` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_no_root_raises` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L113–L123` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_multi_boots_raises` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L125–L137` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_static_nopart` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L139–L156` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_static_part` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L158–L175` |
| `VirtDiskVFSGuestFSTest.test_makepath` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L177–L188` |
| `VirtDiskVFSGuestFSTest.test_append_file` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L190–L199` |
| `VirtDiskVFSGuestFSTest.test_replace_file` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L201–L210` |
| `VirtDiskVFSGuestFSTest.test_read_file` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L212–L217` |
| `VirtDiskVFSGuestFSTest.test_has_file` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L219–L227` |
| `VirtDiskVFSGuestFSTest.test_set_permissions` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L229–L239` |
| `VirtDiskVFSGuestFSTest.test_set_ownership` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L241–L261` |
| `VirtDiskVFSGuestFSTest.test_set_ownership_not_supported` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L263–L275` |
| `VirtDiskVFSGuestFSTest.test_close_on_error` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L277–L287` |
| `VirtDiskVFSGuestFSTest.test_python_return_dict` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L289–L299` |
| `VirtDiskVFSGuestFSTest.test_setup_debug_disable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L301–L306` |
| `VirtDiskVFSGuestFSTest.test_setup_debug_enabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L308–L314` |
| `VirtDiskVFSGuestFSTest.test_get_format_fs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L316–L321` |
| `VirtDiskVFSGuestFSTest.test_setup_mount` | method | (self, setup_os) | public | not declared | 1/4 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L324–L327` |
| `VirtDiskVFSGuestFSTest.test_setup_mount_false` | method | (self, setup_os) | public | not declared | 1/4 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L330–L333` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_capabilities_fail_with_ubuntu` | method | (self, mock_uname, mock_access) | public | not declared | 1/17 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L338–L355` |
| `VirtDiskVFSGuestFSTest.test_appliance_setup_inspect_capabilities_debug_mode` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L357–L372` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L16)
- `import fixtures` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L21)
- `nova.tests.unit.virt.disk.vfs`: imports `fakeguestfs` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L22)
- `nova`: imports `utils` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L23)
- `nova.virt.disk.vfs`: imports `guestfs as vfsimpl` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L24)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L25)

## Side Effects

- **syscall**: def test_setup_mount(self, setup_os): (src/nova/tests/unit/virt/disk/vfs/test_guestfs.py:L324)

## Notes

- KB `sideEffects` entries at L324 have targets that appear to be code fragments rather than resource paths; documented as recorded.

