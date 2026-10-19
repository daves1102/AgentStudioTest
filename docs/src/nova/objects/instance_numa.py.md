# src/nova/objects/instance_numa.py

## Overview

This file implements the `instance_numa` module, defining 2 classs, 3 constants, 3 fields, 21 methods, 6 propertys, 1 variable, 9 imports, 3 side effects.

Lines: total 389, code 259, comment 80, blank 50

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/instance_numa.py:L27–L27` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_numa.py:L29–L32` |
| `InstanceNUMACell` | class | — | exported | not declared | — | `src/nova/objects/instance_numa.py:L37–L141` |
| `InstanceNUMACell.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_numa.py:L46–L46` |
| `InstanceNUMACell.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 6/23 | `src/nova/objects/instance_numa.py:L48–L78` |
| `InstanceNUMACell.fields` | field | — | public | not declared | — | `src/nova/objects/instance_numa.py:L80–L100` |
| `InstanceNUMACell.cpu_pinning` | field | — | public | not declared | — | `src/nova/objects/instance_numa.py:L102–L102` |
| `InstanceNUMACell.__len__` | method | (self) | public | `len(self.total_cpus)` (src/nova/objects/instance_numa.py:L105) | 1/2 | `src/nova/objects/instance_numa.py:L104–L105` |
| `InstanceNUMACell.total_cpus` | method | (self) | public | `self.cpuset \| self.pcpuset` (src/nova/objects/instance_numa.py:L109) | 1/2 | `src/nova/objects/instance_numa.py:L108–L109` |
| `InstanceNUMACell.siblings` | method | (self) | public | `list(map(set, zip(*[iter(cpu_list)] * threads)))` (src/nova/objects/instance_numa.py:L121) | 4/8 | `src/nova/objects/instance_numa.py:L112–L121` |
| `InstanceNUMACell.pin` | method | (self, vcpu, pcpu) | public | `` (src/nova/objects/instance_numa.py:L125) | 3/6 | `src/nova/objects/instance_numa.py:L123–L128` |
| `InstanceNUMACell.pin_vcpus` | method | (self, *cpu_pairs) | public | not declared | 2/3 | `src/nova/objects/instance_numa.py:L130–L132` |
| `InstanceNUMACell.clear_host_pinning` | method | (self) | public | `self` (src/nova/objects/instance_numa.py:L141) | 1/4 | `src/nova/objects/instance_numa.py:L134–L141` |
| `InstanceNUMATopology` | class | — | exported | not declared | — | `src/nova/objects/instance_numa.py:L146–L389` |
| `InstanceNUMATopology.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_numa.py:L152–L152` |
| `InstanceNUMATopology.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 2/6 | `src/nova/objects/instance_numa.py:L154–L159` |
| `InstanceNUMATopology.fields` | field | — | public | not declared | — | `src/nova/objects/instance_numa.py:L161–L169` |
| `InstanceNUMATopology.obj_from_db_obj` | method | (cls, context, instance_uuid, db_obj) | public | `obj` (src/nova/objects/instance_numa.py:L184) | 3/11 | `src/nova/objects/instance_numa.py:L172–L184` |
| `InstanceNUMATopology._migrate_legacy_dedicated_instance_cpuset` | method | (cls, obj) | private | `update_db` (src/nova/objects/instance_numa.py:L272) | 12/46 | `src/nova/objects/instance_numa.py:L189–L272` |
| `InstanceNUMATopology._save_migrated_cpuset_to_instance_extra` | method | (cls, context, obj, instance_uuid) | private | not declared | 1/9 | `src/nova/objects/instance_numa.py:L277–L285` |
| `InstanceNUMATopology._migrate_legacy_object` | method | (cls, context, instance_uuid, primitive) | private | `obj` (src/nova/objects/instance_numa.py:L318) | 2/19 | `src/nova/objects/instance_numa.py:L289–L318` |
| `InstanceNUMATopology.create` | method | (self) | public | not declared | 1/5 | `src/nova/objects/instance_numa.py:L322–L326` |
| `InstanceNUMATopology.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `None` (src/nova/objects/instance_numa.py:L337); `cls.obj_from_db_obj( context, instance_uuid, db_extra['numa_topology'])` (src/nova/objects/instance_numa.py:L339) | 3/9 | `src/nova/objects/instance_numa.py:L330–L340` |
| `InstanceNUMATopology._to_json` | method | (self) | private | `jsonutils.dumps(self.obj_to_primitive())` (src/nova/objects/instance_numa.py:L343) | 1/2 | `src/nova/objects/instance_numa.py:L342–L343` |
| `InstanceNUMATopology.__len__` | method | (self) | public | `len(self.cells)` (src/nova/objects/instance_numa.py:L347) | 1/2 | `src/nova/objects/instance_numa.py:L345–L347` |
| `InstanceNUMATopology.cpu_policy` | method | (self) | public | `cpu_policy.pop()` (src/nova/objects/instance_numa.py:L360) | 3/7 | `src/nova/objects/instance_numa.py:L352–L360` |
| `InstanceNUMATopology.cpu_pinning` | method | (self) | public | `set(itertools.chain.from_iterable([ cell.cpu_pinning.values() for cell in self.cells if cell.cpu_pinning]))` (src/nova/objects/instance_numa.py:L365) | 3/4 | `src/nova/objects/instance_numa.py:L363–L367` |
| `InstanceNUMATopology.cpuset_reserved` | method | (self) | public | `set(itertools.chain.from_iterable([ cell.cpuset_reserved for cell in self.cells if cell.cpuset_reserved]))` (src/nova/objects/instance_numa.py:L371) | 3/4 | `src/nova/objects/instance_numa.py:L370–L373` |
| `InstanceNUMATopology.clear_host_pinning` | method | (self) | public | `self` (src/nova/objects/instance_numa.py:L382) | 2/4 | `src/nova/objects/instance_numa.py:L375–L382` |
| `InstanceNUMATopology.emulator_threads_isolated` | method | (self) | public | `(self.obj_attr_is_set('emulator_threads_policy') and (self.emulator_threads_policy == obj_fields.CPUEmulatorThreadsPolicy.ISOLATE))` (src/nova/objects/instance_numa.py:L387) | 2/4 | `src/nova/objects/instance_numa.py:L385–L389` |
| `InstanceNUMACell.total_cpus` | property | — | public | not declared | — | `src/nova/objects/instance_numa.py:L107–L109` |
| `InstanceNUMACell.siblings` | property | — | public | not declared | — | `src/nova/objects/instance_numa.py:L111–L121` |
| `InstanceNUMATopology.cpu_policy` | property | — | public | not declared | — | `src/nova/objects/instance_numa.py:L351–L360` |
| `InstanceNUMATopology.cpu_pinning` | property | — | public | not declared | — | `src/nova/objects/instance_numa.py:L362–L367` |
| `InstanceNUMATopology.cpuset_reserved` | property | — | public | not declared | — | `src/nova/objects/instance_numa.py:L369–L373` |
| `InstanceNUMATopology.emulator_threads_isolated` | property | — | public | not declared | — | `src/nova/objects/instance_numa.py:L384–L389` |

## Dependencies

- `import itertools` (src/nova/objects/instance_numa.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/objects/instance_numa.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/instance_numa.py:L18)
- `oslo_utils`: imports `versionutils` (src/nova/objects/instance_numa.py:L19)
- `nova.db.main`: imports `api as db` (src/nova/objects/instance_numa.py:L21)
- `nova`: imports `exception` (src/nova/objects/instance_numa.py:L22)
- `nova.objects`: imports `base` (src/nova/objects/instance_numa.py:L23)
- `nova.objects`: imports `fields as obj_fields` (src/nova/objects/instance_numa.py:L24)
- `nova.virt`: imports `hardware` (src/nova/objects/instance_numa.py:L25)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/instance_numa.py:L27)
- **global-mutation**: VERSION = '1.6' (src/nova/objects/instance_numa.py:L46)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/instance_numa.py:L152)

