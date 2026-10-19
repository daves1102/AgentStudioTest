# src/nova/scheduler/filters/utils.py

## Overview

This file implements the `utils` module, defining 1 constant, 4 functions, 2 imports, 1 side effect, 1 security surface entry.

Lines: total 82, code 52, comment 14, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/utils.py:L21–L21` |
| `aggregate_values_from_key` | function | (host_state, key_name) | exported | `{aggr.metadata[key_name] for aggr in aggrlist if key_name in aggr.metadata }` (src/nova/scheduler/filters/utils.py:L27) | 3/6 | `src/nova/scheduler/filters/utils.py:L24–L30` |
| `aggregate_metadata_get_by_host` | function | (host_state, key=None) | exported | `metadata` (src/nova/scheduler/filters/utils.py:L43) | 6/8 | `src/nova/scheduler/filters/utils.py:L33–L43` |
| `validate_num_values` | function | (vals, default=None, cast_to=int, based_on=min) | exported | `default` (src/nova/scheduler/filters/utils.py:L57); `based_on([cast_to(val) for val in vals])` (src/nova/scheduler/filters/utils.py:L68) | 5/14 | `src/nova/scheduler/filters/utils.py:L46–L68` |
| `instance_uuids_overlap` | function | (host_state, uuids) | exported | `bool(host_uuids.intersection(set_uuids))` (src/nova/scheduler/filters/utils.py:L82) | 2/6 | `src/nova/scheduler/filters/utils.py:L71–L82` |

## Dependencies

- `import collections` (src/nova/scheduler/filters/utils.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/utils.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/utils.py:L21)

## Security Surface

- **sink** (`db-write`): metadata[k].update(x.strip() for x in v.split(',')) (src/nova/scheduler/filters/utils.py:L42)

