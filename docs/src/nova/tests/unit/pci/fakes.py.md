# src/nova/tests/unit/pci/fakes.py

## Overview

This file implements the `fakes` module, defining 3 functions, 3 imports.

Lines: total 40, code 19, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_pci_whitelist` | function | — | exported | `patcher` (src/nova/tests/unit/pci/fakes.py:L29) | 1/7 | `src/nova/tests/unit/pci/fakes.py:L23–L29` |
| `patch_pci_whitelist` | function | (f) | exported | `wrapper` (src/nova/tests/unit/pci/fakes.py:L40) | 1/4 | `src/nova/tests/unit/pci/fakes.py:L32–L40` |
| `patch_pci_whitelist.wrapper` | function | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/pci/fakes.py:L34–L39` |

## Dependencies

- `import functools` (src/nova/tests/unit/pci/fakes.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/pci/fakes.py:L17)
- `nova.pci`: imports `whitelist` (src/nova/tests/unit/pci/fakes.py:L20)

