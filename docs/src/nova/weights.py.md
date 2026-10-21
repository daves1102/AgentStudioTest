# src/nova/weights.py

## Overview

This file implements the `weights` module, defining 3 classs, 1 constant, 3 fields, 1 function, 6 methods, 3 imports, 1 side effect.

Lines: total 172, code 109, comment 17, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/weights.py:L27–L27` |
| `normalize` | function | (weight_list, minval=None, maxval=None) | exported | `()` (src/nova/weights.py:L41); `[0] * len(weight_list)` (src/nova/weights.py:L53); `((i - minval) / range_ for i in weight_list)` (src/nova/weights.py:L56) | 6/13 | `src/nova/weights.py:L30–L56` |
| `WeighedObject` | class | — | exported | not declared | — | `src/nova/weights.py:L59–L67` |
| `WeighedObject.__init__` | method | (self, obj, weight) | public | not declared | 1/3 | `src/nova/weights.py:L62–L64` |
| `WeighedObject.__repr__` | method | (self) | public | `"<WeighedObject '%s': %s>" % (self.obj, self.weight)` (src/nova/weights.py:L67) | 1/2 | `src/nova/weights.py:L66–L67` |
| `BaseWeigher` | class | — | exported | not declared | — | `src/nova/weights.py:L70–L120` |
| `BaseWeigher.minval` | field | — | public | not declared | — | `src/nova/weights.py:L79–L79` |
| `BaseWeigher.maxval` | field | — | public | not declared | — | `src/nova/weights.py:L80–L80` |
| `BaseWeigher.weight_multiplier` | method | (self, host_state) | public | `1.0` (src/nova/weights.py:L94) | 1/2 | `src/nova/weights.py:L82–L94` |
| `BaseWeigher._weigh_object` | method | (self, obj, weight_properties) | private | not declared | 1/1 | `src/nova/weights.py:L97–L98` |
| `BaseWeigher.weigh_objects` | method | (self, weighed_obj_list, weight_properties) | public | `weights` (src/nova/weights.py:L120) | 4/10 | `src/nova/weights.py:L100–L120` |
| `BaseWeightHandler` | class | — | exported | not declared | — | `src/nova/weights.py:L123–L172` |
| `BaseWeightHandler.object_class` | field | — | public | not declared | — | `src/nova/weights.py:L124–L124` |
| `BaseWeightHandler.get_weighed_objects` | method | (self, weighers, obj_list, weighing_properties) | public | `weighed_objs` (src/nova/weights.py:L131); `sorted(weighed_objs, key=lambda x: x.weight, reverse=True)` (src/nova/weights.py:L172) | 8/35 | `src/nova/weights.py:L126–L172` |

## Dependencies

- `import abc` (src/nova/weights.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/weights.py:L22)
- `nova`: imports `loadables` (src/nova/weights.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/weights.py:L27)

