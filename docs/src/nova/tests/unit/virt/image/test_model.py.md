# src/nova/tests/unit/virt/image/test_model.py

## Overview

This file implements the `test_model` module, defining 1 class, 6 methods, 3 imports.

Lines: total 95, code 66, comment 15, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ImageTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/image/test_model.py:L22–L95` |
| `ImageTest.test_local_file_image` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/image/test_model.py:L24–L31` |
| `ImageTest.test_local_file_bad_format` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/image/test_model.py:L33–L37` |
| `ImageTest.test_local_block_image` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/image/test_model.py:L39–L45` |
| `ImageTest.test_rbd_image` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/image/test_model.py:L47–L61` |
| `ImageTest.test_equality` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/image/test_model.py:L63–L83` |
| `ImageTest.test_stringify` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/image/test_model.py:L85–L95` |

## Dependencies

- `nova`: imports `exception` (src/nova/tests/unit/virt/image/test_model.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/virt/image/test_model.py:L18)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/image/test_model.py:L19)

