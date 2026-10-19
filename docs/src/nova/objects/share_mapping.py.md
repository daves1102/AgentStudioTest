# src/nova/objects/share_mapping.py

## Overview

This file implements the `share_mapping` module, defining 2 classs, 5 constants, 2 fields, 18 methods, 1 variable, 9 imports, 5 side effects.

Lines: total 259, code 201, comment 26, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/share_mapping.py:L25–L25` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/share_mapping.py:L26–L26` |
| `EPHEMERAL_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/share_mapping.py:L28–L32` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/share_mapping.py:L34–L37` |
| `ShareMapping` | class | — | exported | not declared | — | `src/nova/objects/share_mapping.py:L41–L193` |
| `ShareMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/share_mapping.py:L47–L47` |
| `ShareMapping.fields` | field | — | public | not declared | — | `src/nova/objects/share_mapping.py:L49–L62` |
| `ShareMapping.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/15 | `src/nova/objects/share_mapping.py:L64–L78` |
| `ShareMapping._from_db_object` | method | (context, share_mapping, db_share_mapping) | private | `share_mapping` (src/nova/objects/share_mapping.py:L87) | 3/7 | `src/nova/objects/share_mapping.py:L81–L87` |
| `ShareMapping.save` | method | (self) | public | not declared | 1/5 | `src/nova/objects/share_mapping.py:L90–L94` |
| `ShareMapping.create` | method | (self) | public | not declared | 1/5 | `src/nova/objects/share_mapping.py:L96–L101` |
| `ShareMapping.delete` | method | (self) | public | not declared | 1/9 | `src/nova/objects/share_mapping.py:L104–L112` |
| `ShareMapping.activate` | method | (self) | public | not declared | 1/6 | `src/nova/objects/share_mapping.py:L114–L120` |
| `ShareMapping.deactivate` | method | (self) | public | not declared | 1/8 | `src/nova/objects/share_mapping.py:L122–L129` |
| `ShareMapping.get_by_instance_uuid_and_share_id` | method | (cls, context, instance_uuid, share_id) | public | `ShareMapping._from_db_object( context, share_mapping, db_share_mapping)` (src/nova/objects/share_mapping.py:L145) | 2/11 | `src/nova/objects/share_mapping.py:L133–L148` |
| `ShareMapping.get_share_host_provider` | method | (self) | public | `None` (src/nova/objects/share_mapping.py:L152); `rhost` (src/nova/objects/share_mapping.py:L157) | 3/8 | `src/nova/objects/share_mapping.py:L150–L157` |
| `ShareMapping.enhance_with_ceph_credentials` | method | (self, context) | public | not declared | 1/8 | `src/nova/objects/share_mapping.py:L159–L168` |
| `ShareMapping._cephx_identity` | method | (instance_uuid, host) | private | `'nova-' + digest[:16]` (src/nova/objects/share_mapping.py:L180) | 1/5 | `src/nova/objects/share_mapping.py:L171–L180` |
| `ShareMapping.set_access_according_to_protocol` | method | (self) | public | not declared | 3/12 | `src/nova/objects/share_mapping.py:L182–L193` |
| `ShareMappingList` | class | — | exported | not declared | — | `src/nova/objects/share_mapping.py:L197–L259` |
| `ShareMappingList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/share_mapping.py:L200–L200` |
| `ShareMappingList.fields` | field | — | public | not declared | — | `src/nova/objects/share_mapping.py:L201–L203` |
| `ShareMappingList.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `base.obj_make_list(context, cls(context), db_share_mappings)` (src/nova/objects/share_mapping.py:L210) | 1/4 | `src/nova/objects/share_mapping.py:L207–L210` |
| `ShareMappingList.get_by_host_for_reconcile` | method | (cls, context, host) | public | `base.obj_make_list(context, cls(context), [])` (src/nova/objects/share_mapping.py:L233); `base.obj_make_list(context, cls(context), db_share_mappings)` (src/nova/objects/share_mapping.py:L236) | 3/13 | `src/nova/objects/share_mapping.py:L214–L236` |
| `ShareMappingList.get_by_share_id` | method | (cls, context, share_id) | public | `base.obj_make_list(context, cls(context), db_share_mappings)` (src/nova/objects/share_mapping.py:L243) | 1/4 | `src/nova/objects/share_mapping.py:L240–L243` |
| `ShareMappingList.activate_all` | method | (self) | public | not declared | 2/3 | `src/nova/objects/share_mapping.py:L245–L247` |
| `ShareMappingList.deactivate_all` | method | (self) | public | not declared | 2/3 | `src/nova/objects/share_mapping.py:L249–L251` |
| `ShareMappingList.contains_error` | method | (self) | public | `any( [ share_mapping.status == fields.ShareMappingStatus.ERROR for share_mapping in self ] )` (src/nova/objects/share_mapping.py:L254) | 2/7 | `src/nova/objects/share_mapping.py:L253–L259` |

## Dependencies

- `import hashlib` (src/nova/objects/share_mapping.py:L13)
- `import logging` (src/nova/objects/share_mapping.py:L14)
- `oslo_utils`: imports `versionutils` (src/nova/objects/share_mapping.py:L16)
- `import nova.conf` (src/nova/objects/share_mapping.py:L18)
- `nova.db.main`: imports `api as db` (src/nova/objects/share_mapping.py:L19)
- `nova`: imports `exception` (src/nova/objects/share_mapping.py:L20)
- `nova.objects`: imports `base` (src/nova/objects/share_mapping.py:L21)
- `nova.objects`: imports `fields` (src/nova/objects/share_mapping.py:L22)
- `nova.share`: imports `manila as manila_api` (src/nova/objects/share_mapping.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/objects/share_mapping.py:L25)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/share_mapping.py:L26)
- **global-mutation**: EPHEMERAL_FIELDS = [ (src/nova/objects/share_mapping.py:L28)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/share_mapping.py:L47)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/share_mapping.py:L200)

