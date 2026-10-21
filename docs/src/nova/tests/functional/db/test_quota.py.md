# src/nova/tests/functional/db/test_quota.py

## Overview

This file implements the `test_quota` module, defining 1 class, 1 constant, 4 methods, 9 imports, 1 side effect.

Lines: total 274, code 188, comment 53, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_quota.py:L27–L274` |
| `QuotaTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_quota.py:L28–L28` |
| `QuotaTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_quota.py:L30–L37` |
| `QuotaTestCase.test_server_group_members_count_by_user` | method | (self, uid_qfd_populated, mock_uid_qfd_populated, mock_warn_log) | public | not declared | 2/77 | `src/nova/tests/functional/db/test_quota.py:L42–L141` |
| `QuotaTestCase.test_instances_cores_ram_count` | method | (self, mock_get_project_cell_mappings) | public | not declared | 1/64 | `src/nova/tests/functional/db/test_quota.py:L145–L224` |
| `QuotaTestCase.test_user_id_queued_for_delete_populated` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/db/test_quota.py:L226–L274` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/db/test_quota.py:L13)
- `import ddt` (src/nova/tests/functional/db/test_quota.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_quota.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_quota.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_quota.py:L19)
- `nova`: imports `quota` (src/nova/tests/functional/db/test_quota.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/db/test_quota.py:L21)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/db/test_quota.py:L22)
- `nova.tests.functional.db`: imports `test_instance_mapping` (src/nova/tests/functional/db/test_quota.py:L23)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_quota.py:L28)

