# src/nova/objects/build_request.py

## Overview

This file implements the `build_request` module, defining 2 classs, 3 constants, 2 fields, 1 function, 21 methods, 1 variable, 13 imports, 8 side effects.

Lines: total 474, code 326, comment 91, blank 57

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/build_request.py:L29–L29` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/build_request.py:L31–L34` |
| `BuildRequest` | class | — | exported | not declared | — | `src/nova/objects/build_request.py:L38–L260` |
| `BuildRequest.VERSION` | constant | — | public | not declared | — | `src/nova/objects/build_request.py:L43–L43` |
| `BuildRequest.fields` | field | — | public | not declared | — | `src/nova/objects/build_request.py:L45–L57` |
| `BuildRequest.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 5/8 | `src/nova/objects/build_request.py:L59–L66` |
| `BuildRequest._load_instance` | method | (self, db_instance) | private | not declared | 4/31 | `src/nova/objects/build_request.py:L68–L116` |
| `BuildRequest._load_block_device_mappings` | method | (self, db_bdms) | private | `` (src/nova/objects/build_request.py:L128) | 2/9 | `src/nova/objects/build_request.py:L118–L132` |
| `BuildRequest._load_tags` | method | (self, db_tags) | private | `` (src/nova/objects/build_request.py:L144) | 2/9 | `src/nova/objects/build_request.py:L134–L148` |
| `BuildRequest._from_db_object` | method | (context, req, db_req) | private | `req` (src/nova/objects/build_request.py:L170) | 5/16 | `src/nova/objects/build_request.py:L151–L170` |
| `BuildRequest._get_by_instance_uuid_from_db` | method | (context, instance_uuid) | private | `db_req` (src/nova/objects/build_request.py:L179) | 2/6 | `src/nova/objects/build_request.py:L174–L179` |
| `BuildRequest.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(), db_req)` (src/nova/objects/build_request.py:L185) | 1/3 | `src/nova/objects/build_request.py:L183–L185` |
| `BuildRequest._create_in_db` | method | (context, updates) | private | `db_req` (src/nova/objects/build_request.py:L193) | 1/5 | `src/nova/objects/build_request.py:L189–L193` |
| `BuildRequest._get_update_primitives` | method | (self) | private | `updates` (src/nova/objects/build_request.py:L200) | 3/6 | `src/nova/objects/build_request.py:L195–L200` |
| `BuildRequest.create` | method | (self) | public | not declared | 3/10 | `src/nova/objects/build_request.py:L203–L214` |
| `BuildRequest._destroy_in_db` | method | (context, instance_uuid) | private | not declared | 2/5 | `src/nova/objects/build_request.py:L218–L222` |
| `BuildRequest.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/build_request.py:L225–L226` |
| `BuildRequest._save_in_db` | method | (self, context, req_id, updates) | private | `db_req` (src/nova/objects/build_request.py:L237) | 2/8 | `src/nova/objects/build_request.py:L229–L237` |
| `BuildRequest.save` | method | (self) | public | not declared | 1/4 | `src/nova/objects/build_request.py:L240–L243` |
| `BuildRequest.get_new_instance` | method | (self, context) | public | `instance` (src/nova/objects/build_request.py:L260) | 4/8 | `src/nova/objects/build_request.py:L245–L260` |
| `BuildRequestList` | class | — | exported | not declared | — | `src/nova/objects/build_request.py:L264–L474` |
| `BuildRequestList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/build_request.py:L266–L266` |
| `BuildRequestList.fields` | field | — | public | not declared | — | `src/nova/objects/build_request.py:L268–L270` |
| `BuildRequestList._get_all_from_db` | method | (context) | private | `db_reqs` (src/nova/objects/build_request.py:L281) | 2/6 | `src/nova/objects/build_request.py:L274–L281` |
| `BuildRequestList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(context), db_build_reqs)` (src/nova/objects/build_request.py:L287) | 1/3 | `src/nova/objects/build_request.py:L285–L287` |
| `BuildRequestList._pass_exact_filters` | method | (instance, filters) | private | `False` (src/nova/objects/build_request.py:L298); `False` (src/nova/objects/build_request.py:L303); `False` (src/nova/objects/build_request.py:L312); `False` (src/nova/objects/build_request.py:L319); `False` (src/nova/objects/build_request.py:L326); `False` (src/nova/objects/build_request.py:L330); `None` (src/nova/objects/build_request.py:L334); `False` (src/nova/objects/build_request.py:L336); `False` (src/nova/objects/build_request.py:L339); `True` (src/nova/objects/build_request.py:L341) | 32/49 | `src/nova/objects/build_request.py:L290–L341` |
| `BuildRequestList._pass_regex_filters` | method | (instance, filters) | private | `False` (src/nova/objects/build_request.py:L356); `True` (src/nova/objects/build_request.py:L358) | 6/12 | `src/nova/objects/build_request.py:L344–L358` |
| `BuildRequestList._sort_build_requests` | method | (build_req_list, sort_keys, sort_dirs) | private | `build_req_list` (src/nova/objects/build_request.py:L377) | 3/9 | `src/nova/objects/build_request.py:L361–L377` |
| `BuildRequestList._sort_build_requests.sort_attr` | function | (sort_key, build_req) | public | `build_req.id` (src/nova/objects/build_request.py:L370); `getattr(build_req.instance, sort_key)` (src/nova/objects/build_request.py:L371) | — | `src/nova/objects/build_request.py:L366–L371` |
| `BuildRequestList.get_by_filters` | method | (cls, context, filters, limit=None, marker=None, sort_keys=None, sort_dirs=None) | public | `cls(context, objects=[])` (src/nova/objects/build_request.py:L393); `cls(context, objects=[])` (src/nova/objects/build_request.py:L438); `cls(context, objects=filtered_build_reqs)` (src/nova/objects/build_request.py:L450); `cls(context, objects=sorted_build_reqs[marker_index:limit_index])` (src/nova/objects/build_request.py:L473) | 19/55 | `src/nova/objects/build_request.py:L381–L474` |

## Dependencies

- `import functools` (src/nova/objects/build_request.py:L13)
- `import re` (src/nova/objects/build_request.py:L14)
- `oslo_log`: imports `log as logging` (src/nova/objects/build_request.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/build_request.py:L17)
- `oslo_utils`: imports `versionutils` (src/nova/objects/build_request.py:L18)
- `oslo_versionedobjects`: imports `exception as ovoo_exc` (src/nova/objects/build_request.py:L19)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/build_request.py:L21)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/build_request.py:L22)
- `nova.db`: imports `utils as db_utils` (src/nova/objects/build_request.py:L23)
- `nova`: imports `exception` (src/nova/objects/build_request.py:L24)
- `nova`: imports `objects` (src/nova/objects/build_request.py:L25)
- `nova.objects`: imports `base` (src/nova/objects/build_request.py:L26)
- `nova.objects`: imports `fields` (src/nova/objects/build_request.py:L27)

## Side Effects

- **network**: db_req = context.session.query(api_models.BuildRequest).filter_by( (src/nova/objects/build_request.py:L175)
- **network**: result = context.session.query(api_models.BuildRequest).filter_by( (src/nova/objects/build_request.py:L219)
- **network**: db_req = context.session.query( (src/nova/objects/build_request.py:L230)
- **network**: context.session.add(db_req) (src/nova/objects/build_request.py:L236)
- **network**: query = context.session.query(api_models.BuildRequest) (src/nova/objects/build_request.py:L275)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/build_request.py:L29)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/build_request.py:L43)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/build_request.py:L266)

