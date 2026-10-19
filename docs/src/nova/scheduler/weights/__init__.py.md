# src/nova/scheduler/weights/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 3 classs, 1 field, 1 function, 3 methods, 1 import.

Lines: total 48, code 22, comment 14, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `WeighedHost` | class | — | exported | not declared | — | `src/nova/scheduler/weights/__init__.py:L23–L31` |
| `WeighedHost.to_dict` | method | (self) | public | `x` (src/nova/scheduler/weights/__init__.py:L27) | 1/4 | `src/nova/scheduler/weights/__init__.py:L24–L27` |
| `WeighedHost.__repr__` | method | (self) | public | `"WeighedHost [host: %r, weight: %s]" % ( self.obj, self.weight)` (src/nova/scheduler/weights/__init__.py:L30) | 1/3 | `src/nova/scheduler/weights/__init__.py:L29–L31` |
| `BaseHostWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/__init__.py:L34–L36` |
| `HostWeightHandler` | class | — | exported | not declared | — | `src/nova/scheduler/weights/__init__.py:L39–L43` |
| `HostWeightHandler.object_class` | field | — | public | not declared | — | `src/nova/scheduler/weights/__init__.py:L40–L40` |
| `HostWeightHandler.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/weights/__init__.py:L42–L43` |
| `all_weighers` | function | — | exported | `HostWeightHandler().get_all_classes()` (src/nova/scheduler/weights/__init__.py:L48) | 1/2 | `src/nova/scheduler/weights/__init__.py:L46–L48` |

## Dependencies

- `nova`: imports `weights` (src/nova/scheduler/weights/__init__.py:L20)

