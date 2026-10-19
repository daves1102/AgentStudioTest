# src/nova/objects/ec2.py

## Overview

This file implements the `ec2` module, defining 3 classs, 3 constants, 3 fields, 8 functions, 11 methods, 3 variables, 7 imports, 3 side effects.

Lines: total 249, code 186, comment 17, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_CACHE_TIME` | variable | — | unexported | not declared | — | `src/nova/objects/ec2.py:L27–L27` |
| `_CACHE` | variable | — | unexported | not declared | — | `src/nova/objects/ec2.py:L28–L28` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/ec2.py:L30–L40` |
| `memoize` | function | (func) | exported | `memoizer` (src/nova/objects/ec2.py:L56) | 1/4 | `src/nova/objects/ec2.py:L43–L56` |
| `memoize.memoizer` | function | (context, reqid) | public | `value` (src/nova/objects/ec2.py:L55) | — | `src/nova/objects/ec2.py:L45–L55` |
| `id_to_ec2_id` | function | (instance_id, template='i-%08x') | exported | `template % int(instance_id)` (src/nova/objects/ec2.py:L61) | 1/2 | `src/nova/objects/ec2.py:L59–L61` |
| `id_to_ec2_inst_id` | function | (context, instance_id) | exported | `None` (src/nova/objects/ec2.py:L67); `id_to_ec2_id(int_id)` (src/nova/objects/ec2.py:L70); `id_to_ec2_id(instance_id)` (src/nova/objects/ec2.py:L72) | 3/8 | `src/nova/objects/ec2.py:L64–L72` |
| `get_int_id_from_instance_uuid` | function | (context, instance_uuid) | exported | `` (src/nova/objects/ec2.py:L78); `imap.id` (src/nova/objects/ec2.py:L81); `imap.id` (src/nova/objects/ec2.py:L86) | 3/11 | `src/nova/objects/ec2.py:L76–L86` |
| `glance_id_to_ec2_id` | function | (context, glance_id, image_type='ami') | exported | `` (src/nova/objects/ec2.py:L92); `id_to_ec2_id(image_id, template=template)` (src/nova/objects/ec2.py:L95) | 2/6 | `src/nova/objects/ec2.py:L89–L95` |
| `glance_id_to_id` | function | (context, glance_id) | exported | `` (src/nova/objects/ec2.py:L102); `S3ImageMapping.get_by_uuid(context, glance_id).id` (src/nova/objects/ec2.py:L105); `s3imap.id` (src/nova/objects/ec2.py:L109) | 3/9 | `src/nova/objects/ec2.py:L99–L109` |
| `glance_type_to_ec2_type` | function | (image_type) | exported | `'aki'` (src/nova/objects/ec2.py:L121); `'ari'` (src/nova/objects/ec2.py:L123); `'ami'` (src/nova/objects/ec2.py:L125); `image_type` (src/nova/objects/ec2.py:L126) | 4/8 | `src/nova/objects/ec2.py:L112–L126` |
| `EC2InstanceMapping` | class | — | exported | not declared | — | `src/nova/objects/ec2.py:L130–L167` |
| `EC2InstanceMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/ec2.py:L132–L132` |
| `EC2InstanceMapping.fields` | field | — | public | not declared | — | `src/nova/objects/ec2.py:L134–L137` |
| `EC2InstanceMapping._from_db_object` | method | (context, imap, db_imap) | private | `imap` (src/nova/objects/ec2.py:L145) | 2/6 | `src/nova/objects/ec2.py:L140–L145` |
| `EC2InstanceMapping.create` | method | (self) | public | not declared | 2/6 | `src/nova/objects/ec2.py:L148–L153` |
| `EC2InstanceMapping.get_by_uuid` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(), db_imap)` (src/nova/objects/ec2.py:L160) | 2/4 | `src/nova/objects/ec2.py:L157–L160` |
| `EC2InstanceMapping.get_by_id` | method | (cls, context, ec2_id) | public | `cls._from_db_object(context, cls(), db_imap)` (src/nova/objects/ec2.py:L167) | 2/4 | `src/nova/objects/ec2.py:L164–L167` |
| `S3ImageMapping` | class | — | exported | not declared | — | `src/nova/objects/ec2.py:L171–L208` |
| `S3ImageMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/ec2.py:L173–L173` |
| `S3ImageMapping.fields` | field | — | public | not declared | — | `src/nova/objects/ec2.py:L175–L178` |
| `S3ImageMapping._from_db_object` | method | (context, s3imap, db_s3imap) | private | `s3imap` (src/nova/objects/ec2.py:L186) | 2/6 | `src/nova/objects/ec2.py:L181–L186` |
| `S3ImageMapping.create` | method | (self) | public | not declared | 2/6 | `src/nova/objects/ec2.py:L189–L194` |
| `S3ImageMapping.get_by_uuid` | method | (cls, context, s3_image_uuid) | public | `cls._from_db_object(context, cls(context), db_s3imap)` (src/nova/objects/ec2.py:L201) | 2/4 | `src/nova/objects/ec2.py:L198–L201` |
| `S3ImageMapping.get_by_id` | method | (cls, context, s3_id) | public | `cls._from_db_object(context, cls(context), db_s3imap)` (src/nova/objects/ec2.py:L208) | 2/4 | `src/nova/objects/ec2.py:L205–L208` |
| `EC2Ids` | class | — | exported | not declared | — | `src/nova/objects/ec2.py:L212–L249` |
| `EC2Ids.VERSION` | constant | — | public | not declared | — | `src/nova/objects/ec2.py:L214–L214` |
| `EC2Ids.fields` | field | — | public | not declared | — | `src/nova/objects/ec2.py:L216–L221` |
| `EC2Ids._from_dict` | method | (ec2ids, dict_ec2ids) | private | `ec2ids` (src/nova/objects/ec2.py:L227) | 2/4 | `src/nova/objects/ec2.py:L224–L227` |
| `EC2Ids._get_ec2_ids` | method | (context, instance) | private | `ec2_ids` (src/nova/objects/ec2.py:L243) | 3/12 | `src/nova/objects/ec2.py:L230–L243` |
| `EC2Ids.get_by_instance` | method | (cls, context, instance) | public | `cls._from_dict(cls(context), ec2_ids)` (src/nova/objects/ec2.py:L249) | 1/3 | `src/nova/objects/ec2.py:L247–L249` |

## Dependencies

- `import functools` (src/nova/objects/ec2.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/ec2.py:L17)
- `nova`: imports `cache_utils` (src/nova/objects/ec2.py:L19)
- `nova.db.main`: imports `api as db` (src/nova/objects/ec2.py:L20)
- `nova`: imports `exception` (src/nova/objects/ec2.py:L21)
- `nova.objects`: imports `base` (src/nova/objects/ec2.py:L22)
- `nova.objects`: imports `fields` (src/nova/objects/ec2.py:L23)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/ec2.py:L132)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/ec2.py:L173)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/ec2.py:L214)

