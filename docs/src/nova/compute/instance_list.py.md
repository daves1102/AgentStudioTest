# src/nova/compute/instance_list.py

## Overview

This file implements the `instance_list` module, defining 2 classs, 1 constant, 3 functions, 6 methods, 1 property, 8 imports, 1 side effect.

Lines: total 178, code 108, comment 39, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/instance_list.py:L24–L24` |
| `InstanceSortContext` | class | — | exported | not declared | — | `src/nova/compute/instance_list.py:L27–L44` |
| `InstanceSortContext.__init__` | method | (self, sort_keys, sort_dirs) | public | not declared | 3/8 | `src/nova/compute/instance_list.py:L28–L44` |
| `InstanceLister` | class | — | exported | not declared | — | `src/nova/compute/instance_list.py:L47–L87` |
| `InstanceLister.__init__` | method | (self, sort_keys, sort_dirs, cells=None, batch_size=None) | public | not declared | 1/4 | `src/nova/compute/instance_list.py:L48–L51` |
| `InstanceLister.marker_identifier` | method | (self) | public | `'uuid'` (src/nova/compute/instance_list.py:L55) | 1/2 | `src/nova/compute/instance_list.py:L54–L55` |
| `InstanceLister.get_marker_record` | method | (self, ctx, marker) | public | `im.cell_mapping.uuid, db_inst` (src/nova/compute/instance_list.py:L74) | 3/13 | `src/nova/compute/instance_list.py:L57–L74` |
| `InstanceLister.get_marker_by_values` | method | (self, ctx, values) | public | `db.instance_get_by_sort_filters(ctx, self.sort_ctx.sort_keys, self.sort_ctx.sort_dirs, values)` (src/nova/compute/instance_list.py:L77) | 1/5 | `src/nova/compute/instance_list.py:L76–L80` |
| `InstanceLister.get_by_filters` | method | (self, ctx, filters, limit, marker, **kwargs) | public | `db.instance_get_all_by_filters_sort( ctx, filters, limit=limit, marker=marker, sort_keys=self.sort_ctx.sort_keys, sort_dirs=self.sort_ctx.sort_dirs, **kwargs)` (src/nova/compute/instance_list.py:L83) | 1/6 | `src/nova/compute/instance_list.py:L82–L87` |
| `get_instances_sorted` | function | (ctx, filters, limit, marker, columns_to_join, sort_keys, sort_dirs, cell_mappings=None, batch_size=None, cell_down_support=False) | exported | `instance_lister, instance_generator` (src/nova/compute/instance_list.py:L101) | 1/10 | `src/nova/compute/instance_list.py:L92–L101` |
| `get_instance_list_cells_batch_size` | function | (limit, cells) | exported | `limit` (src/nova/compute/instance_list.py:L121); `max(min(batch_size, limit), 100)` (src/nova/compute/instance_list.py:L132) | 5/10 | `src/nova/compute/instance_list.py:L104–L132` |
| `get_instance_objects_sorted` | function | (ctx, filters, limit, marker, expected_attrs, sort_keys, sort_dirs, cell_down_support=False) | exported | `instance_list, down_cell_uuids` (src/nova/compute/instance_list.py:L178) | 4/23 | `src/nova/compute/instance_list.py:L135–L178` |
| `InstanceLister.marker_identifier` | property | — | public | not declared | — | `src/nova/compute/instance_list.py:L53–L55` |

## Dependencies

- `import copy` (src/nova/compute/instance_list.py:L13)
- `nova.compute`: imports `multi_cell_list` (src/nova/compute/instance_list.py:L15)
- `import nova.conf` (src/nova/compute/instance_list.py:L16)
- `nova`: imports `context` (src/nova/compute/instance_list.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/compute/instance_list.py:L18)
- `nova`: imports `exception` (src/nova/compute/instance_list.py:L19)
- `nova`: imports `objects` (src/nova/compute/instance_list.py:L20)
- `nova.objects`: imports `instance as instance_obj` (src/nova/compute/instance_list.py:L21)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/instance_list.py:L24)

