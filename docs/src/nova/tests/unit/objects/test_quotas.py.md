# src/nova/tests/unit/objects/test_quotas.py

## Overview

This file implements the `test_quotas` module, defining 4 classs, 1 constant, 2 functions, 31 methods, 9 imports, 1 side effect.

Lines: total 407, code 327, comment 29, blank 51

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_quotas.py:L27–L27` |
| `TestQuotasModule` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_quotas.py:L30–L47` |
| `TestQuotasModule.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L31–L35` |
| `TestQuotasModule.test_ids_from_instance_non_admin` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L37–L41` |
| `TestQuotasModule.test_ids_from_instance_admin` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L43–L47` |
| `_TestQuotasObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_quotas.py:L50–L399` |
| `_TestQuotasObject.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L51–L55` |
| `_TestQuotasObject.test_create_limit` | method | (self, mock_create, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L60–L64` |
| `_TestQuotasObject.test_create_limit_exists_in_main` | method | (self, mock_create, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_quotas.py:L68–L71` |
| `_TestQuotasObject.test_update_limit` | method | (self, mock_update) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L74–L78` |
| `_TestQuotasObject.test_count` | method | (self, mock_count) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_quotas.py:L81–L97` |
| `_TestQuotasObject.test_check_deltas` | method | (self, mock_count) | public | not declared | 2/20 | `src/nova/tests/unit/objects/test_quotas.py:L100–L128` |
| `_TestQuotasObject.test_check_deltas.fake_count` | function | (context, resource) | public | `{'project': {'key_pairs': 2, 'server_group_members': 2}, 'user': {'key_pairs': 1, 'server_group_members': 2}}` (src/nova/tests/unit/objects/test_quotas.py:L106); `{'user': {resource: 2}}` (src/nova/tests/unit/objects/test_quotas.py:L109) | — | `src/nova/tests/unit/objects/test_quotas.py:L104–L109` |
| `_TestQuotasObject.test_check_deltas_zero` | method | (self, mock_count) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_quotas.py:L131–L155` |
| `_TestQuotasObject.test_check_deltas_zero.fake_count` | function | (context, resource) | public | `{'user': {resource: 4}}` (src/nova/tests/unit/objects/test_quotas.py:L140) | — | `src/nova/tests/unit/objects/test_quotas.py:L139–L140` |
| `_TestQuotasObject.test_check_deltas_negative` | method | (self, mock_count) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_quotas.py:L158–L174` |
| `_TestQuotasObject.test_check_deltas_limit_check_scoping` | method | (self, mock_check, mock_count) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_quotas.py:L178–L203` |
| `_TestQuotasObject.test_update_limit_main` | method | (self, mock_update_main, mock_update) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_quotas.py:L208–L215` |
| `_TestQuotasObject.test_get` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_quotas.py:L218–L223` |
| `_TestQuotasObject.test_get_main` | method | (self, mock_get_main, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_quotas.py:L228–L234` |
| `_TestQuotasObject.test_get_all` | method | (self, mock_get_all_main, mock_get_all) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_quotas.py:L238–L244` |
| `_TestQuotasObject.test_get_all_by_project` | method | (self, mock_get_all_main, mock_get_all) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_quotas.py:L248–L259` |
| `_TestQuotasObject.test_get_all_by_project_and_user` | method | (self, mock_get_all_main, mock_get_all) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_quotas.py:L263–L279` |
| `_TestQuotasObject.test_destroy_all_by_project` | method | (self, mock_destroy_all) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_quotas.py:L282–L284` |
| `_TestQuotasObject.test_destroy_all_by_project_main` | method | (self, mock_destroy_all_main, mock_destroy_all) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_quotas.py:L290–L295` |
| `_TestQuotasObject.test_destroy_all_by_project_and_user` | method | (self, mock_destroy_all) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_quotas.py:L298–L303` |
| `_TestQuotasObject.test_destroy_all_by_project_and_user_main` | method | (self, mock_destroy_all_main, mock_destroy_all) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_quotas.py:L309–L317` |
| `_TestQuotasObject.test_get_class` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_quotas.py:L320–L323` |
| `_TestQuotasObject.test_get_class_main` | method | (self, mock_get_main, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_quotas.py:L328–L333` |
| `_TestQuotasObject.test_get_default_class` | method | (self, mock_get_all) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L336–L340` |
| `_TestQuotasObject.test_get_default_class_main` | method | (self, mock_get_default_main, mock_get_all) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_quotas.py:L345–L350` |
| `_TestQuotasObject.test_get_class_by_name` | method | (self, mock_get_all_main, mock_get_all) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_quotas.py:L354–L365` |
| `_TestQuotasObject.test_create_class` | method | (self, mock_create, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L370–L374` |
| `_TestQuotasObject.test_create_class_exists_in_main` | method | (self, mock_create, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_quotas.py:L378–L381` |
| `_TestQuotasObject.test_update_class` | method | (self, mock_update) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_quotas.py:L384–L388` |
| `_TestQuotasObject.test_update_class_main` | method | (self, mock_update_main, mock_update) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_quotas.py:L393–L399` |
| `TestQuotasObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_quotas.py:L402–L403` |
| `TestRemoteQuotasObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_quotas.py:L406–L407` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_quotas.py:L15)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_quotas.py:L17)
- `nova.db.main`: imports `api as db_api` (src/nova/tests/unit/objects/test_quotas.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_quotas.py:L19)
- `nova.objects`: imports `quotas as quotas_obj` (src/nova/tests/unit/objects/test_quotas.py:L20)
- `nova`: imports `quota` (src/nova/tests/unit/objects/test_quotas.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_quotas.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_quotas.py:L23)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_quotas.py:L24)

## Side Effects

- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/tests/unit/objects/test_quotas.py:L27)

