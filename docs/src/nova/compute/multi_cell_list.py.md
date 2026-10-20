# src/nova/compute/multi_cell_list.py

## Overview

This file implements the `multi_cell_list` module, defining 3 classs, 2 constants, 1 function, 15 methods, 4 propertys, 9 imports, 2 side effects.

Lines: total 454, code 279, comment 109, blank 66

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/multi_cell_list.py:L25–L25` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/multi_cell_list.py:L27–L27` |
| `RecordSortContext` | class | — | exported | not declared | — | `src/nova/compute/multi_cell_list.py:L30–L52` |
| `RecordSortContext.__init__` | method | (self, sort_keys, sort_dirs) | public | not declared | 1/4 | `src/nova/compute/multi_cell_list.py:L31–L34` |
| `RecordSortContext.timeout_expired` | method | (self) | public | `time.monotonic() - self.start_time > context.CELL_TIMEOUT` (src/nova/compute/multi_cell_list.py:L38) | 1/2 | `src/nova/compute/multi_cell_list.py:L37–L38` |
| `RecordSortContext.compare_records` | method | (self, rec1, rec2) | public | `resultflag` (src/nova/compute/multi_cell_list.py:L49); `resultflag * -1` (src/nova/compute/multi_cell_list.py:L51); `0` (src/nova/compute/multi_cell_list.py:L52) | 5/8 | `src/nova/compute/multi_cell_list.py:L40–L52` |
| `RecordWrapper` | class | — | exported | not declared | — | `src/nova/compute/multi_cell_list.py:L55–L90` |
| `RecordWrapper.__init__` | method | (self, ctx, sort_ctx, db_record) | public | not declared | 1/4 | `src/nova/compute/multi_cell_list.py:L67–L70` |
| `RecordWrapper.__lt__` | method | (self, other) | public | `True` (src/nova/compute/multi_cell_list.py:L83); `False` (src/nova/compute/multi_cell_list.py:L85); `r == -1` (src/nova/compute/multi_cell_list.py:L90) | 3/8 | `src/nova/compute/multi_cell_list.py:L72–L90` |
| `CrossCellLister` | class | — | exported | not declared | — | `src/nova/compute/multi_cell_list.py:L93–L454` |
| `CrossCellLister.__init__` | method | (self, sort_ctx, cells=None, batch_size=None) | public | not declared | 1/7 | `src/nova/compute/multi_cell_list.py:L104–L110` |
| `CrossCellLister.cells_responded` | method | (self) | public | `list(self._cells_responded)` (src/nova/compute/multi_cell_list.py:L117) | 1/2 | `src/nova/compute/multi_cell_list.py:L113–L117` |
| `CrossCellLister.cells_failed` | method | (self) | public | `list(self._cells_failed)` (src/nova/compute/multi_cell_list.py:L124) | 1/2 | `src/nova/compute/multi_cell_list.py:L120–L124` |
| `CrossCellLister.cells_timed_out` | method | (self) | public | `list(self._cells_timed_out)` (src/nova/compute/multi_cell_list.py:L131) | 1/2 | `src/nova/compute/multi_cell_list.py:L127–L131` |
| `CrossCellLister.marker_identifier` | method | (self) | public | not declared | 1/2 | `src/nova/compute/multi_cell_list.py:L135–L142` |
| `CrossCellLister.get_marker_record` | method | (self, ctx, marker_id) | public | not declared | 1/2 | `src/nova/compute/multi_cell_list.py:L145–L158` |
| `CrossCellLister.get_marker_by_values` | method | (self, ctx, values) | public | not declared | 1/2 | `src/nova/compute/multi_cell_list.py:L161–L177` |
| `CrossCellLister.get_by_filters` | method | (self, ctx, filters, limit, marker, **kwargs) | public | not declared | 1/2 | `src/nova/compute/multi_cell_list.py:L180–L193` |
| `CrossCellLister.query_wrapper` | method | (self, ctx, fn, *args, **kwargs) | public | `` (src/nova/compute/multi_cell_list.py:L215); `` (src/nova/compute/multi_cell_list.py:L221) | 5/12 | `src/nova/compute/multi_cell_list.py:L195–L221` |
| `CrossCellLister.get_records_sorted` | method | (self, ctx, filters, limit, marker, **kwargs) | public | `` (src/nova/compute/multi_cell_list.py:L418); `` (src/nova/compute/multi_cell_list.py:L454) | 14/46 | `src/nova/compute/multi_cell_list.py:L223–L454` |
| `CrossCellLister.get_records_sorted.do_query` | function | (cctx) | public | `` (src/nova/compute/multi_cell_list.py:L329) | — | `src/nova/compute/multi_cell_list.py:L267–L383` |
| `RecordSortContext.timeout_expired` | property | — | public | not declared | — | `src/nova/compute/multi_cell_list.py:L36–L38` |
| `CrossCellLister.cells_responded` | property | — | public | not declared | — | `src/nova/compute/multi_cell_list.py:L112–L117` |
| `CrossCellLister.cells_failed` | property | — | public | not declared | — | `src/nova/compute/multi_cell_list.py:L119–L124` |
| `CrossCellLister.cells_timed_out` | property | — | public | not declared | — | `src/nova/compute/multi_cell_list.py:L126–L131` |

## Dependencies

- `import abc` (src/nova/compute/multi_cell_list.py:L13)
- `import copy` (src/nova/compute/multi_cell_list.py:L14)
- `import heapq` (src/nova/compute/multi_cell_list.py:L15)
- `import time` (src/nova/compute/multi_cell_list.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/compute/multi_cell_list.py:L18)
- `import nova.conf` (src/nova/compute/multi_cell_list.py:L20)
- `nova`: imports `context` (src/nova/compute/multi_cell_list.py:L21)
- `nova`: imports `exception` (src/nova/compute/multi_cell_list.py:L22)
- `nova.i18n`: imports `_` (src/nova/compute/multi_cell_list.py:L23)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/multi_cell_list.py:L25)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/multi_cell_list.py:L27)

