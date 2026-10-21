# src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py

## Overview

This file implements the `test_remotefs` module, defining 1 class, 17 methods, 4 imports, 3 side effects, 2 security surface entries.

Lines: total 234, code 192, comment 14, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RemoteFSTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L24–L234` |
| `RemoteFSTestCase._test_mount_share` | method | (self, mock_mount, mock_ensure_tree, already_mounted=False) | private | not declared | 2/16 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L29–L46` |
| `RemoteFSTestCase.test_mount_new_share` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L48–L49` |
| `RemoteFSTestCase.test_mount_already_mounted_share` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L51–L52` |
| `RemoteFSTestCase.test_unmount_share` | method | (self, mock_umount) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L55–L60` |
| `RemoteFSTestCase.test_remove_remote_file_rsync` | method | (self, mock_execute) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L63–L71` |
| `RemoteFSTestCase.test_remove_remote_file_ssh` | method | (self, mock_ssh_execute) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L74–L78` |
| `RemoteFSTestCase.test_remove_remote_dir_rsync` | method | (self, mock_execute) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L81–L94` |
| `RemoteFSTestCase.test_remove_remote_dir_ssh` | method | (self, mock_ssh_execute) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L97–L101` |
| `RemoteFSTestCase.test_create_remote_file_rsync` | method | (self, mock_execute) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L104–L117` |
| `RemoteFSTestCase.test_create_remote_file_ssh` | method | (self, mock_ssh_execute) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L120–L125` |
| `RemoteFSTestCase.test_create_remote_dir_rsync` | method | (self, mock_execute) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L128–L138` |
| `RemoteFSTestCase.test_create_remote_dir_ssh` | method | (self, mock_ssh_execute) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L141–L146` |
| `RemoteFSTestCase.test_remote_copy_file_rsync` | method | (self, mock_execute) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L149–L158` |
| `RemoteFSTestCase.test_remote_copy_file_rsync_without_compression` | method | (self, mock_execute) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L161–L169` |
| `RemoteFSTestCase.test_remote_copy_file_ssh` | method | (self, mock_execute) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L172–L179` |
| `RemoteFSTestCase.test_remote_copy_file_ssh__without_compression` | method | (self, mock_execute) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L182–L189` |
| `RemoteFSTestCase.test_rsync_driver_ipv6` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L191–L234` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L16)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L20)
- `nova.virt.libvirt.volume`: imports `remotefs` (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L21)

## Side Effects

- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L27)
- **process-spawn**: @mock.patch('nova.privsep.fs.mount') (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L28)
- **process-spawn**: @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L54)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mount') (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L28)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.umount') (src/nova/tests/unit/virt/libvirt/volume/test_remotefs.py:L54)

