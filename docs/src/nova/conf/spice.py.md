# src/nova/conf/spice.py

## Overview

This file implements the `spice` module, defining 2 constants, 3 functions, 1 variable, 1 import, 2 side effects, 2 security surface entries.

Lines: total 245, code 189, comment 14, blank 42

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `spice_opt_group` | variable | — | exported | not declared | — | `src/nova/conf/spice.py:L18–L31` |
| `CLI_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/spice.py:L33–L58` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/spice.py:L60–L231` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/spice.py:L236–L237` |
| `register_cli_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/spice.py:L240–L241` |
| `list_opts` | function | — | exported | `{spice_opt_group: ALL_OPTS}` (src/nova/conf/spice.py:L245) | 1/2 | `src/nova/conf/spice.py:L244–L245` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/spice.py:L16)

## Side Effects

- **global-mutation**: CLI_OPTS = [ (src/nova/conf/spice.py:L33)
- **global-mutation**: ALL_OPTS = [ (src/nova/conf/spice.py:L60)

## Security Surface

- **sink** (`db-write`): * update html5proxy_base_url (src/nova/conf/spice.py:L29)
- **sink** (`db-write`): * update server_proxyclient_address (src/nova/conf/spice.py:L30)

