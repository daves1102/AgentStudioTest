# src/nova/objects/numa.py

## Overview

This file implements the `numa` module, defining 4 classs, 4 constants, 4 fields, 27 methods, 9 propertys, 1 variable, 6 imports, 4 side effects.

Lines: total 296, code 208, comment 36, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/numa.py:L23–L28` |
| `NUMACell` | class | — | exported | not declared | — | `src/nova/objects/numa.py:L32–L168` |
| `NUMACell.VERSION` | constant | — | public | not declared | — | `src/nova/objects/numa.py:L39–L39` |
| `NUMACell.fields` | field | — | public | not declared | — | `src/nova/objects/numa.py:L41–L53` |
| `NUMACell.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 4/9 | `src/nova/objects/numa.py:L55–L63` |
| `NUMACell.__eq__` | method | (self, other) | public | `base.all_things_equal(self, other)` (src/nova/objects/numa.py:L66) | 1/2 | `src/nova/objects/numa.py:L65–L66` |
| `NUMACell.__ne__` | method | (self, other) | public | `not (self == other)` (src/nova/objects/numa.py:L69) | 1/2 | `src/nova/objects/numa.py:L68–L69` |
| `NUMACell.free_pcpus` | method | (self) | public | `self.pcpuset - self.pinned_cpus or set()` (src/nova/objects/numa.py:L74) | 2/2 | `src/nova/objects/numa.py:L72–L74` |
| `NUMACell.free_siblings` | method | (self) | public | `[sibling_set & self.free_pcpus for sibling_set in self.siblings]` (src/nova/objects/numa.py:L79) | 2/2 | `src/nova/objects/numa.py:L77–L79` |
| `NUMACell.avail_pcpus` | method | (self) | public | `len(self.free_pcpus)` (src/nova/objects/numa.py:L84) | 1/2 | `src/nova/objects/numa.py:L82–L84` |
| `NUMACell.avail_memory` | method | (self) | public | `self.memory - self.memory_usage` (src/nova/objects/numa.py:L88) | 1/2 | `src/nova/objects/numa.py:L87–L88` |
| `NUMACell.has_threads` | method | (self) | public | `any(len(sibling_set) > 1 for sibling_set in self.siblings)` (src/nova/objects/numa.py:L93) | 2/2 | `src/nova/objects/numa.py:L91–L93` |
| `NUMACell.pin_cpus` | method | (self, cpus) | public | not declared | 3/9 | `src/nova/objects/numa.py:L95–L105` |
| `NUMACell.unpin_cpus` | method | (self, cpus) | public | not declared | 3/9 | `src/nova/objects/numa.py:L107–L117` |
| `NUMACell.pin_cpus_with_siblings` | method | (self, cpus) | public | not declared | 3/6 | `src/nova/objects/numa.py:L119–L134` |
| `NUMACell.unpin_cpus_with_siblings` | method | (self, cpus) | public | not declared | 3/6 | `src/nova/objects/numa.py:L136–L149` |
| `NUMACell.can_fit_pagesize` | method | (self, pagesize, memory, use_free=True) | public | `memory <= avail_kb and (memory % pages.size_kb) == 0` (src/nova/objects/numa.py:L167) | 5/6 | `src/nova/objects/numa.py:L151–L168` |
| `NUMAPagesTopology` | class | — | exported | not declared | — | `src/nova/objects/numa.py:L172–L214` |
| `NUMAPagesTopology.VERSION` | constant | — | public | not declared | — | `src/nova/objects/numa.py:L175–L175` |
| `NUMAPagesTopology.fields` | field | — | public | not declared | — | `src/nova/objects/numa.py:L177–L182` |
| `NUMAPagesTopology.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 2/6 | `src/nova/objects/numa.py:L184–L189` |
| `NUMAPagesTopology.__eq__` | method | (self, other) | public | `base.all_things_equal(self, other)` (src/nova/objects/numa.py:L192) | 1/2 | `src/nova/objects/numa.py:L191–L192` |
| `NUMAPagesTopology.__ne__` | method | (self, other) | public | `not (self == other)` (src/nova/objects/numa.py:L195) | 1/2 | `src/nova/objects/numa.py:L194–L195` |
| `NUMAPagesTopology.free` | method | (self) | public | `self.total - self.used - self.reserved` (src/nova/objects/numa.py:L204) | 2/4 | `src/nova/objects/numa.py:L198–L204` |
| `NUMAPagesTopology.free_kb` | method | (self) | public | `self.free * self.size_kb` (src/nova/objects/numa.py:L209) | 1/2 | `src/nova/objects/numa.py:L207–L209` |
| `NUMAPagesTopology.total_kb` | method | (self) | public | `self.total * self.size_kb` (src/nova/objects/numa.py:L214) | 1/2 | `src/nova/objects/numa.py:L212–L214` |
| `NUMATopology` | class | — | exported | not declared | — | `src/nova/objects/numa.py:L218–L276` |
| `NUMATopology.VERSION` | constant | — | public | not declared | — | `src/nova/objects/numa.py:L222–L222` |
| `NUMATopology.fields` | field | — | public | not declared | — | `src/nova/objects/numa.py:L224–L226` |
| `NUMATopology.__eq__` | method | (self, other) | public | `base.all_things_equal(self, other)` (src/nova/objects/numa.py:L229) | 1/2 | `src/nova/objects/numa.py:L228–L229` |
| `NUMATopology.__ne__` | method | (self, other) | public | `not (self == other)` (src/nova/objects/numa.py:L232) | 1/2 | `src/nova/objects/numa.py:L231–L232` |
| `NUMATopology.has_threads` | method | (self) | public | `any(cell.has_threads for cell in self.cells)` (src/nova/objects/numa.py:L237) | 2/2 | `src/nova/objects/numa.py:L235–L237` |
| `NUMATopology._to_json` | method | (self) | private | `jsonutils.dumps(self.obj_to_primitive())` (src/nova/objects/numa.py:L240) | 1/2 | `src/nova/objects/numa.py:L239–L240` |
| `NUMATopology.obj_from_db_obj` | method | (cls, db_obj) | public | `cls.obj_from_primitive(jsonutils.loads(db_obj))` (src/nova/objects/numa.py:L249) | 1/2 | `src/nova/objects/numa.py:L243–L249` |
| `NUMATopology.from_legacy_object` | method | (cls, primitive) | public | `topology._to_json()` (src/nova/objects/numa.py:L272) | 2/16 | `src/nova/objects/numa.py:L252–L272` |
| `NUMATopology.__len__` | method | (self) | public | `len(self.cells)` (src/nova/objects/numa.py:L276) | 1/2 | `src/nova/objects/numa.py:L274–L276` |
| `NUMATopologyLimits` | class | — | exported | not declared | — | `src/nova/objects/numa.py:L280–L296` |
| `NUMATopologyLimits.VERSION` | constant | — | public | not declared | — | `src/nova/objects/numa.py:L283–L283` |
| `NUMATopologyLimits.fields` | field | — | public | not declared | — | `src/nova/objects/numa.py:L285–L289` |
| `NUMATopologyLimits.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 2/6 | `src/nova/objects/numa.py:L291–L296` |
| `NUMACell.free_pcpus` | property | — | public | not declared | — | `src/nova/objects/numa.py:L71–L74` |
| `NUMACell.free_siblings` | property | — | public | not declared | — | `src/nova/objects/numa.py:L76–L79` |
| `NUMACell.avail_pcpus` | property | — | public | not declared | — | `src/nova/objects/numa.py:L81–L84` |
| `NUMACell.avail_memory` | property | — | public | not declared | — | `src/nova/objects/numa.py:L86–L88` |
| `NUMACell.has_threads` | property | — | public | not declared | — | `src/nova/objects/numa.py:L90–L93` |
| `NUMAPagesTopology.free` | property | — | public | not declared | — | `src/nova/objects/numa.py:L197–L204` |
| `NUMAPagesTopology.free_kb` | property | — | public | not declared | — | `src/nova/objects/numa.py:L206–L209` |
| `NUMAPagesTopology.total_kb` | property | — | public | not declared | — | `src/nova/objects/numa.py:L211–L214` |
| `NUMATopology.has_threads` | property | — | public | not declared | — | `src/nova/objects/numa.py:L234–L237` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/numa.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/numa.py:L16)
- `nova`: imports `exception` (src/nova/objects/numa.py:L18)
- `nova.objects`: imports `base` (src/nova/objects/numa.py:L19)
- `nova.objects`: imports `fields as obj_fields` (src/nova/objects/numa.py:L20)
- `nova.virt`: imports `hardware` (src/nova/objects/numa.py:L21)

## Side Effects

- **global-mutation**: VERSION = '1.5' (src/nova/objects/numa.py:L39)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/numa.py:L175)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/numa.py:L222)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/numa.py:L283)

