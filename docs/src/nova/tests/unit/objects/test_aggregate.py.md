# src/nova/tests/unit/objects/test_aggregate.py

## Overview

This file implements the `test_aggregate` module, defining 3 classs, 2 constants, 19 methods, 1 variable, 7 imports, 8 side effects, 1 security surface entry.

Lines: total 291, code 233, comment 17, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_aggregate.py:L26–L26` |
| `fake_aggregate` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_aggregate.py:L27–L37` |
| `SUBS` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_aggregate.py:L39–L39` |
| `_TestAggregateObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_aggregate.py:L42–L281` |
| `_TestAggregateObject.test_get_by_id_from_api` | method | (self, mock_get_api) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_aggregate.py:L45–L51` |
| `_TestAggregateObject.test_get_by_uuid_from_api` | method | (self, get_by_uuid_api) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_aggregate.py:L54–L59` |
| `_TestAggregateObject.test_create` | method | (self, api_create_mock) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_aggregate.py:L62–L77` |
| `_TestAggregateObject.test_recreate_fails` | method | (self, api_create_mock) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_aggregate.py:L80–L91` |
| `_TestAggregateObject.test_destroy` | method | (self, api_delete_mock) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_aggregate.py:L94–L98` |
| `_TestAggregateObject.test_save_to_api` | method | (self, api_update_mock, mock_notify) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_aggregate.py:L102–L123` |
| `_TestAggregateObject.test_save_and_create_no_hosts` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_aggregate.py:L125–L132` |
| `_TestAggregateObject.test_update_metadata_api` | method | (self, mock_obj_from_primitive, mock_notify, mock_api_metadata_add, mock_api_metadata_delete) | public | not declared | 1/37 | `src/nova/tests/unit/objects/test_aggregate.py:L139–L176` |
| `_TestAggregateObject.test_update_metadata_api_case_sensitive` | method | (self, mock_notify) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_aggregate.py:L179–L200` |
| `_TestAggregateObject.test_add_host_api` | method | (self, mock_host_add_api) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_aggregate.py:L203–L211` |
| `_TestAggregateObject.test_delete_host_api` | method | (self, mock_host_delete_api) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_aggregate.py:L214–L221` |
| `_TestAggregateObject.test_availability_zone` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_aggregate.py:L223–L226` |
| `_TestAggregateObject.test_get_all` | method | (self, mock_api_get_all) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_aggregate.py:L229–L233` |
| `_TestAggregateObject.test_by_host` | method | (self, mock_api_get_by_host) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_aggregate.py:L236–L240` |
| `_TestAggregateObject.test_get_by_metadata_key` | method | (self, mock_api_get_by_metadata_key) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_aggregate.py:L243–L248` |
| `_TestAggregateObject.test_get_by_metadata_key_and_hosts_no_match` | method | (self, get_by_metadata_key) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_aggregate.py:L251–L255` |
| `_TestAggregateObject.test_get_by_metadata_key_and_hosts_match` | method | (self, get_by_metadata_key) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_aggregate.py:L258–L263` |
| `_TestAggregateObject.test_get_non_matching_by_metadata_keys` | method | (self, get_non_matching_by_metadata_keys) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_aggregate.py:L267–L272` |
| `_TestAggregateObject.test_get_non_matching_by_metadata_keys_and_hosts_no_match` | method | (self, get_non_matching_by_metadata_keys) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_aggregate.py:L276–L281` |
| `TestAggregateObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_aggregate.py:L284–L286` |
| `TestRemoteAggregateObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_aggregate.py:L289–L291` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_aggregate.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/objects/test_aggregate.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_aggregate.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_aggregate.py:L20)
- `nova.objects`: imports `aggregate` (src/nova/tests/unit/objects/test_aggregate.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_aggregate.py:L22)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_aggregate.py:L23)

## Side Effects

- **network**: def test_save_to_api(self, api_update_mock, mock_notify): (src/nova/tests/unit/objects/test_aggregate.py:L102)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/objects/test_aggregate.py:L116)
- **network**: self.assertEqual(2, mock_notify.call_count) (src/nova/tests/unit/objects/test_aggregate.py:L123)
- **network**: mock_notify, (src/nova/tests/unit/objects/test_aggregate.py:L141)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/objects/test_aggregate.py:L159)
- **network**: def test_update_metadata_api_case_sensitive(self, mock_notify): (src/nova/tests/unit/objects/test_aggregate.py:L179)
- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_aggregate.py:L26)
- **global-mutation**: SUBS = {'metadata': 'metadetails'} (src/nova/tests/unit/objects/test_aggregate.py:L39)

## Security Surface

- **sink** (`db-write`): fake_meta_ref.update.side_effect = KeyError (src/nova/tests/unit/objects/test_aggregate.py:L188)

## Notes

- KB `sideEffects` entries at L102, L179 have targets that appear to be code fragments rather than resource paths; documented as recorded.

