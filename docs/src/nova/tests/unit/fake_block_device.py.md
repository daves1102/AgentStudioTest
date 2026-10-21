# src/nova/tests/unit/fake_block_device.py

## Overview

This file implements the `fake_block_device` module, defining 1 class, 2 functions, 1 method, 4 imports, 1 security surface entry.

Lines: total 61, code 35, comment 15, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_bdm_object` | function | (context, bdm_dict) | exported | `objects.BlockDeviceMapping._from_db_object( context, objects.BlockDeviceMapping(), FakeDbBlockDeviceDict(bdm_dict.copy()))` (src/nova/tests/unit/fake_block_device.py:L31) | 1/4 | `src/nova/tests/unit/fake_block_device.py:L23–L33` |
| `FakeDbBlockDeviceDict` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_block_device.py:L36–L57` |
| `FakeDbBlockDeviceDict.__init__` | method | (self, bdm_dict=None, anon=False, **kwargs) | public | not declared | 3/18 | `src/nova/tests/unit/fake_block_device.py:L39–L57` |
| `AnonFakeDbBlockDeviceDict` | function | (bdm_dict, **kwargs) | exported | `FakeDbBlockDeviceDict(bdm_dict=bdm_dict, anon=True, **kwargs)` (src/nova/tests/unit/fake_block_device.py:L61) | 1/2 | `src/nova/tests/unit/fake_block_device.py:L60–L61` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/fake_block_device.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/fake_block_device.py:L17)
- `nova`: imports `block_device` (src/nova/tests/unit/fake_block_device.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/fake_block_device.py:L20)

## Security Surface

- **sink** (`db-write`): self.update(fake_db_fields) (src/nova/tests/unit/fake_block_device.py:L57)

