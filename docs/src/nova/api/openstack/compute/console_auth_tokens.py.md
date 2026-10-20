# src/nova/api/openstack/compute/console_auth_tokens.py

## Overview

This file implements the `console_auth_tokens` module, defining 1 class, 1 constant, 2 methods, 10 imports, 2 side effects.

Lines: total 102, code 62, comment 23, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/console_auth_tokens.py:L28–L28` |
| `ConsoleAuthTokensController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/console_auth_tokens.py:L32–L102` |
| `ConsoleAuthTokensController.show` | method | (self, req, id) | public | `self._show(req, id, include_tls_port=include_tls_port)` (src/nova/api/openstack/compute/console_auth_tokens.py:L60) | 3/7 | `src/nova/api/openstack/compute/console_auth_tokens.py:L44–L60` |
| `ConsoleAuthTokensController._show` | method | (self, req, id, include_tls_port=False) | private | `retval` (src/nova/api/openstack/compute/console_auth_tokens.py:L102) | 7/27 | `src/nova/api/openstack/compute/console_auth_tokens.py:L62–L102` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/console_auth_tokens.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/console_auth_tokens.py:L18)
- `nova.api.openstack.compute.schemas`: imports `console_auth_tokens as schema` (src/nova/api/openstack/compute/console_auth_tokens.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/console_auth_tokens.py:L20)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/console_auth_tokens.py:L21)
- `import nova.conf` (src/nova/api/openstack/compute/console_auth_tokens.py:L22)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/console_auth_tokens.py:L23)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/console_auth_tokens.py:L24)
- `nova`: imports `objects` (src/nova/api/openstack/compute/console_auth_tokens.py:L25)
- `nova.policies`: imports `console_auth_tokens as cat_policies` (src/nova/api/openstack/compute/console_auth_tokens.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import console_auth_tokens as schema (src/nova/api/openstack/compute/console_auth_tokens.py:L19)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/console_auth_tokens.py:L28)

