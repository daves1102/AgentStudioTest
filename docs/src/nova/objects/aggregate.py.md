# src/nova/objects/aggregate.py

## Overview

This file implements the `aggregate` module, defining 2 classs, 4 constants, 3 fields, 13 functions, 17 methods, 1 property, 1 variable, 13 imports, 18 side effects.

Lines: total 597, code 460, comment 35, blank 102

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/aggregate.py:L30–L30` |
| `DEPRECATED_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/aggregate.py:L32–L32` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/aggregate.py:L34–L37` |
| `_aggregate_get_from_db` | function | (context, aggregate_id) | unexported | `aggregate` (src/nova/objects/aggregate.py:L52) | 2/9 | `src/nova/objects/aggregate.py:L41–L52` |
| `_aggregate_get_from_db_by_uuid` | function | (context, aggregate_uuid) | unexported | `aggregate` (src/nova/objects/aggregate.py:L67) | 2/9 | `src/nova/objects/aggregate.py:L56–L67` |
| `_host_add_to_db` | function | (context, aggregate_id, host) | unexported | `host_ref` (src/nova/objects/aggregate.py:L79) | 2/11 | `src/nova/objects/aggregate.py:L70–L82` |
| `_host_delete_from_db` | function | (context, aggregate_id, host) | unexported | not declared | 2/11 | `src/nova/objects/aggregate.py:L85–L98` |
| `_metadata_add_to_db` | function | (context, aggregate_id, metadata, max_retries=10, set_delete=False) | unexported | `metadata` (src/nova/objects/aggregate.py:L143) | 11/45 | `src/nova/objects/aggregate.py:L101–L154` |
| `_metadata_delete_from_db` | function | (context, aggregate_id, key) | unexported | not declared | 2/9 | `src/nova/objects/aggregate.py:L158–L169` |
| `_aggregate_create_in_db` | function | (context, values, metadata=None) | unexported | `aggregate` (src/nova/objects/aggregate.py:L193) | 3/17 | `src/nova/objects/aggregate.py:L173–L193` |
| `_aggregate_delete_from_db` | function | (context, aggregate_id) | unexported | not declared | 2/9 | `src/nova/objects/aggregate.py:L197–L208` |
| `_aggregate_update_to_db` | function | (context, aggregate_id, values) | unexported | `_aggregate_get_from_db(context, aggregate_id)` (src/nova/objects/aggregate.py:L237) | 6/24 | `src/nova/objects/aggregate.py:L212–L237` |
| `Aggregate` | class | — | exported | not declared | — | `src/nova/objects/aggregate.py:L241–L425` |
| `Aggregate.VERSION` | constant | — | public | not declared | — | `src/nova/objects/aggregate.py:L246–L246` |
| `Aggregate.fields` | field | — | public | not declared | — | `src/nova/objects/aggregate.py:L248–L254` |
| `Aggregate.obj_extra_fields` | field | — | public | not declared | — | `src/nova/objects/aggregate.py:L256–L256` |
| `Aggregate._from_db_object` | method | (context, aggregate, db_aggregate) | private | `aggregate` (src/nova/objects/aggregate.py:L276) | 5/14 | `src/nova/objects/aggregate.py:L259–L276` |
| `Aggregate._assert_no_hosts` | method | (self, action) | private | not declared | 2/5 | `src/nova/objects/aggregate.py:L278–L282` |
| `Aggregate.get_by_id` | method | (cls, context, aggregate_id) | public | `cls._from_db_object(context, cls(), db_aggregate)` (src/nova/objects/aggregate.py:L288) | 1/3 | `src/nova/objects/aggregate.py:L286–L288` |
| `Aggregate.get_by_uuid` | method | (cls, context, aggregate_uuid) | public | `cls._from_db_object(context, cls(), db_aggregate)` (src/nova/objects/aggregate.py:L295) | 1/4 | `src/nova/objects/aggregate.py:L292–L295` |
| `Aggregate.create` | method | (self) | public | not declared | 4/35 | `src/nova/objects/aggregate.py:L298–L335` |
| `Aggregate.save` | method | (self) | public | not declared | 2/26 | `src/nova/objects/aggregate.py:L338–L364` |
| `Aggregate.update_metadata` | method | (self, updates) | public | not declared | 5/35 | `src/nova/objects/aggregate.py:L367–L401` |
| `Aggregate.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/aggregate.py:L404–L405` |
| `Aggregate.add_host` | method | (self, host) | public | not declared | 2/6 | `src/nova/objects/aggregate.py:L408–L414` |
| `Aggregate.delete_host` | method | (self, host) | public | not declared | 1/4 | `src/nova/objects/aggregate.py:L417–L421` |
| `Aggregate.availability_zone` | method | (self) | public | `self.metadata.get('availability_zone', None)` (src/nova/objects/aggregate.py:L425) | 1/2 | `src/nova/objects/aggregate.py:L424–L425` |
| `_get_all_from_db` | function | (context) | unexported | `query.all()` (src/nova/objects/aggregate.py:L434) | 1/5 | `src/nova/objects/aggregate.py:L429–L434` |
| `_get_by_host_from_db` | function | (context, host, key=None) | unexported | `query.all()` (src/nova/objects/aggregate.py:L449) | 2/10 | `src/nova/objects/aggregate.py:L438–L449` |
| `_get_by_metadata_from_db` | function | (context, key=None, value=None) | unexported | `query.all()` (src/nova/objects/aggregate.py:L466) | 4/13 | `src/nova/objects/aggregate.py:L453–L466` |
| `_get_non_matching_by_metadata_keys_from_db` | function | (context, ignored_keys, key_prefix, value) | unexported | `query.all()` (src/nova/objects/aggregate.py:L501) | 3/18 | `src/nova/objects/aggregate.py:L470–L501` |
| `AggregateList` | class | — | exported | not declared | — | `src/nova/objects/aggregate.py:L505–L597` |
| `AggregateList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/aggregate.py:L511–L511` |
| `AggregateList.fields` | field | — | public | not declared | — | `src/nova/objects/aggregate.py:L513–L515` |
| `AggregateList._filter_db_aggregates` | method | (cls, db_aggregates, hosts) | private | `filtered_aggregates` (src/nova/objects/aggregate.py:L527) | 5/10 | `src/nova/objects/aggregate.py:L518–L527` |
| `AggregateList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(context), db_aggregates)` (src/nova/objects/aggregate.py:L533) | 1/3 | `src/nova/objects/aggregate.py:L531–L533` |
| `AggregateList.get_by_host` | method | (cls, context, host, key=None) | public | `base.obj_make_list(context, cls(context), db_aggregates)` (src/nova/objects/aggregate.py:L539) | 1/3 | `src/nova/objects/aggregate.py:L537–L539` |
| `AggregateList.get_by_metadata_key` | method | (cls, context, key, hosts=None) | public | `base.obj_make_list(context, cls(context), db_aggregates)` (src/nova/objects/aggregate.py:L547) | 2/5 | `src/nova/objects/aggregate.py:L543–L547` |
| `AggregateList.get_by_metadata` | method | (cls, context, key=None, value=None) | public | `base.obj_make_list(context, cls(context), db_aggregates)` (src/nova/objects/aggregate.py:L559) | 1/3 | `src/nova/objects/aggregate.py:L551–L559` |
| `AggregateList.get_non_matching_by_metadata_keys` | method | (cls, context, ignored_keys, key_prefix, value) | public | `base.obj_make_list(context, objects.AggregateList(context), db_aggregates)` (src/nova/objects/aggregate.py:L596) | 1/6 | `src/nova/objects/aggregate.py:L562–L597` |
| `Aggregate.availability_zone` | property | — | public | not declared | — | `src/nova/objects/aggregate.py:L423–L425` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/aggregate.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/objects/aggregate.py:L16)
- `oslo_utils`: imports `excutils` (src/nova/objects/aggregate.py:L17)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/aggregate.py:L18)
- `sqlalchemy`: imports `orm` (src/nova/objects/aggregate.py:L19)
- `nova.compute`: imports `utils as compute_utils` (src/nova/objects/aggregate.py:L21)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/aggregate.py:L22)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/aggregate.py:L23)
- `nova`: imports `exception` (src/nova/objects/aggregate.py:L24)
- `nova.i18n`: imports `_` (src/nova/objects/aggregate.py:L25)
- `nova`: imports `objects` (src/nova/objects/aggregate.py:L26)
- `nova.objects`: imports `base` (src/nova/objects/aggregate.py:L27)
- `nova.objects`: imports `fields` (src/nova/objects/aggregate.py:L28)

## Side Effects

- **network**: query = context.session.query(api_models.Aggregate).\ (src/nova/objects/aggregate.py:L42)
- **network**: query = context.session.query(api_models.Aggregate).\ (src/nova/objects/aggregate.py:L57)
- **network**: query = context.session.query(api_models.AggregateHost) (src/nova/objects/aggregate.py:L91)
- **network**: query = context.session.query(api_models.AggregateMetadata).\ (src/nova/objects/aggregate.py:L107)
- **network**: context.session.execute( (src/nova/objects/aggregate.py:L139)
- **network**: query = context.session.query(api_models.AggregateMetadata) (src/nova/objects/aggregate.py:L162)
- **network**: query = context.session.query(api_models.Aggregate) (src/nova/objects/aggregate.py:L174)
- **network**: context.session.expire(aggregate, ['_metadata']) (src/nova/objects/aggregate.py:L190)
- **network**: context.session.query(api_models.AggregateMetadata).\ (src/nova/objects/aggregate.py:L199)
- **network**: count = context.session.query(api_models.Aggregate).\ (src/nova/objects/aggregate.py:L203)
- **network**: query = context.session.query(api_models.Aggregate).\ (src/nova/objects/aggregate.py:L430)
- **network**: query = context.session.query(api_models.Aggregate).\ (src/nova/objects/aggregate.py:L439)
- **network**: query = context.session.query(api_models.Aggregate) (src/nova/objects/aggregate.py:L455)
- **network**: query = context.session.query(api_models.Aggregate) (src/nova/objects/aggregate.py:L486)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/aggregate.py:L30)
- **global-mutation**: DEPRECATED_FIELDS = ['deleted', 'deleted_at'] (src/nova/objects/aggregate.py:L32)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/aggregate.py:L246)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/aggregate.py:L511)

