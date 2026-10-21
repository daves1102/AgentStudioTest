# src/nova/tests/unit/test_configdrive2.py

## Overview

This file implements the `test_configdrive2` module, defining 2 classs, 1 constant, 6 methods, 10 imports, 8 side effects, 3 security surface entries.

Lines: total 124, code 86, comment 17, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_configdrive2.py:L30–L30` |
| `FakeInstanceMD` | class | — | exported | not declared | — | `src/nova/tests/unit/test_configdrive2.py:L33–L36` |
| `FakeInstanceMD.metadata_for_config_drive` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_configdrive2.py:L34–L36` |
| `ConfigDriveTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_configdrive2.py:L39–L124` |
| `ConfigDriveTestCase.test_create_configdrive_iso` | method | (self, mock_execute) | public | not declared | 3/22 | `src/nova/tests/unit/test_configdrive2.py:L42–L65` |
| `ConfigDriveTestCase.test_create_configdrive_vfat` | method | (self, mock_umount, mock_mount, mock_mkfs) | public | not declared | 3/16 | `src/nova/tests/unit/test_configdrive2.py:L70–L90` |
| `ConfigDriveTestCase.test_config_drive_required_by_image_property` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_configdrive2.py:L92–L101` |
| `ConfigDriveTestCase.test_config_drive_update_instance_required_by_false` | method | (self, mock_required) | public | not declared | 1/9 | `src/nova/tests/unit/test_configdrive2.py:L104–L113` |
| `ConfigDriveTestCase.test_config_drive_update_instance` | method | (self, mock_required) | public | not declared | 1/8 | `src/nova/tests/unit/test_configdrive2.py:L116–L124` |

## Dependencies

- `import os` (src/nova/tests/unit/test_configdrive2.py:L17)
- `import tempfile` (src/nova/tests/unit/test_configdrive2.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/test_configdrive2.py:L19)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_configdrive2.py:L21)
- `oslo_utils`: imports `fileutils` (src/nova/tests/unit/test_configdrive2.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/test_configdrive2.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/test_configdrive2.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/test_configdrive2.py:L26)
- `nova`: imports `utils` (src/nova/tests/unit/test_configdrive2.py:L27)
- `nova.virt`: imports `configdrive` (src/nova/tests/unit/test_configdrive2.py:L28)

## Side Effects

- **file-io**: (fd, imagefile) = tempfile.mkstemp(prefix='cd_iso_') (src/nova/tests/unit/test_configdrive2.py:L48)
- **file-io**: fileutils.delete_if_exists(imagefile) (src/nova/tests/unit/test_configdrive2.py:L65)
- **process-spawn**: @mock.patch('nova.privsep.fs.unprivileged_mkfs', return_value=None) (src/nova/tests/unit/test_configdrive2.py:L67)
- **process-spawn**: @mock.patch('nova.privsep.fs.mount', return_value=('', '')) (src/nova/tests/unit/test_configdrive2.py:L68)
- **process-spawn**: @mock.patch('nova.privsep.fs.umount', return_value=None) (src/nova/tests/unit/test_configdrive2.py:L69)
- **file-io**: (fd, imagefile) = tempfile.mkstemp(prefix='cd_vfat_') (src/nova/tests/unit/test_configdrive2.py:L76)
- **file-io**: fileutils.delete_if_exists(imagefile) (src/nova/tests/unit/test_configdrive2.py:L90)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/test_configdrive2.py:L30)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.unprivileged_mkfs', return_value=None) (src/nova/tests/unit/test_configdrive2.py:L67)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mount', return_value=('', '')) (src/nova/tests/unit/test_configdrive2.py:L68)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.umount', return_value=None) (src/nova/tests/unit/test_configdrive2.py:L69)

