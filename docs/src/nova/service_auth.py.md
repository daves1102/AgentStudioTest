# src/nova/service_auth.py

## Overview

This file implements the `service_auth` module, defining 2 constants, 4 functions, 2 variables, 6 imports, 4 side effects, 7 security surface entries.

Lines: total 104, code 63, comment 16, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/service_auth.py:L26–L26` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/service_auth.py:L27–L27` |
| `_AUTHS` | variable | — | unexported | not declared | — | `src/nova/service_auth.py:L31–L31` |
| `_SESSIONS` | variable | — | unexported | not declared | — | `src/nova/service_auth.py:L32–L32` |
| `reset_globals` | function | — | exported | not declared | 1/4 | `src/nova/service_auth.py:L35–L39` |
| `get_service_auth_plugin` | function | (conf_group) | exported | `auth` (src/nova/service_auth.py:L50) | 2/8 | `src/nova/service_auth.py:L42–L50` |
| `get_service_auth_session` | function | (conf_group, auth=None) | exported | `session` (src/nova/service_auth.py:L67) | 2/10 | `src/nova/service_auth.py:L53–L67` |
| `get_service_user_token_auth_plugin` | function | (context, user_auth=None) | exported | `user_auth` (src/nova/service_auth.py:L100); `service_token.ServiceTokenAuthWrapper( user_auth=user_auth, service_auth=service_auth)` (src/nova/service_auth.py:L102); `user_auth` (src/nova/service_auth.py:L104) | 4/12 | `src/nova/service_auth.py:L70–L104` |

## Dependencies

- `import typing as ty` (src/nova/service_auth.py:L14)
- `import keystoneauth1.plugin` (src/nova/service_auth.py:L17)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/service_auth.py:L19)
- `keystoneauth1`: imports `service_token` (src/nova/service_auth.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/service_auth.py:L21)
- `import nova.conf` (src/nova/service_auth.py:L23)

## Side Effects

- **network**: ) -> 'keystoneauth1.session.Session': (src/nova/service_auth.py:L56)
- **network**: def get_service_user_token_auth_plugin(context, user_auth=None): (src/nova/service_auth.py:L70)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/service_auth.py:L26)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/service_auth.py:L27)

## Security Surface

- **privilege** (`crypto-key`): import keystoneauth1.plugin (src/nova/service_auth.py:L17)
- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/service_auth.py:L19)
- **privilege** (`crypto-key`): from keystoneauth1 import service_token (src/nova/service_auth.py:L20)
- **privilege** (`crypto-key`): ) -> 'keystoneauth1.plugin.BaseAuthPlugin': (src/nova/service_auth.py:L44)
- **privilege** (`crypto-key`): auth: ty.Optional['keystoneauth1.plugin.BaseAuthPlugin'] = None, (src/nova/service_auth.py:L55)
- **privilege** (`crypto-key`): ) -> 'keystoneauth1.session.Session': (src/nova/service_auth.py:L56)
- **privilege** (`crypto-key`): def get_service_user_token_auth_plugin(context, user_auth=None): (src/nova/service_auth.py:L70)

## Notes

- KB `sideEffects` entries at L56, L70 have targets that appear to be code fragments rather than resource paths; documented as recorded.

