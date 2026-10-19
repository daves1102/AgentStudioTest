# src/nova/objects/cell_mapping.py

## Overview

This file implements the `cell_mapping` module, defining 2 classs, 5 constants, 2 fields, 1 function, 21 methods, 1 property, 1 variable, 12 imports, 13 side effects.

Lines: total 300, code 228, comment 23, blank 49

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/cell_mapping.py:L28–L28` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/cell_mapping.py:L29–L29` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/cell_mapping.py:L31–L34` |
| `_parse_netloc` | function | (netloc) | unexported | `these` (src/nova/objects/cell_mapping.py:L63) | 3/20 | `src/nova/objects/cell_mapping.py:L37–L63` |
| `CellMapping` | class | — | exported | not declared | — | `src/nova/objects/cell_mapping.py:L67–L235` |
| `CellMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/cell_mapping.py:L70–L70` |
| `CellMapping.CELL0_UUID` | constant | — | public | not declared | — | `src/nova/objects/cell_mapping.py:L72–L72` |
| `CellMapping.fields` | field | — | public | not declared | — | `src/nova/objects/cell_mapping.py:L74–L81` |
| `CellMapping.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/6 | `src/nova/objects/cell_mapping.py:L83–L88` |
| `CellMapping.identity` | method | (self) | public | `'%s(%s)' % (self.uuid, self.name)` (src/nova/objects/cell_mapping.py:L93); `self.uuid` (src/nova/objects/cell_mapping.py:L95) | 3/5 | `src/nova/objects/cell_mapping.py:L91–L95` |
| `CellMapping._format_url` | method | (url, default) | private | `url.format(**subs)` (src/nova/objects/cell_mapping.py:L126) | 4/21 | `src/nova/objects/cell_mapping.py:L98–L126` |
| `CellMapping.format_db_url` | method | (url) | public | `url` (src/nova/objects/cell_mapping.py:L134); `CellMapping._format_url(url, CONF.database.connection)` (src/nova/objects/cell_mapping.py:L136); `url` (src/nova/objects/cell_mapping.py:L140) | 4/12 | `src/nova/objects/cell_mapping.py:L129–L140` |
| `CellMapping.format_mq_url` | method | (url) | public | `url` (src/nova/objects/cell_mapping.py:L148); `CellMapping._format_url(url, CONF.transport_url)` (src/nova/objects/cell_mapping.py:L150); `url` (src/nova/objects/cell_mapping.py:L154) | 4/12 | `src/nova/objects/cell_mapping.py:L143–L154` |
| `CellMapping._from_db_object` | method | (context, cell_mapping, db_cell_mapping) | private | `cell_mapping` (src/nova/objects/cell_mapping.py:L167) | 4/11 | `src/nova/objects/cell_mapping.py:L157–L167` |
| `CellMapping._get_by_uuid_from_db` | method | (context, uuid) | private | `db_mapping` (src/nova/objects/cell_mapping.py:L178) | 2/6 | `src/nova/objects/cell_mapping.py:L171–L178` |
| `CellMapping.get_by_uuid` | method | (cls, context, uuid) | public | `cls._from_db_object(context, cls(), db_mapping)` (src/nova/objects/cell_mapping.py:L185) | 1/3 | `src/nova/objects/cell_mapping.py:L182–L185` |
| `CellMapping._create_in_db` | method | (context, updates) | private | `db_mapping` (src/nova/objects/cell_mapping.py:L194) | 1/5 | `src/nova/objects/cell_mapping.py:L189–L194` |
| `CellMapping.create` | method | (self) | public | not declared | 1/3 | `src/nova/objects/cell_mapping.py:L197–L199` |
| `CellMapping._save_in_db` | method | (context, uuid, updates) | private | `db_mapping` (src/nova/objects/cell_mapping.py:L212) | 2/8 | `src/nova/objects/cell_mapping.py:L203–L212` |
| `CellMapping.save` | method | (self) | public | not declared | 1/5 | `src/nova/objects/cell_mapping.py:L215–L219` |
| `CellMapping._destroy_in_db` | method | (context, uuid) | private | not declared | 2/5 | `src/nova/objects/cell_mapping.py:L223–L228` |
| `CellMapping.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/cell_mapping.py:L231–L232` |
| `CellMapping.is_cell0` | method | (self) | public | `self.obj_attr_is_set('uuid') and self.uuid == self.CELL0_UUID` (src/nova/objects/cell_mapping.py:L235) | 2/2 | `src/nova/objects/cell_mapping.py:L234–L235` |
| `CellMappingList` | class | — | exported | not declared | — | `src/nova/objects/cell_mapping.py:L239–L300` |
| `CellMappingList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/cell_mapping.py:L242–L242` |
| `CellMappingList.fields` | field | — | public | not declared | — | `src/nova/objects/cell_mapping.py:L244–L246` |
| `CellMappingList._get_all_from_db` | method | (context) | private | `context.session.query(api_db_models.CellMapping).order_by( expression.asc(api_db_models.CellMapping.id)).all()` (src/nova/objects/cell_mapping.py:L251) | 1/3 | `src/nova/objects/cell_mapping.py:L250–L252` |
| `CellMappingList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/cell_mapping.py:L258) | 1/3 | `src/nova/objects/cell_mapping.py:L256–L258` |
| `CellMappingList._get_by_disabled_from_db` | method | (context, disabled) | private | `context.session.query(api_db_models.CellMapping)\ .filter_by(disabled=sql.true())\ .order_by(expression.asc(api_db_models.CellMapping.id)).all()` (src/nova/objects/cell_mapping.py:L264); `context.session.query(api_db_models.CellMapping)\ .filter_by(disabled=sql.false())\ .order_by(expression.asc(api_db_models.CellMapping.id)).all()` (src/nova/objects/cell_mapping.py:L268) | 2/9 | `src/nova/objects/cell_mapping.py:L262–L270` |
| `CellMappingList.get_by_disabled` | method | (cls, context, disabled) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/cell_mapping.py:L276) | 1/3 | `src/nova/objects/cell_mapping.py:L274–L276` |
| `CellMappingList._get_by_project_id_from_db` | method | (context, project_id) | private | `context.session.query( api_db_models.CellMapping).filter( api_db_models.CellMapping.id.in_(cell_ids) ).all()` (src/nova/objects/cell_mapping.py:L289) | 1/10 | `src/nova/objects/cell_mapping.py:L280–L292` |
| `CellMappingList.get_by_project_id` | method | (cls, context, project_id) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/cell_mapping.py:L300) | 1/3 | `src/nova/objects/cell_mapping.py:L295–L300` |
| `CellMapping.identity` | property | — | public | not declared | — | `src/nova/objects/cell_mapping.py:L90–L95` |

## Dependencies

- `urllib`: imports `parse as urlparse` (src/nova/objects/cell_mapping.py:L13)
- `oslo_log`: imports `log as logging` (src/nova/objects/cell_mapping.py:L15)
- `oslo_utils`: imports `netutils` (src/nova/objects/cell_mapping.py:L16)
- `oslo_utils`: imports `versionutils` (src/nova/objects/cell_mapping.py:L17)
- `sqlalchemy`: imports `sql` (src/nova/objects/cell_mapping.py:L18)
- `sqlalchemy.sql`: imports `expression` (src/nova/objects/cell_mapping.py:L19)
- `import nova.conf` (src/nova/objects/cell_mapping.py:L21)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/cell_mapping.py:L22)
- `nova.db.api`: imports `models as api_db_models` (src/nova/objects/cell_mapping.py:L23)
- `nova`: imports `exception` (src/nova/objects/cell_mapping.py:L24)
- `nova.objects`: imports `base` (src/nova/objects/cell_mapping.py:L25)
- `nova.objects`: imports `fields` (src/nova/objects/cell_mapping.py:L26)

## Side Effects

- **network**: db_mapping = context.session.query( (src/nova/objects/cell_mapping.py:L205)
- **network**: context.session.add(db_mapping) (src/nova/objects/cell_mapping.py:L211)
- **network**: result = context.session.query(api_db_models.CellMapping).filter_by( (src/nova/objects/cell_mapping.py:L225)
- **network**: return context.session.query(api_db_models.CellMapping).order_by( (src/nova/objects/cell_mapping.py:L251)
- **network**: return context.session.query(api_db_models.CellMapping)\ (src/nova/objects/cell_mapping.py:L264)
- **network**: return context.session.query(api_db_models.CellMapping)\ (src/nova/objects/cell_mapping.py:L268)
- **network**: cell_ids = context.session.query( (src/nova/objects/cell_mapping.py:L283)
- **network**: return context.session.query( (src/nova/objects/cell_mapping.py:L289)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/objects/cell_mapping.py:L28)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/cell_mapping.py:L29)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/cell_mapping.py:L70)
- **global-mutation**: CELL0_UUID = '00000000-0000-0000-0000-000000000000' (src/nova/objects/cell_mapping.py:L72)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/cell_mapping.py:L242)

