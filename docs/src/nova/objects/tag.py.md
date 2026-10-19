# src/nova/objects/tag.py

## Overview

This file implements the `tag` module, defining 2 classs, 3 constants, 2 fields, 7 methods, 1 variable, 3 imports, 3 side effects.

Lines: total 85, code 54, comment 15, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MAX_TAG_LENGTH` | constant | — | exported | not declared | — | `src/nova/objects/tag.py:L17–L17` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/tag.py:L19–L22` |
| `Tag` | class | — | exported | not declared | — | `src/nova/objects/tag.py:L26–L57` |
| `Tag.VERSION` | constant | — | public | not declared | — | `src/nova/objects/tag.py:L29–L29` |
| `Tag.fields` | field | — | public | not declared | — | `src/nova/objects/tag.py:L31–L34` |
| `Tag._from_db_object` | method | (context, tag, db_tag) | private | `tag` (src/nova/objects/tag.py:L42) | 2/6 | `src/nova/objects/tag.py:L37–L42` |
| `Tag.create` | method | (self) | public | not declared | 1/3 | `src/nova/objects/tag.py:L45–L47` |
| `Tag.destroy` | method | (cls, context, resource_id, name) | public | not declared | 1/2 | `src/nova/objects/tag.py:L51–L52` |
| `Tag.exists` | method | (cls, context, resource_id, name) | public | `db.instance_tag_exists(context, resource_id, name)` (src/nova/objects/tag.py:L57) | 1/2 | `src/nova/objects/tag.py:L56–L57` |
| `TagList` | class | — | exported | not declared | — | `src/nova/objects/tag.py:L61–L85` |
| `TagList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/tag.py:L64–L64` |
| `TagList.fields` | field | — | public | not declared | — | `src/nova/objects/tag.py:L66–L68` |
| `TagList.get_by_resource_id` | method | (cls, context, resource_id) | public | `base.obj_make_list(context, cls(), db_tags)` (src/nova/objects/tag.py:L74) | 1/3 | `src/nova/objects/tag.py:L72–L74` |
| `TagList.create` | method | (cls, context, resource_id, tags) | public | `base.obj_make_list(context, cls(), db_tags)` (src/nova/objects/tag.py:L80) | 1/3 | `src/nova/objects/tag.py:L78–L80` |
| `TagList.destroy` | method | (cls, context, resource_id) | public | not declared | 1/2 | `src/nova/objects/tag.py:L84–L85` |

## Dependencies

- `nova.db.main`: imports `api as db` (src/nova/objects/tag.py:L13)
- `nova.objects`: imports `base` (src/nova/objects/tag.py:L14)
- `nova.objects`: imports `fields` (src/nova/objects/tag.py:L15)

## Side Effects

- **global-mutation**: MAX_TAG_LENGTH = 60 (src/nova/objects/tag.py:L17)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/tag.py:L29)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/tag.py:L64)

