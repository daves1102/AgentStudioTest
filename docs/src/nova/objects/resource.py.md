# src/nova/objects/resource.py

## Overview

This file implements the `resource` module, defining 4 classs, 4 constants, 3 fields, 7 methods, 1 variable, 4 imports, 4 side effects.

Lines: total 118, code 63, comment 32, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/resource.py:L21–L26` |
| `ResourceMetadata` | class | — | exported | not declared | — | `src/nova/objects/resource.py:L30–L42` |
| `ResourceMetadata.VERSION` | constant | — | public | not declared | — | `src/nova/objects/resource.py:L32–L32` |
| `ResourceMetadata.__eq__` | method | (self, other) | public | `base.all_things_equal(self, other)` (src/nova/objects/resource.py:L39) | 1/2 | `src/nova/objects/resource.py:L38–L39` |
| `ResourceMetadata.__ne__` | method | (self, other) | public | `not (self == other)` (src/nova/objects/resource.py:L42) | 1/2 | `src/nova/objects/resource.py:L41–L42` |
| `Resource` | class | — | exported | not declared | — | `src/nova/objects/resource.py:L46–L71` |
| `Resource.VERSION` | constant | — | public | not declared | — | `src/nova/objects/resource.py:L48–L48` |
| `Resource.fields` | field | — | public | not declared | — | `src/nova/objects/resource.py:L50–L60` |
| `Resource.__eq__` | method | (self, other) | public | `base.all_things_equal(self, other)` (src/nova/objects/resource.py:L63) | 1/2 | `src/nova/objects/resource.py:L62–L63` |
| `Resource.__ne__` | method | (self, other) | public | `not (self == other)` (src/nova/objects/resource.py:L66) | 1/2 | `src/nova/objects/resource.py:L65–L66` |
| `Resource.__hash__` | method | (self) | public | `hash((self.provider_uuid, self.resource_class, self.identifier, metadata))` (src/nova/objects/resource.py:L70) | 2/4 | `src/nova/objects/resource.py:L68–L71` |
| `ResourceList` | class | — | exported | not declared | — | `src/nova/objects/resource.py:L75–L93` |
| `ResourceList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/resource.py:L77–L77` |
| `ResourceList.fields` | field | — | public | not declared | — | `src/nova/objects/resource.py:L79–L81` |
| `ResourceList.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `None` (src/nova/objects/resource.py:L89); `resources` (src/nova/objects/resource.py:L93) | 3/8 | `src/nova/objects/resource.py:L85–L93` |
| `LibvirtVPMEMDevice` | class | — | exported | not declared | — | `src/nova/objects/resource.py:L97–L118` |
| `LibvirtVPMEMDevice.VERSION` | constant | — | public | not declared | — | `src/nova/objects/resource.py:L99–L99` |
| `LibvirtVPMEMDevice.fields` | field | — | public | not declared | — | `src/nova/objects/resource.py:L101–L113` |
| `LibvirtVPMEMDevice.__hash__` | method | (self) | public | `hash((self.label, self.name, self.size, self.devpath, self.align))` (src/nova/objects/resource.py:L117) | 1/3 | `src/nova/objects/resource.py:L115–L118` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/resource.py:L15)
- `nova.db.main`: imports `api as db` (src/nova/objects/resource.py:L17)
- `nova.objects`: imports `base` (src/nova/objects/resource.py:L18)
- `nova.objects`: imports `fields` (src/nova/objects/resource.py:L19)

## Side Effects

- **global-mutation**: VERSION = "1.0" (src/nova/objects/resource.py:L32)
- **global-mutation**: VERSION = "1.0" (src/nova/objects/resource.py:L48)
- **global-mutation**: VERSION = "1.0" (src/nova/objects/resource.py:L77)
- **global-mutation**: VERSION = "1.0" (src/nova/objects/resource.py:L99)

