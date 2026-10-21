# src/nova/tests/unit/servicegroup/test_db_servicegroup.py

## Overview

This file implements the `test_db_servicegroup` module, defining 1 class, 9 methods, 8 imports.

Lines: total 130, code 89, comment 20, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DBServiceGroupTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L27–L130` |
| `DBServiceGroupTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L29–L34` |
| `DBServiceGroupTestCase.test_is_up` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L36–L74` |
| `DBServiceGroupTestCase.test_join` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L76–L82` |
| `DBServiceGroupTestCase.test_report_state` | method | (self, upd_mock) | public | not declared | 1/10 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L85–L94` |
| `DBServiceGroupTestCase._test_report_state_error` | method | (self, exc_cls, upd_mock) | private | `service_ref` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L106) | 1/10 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L97–L106` |
| `DBServiceGroupTestCase.test_report_state_error_handling_timeout` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L108–L109` |
| `DBServiceGroupTestCase.test_report_state_unexpected_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L111–L112` |
| `DBServiceGroupTestCase.test_report_state_service_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L114–L119` |
| `DBServiceGroupTestCase.test_get_updated_time` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L121–L130` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L15)
- `import oslo_messaging as messaging` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L17)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L18)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L22)
- `nova`: imports `servicegroup` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/servicegroup/test_db_servicegroup.py:L24)

