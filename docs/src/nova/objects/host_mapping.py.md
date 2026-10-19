# src/nova/objects/host_mapping.py

## Overview

This file implements the `host_mapping` module, defining 2 classs, 2 constants, 2 fields, 7 functions, 15 methods, 1 variable, 12 imports, 6 side effects.

Lines: total 295, code 223, comment 27, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/host_mapping.py:L25–L29` |
| `_cell_id_in_updates` | function | (updates) | unexported | not declared | 2/4 | `src/nova/objects/host_mapping.py:L32–L35` |
| `_apply_updates` | function | (context, db_mapping, updates) | unexported | `db_mapping` (src/nova/objects/host_mapping.py:L46) | 1/5 | `src/nova/objects/host_mapping.py:L38–L46` |
| `HostMapping` | class | — | exported | not declared | — | `src/nova/objects/host_mapping.py:L50–L158` |
| `HostMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/host_mapping.py:L52–L52` |
| `HostMapping.fields` | field | — | public | not declared | — | `src/nova/objects/host_mapping.py:L54–L58` |
| `HostMapping._get_cell_mapping` | method | (self) | private | `cell_mapping.CellMapping._from_db_object( self._context, cell_mapping.CellMapping(), cell_map)` (src/nova/objects/host_mapping.py:L67) | 2/9 | `src/nova/objects/host_mapping.py:L60–L68` |
| `HostMapping._load_cell_mapping` | method | (self) | private | not declared | 1/2 | `src/nova/objects/host_mapping.py:L70–L71` |
| `HostMapping.obj_load_attr` | method | (self, attrname) | public | not declared | 2/3 | `src/nova/objects/host_mapping.py:L74–L76` |
| `HostMapping._from_db_object` | method | (context, host_mapping, db_host_mapping) | private | `host_mapping` (src/nova/objects/host_mapping.py:L94) | 4/13 | `src/nova/objects/host_mapping.py:L79–L94` |
| `HostMapping._get_by_host_from_db` | method | (context, host) | private | `db_mapping` (src/nova/objects/host_mapping.py:L108) | 2/11 | `src/nova/objects/host_mapping.py:L98–L108` |
| `HostMapping.get_by_host` | method | (cls, context, host) | public | `cls._from_db_object(context, cls(), db_mapping)` (src/nova/objects/host_mapping.py:L114) | 1/3 | `src/nova/objects/host_mapping.py:L112–L114` |
| `HostMapping._create_in_db` | method | (context, updates) | private | `_apply_updates(context, db_mapping, updates)` (src/nova/objects/host_mapping.py:L120) | 1/3 | `src/nova/objects/host_mapping.py:L118–L120` |
| `HostMapping.create` | method | (self) | public | not declared | 1/5 | `src/nova/objects/host_mapping.py:L123–L128` |
| `HostMapping._save_in_db` | method | (context, obj, updates) | private | `_apply_updates(context, db_mapping, updates)` (src/nova/objects/host_mapping.py:L137) | 2/6 | `src/nova/objects/host_mapping.py:L132–L137` |
| `HostMapping.save` | method | (self) | public | not declared | 1/6 | `src/nova/objects/host_mapping.py:L140–L146` |
| `HostMapping._destroy_in_db` | method | (context, host) | private | not declared | 2/5 | `src/nova/objects/host_mapping.py:L150–L154` |
| `HostMapping.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/host_mapping.py:L157–L158` |
| `HostMappingList` | class | — | exported | not declared | — | `src/nova/objects/host_mapping.py:L162–L191` |
| `HostMappingList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/host_mapping.py:L165–L165` |
| `HostMappingList.fields` | field | — | public | not declared | — | `src/nova/objects/host_mapping.py:L167–L169` |
| `HostMappingList._get_from_db` | method | (context, cell_id=None) | private | `query.all()` (src/nova/objects/host_mapping.py:L179) | 2/7 | `src/nova/objects/host_mapping.py:L173–L179` |
| `HostMappingList.get_by_cell_id` | method | (cls, context, cell_id) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/host_mapping.py:L185) | 1/3 | `src/nova/objects/host_mapping.py:L183–L185` |
| `HostMappingList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/host_mapping.py:L191) | 1/3 | `src/nova/objects/host_mapping.py:L189–L191` |
| `_create_host_mapping` | function | (host_mapping) | unexported | not declared | 2/5 | `src/nova/objects/host_mapping.py:L194–L198` |
| `_check_and_create_node_host_mappings` | function | (ctxt, cm, compute_nodes, status_fn) | unexported | `host_mappings` (src/nova/objects/host_mapping.py:L220) | 3/20 | `src/nova/objects/host_mapping.py:L201–L220` |
| `_check_and_create_service_host_mappings` | function | (ctxt, cm, services, status_fn) | unexported | `host_mappings` (src/nova/objects/host_mapping.py:L236) | 3/14 | `src/nova/objects/host_mapping.py:L223–L236` |
| `_check_and_create_host_mappings` | function | (ctxt, cm, status_fn, by_service) | unexported | `added_hm` (src/nova/objects/host_mapping.py:L254) | 2/15 | `src/nova/objects/host_mapping.py:L239–L254` |
| `discover_hosts` | function | (ctxt, cell_uuid=None, status_fn=None, by_service=False) | exported | `host_mappings` (src/nova/objects/host_mapping.py:L295) | 7/29 | `src/nova/objects/host_mapping.py:L257–L295` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/host_mapping.py:L13)
- `sqlalchemy`: imports `orm` (src/nova/objects/host_mapping.py:L14)
- `nova`: imports `context` (src/nova/objects/host_mapping.py:L16)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/host_mapping.py:L17)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/host_mapping.py:L18)
- `nova`: imports `exception` (src/nova/objects/host_mapping.py:L19)
- `nova.i18n`: imports `_` (src/nova/objects/host_mapping.py:L20)
- `nova.objects`: imports `base` (src/nova/objects/host_mapping.py:L21)
- `nova.objects`: imports `cell_mapping` (src/nova/objects/host_mapping.py:L22)
- `nova.objects`: imports `fields` (src/nova/objects/host_mapping.py:L23)
- `nova`: imports `objects` (src/nova/objects/host_mapping.py:L240)
- `nova`: imports `objects` (src/nova/objects/host_mapping.py:L263)

## Side Effects

- **network**: db_mapping = context.session.query( (src/nova/objects/host_mapping.py:L99)
- **network**: db_mapping = context.session.query(api_models.HostMapping).filter_by( (src/nova/objects/host_mapping.py:L133)
- **network**: result = context.session.query(api_models.HostMapping).filter_by( (src/nova/objects/host_mapping.py:L151)
- **network**: query = context.session.query(api_models.HostMapping).options( (src/nova/objects/host_mapping.py:L174)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/host_mapping.py:L52)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/host_mapping.py:L165)

