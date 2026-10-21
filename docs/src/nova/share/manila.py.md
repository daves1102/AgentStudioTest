# src/nova/share/manila.py

## Overview

This file implements the `manila` module, defining 3 classs, 3 classmethods, 3 constants, 21 fields, 11 functions, 9 methods, 7 imports, 5 side effects.

Lines: total 362, code 301, comment 12, blank 49

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/share/manila.py:L27–L27` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/share/manila.py:L28–L28` |
| `MIN_SHARE_FILE_SYSTEM_MICROVERSION` | constant | — | exported | not declared | — | `src/nova/share/manila.py:L29–L29` |
| `_manilaclient` | function | (context, admin=False) | unexported | `utils.get_sdk_adapter( "shared-file-system", admin=admin, check_service=True, context=context, shared_file_system_api_version=MIN_SHARE_FILE_SYSTEM_MICROVERSION, global_request_id=context.global_id )` (src/nova/share/manila.py:L41) | 1/9 | `src/nova/share/manila.py:L32–L48` |
| `Share` | class | — | exported | not declared | — | `src/nova/share/manila.py:L52–L87` |
| `Share.id` | field | — | public | not declared | — | `src/nova/share/manila.py:L53–L53` |
| `Share.size` | field | — | public | not declared | — | `src/nova/share/manila.py:L54–L54` |
| `Share.availability_zone` | field | — | public | not declared | — | `src/nova/share/manila.py:L55–L55` |
| `Share.created_at` | field | — | public | not declared | — | `src/nova/share/manila.py:L56–L56` |
| `Share.status` | field | — | public | not declared | — | `src/nova/share/manila.py:L57–L57` |
| `Share.name` | field | — | public | not declared | — | `src/nova/share/manila.py:L58–L58` |
| `Share.description` | field | — | public | not declared | — | `src/nova/share/manila.py:L59–L59` |
| `Share.project_id` | field | — | public | not declared | — | `src/nova/share/manila.py:L60–L60` |
| `Share.snapshot_id` | field | — | public | not declared | — | `src/nova/share/manila.py:L61–L61` |
| `Share.share_network_id` | field | — | public | not declared | — | `src/nova/share/manila.py:L62–L62` |
| `Share.share_proto` | field | — | public | not declared | — | `src/nova/share/manila.py:L63–L63` |
| `Share.export_location` | field | — | public | not declared | — | `src/nova/share/manila.py:L64–L64` |
| `Share.metadata` | field | — | public | not declared | — | `src/nova/share/manila.py:L65–L65` |
| `Share.share_type` | field | — | public | not declared | — | `src/nova/share/manila.py:L66–L66` |
| `Share.is_public` | field | — | public | not declared | — | `src/nova/share/manila.py:L67–L67` |
| `Share.from_manila_share` | method | (cls, manila_share, export_location) | public | `cls( id=manila_share.id, size=manila_share.size, availability_zone=manila_share.availability_zone, created_at=manila_share.created_at, status=manila_share.status, name=manila_share.name, description=m` (src/nova/share/manila.py:L71) | 1/18 | `src/nova/share/manila.py:L70–L87` |
| `Access` | class | — | exported | not declared | — | `src/nova/share/manila.py:L91–L119` |
| `Access.id` | field | — | public | not declared | — | `src/nova/share/manila.py:L92–L92` |
| `Access.access_level` | field | — | public | not declared | — | `src/nova/share/manila.py:L93–L93` |
| `Access.state` | field | — | public | not declared | — | `src/nova/share/manila.py:L94–L94` |
| `Access.access_type` | field | — | public | not declared | — | `src/nova/share/manila.py:L95–L95` |
| `Access.access_to` | field | — | public | not declared | — | `src/nova/share/manila.py:L96–L96` |
| `Access.access_key` | field | — | public | not declared | — | `src/nova/share/manila.py:L97–L97` |
| `Access.from_manila_access` | method | (cls, manila_access) | public | `cls( id=manila_access.id, access_level=manila_access.access_level, state=manila_access.state, access_type=manila_access.access_type, access_to=manila_access.access_to, access_key= getattr(manila_acces` (src/nova/share/manila.py:L101) | 1/9 | `src/nova/share/manila.py:L100–L108` |
| `Access.from_dict` | method | (cls, manila_access) | public | `cls( id=manila_access['id'], access_level=manila_access['access_level'], state=manila_access['state'], access_type=manila_access['access_type'], access_to=manila_access['access_to'], access_key=manila` (src/nova/share/manila.py:L112) | 1/9 | `src/nova/share/manila.py:L111–L119` |
| `translate_sdk_exception` | function | (method) | exported | `wrapper` (src/nova/share/manila.py:L136) | 1/4 | `src/nova/share/manila.py:L122–L136` |
| `translate_sdk_exception.wrapper` | function | (self, *args, **kwargs) | public | `res` (src/nova/share/manila.py:L135) | — | `src/nova/share/manila.py:L125–L135` |
| `translate_share_exception` | function | (method) | exported | `translate_sdk_exception(wrapper)` (src/nova/share/manila.py:L153) | 1/3 | `src/nova/share/manila.py:L139–L153` |
| `translate_share_exception.wrapper` | function | (self, *args, **kwargs) | public | `res` (src/nova/share/manila.py:L152) | — | `src/nova/share/manila.py:L143–L152` |
| `translate_allow_exception` | function | (method) | exported | `translate_sdk_exception(wrapper)` (src/nova/share/manila.py:L170) | 1/3 | `src/nova/share/manila.py:L156–L170` |
| `translate_allow_exception.wrapper` | function | (self, *args, **kwargs) | public | `res` (src/nova/share/manila.py:L169) | — | `src/nova/share/manila.py:L160–L169` |
| `translate_deny_exception` | function | (method) | exported | `translate_sdk_exception(wrapper)` (src/nova/share/manila.py:L187) | 1/3 | `src/nova/share/manila.py:L173–L187` |
| `translate_deny_exception.wrapper` | function | (self, *args, **kwargs) | public | `res` (src/nova/share/manila.py:L186) | — | `src/nova/share/manila.py:L177–L186` |
| `API` | class | — | exported | not declared | — | `src/nova/share/manila.py:L190–L362` |
| `API.get` | method | (self, context, share_id) | public | `Share.from_manila_share(share, export_location)` (src/nova/share/manila.py:L221) | 1/8 | `src/nova/share/manila.py:L194–L221` |
| `API.get.filter_export_locations` | function | (export_locations) | public | `export_location.path` (src/nova/share/manila.py:L208); `paths[0]` (src/nova/share/manila.py:L211); `None` (src/nova/share/manila.py:L213) | — | `src/nova/share/manila.py:L202–L213` |
| `API.get_access` | method | (self, context, share_id, access_type, access_to) | public | `Access.from_manila_access(access)` (src/nova/share/manila.py:L251); `None` (src/nova/share/manila.py:L252) | 4/18 | `src/nova/share/manila.py:L224–L252` |
| `API.get_access_rules` | method | (self, context, share_id) | public | `[Access.from_manila_access(access) for access in access_list]` (src/nova/share/manila.py:L259) | 2/5 | `src/nova/share/manila.py:L255–L259` |
| `API.allow` | method | (self, context, share_id, access_type, access_to, access_level, lock_reason="Lock by nova") | public | `access` (src/nova/share/manila.py:L308) | 1/24 | `src/nova/share/manila.py:L262–L308` |
| `API.allow.check_manila_access_response` | function | (access) | public | not declared | — | `src/nova/share/manila.py:L284–L291` |
| `API.deny` | method | (self, context, share_id, access_type, access_to) | public | not declared | 3/25 | `src/nova/share/manila.py:L311–L346` |
| `API.has_access` | method | (self, context, share_id, access_type, access_to) | public | `access is not None and access.state == 'active'` (src/nova/share/manila.py:L362) | 2/8 | `src/nova/share/manila.py:L348–L362` |
| `Share.from_manila_share` | classmethod | — | public | not declared | — | `src/nova/share/manila.py:L69–L87` |
| `Access.from_manila_access` | classmethod | — | public | not declared | — | `src/nova/share/manila.py:L99–L108` |
| `Access.from_dict` | classmethod | — | public | not declared | — | `src/nova/share/manila.py:L110–L119` |

## Dependencies

- `dataclasses`: imports `dataclass` (src/nova/share/manila.py:L17)
- `import functools` (src/nova/share/manila.py:L18)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/share/manila.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/share/manila.py:L21)
- `import nova.conf` (src/nova/share/manila.py:L23)
- `nova`: imports `exception` (src/nova/share/manila.py:L24)
- `nova`: imports `utils` (src/nova/share/manila.py:L25)

## Side Effects

- **network**: :return: An openstack.proxy.Proxy object for the specified service_type. (src/nova/share/manila.py:L35)
- **network**: return utils.get_sdk_adapter( (src/nova/share/manila.py:L41)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/share/manila.py:L27)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/share/manila.py:L28)
- **global-mutation**: MIN_SHARE_FILE_SYSTEM_MICROVERSION = "2.82" (src/nova/share/manila.py:L29)

