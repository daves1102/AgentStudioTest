# src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py

## Overview

This file implements the `test_extra_specs_ops` module, defining 1 class, 36 methods, 2 imports.

Lines: total 235, code 186, comment 11, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ExtraSpecsOpsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L17–L235` |
| `ExtraSpecsOpsTestCase._do_extra_specs_ops_test` | method | (self, value, req, matches) | private | not declared | 2/3 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L18–L20` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_simple` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L22–L26` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_simple` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L28–L32` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_simple2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L34–L38` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_simple3` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L40–L44` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_bogus_ops` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L46–L50` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_eq` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L52–L56` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_eq2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L58–L62` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_eq` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L64–L68` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_eq3` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L70–L74` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_seq` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L76–L80` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_seq` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L82–L86` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_sneq` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L88–L92` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_sneq` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L94–L98` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_sge` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L100–L104` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_sle` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L106–L110` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_sl` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L112–L116` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_sg` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L118–L122` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_in` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L124–L128` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_in2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L130–L134` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_in3` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L136–L140` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_in` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L142–L146` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_in2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L148–L152` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_or` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L154–L158` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_or2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L160–L164` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_or` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L166–L170` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_or2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L172–L176` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_le` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L178–L182` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_le` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L184–L188` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_with_op_ge` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L190–L194` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_ge` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L196–L200` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_all_with_op_allin` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L202–L207` |
| `ExtraSpecsOpsTestCase.test_extra_specs_matches_one_with_op_allin` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L209–L214` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_with_op_allin` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L216–L221` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_all_with_op_allin` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L223–L228` |
| `ExtraSpecsOpsTestCase.test_extra_specs_fails_match_one_with_op_allin` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L230–L235` |

## Dependencies

- `nova.scheduler.filters`: imports `extra_specs_ops` (src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L13)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_extra_specs_ops.py:L14)

