# src/nova/tests/functional/db/test_quotas.py

## Overview

This file implements the `test_quotas` module, defining 1 class, 27 methods, 6 imports.

Lines: total 319, code 256, comment 26, blank 37

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotasObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_quotas.py:L21–L319` |
| `QuotasObjectTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_quotas.py:L23–L25` |
| `QuotasObjectTestCase.test_create_class` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_quotas.py:L27–L32` |
| `QuotasObjectTestCase.test_create_class_exists` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_quotas.py:L34–L38` |
| `QuotasObjectTestCase.test_update_class` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_quotas.py:L40–L48` |
| `QuotasObjectTestCase.test_update_class_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L50–L53` |
| `QuotasObjectTestCase.test_create_per_project_limit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_quotas.py:L55–L61` |
| `QuotasObjectTestCase.test_create_per_user_limit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_quotas.py:L63–L69` |
| `QuotasObjectTestCase.test_create_limit_duplicate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_quotas.py:L71–L76` |
| `QuotasObjectTestCase.test_update_per_project_limit` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_quotas.py:L78–L88` |
| `QuotasObjectTestCase.test_update_per_project_limit_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L90–L93` |
| `QuotasObjectTestCase.test_update_per_user_limit` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_quotas.py:L95–L105` |
| `QuotasObjectTestCase.test_update_per_user_limit_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L107–L110` |
| `QuotasObjectTestCase.test_get_per_project_limit_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L112–L115` |
| `QuotasObjectTestCase.test_get_per_user_limit_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L117–L120` |
| `QuotasObjectTestCase.test_get_all_per_user_limits` | method | (self) | public | not declared | 2/14 | `src/nova/tests/functional/db/test_quotas.py:L122–L135` |
| `QuotasObjectTestCase.test_get_all_per_project_limits_by_project` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_quotas.py:L137–L146` |
| `QuotasObjectTestCase.test_get_all_per_user_limits_by_project_and_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_quotas.py:L148–L158` |
| `QuotasObjectTestCase.test_destroy_per_project_and_per_user_limits` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/db/test_quotas.py:L160–L174` |
| `QuotasObjectTestCase.test_destroy_per_project_and_per_user_limits_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L176–L179` |
| `QuotasObjectTestCase.test_destroy_per_user_limits` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_quotas.py:L181–L189` |
| `QuotasObjectTestCase.test_destroy_per_user_limits_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_quotas.py:L191–L195` |
| `QuotasObjectTestCase.test_get_class_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_quotas.py:L197–L200` |
| `QuotasObjectTestCase.test_get_all_class_by_name` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_quotas.py:L202–L209` |
| `QuotasObjectTestCase.test_migrate_quota_limits` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/db/test_quotas.py:L211–L249` |
| `QuotasObjectTestCase.test_migrate_quota_limits_skips_existing` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/db/test_quotas.py:L251–L265` |
| `QuotasObjectTestCase.test_migrate_quota_classes` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/db/test_quotas.py:L267–L302` |
| `QuotasObjectTestCase.test_migrate_quota_classes_skips_existing` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/db/test_quotas.py:L304–L319` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/db/test_quotas.py:L13)
- `nova.db.main`: imports `api as db_api` (src/nova/tests/functional/db/test_quotas.py:L14)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_quotas.py:L15)
- `nova.objects`: imports `quotas` (src/nova/tests/functional/db/test_quotas.py:L16)
- `nova`: imports `test` (src/nova/tests/functional/db/test_quotas.py:L17)
- `nova.tests.unit.db.main`: imports `test_api as test_db_api` (src/nova/tests/functional/db/test_quotas.py:L18)

