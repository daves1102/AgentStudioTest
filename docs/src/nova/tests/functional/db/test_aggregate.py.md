# src/nova/tests/functional/db/test_aggregate.py

## Overview

This file implements the `test_aggregate` module, defining 2 classs, 2 constants, 10 functions, 51 methods, 13 imports, 8 side effects, 6 security surface entries.

Lines: total 682, code 553, comment 14, blank 115

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SUBS` | constant | — | exported | not declared | — | `src/nova/tests/functional/db/test_aggregate.py:L30–L30` |
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/functional/db/test_aggregate.py:L33–L33` |
| `_get_fake_aggregate` | function | (db_id, in_api=True, result=True) | unexported | `agg_map` (src/nova/tests/functional/db/test_aggregate.py:L50) | 3/15 | `src/nova/tests/functional/db/test_aggregate.py:L36–L50` |
| `_get_fake_hosts` | function | (db_id) | unexported | `['constant_host', 'unique_host_' + str(db_id)]` (src/nova/tests/functional/db/test_aggregate.py:L54) | 1/2 | `src/nova/tests/functional/db/test_aggregate.py:L53–L54` |
| `_get_fake_metadata` | function | (db_id) | unexported | `{'constant_key': 'constant_value', 'unique_key': 'unique_value_' + str(db_id)}` (src/nova/tests/functional/db/test_aggregate.py:L58) | 1/3 | `src/nova/tests/functional/db/test_aggregate.py:L57–L59` |
| `_create_aggregate` | function | (context, values=_get_fake_aggregate(1, result=False), metadata=_get_fake_metadata(1)) | unexported | `aggregate` (src/nova/tests/functional/db/test_aggregate.py:L77) | 1/2 | `src/nova/tests/functional/db/test_aggregate.py:L63–L77` |
| `_create_aggregate_with_hosts` | function | (context, values=_get_fake_aggregate(1, result=False), metadata=_get_fake_metadata(1), hosts=_get_fake_hosts(1)) | unexported | `aggregate` (src/nova/tests/functional/db/test_aggregate.py:L92) | 1/4 | `src/nova/tests/functional/db/test_aggregate.py:L81–L92` |
| `_aggregate_host_get_all` | function | (context, aggregate_id) | unexported | `context.session.query(api_models.AggregateHost).\ filter_by(aggregate_id=aggregate_id).all()` (src/nova/tests/functional/db/test_aggregate.py:L97) | 1/3 | `src/nova/tests/functional/db/test_aggregate.py:L96–L98` |
| `_aggregate_metadata_get_all` | function | (context, aggregate_id) | unexported | `metadata` (src/nova/tests/functional/db/test_aggregate.py:L108) | 2/7 | `src/nova/tests/functional/db/test_aggregate.py:L102–L108` |
| `AggregateObjectDbTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_aggregate.py:L111–L450` |
| `AggregateObjectDbTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_aggregate.py:L113–L115` |
| `AggregateObjectDbTestCase.test_aggregate_get_from_db` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L117–L122` |
| `AggregateObjectDbTestCase.test_aggregate_get_from_db_by_uuid` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_aggregate.py:L124–L130` |
| `AggregateObjectDbTestCase.test_aggregate_get_from_db_raise_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_aggregate.py:L132–L136` |
| `AggregateObjectDbTestCase.test_aggregate_get_all_from_db` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/db/test_aggregate.py:L138–L143` |
| `AggregateObjectDbTestCase.test_aggregate_get_by_host_from_db` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/db/test_aggregate.py:L145–L158` |
| `AggregateObjectDbTestCase.test_aggregate_get_by_host_with_key_from_db` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/db/test_aggregate.py:L160–L172` |
| `AggregateObjectDbTestCase.test_aggregate_get_by_metadata_key_from_db` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/db/test_aggregate.py:L174–L186` |
| `AggregateObjectDbTestCase.test_aggregate_create_in_db` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_aggregate.py:L188–L196` |
| `AggregateObjectDbTestCase.test_aggregate_create_in_db_with_metadata` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/db/test_aggregate.py:L198–L211` |
| `AggregateObjectDbTestCase.test_aggregate_create_raise_exist_exc` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_aggregate.py:L213–L223` |
| `AggregateObjectDbTestCase.test_aggregate_delete` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L225–L230` |
| `AggregateObjectDbTestCase.test_aggregate_delete_raise_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_aggregate.py:L232–L237` |
| `AggregateObjectDbTestCase.test_aggregate_delete_with_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_aggregate.py:L239–L245` |
| `AggregateObjectDbTestCase.test_aggregate_update` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_aggregate.py:L247–L257` |
| `AggregateObjectDbTestCase.test_aggregate_update_with_metadata` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/db/test_aggregate.py:L259–L273` |
| `AggregateObjectDbTestCase.test_aggregate_update_with_existing_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_aggregate.py:L275–L284` |
| `AggregateObjectDbTestCase.test_aggregate_update_zone_with_existing_metadata` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_aggregate.py:L286–L294` |
| `AggregateObjectDbTestCase.test_aggregate_update_raise_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L296–L302` |
| `AggregateObjectDbTestCase.test_aggregate_update_raise_name_exist` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_aggregate.py:L304–L313` |
| `AggregateObjectDbTestCase.test_aggregate_host_add_to_db` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_aggregate.py:L315–L321` |
| `AggregateObjectDbTestCase.test_aggregate_host_re_add_to_db` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_aggregate.py:L323–L330` |
| `AggregateObjectDbTestCase.test_aggregate_host_add_to_db_duplicate_works` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/db/test_aggregate.py:L332–L343` |
| `AggregateObjectDbTestCase.test_aggregate_host_add_to_db_duplicate_raise_exist_exc` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_aggregate.py:L345–L351` |
| `AggregateObjectDbTestCase.test_aggregate_host_add_to_db_raise_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L353–L359` |
| `AggregateObjectDbTestCase.test_aggregate_host_delete_from_db` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_aggregate.py:L361–L367` |
| `AggregateObjectDbTestCase.test_aggregate_host_delete_from_db_raise_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L369–L374` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_add` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L376–L381` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_add_empty_metadata` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L383–L388` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_add_and_update` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_aggregate.py:L390–L400` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_add_retry` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/db/test_aggregate.py:L402–L413` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_update` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_aggregate.py:L415–L425` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_delete` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_aggregate.py:L427–L435` |
| `AggregateObjectDbTestCase.test_aggregate_remove_availability_zone` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_aggregate.py:L437–L444` |
| `AggregateObjectDbTestCase.test_aggregate_metadata_delete_raise_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_aggregate.py:L446–L450` |
| `create_aggregate` | function | (context, db_id) | exported | not declared | 2/6 | `src/nova/tests/functional/db/test_aggregate.py:L453–L458` |
| `compare_obj` | function | (test, result, source) | exported | `base_compare(test, result, source, subs=SUBS, comparators={'updated_at': updated_at_comparator})` (src/nova/tests/functional/db/test_aggregate.py:L467) | 1/5 | `src/nova/tests/functional/db/test_aggregate.py:L461–L468` |
| `compare_obj.updated_at_comparator` | function | (result, source) | public | `True` (src/nova/tests/functional/db/test_aggregate.py:L465) | — | `src/nova/tests/functional/db/test_aggregate.py:L464–L465` |
| `AggregateObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_aggregate.py:L471–L682` |
| `AggregateObjectTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_aggregate.py:L472–L475` |
| `AggregateObjectTestCase._seed_data` | method | (self) | private | not declared | 2/3 | `src/nova/tests/functional/db/test_aggregate.py:L477–L479` |
| `AggregateObjectTestCase.test_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L481–L486` |
| `AggregateObjectTestCase.test_get_by_id` | method | (self) | public | not declared | 2/4 | `src/nova/tests/functional/db/test_aggregate.py:L488–L491` |
| `AggregateObjectTestCase.test_save` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_aggregate.py:L493–L502` |
| `AggregateObjectTestCase.test_update_metadata` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_aggregate.py:L504–L513` |
| `AggregateObjectTestCase.test_destroy` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/db/test_aggregate.py:L515–L520` |
| `AggregateObjectTestCase.test_add_host` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_aggregate.py:L522–L531` |
| `AggregateObjectTestCase.test_delete_host` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/db/test_aggregate.py:L533–L541` |
| `AggregateObjectTestCase.test_get_by_metadata` | method | (self) | public | not declared | 2/14 | `src/nova/tests/functional/db/test_aggregate.py:L543–L559` |
| `AggregateObjectTestCase.test_get_by_metadata_from_db_assertion` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_aggregate.py:L561–L564` |
| `AggregateObjectTestCase.test_get_non_matching_by_metadata_keys` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/db/test_aggregate.py:L566–L591` |
| `AggregateObjectTestCase.test_matching_aggregates_multiple_keys` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/db/test_aggregate.py:L593–L614` |
| `AggregateObjectTestCase.test_get_non_matching_aggregates_multiple_keys` | method | (self) | public | not declared | 2/22 | `src/nova/tests/functional/db/test_aggregate.py:L616–L645` |
| `AggregateObjectTestCase.test_get_non_matching_by_metadata_keys_empty_keys` | method | (self) | public | not declared | 2/19 | `src/nova/tests/functional/db/test_aggregate.py:L647–L673` |
| `AggregateObjectTestCase.test_get_non_matching_by_metadata_keys_empty_key_prefix` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_aggregate.py:L675–L682` |

## Dependencies

- `copy`: imports `deepcopy` (src/nova/tests/functional/db/test_aggregate.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/db/test_aggregate.py:L14)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/functional/db/test_aggregate.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/db/test_aggregate.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/db/test_aggregate.py:L18)
- `nova`: imports `context` (src/nova/tests/functional/db/test_aggregate.py:L20)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/functional/db/test_aggregate.py:L21)
- `nova.db.api`: imports `models as api_models` (src/nova/tests/functional/db/test_aggregate.py:L22)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_aggregate.py:L23)
- `import nova.objects.aggregate as aggregate_obj` (src/nova/tests/functional/db/test_aggregate.py:L24)
- `nova`: imports `test` (src/nova/tests/functional/db/test_aggregate.py:L25)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/functional/db/test_aggregate.py:L26)
- `nova.tests.unit.objects.test_objects`: imports `compare_obj as base_compare` (src/nova/tests/functional/db/test_aggregate.py:L27)

## Side Effects

- **network**: hosts=['host.1.openstack.org']) (src/nova/tests/functional/db/test_aggregate.py:L148)
- **network**: hosts=['host.1.openstack.org']) (src/nova/tests/functional/db/test_aggregate.py:L151)
- **network**: 'host.1.openstack.org') (src/nova/tests/functional/db/test_aggregate.py:L156)
- **network**: hosts=['host.1.openstack.org']) (src/nova/tests/functional/db/test_aggregate.py:L164)
- **network**: hosts=['host.1.openstack.org']) (src/nova/tests/functional/db/test_aggregate.py:L167)
- **network**: 'host.1.openstack.org', (src/nova/tests/functional/db/test_aggregate.py:L169)
- **global-mutation**: SUBS = {'metadata': 'metadetails'} (src/nova/tests/functional/db/test_aggregate.py:L30)
- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/functional/db/test_aggregate.py:L33)

## Security Surface

- **sink** (`db-write`): aggregate.update(values) (src/nova/tests/functional/db/test_aggregate.py:L66)
- **sink** (`db-write`): aggregate_metadata.update({'key': key, (src/nova/tests/functional/db/test_aggregate.py:L72)
- **sink** (`db-write`): host_model.update({'host': host, (src/nova/tests/functional/db/test_aggregate.py:L88)
- **sink** (`db-write`): metadata.update(new_zone) (src/nova/tests/functional/db/test_aggregate.py:L290)
- **sink** (`db-write`): metadata.update(new_metadata) (src/nova/tests/functional/db/test_aggregate.py:L396)
- **sink** (`db-write`): 'nova.db.api.models.AggregateMetadata.__table__.insert' (src/nova/tests/functional/db/test_aggregate.py:L405)

