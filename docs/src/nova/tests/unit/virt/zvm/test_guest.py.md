# src/nova/tests/unit/virt/zvm/test_guest.py

## Overview

This file implements the `test_guest` module, defining 1 class, 5 methods, 9 imports.

Lines: total 77, code 55, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestZVMGuestOp` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/zvm/test_guest.py:L27–L77` |
| `TestZVMGuestOp.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/zvm/test_guest.py:L28–L49` |
| `TestZVMGuestOp.test_private_mapping_power_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/zvm/test_guest.py:L51–L57` |
| `TestZVMGuestOp.test_get_info_err_instance_not_found` | method | (self, call) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_guest.py:L60–L63` |
| `TestZVMGuestOp.test_get_info_err_general` | method | (self, call) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_guest.py:L66–L69` |
| `TestZVMGuestOp.test_get_info` | method | (self, call) | public | not declared | 1/6 | `src/nova/tests/unit/virt/zvm/test_guest.py:L72–L77` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/zvm/test_guest.py:L15)
- `nova.compute`: imports `power_state as compute_power_state` (src/nova/tests/unit/virt/zvm/test_guest.py:L17)
- `nova`: imports `context` (src/nova/tests/unit/virt/zvm/test_guest.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/virt/zvm/test_guest.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/virt/zvm/test_guest.py:L20)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/zvm/test_guest.py:L21)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/zvm/test_guest.py:L22)
- `nova.virt.zvm`: imports `driver` (src/nova/tests/unit/virt/zvm/test_guest.py:L23)
- `nova.virt.zvm`: imports `guest` (src/nova/tests/unit/virt/zvm/test_guest.py:L24)

