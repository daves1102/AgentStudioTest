# src/nova/api/openstack/identity.py

## Overview

This file implements the `identity` module, defining 1 constant, 1 function, 5 imports, 1 side effect, 1 security surface entry.

Lines: total 81, code 46, comment 25, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/identity.py:L23–L23` |
| `verify_project_id` | function | (context, project_id) | exported | `True` (src/nova/api/openstack/identity.py:L56); `True` (src/nova/api/openstack/identity.py:L60); `True` (src/nova/api/openstack/identity.py:L72); `True` (src/nova/api/openstack/identity.py:L81) | 6/35 | `src/nova/api/openstack/identity.py:L26–L81` |

## Dependencies

- `keystoneauth1`: imports `exceptions as kse` (src/nova/api/openstack/identity.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/identity.py:L16)
- `import webob` (src/nova/api/openstack/identity.py:L17)
- `nova.i18n`: imports `_` (src/nova/api/openstack/identity.py:L19)
- `nova`: imports `utils` (src/nova/api/openstack/identity.py:L20)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/identity.py:L23)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as kse (src/nova/api/openstack/identity.py:L15)

