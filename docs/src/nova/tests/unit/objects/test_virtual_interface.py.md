# src/nova/tests/unit/objects/test_virtual_interface.py

## Overview

This file implements the `test_virtual_interface` module, defining 6 classs, 13 methods, 1 staticmethod, 1 variable, 5 imports, 3 security surface entries.

Lines: total 191, code 142, comment 15, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_vif` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L24–L35` |
| `_TestVirtualInterface` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L38–L154` |
| `_TestVirtualInterface._compare` | method | (test, db, obj) | private | not declared | 2/3 | `src/nova/tests/unit/objects/test_virtual_interface.py:L40–L42` |
| `_TestVirtualInterface.test_get_by_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_virtual_interface.py:L44–L48` |
| `_TestVirtualInterface.test_get_by_uuid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_virtual_interface.py:L50–L55` |
| `_TestVirtualInterface.test_get_by_address` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_virtual_interface.py:L57–L62` |
| `_TestVirtualInterface.test_get_by_instance_and_network` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_virtual_interface.py:L64–L70` |
| `_TestVirtualInterface.test_create` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_virtual_interface.py:L72–L86` |
| `_TestVirtualInterface.test_create_neutron_styyyyle` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_virtual_interface.py:L88–L104` |
| `_TestVirtualInterface.test_save` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_virtual_interface.py:L106–L121` |
| `_TestVirtualInterface.test_delete_by_instance_uuid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_virtual_interface.py:L123–L128` |
| `_TestVirtualInterface.test_destroy` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_virtual_interface.py:L130–L142` |
| `_TestVirtualInterface.test_obj_make_compatible_pre_1_1` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_virtual_interface.py:L144–L154` |
| `TestVirtualInterfaceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L157–L159` |
| `TestRemoteVirtualInterfaceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L162–L164` |
| `_TestVirtualInterfaceList` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L167–L181` |
| `_TestVirtualInterfaceList.test_get_all` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_virtual_interface.py:L168–L173` |
| `_TestVirtualInterfaceList.test_get_by_instance_uuid` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_virtual_interface.py:L175–L181` |
| `TestVirtualInterfaceList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L184–L186` |
| `TestRemoteVirtualInterfaceList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L189–L191` |
| `_TestVirtualInterface._compare` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/objects/test_virtual_interface.py:L39–L42` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_virtual_interface.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_virtual_interface.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_virtual_interface.py:L19)
- `nova.objects`: imports `virtual_interface as vif_obj` (src/nova/tests/unit/objects/test_virtual_interface.py:L20)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_virtual_interface.py:L21)

## Security Surface

- **sink** (`db-write`): with mock.patch.object(db, 'virtual_interface_update') as update: (src/nova/tests/unit/objects/test_virtual_interface.py:L115)
- **sink** (`db-write`): update.return_value = fake_vif (src/nova/tests/unit/objects/test_virtual_interface.py:L116)
- **sink** (`db-write`): update.assert_called_once_with(self.context, (src/nova/tests/unit/objects/test_virtual_interface.py:L119)

