# src/nova/tests/unit/compute/test_multi_cell_list.py

## Overview

This file implements the `test_multi_cell_list` module, defining 7 classs, 2 constants, 5 functions, 26 methods, 1 property, 10 imports, 2 side effects.

Lines: total 456, code 291, comment 85, blank 80

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L27–L188` |
| `TestUtils.test_compare_simple` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L28–L65` |
| `TestUtils.test_compare_multiple` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L67–L81` |
| `TestUtils.test_wrapper` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L83–L111` |
| `TestUtils.test_wrapper_sentinels` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L113–L141` |
| `TestUtils.test_query_wrapper_success` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L143–L151` |
| `TestUtils.test_query_wrapper_success.test` | function | (ctx, data) | public | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L144–L146` |
| `TestUtils.test_query_wrapper_timeout` | method | (self, mock_monotonic) | public | not declared | 2/9 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L154–L176` |
| `TestUtils.test_query_wrapper_timeout.test` | function | (ctx) | public | `[multi_cell_list.RecordWrapper(ctx, None, 1)] * 10` (src/nova/tests/unit/compute/test_multi_cell_list.py:L158) | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L157–L158` |
| `TestUtils.test_query_wrapper_timeout.fake_monotonic` | function | — | public | `times.pop(0)` (src/nova/tests/unit/compute/test_multi_cell_list.py:L166); `1000` (src/nova/tests/unit/compute/test_multi_cell_list.py:L168) | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L164–L168` |
| `TestUtils.test_query_wrapper_fail` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L178–L188` |
| `TestUtils.test_query_wrapper_fail.tester` | function | (ctx) | public | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L179–L180` |
| `TestListContext` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L191–L193` |
| `TestListContext.compare_records` | method | (self, rec1, rec2) | public | `-1` (src/nova/tests/unit/compute/test_multi_cell_list.py:L193) | 1/2 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L192–L193` |
| `TestLister` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L196–L266` |
| `TestLister.CONTEXT_CLS` | constant | — | public | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L197–L197` |
| `TestLister.__init__` | method | (self, data, sort_keys, sort_dirs, cells=None, batch_size=None) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L199–L205` |
| `TestLister.marker_identifier` | method | (self) | public | `'id'` (src/nova/tests/unit/compute/test_multi_cell_list.py:L209) | 1/2 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L208–L209` |
| `TestLister._method_called` | method | (self, ctx, method, arg) | private | not declared | 1/4 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L211–L214` |
| `TestLister.call_summary` | method | (self, method) | public | `results` (src/nova/tests/unit/compute/test_multi_cell_list.py:L246) | 4/27 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L216–L246` |
| `TestLister.get_marker_record` | method | (self, ctx, marker) | public | `cell.uuid, self._data[0]` (src/nova/tests/unit/compute/test_multi_cell_list.py:L252) | 1/4 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L248–L252` |
| `TestLister.get_marker_by_values` | method | (self, ctx, values) | public | `self._data[0]` (src/nova/tests/unit/compute/test_multi_cell_list.py:L256) | 1/3 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L254–L256` |
| `TestLister.get_by_filters` | method | (self, ctx, filters, limit, marker, **kwargs) | public | `batch` (src/nova/tests/unit/compute/test_multi_cell_list.py:L266) | 2/9 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L258–L266` |
| `target_cell_cheater` | function | (context, target_cell) | exported | not declared | 1/4 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L270–L276` |
| `TestBatching` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L280–L350` |
| `TestBatching.setUp` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L281–L288` |
| `TestBatching.test_batches_not_needed` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L290–L303` |
| `TestBatching.test_batches` | method | (self) | public | not declared | 5/14 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L305–L330` |
| `TestBatching.test_no_batches` | method | (self) | public | not declared | 4/13 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L332–L350` |
| `FailureListContext` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L353–L355` |
| `FailureListContext.compare_records` | method | (self, rec1, rec2) | public | `0` (src/nova/tests/unit/compute/test_multi_cell_list.py:L355) | 1/2 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L354–L355` |
| `FailureLister` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L358–L379` |
| `FailureLister.CONTEXT_CLS` | constant | — | public | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L359–L359` |
| `FailureLister.__init__` | method | (self, *a, **k) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L361–L363` |
| `FailureLister.set_fails` | method | (self, cell, fails) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L365–L366` |
| `FailureLister.get_by_filters` | method | (self, ctx, *a, **k) | public | `super(FailureLister, self).get_by_filters(ctx, *a, **k)` (src/nova/tests/unit/compute/test_multi_cell_list.py:L379) | 4/11 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L368–L379` |
| `TestBaseClass` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L383–L456` |
| `TestBaseClass.test_with_failing_cells` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L384–L407` |
| `TestBaseClass.test_with_failing_middle_cells` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L409–L433` |
| `TestBaseClass.test_marker_cell_not_requeried` | method | (self) | public | not declared | 5/15 | `src/nova/tests/unit/compute/test_multi_cell_list.py:L435–L456` |
| `TestLister.marker_identifier` | property | — | public | not declared | — | `src/nova/tests/unit/compute/test_multi_cell_list.py:L207–L209` |

## Dependencies

- `contextlib`: imports `contextmanager` (src/nova/tests/unit/compute/test_multi_cell_list.py:L13)
- `import copy` (src/nova/tests/unit/compute/test_multi_cell_list.py:L14)
- `import datetime` (src/nova/tests/unit/compute/test_multi_cell_list.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_multi_cell_list.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_multi_cell_list.py:L18)
- `nova.compute`: imports `multi_cell_list` (src/nova/tests/unit/compute/test_multi_cell_list.py:L20)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_multi_cell_list.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_multi_cell_list.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_multi_cell_list.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_multi_cell_list.py:L24)

## Side Effects

- **global-mutation**: CONTEXT_CLS = TestListContext (src/nova/tests/unit/compute/test_multi_cell_list.py:L197)
- **global-mutation**: CONTEXT_CLS = FailureListContext (src/nova/tests/unit/compute/test_multi_cell_list.py:L359)

