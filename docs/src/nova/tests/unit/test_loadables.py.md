# src/nova/tests/unit/test_loadables.py

## Overview

This file implements the `test_loadables` module, defining 1 class, 11 methods, 3 imports.

Lines: total 113, code 84, comment 16, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LoadablesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_loadables.py:L23–L113` |
| `LoadablesTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_loadables.py:L24–L28` |
| `LoadablesTestCase.test_loader_init` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_loadables.py:L30–L36` |
| `LoadablesTestCase._compare_classes` | method | (self, classes, expected) | private | not declared | 2/3 | `src/nova/tests/unit/test_loadables.py:L38–L40` |
| `LoadablesTestCase.test_get_all_classes` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_loadables.py:L42–L48` |
| `LoadablesTestCase.test_get_matching_classes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_loadables.py:L50–L57` |
| `LoadablesTestCase.test_get_matching_classes_with_underscore` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_loadables.py:L59–L65` |
| `LoadablesTestCase.test_get_matching_classes_with_wrong_type1` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_loadables.py:L67–L73` |
| `LoadablesTestCase.test_get_matching_classes_with_wrong_type2` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_loadables.py:L75–L81` |
| `LoadablesTestCase.test_get_matching_classes_with_one_function` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_loadables.py:L83–L91` |
| `LoadablesTestCase.test_get_matching_classes_with_two_functions` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_loadables.py:L93–L101` |
| `LoadablesTestCase.test_get_matching_classes_with_function_including_invalids` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_loadables.py:L103–L113` |

## Dependencies

- `nova`: imports `exception` (src/nova/tests/unit/test_loadables.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/test_loadables.py:L19)
- `nova.tests.unit`: imports `fake_loadables` (src/nova/tests/unit/test_loadables.py:L20)

