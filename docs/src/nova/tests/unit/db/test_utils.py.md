# src/nova/tests/unit/db/test_utils.py

## Overview

This file implements the `test_utils` module, defining 2 classs, 15 methods, 3 imports.

Lines: total 161, code 116, comment 16, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ProcessSortParamTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/test_utils.py:L18–L123` |
| `ProcessSortParamTestCase.test_process_sort_params_defaults` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/test_utils.py:L20–L28` |
| `ProcessSortParamTestCase.test_process_sort_params_override_default_keys` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/test_utils.py:L30–L35` |
| `ProcessSortParamTestCase.test_process_sort_params_override_default_dir` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/test_utils.py:L37–L42` |
| `ProcessSortParamTestCase.test_process_sort_params_override_default_key_and_dir` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/test_utils.py:L44–L55` |
| `ProcessSortParamTestCase.test_process_sort_params_non_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/test_utils.py:L57–L63` |
| `ProcessSortParamTestCase.test_process_sort_params_default` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/test_utils.py:L65–L76` |
| `ProcessSortParamTestCase.test_process_sort_params_default_dir` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/test_utils.py:L78–L90` |
| `ProcessSortParamTestCase.test_process_sort_params_unequal_length` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/test_utils.py:L92–L108` |
| `ProcessSortParamTestCase.test_process_sort_params_extra_dirs_lengths` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/test_utils.py:L110–L116` |
| `ProcessSortParamTestCase.test_process_sort_params_invalid_sort_dir` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/db/test_utils.py:L118–L123` |
| `TestGetRegexOps` | class | — | exported | not declared | — | `src/nova/tests/unit/db/test_utils.py:L126–L161` |
| `TestGetRegexOps.test_get_regexp_op_for_database_sqlite` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/test_utils.py:L127–L130` |
| `TestGetRegexOps.test_get_regexp_op_for_database_mysql` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/test_utils.py:L132–L135` |
| `TestGetRegexOps.test_get_regexp_op_for_database_postgresql` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/test_utils.py:L137–L140` |
| `TestGetRegexOps.test_get_regexp_op_for_database_unknown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/test_utils.py:L142–L145` |
| `TestGetRegexOps.test_replace_sub_expression` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/test_utils.py:L147–L161` |

## Dependencies

- `nova.db`: imports `utils` (src/nova/tests/unit/db/test_utils.py:L13)
- `nova`: imports `exception` (src/nova/tests/unit/db/test_utils.py:L14)
- `nova`: imports `test` (src/nova/tests/unit/db/test_utils.py:L15)

