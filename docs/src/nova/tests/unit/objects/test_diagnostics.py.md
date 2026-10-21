# src/nova/tests/unit/objects/test_diagnostics.py

## Overview

This file implements the `test_diagnostics` module, defining 2 classs, 9 methods, 2 imports.

Lines: total 146, code 113, comment 18, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DiagnosticsComparisonMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_diagnostics.py:L19–L35` |
| `DiagnosticsComparisonMixin.assertDiagnosticsEqual` | method | (self, expected, actual) | public | not declared | 4/9 | `src/nova/tests/unit/objects/test_diagnostics.py:L20–L35` |
| `DiagnosticsTests` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_diagnostics.py:L38–L146` |
| `DiagnosticsTests.test_cpu_diagnostics` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_diagnostics.py:L40–L44` |
| `DiagnosticsTests.test_nic_diagnostics` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_diagnostics.py:L46–L61` |
| `DiagnosticsTests.test_disk_diagnostics` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_diagnostics.py:L63–L72` |
| `DiagnosticsTests.test_memory_diagnostics` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_diagnostics.py:L74–L77` |
| `DiagnosticsTests.test_diagnostics` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_diagnostics.py:L79–L102` |
| `DiagnosticsTests.test_add_cpu` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_diagnostics.py:L104–L112` |
| `DiagnosticsTests.test_add_nic` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_diagnostics.py:L114–L132` |
| `DiagnosticsTests.test_add_disk` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_diagnostics.py:L134–L146` |

## Dependencies

- `nova.objects`: imports `diagnostics` (src/nova/tests/unit/objects/test_diagnostics.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_diagnostics.py:L16)

