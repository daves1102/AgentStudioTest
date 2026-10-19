# src/nova/objects/console_auth_token.py

## Overview

This file implements the `console_auth_token` module, defining 1 class, 2 constants, 1 field, 8 methods, 1 property, 1 variable, 13 imports, 2 side effects.

Lines: total 225, code 149, comment 40, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/console_auth_token.py:L33–L33` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/console_auth_token.py:L35–L37` |
| `ConsoleAuthToken` | class | — | exported | not declared | — | `src/nova/objects/console_auth_token.py:L41–L225` |
| `ConsoleAuthToken.VERSION` | constant | — | public | not declared | — | `src/nova/objects/console_auth_token.py:L49–L49` |
| `ConsoleAuthToken.fields` | field | — | public | not declared | — | `src/nova/objects/console_auth_token.py:L51–L65` |
| `ConsoleAuthToken.access_url` | method | (self) | public | `parsed_base_url._replace( query=urlparse.urlencode(qparams, doseq=True)).geturl()` (src/nova/objects/console_auth_token.py:L89); `'%s?token=%s' % (self.access_url_base, self.token)` (src/nova/objects/console_auth_token.py:L92) | 3/12 | `src/nova/objects/console_auth_token.py:L68–L92` |
| `ConsoleAuthToken.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 5/7 | `src/nova/objects/console_auth_token.py:L94–L102` |
| `ConsoleAuthToken._from_db_object` | method | (context, obj, db_obj) | private | `obj` (src/nova/objects/console_auth_token.py:L114) | 2/6 | `src/nova/objects/console_auth_token.py:L105–L114` |
| `ConsoleAuthToken.authorize` | method | (self, ttl) | public | `token` (src/nova/objects/console_auth_token.py:L158) | 4/24 | `src/nova/objects/console_auth_token.py:L117–L158` |
| `ConsoleAuthToken.validate` | method | (cls, context, token) | public | `obj` (src/nova/objects/console_auth_token.py:L181) | 2/13 | `src/nova/objects/console_auth_token.py:L162–L184` |
| `ConsoleAuthToken.clean_console_auths_for_instance` | method | (cls, context, instance_uuid) | public | not declared | 1/2 | `src/nova/objects/console_auth_token.py:L188–L197` |
| `ConsoleAuthToken.clean_expired_console_auths` | method | (cls, context) | public | not declared | 1/2 | `src/nova/objects/console_auth_token.py:L201–L209` |
| `ConsoleAuthToken.clean_expired_console_auths_for_host` | method | (cls, context, host) | public | not declared | 1/2 | `src/nova/objects/console_auth_token.py:L215–L225` |
| `ConsoleAuthToken.access_url` | property | — | public | not declared | — | `src/nova/objects/console_auth_token.py:L67–L92` |

## Dependencies

- `urllib`: imports `parse as urlparse` (src/nova/objects/console_auth_token.py:L16)
- `oslo_db.exception`: imports `DBDuplicateEntry` (src/nova/objects/console_auth_token.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/objects/console_auth_token.py:L19)
- `oslo_utils`: imports `strutils` (src/nova/objects/console_auth_token.py:L20)
- `oslo_utils`: imports `timeutils` (src/nova/objects/console_auth_token.py:L21)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/console_auth_token.py:L22)
- `oslo_utils`: imports `versionutils` (src/nova/objects/console_auth_token.py:L23)
- `nova.db.main`: imports `api as db` (src/nova/objects/console_auth_token.py:L25)
- `nova`: imports `exception` (src/nova/objects/console_auth_token.py:L26)
- `nova.i18n`: imports `_` (src/nova/objects/console_auth_token.py:L27)
- `nova.objects`: imports `base` (src/nova/objects/console_auth_token.py:L28)
- `nova.objects`: imports `fields` (src/nova/objects/console_auth_token.py:L29)
- `nova`: imports `utils` (src/nova/objects/console_auth_token.py:L30)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/console_auth_token.py:L33)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/console_auth_token.py:L49)

