# src/nova/api/openstack/compute/schemas/console_auth_tokens.py

## Overview

This file implements the `console_auth_tokens` module, defining 4 variables, 1 import, 1 security surface entry.

Lines: total 50, code 34, comment 11, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/console_auth_tokens.py:L15–L19` |
| `show_query_v299` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/console_auth_tokens.py:L21–L21` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/console_auth_tokens.py:L24–L45` |
| `show_response_v299` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/console_auth_tokens.py:L47–L47` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/console_auth_tokens.py:L13)

## Security Surface

- **sink** (`db-write`): show_response_v299['properties']['console']['properties'].update({ (src/nova/api/openstack/compute/schemas/console_auth_tokens.py:L48)

