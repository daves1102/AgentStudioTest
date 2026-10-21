# src/nova/tests/unit/scheduler/filters/test_utils.py

## Overview

This file implements the `test_utils` module, defining 1 class, 7 methods, 1 variable, 5 imports.

Lines: total 109, code 73, comment 14, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_AGGREGATE_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_utils.py:L23–L42` |
| `TestUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_utils.py:L45–L109` |
| `TestUtils.test_aggregate_values_from_key` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L46–L52` |
| `TestUtils.test_aggregate_values_from_key_with_wrong_key` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L54–L60` |
| `TestUtils.test_aggregate_metadata_get_by_host_no_key` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L62–L71` |
| `TestUtils.test_aggregate_metadata_get_by_host_with_key` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L73–L80` |
| `TestUtils.test_aggregate_metadata_get_by_host_empty_result` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L82–L88` |
| `TestUtils.test_validate_num_values` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L90–L98` |
| `TestUtils.test_instance_uuids_overlap` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/scheduler/filters/test_utils.py:L100–L109` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/filters/test_utils.py:L15)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_utils.py:L17)
- `nova.scheduler.filters`: imports `utils` (src/nova/tests/unit/scheduler/filters/test_utils.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_utils.py:L19)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_utils.py:L20)

