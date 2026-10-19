# src/nova/objects/instance_info_cache.py

## Overview

This file implements the `instance_info_cache` module, defining 1 class, 2 constants, 1 field, 6 methods, 1 variable, 6 imports, 2 side effects.

Lines: total 121, code 72, comment 30, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/instance_info_cache.py:L23–L23` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_info_cache.py:L25–L27` |
| `InstanceInfoCache` | class | — | exported | not declared | — | `src/nova/objects/instance_info_cache.py:L31–L121` |
| `InstanceInfoCache.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_info_cache.py:L39–L39` |
| `InstanceInfoCache.fields` | field | — | public | not declared | — | `src/nova/objects/instance_info_cache.py:L41–L44` |
| `InstanceInfoCache._from_db_object` | method | (context, info_cache, db_obj) | private | `info_cache` (src/nova/objects/instance_info_cache.py:L52) | 2/6 | `src/nova/objects/instance_info_cache.py:L47–L52` |
| `InstanceInfoCache.new` | method | (cls, context, instance_uuid) | public | `info_cache` (src/nova/objects/instance_info_cache.py:L67) | 1/6 | `src/nova/objects/instance_info_cache.py:L55–L67` |
| `InstanceInfoCache.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(context), db_obj)` (src/nova/objects/instance_info_cache.py:L76) | 2/6 | `src/nova/objects/instance_info_cache.py:L71–L76` |
| `InstanceInfoCache.save` | method | (self, update_cells=True) | public | not declared | 4/14 | `src/nova/objects/instance_info_cache.py:L80–L104` |
| `InstanceInfoCache.delete` | method | (self) | public | not declared | 1/2 | `src/nova/objects/instance_info_cache.py:L107–L108` |
| `InstanceInfoCache.refresh` | method | (self) | public | not declared | 4/9 | `src/nova/objects/instance_info_cache.py:L111–L121` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/instance_info_cache.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/objects/instance_info_cache.py:L16)
- `nova.db.main`: imports `api as db` (src/nova/objects/instance_info_cache.py:L18)
- `nova`: imports `exception` (src/nova/objects/instance_info_cache.py:L19)
- `nova.objects`: imports `base` (src/nova/objects/instance_info_cache.py:L20)
- `nova.objects`: imports `fields` (src/nova/objects/instance_info_cache.py:L21)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/instance_info_cache.py:L23)
- **global-mutation**: VERSION = '1.5' (src/nova/objects/instance_info_cache.py:L39)

