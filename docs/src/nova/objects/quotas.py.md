# src/nova/objects/quotas.py

## Overview

This file implements the `quotas` module, defining 2 classs, 1 constant, 1 field, 13 functions, 38 methods, 1 variable, 11 imports, 18 side effects.

Lines: total 665, code 504, comment 85, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/quotas.py:L29–L37` |
| `ids_from_instance` | function | (context, instance) | exported | `project_id, user_id` (src/nova/objects/quotas.py:L50) | 4/11 | `src/nova/objects/quotas.py:L40–L50` |
| `ids_from_security_group` | function | (context, security_group) | exported | `ids_from_instance(context, security_group)` (src/nova/objects/quotas.py:L57) | 1/2 | `src/nova/objects/quotas.py:L56–L57` |
| `ids_from_server_group` | function | (context, server_group) | exported | `ids_from_instance(context, server_group)` (src/nova/objects/quotas.py:L64) | 1/2 | `src/nova/objects/quotas.py:L63–L64` |
| `Quotas` | class | — | exported | not declared | — | `src/nova/objects/quotas.py:L68–L518` |
| `Quotas.VERSION` | constant | — | public | not declared | — | `src/nova/objects/quotas.py:L74–L74` |
| `Quotas.fields` | field | — | public | not declared | — | `src/nova/objects/quotas.py:L76–L84` |
| `Quotas.obj_load_attr` | method | (self, attr) | public | not declared | 1/3 | `src/nova/objects/quotas.py:L86–L94` |
| `Quotas._get_from_db` | method | (context, project_id, resource, user_id=None) | private | `result` (src/nova/objects/quotas.py:L112) | 5/15 | `src/nova/objects/quotas.py:L98–L112` |
| `Quotas._get_all_from_db` | method | (context, project_id) | private | `context.session.query(api_models.ProjectUserQuota).\ filter_by(project_id=project_id).\ all()` (src/nova/objects/quotas.py:L117) | 1/4 | `src/nova/objects/quotas.py:L116–L119` |
| `Quotas._get_all_from_db_by_project` | method | (context, project_id) | private | `result` (src/nova/objects/quotas.py:L131) | 2/8 | `src/nova/objects/quotas.py:L123–L131` |
| `Quotas._get_all_from_db_by_project_and_user` | method | (context, project_id, user_id) | private | `result` (src/nova/objects/quotas.py:L147) | 2/11 | `src/nova/objects/quotas.py:L135–L147` |
| `Quotas._destroy_all_in_db_by_project` | method | (context, project_id) | private | not declared | 3/9 | `src/nova/objects/quotas.py:L151–L159` |
| `Quotas._destroy_all_in_db_by_project_and_user` | method | (context, project_id, user_id) | private | not declared | 2/8 | `src/nova/objects/quotas.py:L163–L170` |
| `Quotas._get_class_from_db` | method | (context, class_name, resource) | private | `result` (src/nova/objects/quotas.py:L181) | 2/8 | `src/nova/objects/quotas.py:L174–L181` |
| `Quotas._get_all_class_from_db_by_name` | method | (context, class_name) | private | `result` (src/nova/objects/quotas.py:L193) | 2/8 | `src/nova/objects/quotas.py:L185–L193` |
| `Quotas._create_limit_in_db` | method | (context, project_id, resource, limit, user_id=None) | private | `quota_ref` (src/nova/objects/quotas.py:L218) | 5/19 | `src/nova/objects/quotas.py:L197–L218` |
| `Quotas._update_limit_in_db` | method | (context, project_id, resource, limit, user_id=None) | private | not declared | 6/19 | `src/nova/objects/quotas.py:L222–L244` |
| `Quotas._create_class_in_db` | method | (context, class_name, resource, limit) | private | `quota_class_ref` (src/nova/objects/quotas.py:L263) | 2/14 | `src/nova/objects/quotas.py:L248–L263` |
| `Quotas._update_class_in_db` | method | (context, class_name, resource, limit) | private | not declared | 2/7 | `src/nova/objects/quotas.py:L267–L273` |
| `Quotas.reserve` | method | (self, expire=None, project_id=None, user_id=None, **deltas) | public | not declared | 1/6 | `src/nova/objects/quotas.py:L277–L285` |
| `Quotas.commit` | method | (self) | public | not declared | 1/2 | `src/nova/objects/quotas.py:L289–L290` |
| `Quotas.rollback` | method | (self) | public | not declared | 1/2 | `src/nova/objects/quotas.py:L294–L295` |
| `Quotas.limit_check` | method | (cls, context, project_id=None, user_id=None, **values) | public | `quota.QUOTAS.limit_check( context, project_id=project_id, user_id=user_id, **values)` (src/nova/objects/quotas.py:L301) | 1/3 | `src/nova/objects/quotas.py:L299–L302` |
| `Quotas.limit_check_project_and_user` | method | (cls, context, project_values=None, user_values=None, project_id=None, user_id=None) | public | `quota.QUOTAS.limit_check_project_and_user(context, project_values=project_values, user_values=user_values, project_id=project_id, user_id=user_id)` (src/nova/objects/quotas.py:L310) | 1/6 | `src/nova/objects/quotas.py:L306–L312` |
| `Quotas.count` | method | (cls, context, resource, *args, **kwargs) | public | `count[key][resource]` (src/nova/objects/quotas.py:L321) | 2/4 | `src/nova/objects/quotas.py:L317–L321` |
| `Quotas.count_as_dict` | method | (cls, context, resource, *args, **kwargs) | public | `quota.QUOTAS.count_as_dict( context, resource, *args, **kwargs)` (src/nova/objects/quotas.py:L327) | 1/3 | `src/nova/objects/quotas.py:L325–L328` |
| `Quotas.check_deltas` | method | (cls, context, deltas, *count_args, **count_kwargs) | public | not declared | 13/31 | `src/nova/objects/quotas.py:L332–L395` |
| `Quotas.create_limit` | method | (cls, context, project_id, resource, limit, user_id=None) | public | not declared | 2/10 | `src/nova/objects/quotas.py:L399–L408` |
| `Quotas.update_limit` | method | (cls, context, project_id, resource, limit, user_id=None) | public | not declared | 2/7 | `src/nova/objects/quotas.py:L412–L418` |
| `Quotas.create_class` | method | (cls, context, class_name, resource, limit) | public | not declared | 2/8 | `src/nova/objects/quotas.py:L421–L428` |
| `Quotas.update_class` | method | (cls, context, class_name, resource, limit) | public | not declared | 2/6 | `src/nova/objects/quotas.py:L431–L436` |
| `Quotas.get` | method | (cls, context, project_id, resource, user_id=None) | public | `quota` (src/nova/objects/quotas.py:L449) | 2/8 | `src/nova/objects/quotas.py:L442–L449` |
| `Quotas.get_all` | method | (cls, context, project_id) | public | `api_db_quotas + main_db_quotas` (src/nova/objects/quotas.py:L455) | 1/4 | `src/nova/objects/quotas.py:L452–L455` |
| `Quotas.get_all_by_project` | method | (cls, context, project_id) | public | `main_db_quotas_dict` (src/nova/objects/quotas.py:L465) | 2/8 | `src/nova/objects/quotas.py:L458–L465` |
| `Quotas.get_all_by_project_and_user` | method | (cls, context, project_id, user_id) | public | `main_db_quotas_dict` (src/nova/objects/quotas.py:L475) | 2/8 | `src/nova/objects/quotas.py:L468–L475` |
| `Quotas.destroy_all_by_project` | method | (cls, context, project_id) | public | not declared | 2/5 | `src/nova/objects/quotas.py:L478–L482` |
| `Quotas.destroy_all_by_project_and_user` | method | (cls, context, project_id, user_id) | public | not declared | 2/7 | `src/nova/objects/quotas.py:L485–L491` |
| `Quotas.get_class` | method | (cls, context, class_name, resource) | public | `qclass` (src/nova/objects/quotas.py:L499) | 2/6 | `src/nova/objects/quotas.py:L494–L499` |
| `Quotas.get_default_class` | method | (cls, context) | public | `qclass` (src/nova/objects/quotas.py:L508) | 2/7 | `src/nova/objects/quotas.py:L502–L508` |
| `Quotas.get_all_class_by_name` | method | (cls, context, class_name) | public | `main_db_quotas_dict` (src/nova/objects/quotas.py:L518) | 2/8 | `src/nova/objects/quotas.py:L511–L518` |
| `QuotasNoOp` | class | — | exported | not declared | — | `src/nova/objects/quotas.py:L522–L537` |
| `QuotasNoOp.reserve` | method | (context, expire=None, project_id=None, user_id=None, **deltas) | public | not declared | 1/3 | `src/nova/objects/quotas.py:L524–L526` |
| `QuotasNoOp.commit` | method | (self, context=None) | public | not declared | 1/2 | `src/nova/objects/quotas.py:L529–L530` |
| `QuotasNoOp.rollback` | method | (self, context=None) | public | not declared | 1/2 | `src/nova/objects/quotas.py:L533–L534` |
| `QuotasNoOp.check_deltas` | method | (cls, context, deltas, *count_args, **count_kwargs) | public | not declared | 1/2 | `src/nova/objects/quotas.py:L536–L537` |
| `_get_main_per_project_limits` | function | (context, limit) | unexported | `context.session.query(main_models.Quota).\ filter_by(deleted=0).\ limit(limit).\ all()` (src/nova/objects/quotas.py:L543) | 1/5 | `src/nova/objects/quotas.py:L542–L546` |
| `_get_main_per_user_limits` | function | (context, limit) | unexported | `context.session.query(main_models.ProjectUserQuota).\ filter_by(deleted=0).\ limit(limit).\ all()` (src/nova/objects/quotas.py:L552) | 1/5 | `src/nova/objects/quotas.py:L551–L555` |
| `_destroy_main_per_project_limits` | function | (context, project_id, resource) | unexported | not declared | 1/6 | `src/nova/objects/quotas.py:L560–L565` |
| `_destroy_main_per_user_limits` | function | (context, project_id, resource, user_id) | unexported | not declared | 1/7 | `src/nova/objects/quotas.py:L570–L576` |
| `_create_limits_in_api_db` | function | (context, db_limits, per_user=False) | unexported | not declared | 3/6 | `src/nova/objects/quotas.py:L580–L585` |
| `migrate_quota_limits_to_api_db` | function | (context, max_count) | exported | `len(main_per_project_limits), done` (src/nova/objects/quotas.py:L606); `len(main_per_project_limits) + len(main_per_user_limits), done` (src/nova/objects/quotas.py:L623) | 6/24 | `src/nova/objects/quotas.py:L588–L623` |
| `_get_main_quota_classes` | function | (context, limit) | unexported | `context.session.query(main_models.QuotaClass).\ filter_by(deleted=0).\ limit(limit).\ all()` (src/nova/objects/quotas.py:L629) | 1/5 | `src/nova/objects/quotas.py:L628–L632` |
| `_destroy_main_quota_classes` | function | (context, db_classes) | unexported | not declared | 2/6 | `src/nova/objects/quotas.py:L636–L641` |
| `_create_classes_in_api_db` | function | (context, db_classes) | unexported | not declared | 2/4 | `src/nova/objects/quotas.py:L645–L648` |
| `migrate_quota_classes_to_api_db` | function | (context, max_count) | exported | `found, done` (src/nova/objects/quotas.py:L665) | 2/10 | `src/nova/objects/quotas.py:L651–L665` |

## Dependencies

- `import collections` (src/nova/objects/quotas.py:L15)
- `oslo_db`: imports `exception as db_exc` (src/nova/objects/quotas.py:L17)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/quotas.py:L19)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/quotas.py:L20)
- `nova.db.main`: imports `api as main_db_api` (src/nova/objects/quotas.py:L21)
- `nova.db.main`: imports `models as main_models` (src/nova/objects/quotas.py:L22)
- `nova.db`: imports `utils as db_utils` (src/nova/objects/quotas.py:L23)
- `nova`: imports `exception` (src/nova/objects/quotas.py:L24)
- `nova.objects`: imports `base` (src/nova/objects/quotas.py:L25)
- `nova.objects`: imports `fields` (src/nova/objects/quotas.py:L26)
- `nova`: imports `quota` (src/nova/objects/quotas.py:L27)

## Side Effects

- **network**: query = context.session.query(model).\ (src/nova/objects/quotas.py:L100)
- **network**: return context.session.query(api_models.ProjectUserQuota).\ (src/nova/objects/quotas.py:L117)
- **network**: rows = context.session.query(api_models.Quota).\ (src/nova/objects/quotas.py:L125)
- **network**: user_quotas = context.session.query(*columns).\ (src/nova/objects/quotas.py:L140)
- **network**: per_project = context.session.query(api_models.Quota).\ (src/nova/objects/quotas.py:L152)
- **network**: per_user = context.session.query(api_models.ProjectUserQuota).\ (src/nova/objects/quotas.py:L155)
- **network**: result = context.session.query(api_models.ProjectUserQuota).\ (src/nova/objects/quotas.py:L164)
- **network**: result = context.session.query(api_models.QuotaClass).\ (src/nova/objects/quotas.py:L175)
- **network**: rows = context.session.query(api_models.QuotaClass).\ (src/nova/objects/quotas.py:L187)
- **network**: query = context.session.query(model).\ (src/nova/objects/quotas.py:L232)
- **network**: result = context.session.query(api_models.QuotaClass).\ (src/nova/objects/quotas.py:L268)
- **network**: return context.session.query(main_models.Quota).\ (src/nova/objects/quotas.py:L543)
- **network**: return context.session.query(main_models.ProjectUserQuota).\ (src/nova/objects/quotas.py:L552)
- **network**: context.session.query(main_models.Quota).\ (src/nova/objects/quotas.py:L561)
- **network**: context.session.query(main_models.ProjectUserQuota).\ (src/nova/objects/quotas.py:L571)
- **network**: return context.session.query(main_models.QuotaClass).\ (src/nova/objects/quotas.py:L629)
- **network**: context.session.query(main_models.QuotaClass).\ (src/nova/objects/quotas.py:L638)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/quotas.py:L74)

