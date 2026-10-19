# src/nova/objects/selection.py

## Overview

This file implements the `selection` module, defining 1 class, 2 constants, 1 field, 3 methods, 1 variable, 8 imports, 2 side effects.

Lines: total 115, code 71, comment 33, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/selection.py:L25–L25` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/selection.py:L27–L29` |
| `Selection` | class | — | exported | not declared | — | `src/nova/objects/selection.py:L33–L115` |
| `Selection.VERSION` | constant | — | public | not declared | — | `src/nova/objects/selection.py:L40–L40` |
| `Selection.fields` | field | — | public | not declared | — | `src/nova/objects/selection.py:L42–L61` |
| `Selection.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 2/5 | `src/nova/objects/selection.py:L63–L67` |
| `Selection.from_host_state` | method | (cls, host_state, allocation_request=None, allocation_request_version=None) | public | `cls(compute_node_uuid=host_state.uuid, service_host=host_state.host, nodename=host_state.nodename, cell_uuid=host_state.cell_uuid, limits=limits, allocation_request=allocation_request_json, allocation` (src/nova/objects/selection.py:L88) | 2/19 | `src/nova/objects/selection.py:L70–L95` |
| `Selection.to_dict` | method | (self) | public | `{ 'host': self.service_host, 'nodename': self.nodename, 'limits': limits, }` (src/nova/objects/selection.py:L111) | 3/13 | `src/nova/objects/selection.py:L97–L115` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/selection.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/selection.py:L16)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/objects/selection.py:L17)
- `oslo_versionedobjects`: imports `fields` (src/nova/objects/selection.py:L18)
- `nova`: imports `conf` (src/nova/objects/selection.py:L20)
- `nova`: imports `objects` (src/nova/objects/selection.py:L21)
- `nova.objects`: imports `base` (src/nova/objects/selection.py:L22)
- `nova.scheduler.filters`: imports `utils as filter_utils` (src/nova/objects/selection.py:L23)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/objects/selection.py:L25)
- **global-mutation**: VERSION = "1.1" (src/nova/objects/selection.py:L40)

