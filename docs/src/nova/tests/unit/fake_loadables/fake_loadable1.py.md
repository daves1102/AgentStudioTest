# src/nova/tests/unit/fake_loadables/fake_loadable1.py

## Overview

This file implements the `fake_loadable1` module, defining 4 classs, 2 functions, 1 import.

Lines: total 44, code 18, comment 13, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeLoadableSubClass1` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_loadables/fake_loadable1.py:L21–L22` |
| `FakeLoadableSubClass2` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_loadables/fake_loadable1.py:L25–L26` |
| `_FakeLoadableSubClass3` | class | — | unexported | not declared | — | `src/nova/tests/unit/fake_loadables/fake_loadable1.py:L29–L31` |
| `FakeLoadableSubClass4` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_loadables/fake_loadable1.py:L34–L35` |
| `return_valid_classes` | function | — | exported | `[FakeLoadableSubClass1, FakeLoadableSubClass2]` (src/nova/tests/unit/fake_loadables/fake_loadable1.py:L39) | 1/2 | `src/nova/tests/unit/fake_loadables/fake_loadable1.py:L38–L39` |
| `return_invalid_classes` | function | — | exported | `[FakeLoadableSubClass1, _FakeLoadableSubClass3, FakeLoadableSubClass4]` (src/nova/tests/unit/fake_loadables/fake_loadable1.py:L43) | 1/3 | `src/nova/tests/unit/fake_loadables/fake_loadable1.py:L42–L44` |

## Dependencies

- `nova.tests.unit`: imports `fake_loadables` (src/nova/tests/unit/fake_loadables/fake_loadable1.py:L18)

