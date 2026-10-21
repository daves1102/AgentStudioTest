# src/nova/tests/functional/db/test_quota_model.py

## Overview

This file implements the `test_quota_model` module, defining 1 class, 8 methods, 3 imports.

Lines: total 65, code 44, comment 11, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaTablesCompareTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_quota_model.py:L18–L65` |
| `QuotaTablesCompareTestCase._get_column_list` | method | (self, model) | private | `column_list` (src/nova/tests/functional/db/test_quota_model.py:L21) | 2/3 | `src/nova/tests/functional/db/test_quota_model.py:L19–L21` |
| `QuotaTablesCompareTestCase._check_column_list` | method | (self, columns_new, columns_old, added=None, removed=None) | private | `False` (src/nova/tests/functional/db/test_quota_model.py:L34); `True` (src/nova/tests/functional/db/test_quota_model.py:L35) | 7/13 | `src/nova/tests/functional/db/test_quota_model.py:L23–L35` |
| `QuotaTablesCompareTestCase._compare_models` | method | (self, m_a, m_b, added=None, removed=None) | private | not declared | 3/9 | `src/nova/tests/functional/db/test_quota_model.py:L37–L45` |
| `QuotaTablesCompareTestCase.test_tables_quota` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_quota_model.py:L47–L49` |
| `QuotaTablesCompareTestCase.test_tables_project_user_quota` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_quota_model.py:L51–L53` |
| `QuotaTablesCompareTestCase.test_tables_quota_class` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_quota_model.py:L55–L57` |
| `QuotaTablesCompareTestCase.test_tables_quota_usage` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_quota_model.py:L59–L61` |
| `QuotaTablesCompareTestCase.test_tables_reservation` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_quota_model.py:L63–L65` |

## Dependencies

- `nova.db.api`: imports `models as api_models` (src/nova/tests/functional/db/test_quota_model.py:L13)
- `nova.db.main`: imports `models` (src/nova/tests/functional/db/test_quota_model.py:L14)
- `nova`: imports `test` (src/nova/tests/functional/db/test_quota_model.py:L15)

