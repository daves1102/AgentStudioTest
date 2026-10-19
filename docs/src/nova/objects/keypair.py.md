# src/nova/objects/keypair.py

## Overview

This file implements the `keypair` module, defining 2 classs, 5 constants, 2 fields, 4 functions, 14 methods, 1 variable, 9 imports, 9 side effects.

Lines: total 208, code 143, comment 27, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KEYPAIR_TYPE_SSH` | constant | — | exported | not declared | — | `src/nova/objects/keypair.py:L26–L26` |
| `KEYPAIR_TYPE_X509` | constant | — | exported | not declared | — | `src/nova/objects/keypair.py:L27–L27` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/keypair.py:L28–L28` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/keypair.py:L30–L33` |
| `_get_from_db` | function | (context, user_id, name=None, limit=None, marker=None) | unexported | `db_keypair` (src/nova/objects/keypair.py:L45); `query.all()` (src/nova/objects/keypair.py:L58) | 5/19 | `src/nova/objects/keypair.py:L37–L58` |
| `_get_count_from_db` | function | (context, user_id) | unexported | `context.session.query(api_models.KeyPair).\ filter(api_models.KeyPair.user_id == user_id).\ count()` (src/nova/objects/keypair.py:L63) | 1/4 | `src/nova/objects/keypair.py:L62–L65` |
| `_create_in_db` | function | (context, values) | unexported | `kp` (src/nova/objects/keypair.py:L76) | 2/8 | `src/nova/objects/keypair.py:L69–L76` |
| `_destroy_in_db` | function | (context, user_id, name) | unexported | not declared | 2/7 | `src/nova/objects/keypair.py:L80–L86` |
| `KeyPair` | class | — | exported | not declared | — | `src/nova/objects/keypair.py:L91–L173` |
| `KeyPair.VERSION` | constant | — | public | not declared | — | `src/nova/objects/keypair.py:L98–L98` |
| `KeyPair.fields` | field | — | public | not declared | — | `src/nova/objects/keypair.py:L100–L107` |
| `KeyPair.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/5 | `src/nova/objects/keypair.py:L109–L113` |
| `KeyPair._from_db_object` | method | (context, keypair, db_keypair) | private | `keypair` (src/nova/objects/keypair.py:L126) | 4/11 | `src/nova/objects/keypair.py:L116–L126` |
| `KeyPair._get_from_db` | method | (context, user_id, name) | private | `_get_from_db(context, user_id, name=name)` (src/nova/objects/keypair.py:L130) | 1/2 | `src/nova/objects/keypair.py:L129–L130` |
| `KeyPair._destroy_in_db` | method | (context, user_id, name) | private | `_destroy_in_db(context, user_id, name)` (src/nova/objects/keypair.py:L134) | 1/2 | `src/nova/objects/keypair.py:L133–L134` |
| `KeyPair._create_in_db` | method | (context, values) | private | `_create_in_db(context, values)` (src/nova/objects/keypair.py:L138) | 1/2 | `src/nova/objects/keypair.py:L137–L138` |
| `KeyPair.get_by_name` | method | (cls, context, user_id, name, localonly=False) | public | `cls._from_db_object(context, cls(), db_keypair)` (src/nova/objects/keypair.py:L150) | 2/5 | `src/nova/objects/keypair.py:L143–L150` |
| `KeyPair.destroy_by_name` | method | (cls, context, user_id, name) | public | not declared | 1/2 | `src/nova/objects/keypair.py:L154–L155` |
| `KeyPair.create` | method | (self) | public | not declared | 2/6 | `src/nova/objects/keypair.py:L158–L164` |
| `KeyPair._create` | method | (self) | private | not declared | 1/4 | `src/nova/objects/keypair.py:L166–L169` |
| `KeyPair.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/keypair.py:L172–L173` |
| `KeyPairList` | class | — | exported | not declared | — | `src/nova/objects/keypair.py:L177–L208` |
| `KeyPairList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/keypair.py:L183–L183` |
| `KeyPairList.fields` | field | — | public | not declared | — | `src/nova/objects/keypair.py:L185–L187` |
| `KeyPairList._get_from_db` | method | (context, user_id, limit, marker) | private | `_get_from_db(context, user_id, limit=limit, marker=marker)` (src/nova/objects/keypair.py:L191) | 1/2 | `src/nova/objects/keypair.py:L190–L191` |
| `KeyPairList._get_count_from_db` | method | (context, user_id) | private | `_get_count_from_db(context, user_id)` (src/nova/objects/keypair.py:L195) | 1/2 | `src/nova/objects/keypair.py:L194–L195` |
| `KeyPairList.get_by_user` | method | (cls, context, user_id, limit=None, marker=None) | public | `base.obj_make_list(context, cls(context), api_db_keypairs)` (src/nova/objects/keypair.py:L203) | 1/4 | `src/nova/objects/keypair.py:L199–L203` |
| `KeyPairList.get_count_by_user` | method | (cls, context, user_id) | public | `cls._get_count_from_db(context, user_id)` (src/nova/objects/keypair.py:L208) | 1/2 | `src/nova/objects/keypair.py:L207–L208` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/keypair.py:L15)
- `oslo_db.sqlalchemy`: imports `utils as sqlalchemyutils` (src/nova/objects/keypair.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/objects/keypair.py:L17)
- `oslo_utils`: imports `versionutils` (src/nova/objects/keypair.py:L18)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/keypair.py:L20)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/keypair.py:L21)
- `nova`: imports `exception` (src/nova/objects/keypair.py:L22)
- `nova.objects`: imports `base` (src/nova/objects/keypair.py:L23)
- `nova.objects`: imports `fields` (src/nova/objects/keypair.py:L24)

## Side Effects

- **network**: query = context.session.query(api_models.KeyPair).\ (src/nova/objects/keypair.py:L38)
- **network**: marker_row = context.session.query(api_models.KeyPair).\ (src/nova/objects/keypair.py:L49)
- **network**: return context.session.query(api_models.KeyPair).\ (src/nova/objects/keypair.py:L63)
- **network**: result = context.session.query(api_models.KeyPair).\ (src/nova/objects/keypair.py:L81)
- **global-mutation**: KEYPAIR_TYPE_SSH = 'ssh' (src/nova/objects/keypair.py:L26)
- **global-mutation**: KEYPAIR_TYPE_X509 = 'x509' (src/nova/objects/keypair.py:L27)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/keypair.py:L28)
- **global-mutation**: VERSION = '1.4' (src/nova/objects/keypair.py:L98)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/keypair.py:L183)

