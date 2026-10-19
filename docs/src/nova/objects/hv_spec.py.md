# src/nova/objects/hv_spec.py

## Overview

This file implements the `hv_spec` module, defining 1 class, 1 constant, 1 field, 3 methods, 1 variable, 3 imports, 1 side effect.

Lines: total 55, code 27, comment 19, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/hv_spec.py:L21–L23` |
| `HVSpec` | class | — | exported | not declared | — | `src/nova/objects/hv_spec.py:L27–L55` |
| `HVSpec.VERSION` | constant | — | public | not declared | — | `src/nova/objects/hv_spec.py:L31–L31` |
| `HVSpec.fields` | field | — | public | not declared | — | `src/nova/objects/hv_spec.py:L33–L37` |
| `HVSpec.from_list` | method | (cls, data) | public | `cls(arch=data[0], hv_type=data[1], vm_mode=data[2])` (src/nova/objects/hv_spec.py:L43) | 1/4 | `src/nova/objects/hv_spec.py:L42–L45` |
| `HVSpec.to_list` | method | (self) | public | `[self.arch, self.hv_type, self.vm_mode]` (src/nova/objects/hv_spec.py:L48) | 1/2 | `src/nova/objects/hv_spec.py:L47–L48` |
| `HVSpec.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 4/6 | `src/nova/objects/hv_spec.py:L50–L55` |

## Dependencies

- `oslo_utils`: imports `versionutils` (src/nova/objects/hv_spec.py:L16)
- `nova.objects`: imports `base` (src/nova/objects/hv_spec.py:L18)
- `nova.objects`: imports `fields` (src/nova/objects/hv_spec.py:L19)

## Side Effects

- **global-mutation**: VERSION = '1.2' (src/nova/objects/hv_spec.py:L31)

