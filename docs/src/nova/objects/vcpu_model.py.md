# src/nova/objects/vcpu_model.py

## Overview

This file implements the `vcpu_model` module, defining 2 classs, 2 constants, 2 fields, 5 methods, 1 variable, 4 imports, 2 side effects.

Lines: total 72, code 46, comment 12, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/vcpu_model.py:L19–L22` |
| `VirtCPUModel` | class | — | exported | not declared | — | `src/nova/objects/vcpu_model.py:L26–L59` |
| `VirtCPUModel.VERSION` | constant | — | public | not declared | — | `src/nova/objects/vcpu_model.py:L28–L28` |
| `VirtCPUModel.fields` | field | — | public | not declared | — | `src/nova/objects/vcpu_model.py:L30–L40` |
| `VirtCPUModel.obj_load_attr` | method | (self, attrname) | public | not declared | 1/2 | `src/nova/objects/vcpu_model.py:L42–L43` |
| `VirtCPUModel.to_json` | method | (self) | public | `jsonutils.dumps(self.obj_to_primitive())` (src/nova/objects/vcpu_model.py:L46) | 1/2 | `src/nova/objects/vcpu_model.py:L45–L46` |
| `VirtCPUModel.from_json` | method | (cls, jsonstr) | public | `cls.obj_from_primitive(jsonutils.loads(jsonstr))` (src/nova/objects/vcpu_model.py:L50) | 1/2 | `src/nova/objects/vcpu_model.py:L49–L50` |
| `VirtCPUModel.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `None` (src/nova/objects/vcpu_model.py:L58); `cls.obj_from_primitive(jsonutils.loads(db_extra['vcpu_model']))` (src/nova/objects/vcpu_model.py:L59) | 3/6 | `src/nova/objects/vcpu_model.py:L54–L59` |
| `VirtCPUFeature` | class | — | exported | not declared | — | `src/nova/objects/vcpu_model.py:L63–L72` |
| `VirtCPUFeature.VERSION` | constant | — | public | not declared | — | `src/nova/objects/vcpu_model.py:L64–L64` |
| `VirtCPUFeature.fields` | field | — | public | not declared | — | `src/nova/objects/vcpu_model.py:L66–L69` |
| `VirtCPUFeature.obj_load_attr` | method | (self, attrname) | public | not declared | 1/2 | `src/nova/objects/vcpu_model.py:L71–L72` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/vcpu_model.py:L13)
- `nova.db.main`: imports `api as db` (src/nova/objects/vcpu_model.py:L15)
- `nova.objects`: imports `base` (src/nova/objects/vcpu_model.py:L16)
- `nova.objects`: imports `fields` (src/nova/objects/vcpu_model.py:L17)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/vcpu_model.py:L28)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/vcpu_model.py:L64)

