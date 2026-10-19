# src/nova/scheduler/weights/image_props.py

## Overview

This file implements the `image_props` module, defining 1 class, 1 constant, 4 methods, 6 imports, 1 side effect.

Lines: total 115, code 69, comment 29, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/image_props.py:L30–L30` |
| `ImagePropertiesWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/image_props.py:L33–L115` |
| `ImagePropertiesWeigher.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/weights/image_props.py:L34–L35` |
| `ImagePropertiesWeigher._parse_setting` | method | (self) | private | not declared | 1/5 | `src/nova/scheduler/weights/image_props.py:L37–L41` |
| `ImagePropertiesWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'image_props_weight_multiplier', CONF.filter_scheduler.image_props_weight_multiplier)` (src/nova/scheduler/weights/image_props.py:L45) | 1/4 | `src/nova/scheduler/weights/image_props.py:L43–L47` |
| `ImagePropertiesWeigher._weigh_object` | method | (self, host_state, request_spec) | private | `weight` (src/nova/scheduler/weights/image_props.py:L60); `weight` (src/nova/scheduler/weights/image_props.py:L84); `weight` (src/nova/scheduler/weights/image_props.py:L115) | 12/36 | `src/nova/scheduler/weights/image_props.py:L49–L115` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/image_props.py:L23)
- `nova`: imports `context as nova_context` (src/nova/scheduler/weights/image_props.py:L24)
- `nova`: imports `exception` (src/nova/scheduler/weights/image_props.py:L25)
- `nova`: imports `objects` (src/nova/scheduler/weights/image_props.py:L26)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/image_props.py:L27)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/image_props.py:L28)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/image_props.py:L30)

