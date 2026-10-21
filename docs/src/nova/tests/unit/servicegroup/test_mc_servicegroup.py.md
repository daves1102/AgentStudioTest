# src/nova/tests/unit/servicegroup/test_mc_servicegroup.py

## Overview

This file implements the `test_mc_servicegroup` module, defining 1 class, 5 methods, 5 imports.

Lines: total 104, code 72, comment 20, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MemcachedServiceGroupTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L26–L104` |
| `MemcachedServiceGroupTestCase.setUp` | method | (self, mgc_mock) | public | not declared | 1/6 | `src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L29–L34` |
| `MemcachedServiceGroupTestCase.test_is_up` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L36–L48` |
| `MemcachedServiceGroupTestCase.test_join` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L50–L56` |
| `MemcachedServiceGroupTestCase.test_report_state` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L58–L68` |
| `MemcachedServiceGroupTestCase.test_get_updated_time` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L70–L104` |

## Dependencies

- `import datetime` (src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L19)
- `nova`: imports `servicegroup` (src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L22)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/servicegroup/test_mc_servicegroup.py:L23)

