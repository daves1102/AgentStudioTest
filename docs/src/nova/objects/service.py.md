# src/nova/objects/service.py

## Overview

This file implements the `service` module, defining 2 classs, 8 constants, 4 fields, 1 function, 28 methods, 1 variable, 12 imports, 8 side effects.

Lines: total 768, code 426, comment 274, blank 68

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/service.py:L30–L30` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/service.py:L32–L36` |
| `SERVICE_VERSION` | constant | — | exported | not declared | — | `src/nova/objects/service.py:L40–L40` |
| `SERVICE_VERSION_HISTORY` | constant | — | exported | not declared | — | `src/nova/objects/service.py:L65–L264` |
| `NODE_IDENTITY_VERSION` | constant | — | exported | not declared | — | `src/nova/objects/service.py:L268–L268` |
| `OLDEST_SUPPORTED_SERVICE_VERSION` | constant | — | exported | not declared | — | `src/nova/objects/service.py:L290–L290` |
| `SERVICE_VERSION_ALIASES` | constant | — | exported | not declared | — | `src/nova/objects/service.py:L291–L305` |
| `Service` | class | — | exported | not declared | — | `src/nova/objects/service.py:L310–L633` |
| `Service.VERSION` | constant | — | public | not declared | — | `src/nova/objects/service.py:L335–L335` |
| `Service.fields` | field | — | public | not declared | — | `src/nova/objects/service.py:L337–L351` |
| `Service._MIN_VERSION_CACHE` | field | — | private | not declared | — | `src/nova/objects/service.py:L353–L353` |
| `Service._SERVICE_VERSION_CACHING` | field | — | private | not declared | — | `src/nova/objects/service.py:L354–L354` |
| `Service.__init__` | method | (self, *args, **kwargs) | public | not declared | 2/7 | `src/nova/objects/service.py:L356–L372` |
| `Service.obj_make_compatible_from_manifest` | method | (self, primitive, target_version, version_manifest) | public | not declared | 10/16 | `src/nova/objects/service.py:L374–L391` |
| `Service._do_compute_node` | method | (self, context, primitive, version_manifest) | private | `` (src/nova/objects/service.py:L402) | 2/10 | `src/nova/objects/service.py:L393–L405` |
| `Service._from_db_object` | method | (context, service, db_service) | private | `service` (src/nova/objects/service.py:L430) | 8/16 | `src/nova/objects/service.py:L408–L430` |
| `Service.obj_load_attr` | method | (self, attrname) | public | not declared | 4/19 | `src/nova/objects/service.py:L433–L458` |
| `Service.get_by_id` | method | (cls, context, service_id) | public | `cls._from_db_object(context, cls(), db_service)` (src/nova/objects/service.py:L464) | 1/3 | `src/nova/objects/service.py:L462–L464` |
| `Service.get_by_uuid` | method | (cls, context, service_uuid) | public | `cls._from_db_object(context, cls(), db_service)` (src/nova/objects/service.py:L470) | 1/3 | `src/nova/objects/service.py:L468–L470` |
| `Service.get_by_host_and_topic` | method | (cls, context, host, topic) | public | `cls._from_db_object(context, cls(), db_service)` (src/nova/objects/service.py:L476) | 1/3 | `src/nova/objects/service.py:L474–L476` |
| `Service.get_by_host_and_binary` | method | (cls, context, host, binary) | public | `` (src/nova/objects/service.py:L485); `cls._from_db_object(context, cls(), db_service)` (src/nova/objects/service.py:L486) | 2/7 | `src/nova/objects/service.py:L480–L486` |
| `Service._db_service_get_by_compute_host` | method | (context, host, use_slave=False) | private | `db.service_get_by_compute_host(context, host)` (src/nova/objects/service.py:L491) | 1/2 | `src/nova/objects/service.py:L490–L491` |
| `Service.get_by_compute_host` | method | (cls, context, host, use_slave=False) | public | `cls._from_db_object(context, cls(), db_service)` (src/nova/objects/service.py:L498) | 1/4 | `src/nova/objects/service.py:L495–L498` |
| `Service.get_by_args` | method | (cls, context, host, binary) | public | `cls._from_db_object(context, cls(), db_service)` (src/nova/objects/service.py:L506) | 1/3 | `src/nova/objects/service.py:L504–L506` |
| `Service._check_minimum_version` | method | (self) | private | `` (src/nova/objects/service.py:L524); `` (src/nova/objects/service.py:L526) | 4/9 | `src/nova/objects/service.py:L508–L530` |
| `Service.create` | method | (self) | public | not declared | 3/12 | `src/nova/objects/service.py:L533–L546` |
| `Service.save` | method | (self) | public | not declared | 1/7 | `src/nova/objects/service.py:L549–L556` |
| `Service._send_status_update_notification` | method | (self, updates) | private | not declared | 2/4 | `src/nova/objects/service.py:L558–L564` |
| `Service._send_notification` | method | (self, action) | private | not declared | 1/10 | `src/nova/objects/service.py:L566–L575` |
| `Service.destroy` | method | (self) | public | not declared | 1/3 | `src/nova/objects/service.py:L578–L580` |
| `Service.enable_min_version_cache` | method | (cls) | public | not declared | 1/3 | `src/nova/objects/service.py:L583–L585` |
| `Service.clear_min_version_cache` | method | (cls) | public | not declared | 1/2 | `src/nova/objects/service.py:L588–L589` |
| `Service._db_service_get_minimum_version` | method | (context, binaries, use_slave=False) | private | `db.service_get_minimum_version(context, binaries)` (src/nova/objects/service.py:L594) | 1/2 | `src/nova/objects/service.py:L593–L594` |
| `Service.get_minimum_version_multi` | method | (cls, context, binaries, use_slave=False) | public | `version` (src/nova/objects/service.py:L627) | 11/25 | `src/nova/objects/service.py:L598–L627` |
| `Service.get_minimum_version` | method | (cls, context, binary, use_slave=False) | public | `cls.get_minimum_version_multi(context, [binary], use_slave=use_slave)` (src/nova/objects/service.py:L632) | 1/3 | `src/nova/objects/service.py:L631–L633` |
| `get_minimum_version_all_cells` | function | (context, binaries, require_all=False) | exported | `min_version or 0` (src/nova/objects/service.py:L701) | 13/31 | `src/nova/objects/service.py:L636–L701` |
| `ServiceList` | class | — | exported | not declared | — | `src/nova/objects/service.py:L705–L768` |
| `ServiceList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/service.py:L727–L727` |
| `ServiceList.fields` | field | — | public | not declared | — | `src/nova/objects/service.py:L729–L731` |
| `ServiceList.get_by_topic` | method | (cls, context, topic) | public | `base.obj_make_list(context, cls(context), db_services)` (src/nova/objects/service.py:L737) | 1/3 | `src/nova/objects/service.py:L735–L737` |
| `ServiceList.get_by_binary` | method | (cls, context, binary, include_disabled=False) | public | `base.obj_make_list(context, cls(context), db_services)` (src/nova/objects/service.py:L746) | 1/4 | `src/nova/objects/service.py:L743–L746` |
| `ServiceList.get_by_host` | method | (cls, context, host) | public | `base.obj_make_list(context, cls(context), db_services)` (src/nova/objects/service.py:L752) | 1/3 | `src/nova/objects/service.py:L750–L752` |
| `ServiceList.get_all` | method | (cls, context, disabled=None, set_zones=False) | public | `base.obj_make_list(context, cls(context), db_services)` (src/nova/objects/service.py:L761) | 2/6 | `src/nova/objects/service.py:L756–L761` |
| `ServiceList.get_all_computes_by_hv_type` | method | (cls, context, hv_type) | public | `base.obj_make_list(context, cls(context), db_services)` (src/nova/objects/service.py:L768) | 1/4 | `src/nova/objects/service.py:L765–L768` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/objects/service.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/service.py:L16)
- `oslo_utils`: imports `versionutils` (src/nova/objects/service.py:L17)
- `nova`: imports `availability_zones` (src/nova/objects/service.py:L19)
- `nova`: imports `context as nova_context` (src/nova/objects/service.py:L20)
- `nova.db.main`: imports `api as db` (src/nova/objects/service.py:L21)
- `nova`: imports `exception` (src/nova/objects/service.py:L22)
- `nova.notifications.objects`: imports `base as notification` (src/nova/objects/service.py:L23)
- `nova.notifications.objects`: imports `service as service_notification` (src/nova/objects/service.py:L24)
- `nova`: imports `objects` (src/nova/objects/service.py:L25)
- `nova.objects`: imports `base` (src/nova/objects/service.py:L26)
- `nova.objects`: imports `fields` (src/nova/objects/service.py:L27)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/service.py:L30)
- **global-mutation**: SERVICE_VERSION = 74 (src/nova/objects/service.py:L40)
- **global-mutation**: SERVICE_VERSION_HISTORY = ( (src/nova/objects/service.py:L65)
- **global-mutation**: NODE_IDENTITY_VERSION = 65 (src/nova/objects/service.py:L268)
- **global-mutation**: OLDEST_SUPPORTED_SERVICE_VERSION = 'Gazpacho' (src/nova/objects/service.py:L290)
- **global-mutation**: SERVICE_VERSION_ALIASES = { (src/nova/objects/service.py:L291)
- **global-mutation**: VERSION = '1.22' (src/nova/objects/service.py:L335)
- **global-mutation**: VERSION = '1.19' (src/nova/objects/service.py:L727)

