# src/nova/tests/functional/libvirt/test_intel_tdx.py

## Overview

This file implements the `test_intel_tdx` module, defining 1 class, 1 field, 2 functions, 2 methods, 9 imports.

Lines: total 95, code 65, comment 14, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestTDX` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_intel_tdx.py:L26–L95` |
| `TestTDX.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_intel_tdx.py:L27–L27` |
| `TestTDX.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_intel_tdx.py:L29–L69` |
| `TestTDX.setUp.mock_capacity` | function | — | public | `0` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L50); `self.misc_capacity` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L51) | — | `src/nova/tests/functional/libvirt/test_intel_tdx.py:L48–L51` |
| `TestTDX.setUp.mock_domain_capability` | function | — | public | `( fakelibvirt.virConnect ._domain_capability_features_with_TDX_unsupported )` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L55); `fakelibvirt.virConnect._domain_capability_features_with_TDX` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L59) | — | `src/nova/tests/functional/libvirt/test_intel_tdx.py:L53–L59` |
| `TestTDX.test_intel_tdx_lost_after_restart` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/libvirt/test_intel_tdx.py:L71–L95` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L14)
- `import fixtures` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L17)
- `oslo_utils`: imports `versionutils` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L20)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L21)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L22)
- `nova.virt.libvirt`: imports `driver` (src/nova/tests/functional/libvirt/test_intel_tdx.py:L23)

