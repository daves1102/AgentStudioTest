# src/nova/tests/unit/compute/test_instance_list.py

## Overview

This file implements the `test_instance_list` module, defining 2 classs, 1 constant, 4 functions, 14 methods, 9 imports, 1 side effect.

Lines: total 369, code 254, comment 49, blank 66

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_CELLS` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_instance_list.py:L26–L26` |
| `TestInstanceList` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_instance_list.py:L29–L321` |
| `TestInstanceList.setUp` | method | (self) | public | not declared | 4/19 | `src/nova/tests/unit/compute/test_instance_list.py:L30–L52` |
| `TestInstanceList.test_compare_simple_instance_quirks` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_instance_list.py:L54–L63` |
| `TestInstanceList.test_get_instances_sorted` | method | (self, mock_cells, mock_inst) | public | not declared | 3/16 | `src/nova/tests/unit/compute/test_instance_list.py:L67–L88` |
| `TestInstanceList.test_user_gets_subset_of_cells` | method | (self, mock_cm, mock_gi, mock_br) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_instance_list.py:L93–L104` |
| `TestInstanceList.test_admin_gets_all_cells` | method | (self, mock_cm, mock_gi, mock_br, mock_lc) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_instance_list.py:L111–L124` |
| `TestInstanceList.test_user_gets_all_cells` | method | (self, mock_cm, mock_gi, mock_br, mock_lc) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_instance_list.py:L131–L143` |
| `TestInstanceList.test_admin_gets_all_cells_anyway` | method | (self, mock_cm, mock_gi, mock_br, mock_lc) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_instance_list.py:L150–L165` |
| `TestInstanceList.test_get_instances_with_down_cells` | method | (self, mock_sg) | public | not declared | 4/15 | `src/nova/tests/unit/compute/test_instance_list.py:L168–L192` |
| `TestInstanceList.test_get_instances_with_down_cells.wrap` | function | (thing) | public | `multi_cell_list.RecordWrapper(ctx, self.context, thing)` (src/nova/tests/unit/compute/test_instance_list.py:L174) | — | `src/nova/tests/unit/compute/test_instance_list.py:L173–L174` |
| `TestInstanceList.test_get_instances_by_not_skipping_down_cells` | method | (self, mock_sg) | public | not declared | 2/15 | `src/nova/tests/unit/compute/test_instance_list.py:L195–L218` |
| `TestInstanceList.test_get_instances_by_not_skipping_down_cells.wrap` | function | (thing) | public | `multi_cell_list.RecordWrapper(ctx, self.context, thing)` (src/nova/tests/unit/compute/test_instance_list.py:L200) | — | `src/nova/tests/unit/compute/test_instance_list.py:L199–L200` |
| `TestInstanceList.test_get_instances_with_cell_down_support` | method | (self, mock_sg) | public | not declared | 4/17 | `src/nova/tests/unit/compute/test_instance_list.py:L221–L251` |
| `TestInstanceList.test_get_instances_with_cell_down_support.wrap` | function | (thing) | public | `multi_cell_list.RecordWrapper(ctx, self.context, thing)` (src/nova/tests/unit/compute/test_instance_list.py:L228) | — | `src/nova/tests/unit/compute/test_instance_list.py:L227–L228` |
| `TestInstanceList.test_batch_size_fixed` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_instance_list.py:L253–L292` |
| `TestInstanceList.test_batch_size_distributed` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_instance_list.py:L294–L321` |
| `TestInstanceListBig` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_instance_list.py:L324–L369` |
| `TestInstanceListBig.setUp` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/compute/test_instance_list.py:L325–L343` |
| `TestInstanceListBig.test_get_instances_batched` | method | (self, mock_cells, mock_inst) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_instance_list.py:L347–L369` |
| `TestInstanceListBig.test_get_instances_batched.fake_get_insts` | function | (ctx, filters, limit, *a, **k) | public | not declared | — | `src/nova/tests/unit/compute/test_instance_list.py:L350–L352` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_instance_list.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_instance_list.py:L15)
- `nova.compute`: imports `instance_list` (src/nova/tests/unit/compute/test_instance_list.py:L17)
- `nova.compute`: imports `multi_cell_list` (src/nova/tests/unit/compute/test_instance_list.py:L18)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/compute/test_instance_list.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_instance_list.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_instance_list.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_instance_list.py:L22)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/compute/test_instance_list.py:L23)

## Side Effects

- **global-mutation**: FAKE_CELLS = [objects.CellMapping(), objects.CellMapping()] (src/nova/tests/unit/compute/test_instance_list.py:L26)

