# src/nova/tests/unit/test_json_ref.py

## Overview

This file implements the `test_json_ref` module, defining 1 class, 7 methods, 4 imports.

Lines: total 170, code 130, comment 16, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestJsonRef` | class | — | exported | not declared | — | `src/nova/tests/unit/test_json_ref.py:L21–L170` |
| `TestJsonRef.test_update_dict_recursively` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/test_json_ref.py:L23–L55` |
| `TestJsonRef.test_resolve_ref` | method | (self, mock_open, mock_json_load) | public | not declared | 1/10 | `src/nova/tests/unit/test_json_ref.py:L59–L70` |
| `TestJsonRef.test_resolve_ref_recursively` | method | (self, mock_open, mock_json_load) | public | not declared | 1/17 | `src/nova/tests/unit/test_json_ref.py:L74–L94` |
| `TestJsonRef.test_resolve_ref_with_override` | method | (self, mock_open, mock_json_load) | public | not declared | 1/13 | `src/nova/tests/unit/test_json_ref.py:L98–L112` |
| `TestJsonRef.test_resolve_ref_with_nested_override` | method | (self, mock_open, mock_json_load) | public | not declared | 1/17 | `src/nova/tests/unit/test_json_ref.py:L116–L134` |
| `TestJsonRef.test_resolve_ref_with_override_having_refs` | method | (self, mock_open, mock_json_load) | public | not declared | 1/20 | `src/nova/tests/unit/test_json_ref.py:L138–L160` |
| `TestJsonRef.test_ref_with_json_path_not_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_json_ref.py:L162–L170` |

## Dependencies

- `import copy` (src/nova/tests/unit/test_json_ref.py:L14)
- `unittest`: imports `mock` (src/nova/tests/unit/test_json_ref.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/test_json_ref.py:L17)
- `nova.tests`: imports `json_ref` (src/nova/tests/unit/test_json_ref.py:L18)

