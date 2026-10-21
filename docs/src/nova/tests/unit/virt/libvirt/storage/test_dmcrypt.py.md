# src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py

## Overview

This file implements the `test_dmcrypt` module, defining 1 class, 7 methods, 5 imports, 6 side effects, 5 security surface entries.

Lines: total 95, code 60, comment 14, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtDmcryptTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L25–L95` |
| `LibvirtDmcryptTestCase.setUp` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L26–L35` |
| `LibvirtDmcryptTestCase.test_create_volume` | method | (self, mock_execute) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L38–L45` |
| `LibvirtDmcryptTestCase.test_create_volume_fail` | method | (self, mock_execute, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L49–L57` |
| `LibvirtDmcryptTestCase.test_delete_volume` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L60–L65` |
| `LibvirtDmcryptTestCase.test_delete_volume_fail` | method | (self, mock_execute, mock_log) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L69–L76` |
| `LibvirtDmcryptTestCase.test_delete_missing_volume` | method | (self, mock_execute, mock_log) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L80–L87` |
| `LibvirtDmcryptTestCase.test_list_volumes` | method | (self, mock_listdir) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L90–L95` |

## Dependencies

- `import binascii` (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L21)
- `nova.virt.libvirt.storage`: imports `dmcrypt` (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L22)

## Side Effects

- **process-spawn**: @mock.patch('nova.privsep.libvirt.dmcrypt_create_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L37)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.dmcrypt_create_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L48)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.dmcrypt_delete_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L59)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.dmcrypt_delete_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L68)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.dmcrypt_delete_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L79)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L89)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.dmcrypt_create_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L37)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.dmcrypt_create_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L48)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.dmcrypt_delete_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L59)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.dmcrypt_delete_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L68)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.dmcrypt_delete_volume') (src/nova/tests/unit/virt/libvirt/storage/test_dmcrypt.py:L79)

