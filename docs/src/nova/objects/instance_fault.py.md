# src/nova/objects/instance_fault.py

## Overview

This file implements the `instance_fault` module, defining 2 classs, 3 constants, 2 fields, 5 methods, 1 variable, 6 imports, 3 side effects.

Lines: total 113, code 74, comment 22, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/instance_fault.py:L25–L25` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_fault.py:L27–L30` |
| `InstanceFault` | class | — | exported | not declared | — | `src/nova/objects/instance_fault.py:L35–L83` |
| `InstanceFault.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_fault.py:L40–L40` |
| `InstanceFault.fields` | field | — | public | not declared | — | `src/nova/objects/instance_fault.py:L42–L49` |
| `InstanceFault._from_db_object` | method | (context, fault, db_fault) | private | `fault` (src/nova/objects/instance_fault.py:L58) | 2/6 | `src/nova/objects/instance_fault.py:L52–L58` |
| `InstanceFault.get_latest_for_instance` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(), db_faults[instance_uuid][0])` (src/nova/objects/instance_fault.py:L66) | 3/6 | `src/nova/objects/instance_fault.py:L62–L67` |
| `InstanceFault.create` | method | (self) | public | not declared | 2/14 | `src/nova/objects/instance_fault.py:L70–L83` |
| `InstanceFaultList` | class | — | exported | not declared | — | `src/nova/objects/instance_fault.py:L87–L113` |
| `InstanceFaultList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_fault.py:L92–L92` |
| `InstanceFaultList.fields` | field | — | public | not declared | — | `src/nova/objects/instance_fault.py:L94–L96` |
| `InstanceFaultList.get_latest_by_instance_uuids` | method | (cls, context, instance_uuids) | public | `base.obj_make_list(context, cls(context), db_faultlist)` (src/nova/objects/instance_fault.py:L105) | 1/6 | `src/nova/objects/instance_fault.py:L100–L105` |
| `InstanceFaultList.get_by_instance_uuids` | method | (cls, context, instance_uuids) | public | `base.obj_make_list(context, cls(context), db_faultlist)` (src/nova/objects/instance_fault.py:L113) | 1/5 | `src/nova/objects/instance_fault.py:L109–L113` |

## Dependencies

- `import itertools` (src/nova/objects/instance_fault.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/objects/instance_fault.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/objects/instance_fault.py:L19)
- `nova`: imports `exception` (src/nova/objects/instance_fault.py:L20)
- `nova.objects`: imports `base` (src/nova/objects/instance_fault.py:L21)
- `nova.objects`: imports `fields` (src/nova/objects/instance_fault.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/instance_fault.py:L25)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/instance_fault.py:L40)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/instance_fault.py:L92)

