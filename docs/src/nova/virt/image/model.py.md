# src/nova/virt/image/model.py

## Overview

This file implements the `model` module, defining 5 classs, 4 constants, 8 methods, 2 imports, 4 side effects.

Lines: total 131, code 84, comment 15, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FORMAT_RAW` | constant | — | exported | not declared | — | `src/nova/virt/image/model.py:L21–L21` |
| `FORMAT_QCOW2` | constant | — | exported | not declared | — | `src/nova/virt/image/model.py:L22–L22` |
| `FORMAT_PLOOP` | constant | — | exported | not declared | — | `src/nova/virt/image/model.py:L23–L23` |
| `ALL_FORMATS` | constant | — | exported | not declared | — | `src/nova/virt/image/model.py:L25–L29` |
| `Image` | class | — | exported | not declared | — | `src/nova/virt/image/model.py:L32–L65` |
| `Image.__init__` | method | (self, format) | public | not declared | 2/5 | `src/nova/virt/image/model.py:L44–L54` |
| `Image.__repr__` | method | (self) | public | `strutils.mask_password(msg)` (src/nova/virt/image/model.py:L58) | 1/3 | `src/nova/virt/image/model.py:L56–L58` |
| `Image.__eq__` | method | (self, other) | public | `((self.__class__ == other.__class__) and (self.__dict__ == other.__dict__))` (src/nova/virt/image/model.py:L61) | 2/3 | `src/nova/virt/image/model.py:L60–L62` |
| `Image.__hash__` | method | (self) | public | `hash(str(self.__dict__))` (src/nova/virt/image/model.py:L65) | 1/2 | `src/nova/virt/image/model.py:L64–L65` |
| `LocalImage` | class | — | exported | not declared | — | `src/nova/virt/image/model.py:L68–L81` |
| `LocalImage.__init__` | method | (self, path, format) | public | not declared | 1/3 | `src/nova/virt/image/model.py:L73–L81` |
| `LocalFileImage` | class | — | exported | not declared | — | `src/nova/virt/image/model.py:L84–L95` |
| `LocalFileImage.__init__` | method | (self, path, format) | public | not declared | 1/2 | `src/nova/virt/image/model.py:L89–L95` |
| `LocalBlockImage` | class | — | exported | not declared | — | `src/nova/virt/image/model.py:L98–L108` |
| `LocalBlockImage.__init__` | method | (self, path) | public | not declared | 1/2 | `src/nova/virt/image/model.py:L103–L108` |
| `RBDImage` | class | — | exported | not declared | — | `src/nova/virt/image/model.py:L111–L131` |
| `RBDImage.__init__` | method | (self, name, pool, user, password, servers) | public | not declared | 1/7 | `src/nova/virt/image/model.py:L116–L131` |

## Dependencies

- `oslo_utils`: imports `strutils` (src/nova/virt/image/model.py:L17)
- `nova`: imports `exception` (src/nova/virt/image/model.py:L19)

## Side Effects

- **global-mutation**: FORMAT_RAW = "raw" (src/nova/virt/image/model.py:L21)
- **global-mutation**: FORMAT_QCOW2 = "qcow2" (src/nova/virt/image/model.py:L22)
- **global-mutation**: FORMAT_PLOOP = "ploop" (src/nova/virt/image/model.py:L23)
- **global-mutation**: ALL_FORMATS = [ (src/nova/virt/image/model.py:L25)

