# src/nova/tests/unit/test_weights.py

## Overview

This file implements the `test_weights` module, defining 3 classs, 7 methods, 9 imports.

Lines: total 111, code 79, comment 15, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestWeigher` | class | — | exported | not declared | — | `src/nova/tests/unit/test_weights.py:L32–L111` |
| `TestWeigher.test_no_multiplier` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_weights.py:L33–L39` |
| `TestWeigher.test_no_multiplier.FakeWeigher` | class | — | public | not declared | — | `src/nova/tests/unit/test_weights.py:L34–L36` |
| `TestWeigher.test_no_multiplier.FakeWeigher._weigh_object` | method | (self, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/test_weights.py:L35–L36` |
| `TestWeigher.test_no_weight_object` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_weights.py:L41–L46` |
| `TestWeigher.test_no_weight_object.FakeWeigher` | class | — | public | not declared | — | `src/nova/tests/unit/test_weights.py:L42–L44` |
| `TestWeigher.test_no_weight_object.FakeWeigher.weight_multiplier` | method | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/test_weights.py:L43–L44` |
| `TestWeigher.test_normalization` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/test_weights.py:L48–L62` |
| `TestWeigher.test_debug_log_with_json_formatter` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/test_weights.py:L64–L95` |
| `TestWeigher.test_only_one_host` | method | (self, mock_weigh) | public | not declared | 2/13 | `src/nova/tests/unit/test_weights.py:L98–L111` |

## Dependencies

- `import io` (src/nova/tests/unit/test_weights.py:L19)
- `import logging` (src/nova/tests/unit/test_weights.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/test_weights.py:L21)
- `oslo_log`: imports `formatters` (src/nova/tests/unit/test_weights.py:L23)
- `nova.scheduler`: imports `weights as scheduler_weights` (src/nova/tests/unit/test_weights.py:L25)
- `nova.scheduler.weights`: imports `ram` (src/nova/tests/unit/test_weights.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/test_weights.py:L27)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/test_weights.py:L28)
- `nova`: imports `weights` (src/nova/tests/unit/test_weights.py:L29)

