# src/nova/tests/unit/fake_instance.py

## Overview

This file implements the `fake_instance` module, defining 4 functions, 5 imports, 2 security surface entries.

Lines: total 167, code 137, comment 15, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_db_secgroups` | function | (instance, names) | exported | `secgroups` (src/nova/tests/unit/fake_instance.py:L42) | 4/19 | `src/nova/tests/unit/fake_instance.py:L24–L42` |
| `fake_db_instance` | function | (**updates) | exported | `db_instance` (src/nova/tests/unit/fake_instance.py:L103) | 10/55 | `src/nova/tests/unit/fake_instance.py:L45–L103` |
| `fake_instance_obj` | function | (context, obj_instance_class=None, **updates) | exported | `inst` (src/nova/tests/unit/fake_instance.py:L144) | 11/37 | `src/nova/tests/unit/fake_instance.py:L106–L144` |
| `fake_fault_obj` | function | (context, instance_uuid, code=404, message='HTTPNotFound', details='Stock details for test', **updates) | exported | `objects.InstanceFault._from_db_object(context, objects.InstanceFault(), fault)` (src/nova/tests/unit/fake_instance.py:L165) | 2/21 | `src/nova/tests/unit/fake_instance.py:L147–L167` |

## Dependencies

- `import datetime` (src/nova/tests/unit/fake_instance.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/fake_instance.py:L17)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/fake_instance.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/fake_instance.py:L20)
- `nova.objects`: imports `fields` (src/nova/tests/unit/fake_instance.py:L21)

## Security Surface

- **sink** (`db-write`): db_instance.update(updates) (src/nova/tests/unit/fake_instance.py:L97)
- **sink** (`db-write`): fault.update(updates) (src/nova/tests/unit/fake_instance.py:L164)

