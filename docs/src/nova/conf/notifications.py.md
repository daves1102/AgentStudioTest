# src/nova/conf/notifications.py

## Overview

This file implements the `notifications` module, defining 1 constant, 2 functions, 1 variable, 1 import, 5 side effects, 1 security surface entry.

Lines: total 127, code 97, comment 15, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `notifications_group` | variable | — | exported | not declared | — | `src/nova/conf/notifications.py:L19–L27` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/notifications.py:L29–L118` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/notifications.py:L121–L123` |
| `list_opts` | function | — | exported | `{notifications_group: ALL_OPTS}` (src/nova/conf/notifications.py:L127) | 1/2 | `src/nova/conf/notifications.py:L126–L127` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/notifications.py:L17)

## Side Effects

- **network**: at https://docs.openstack.org/nova/latest/reference/notifications.html (src/nova/conf/notifications.py:L26)
- **network**: https://docs.openstack.org/nova/latest/reference/notifications.html for (src/nova/conf/notifications.py:L47)
- **network**: https://docs.openstack.org/nova/latest/reference/notifications.html (src/nova/conf/notifications.py:L83)
- **network**: https://docs.openstack.org/nova/latest/reference/notifications.html (src/nova/conf/notifications.py:L98)
- **global-mutation**: ALL_OPTS = [ (src/nova/conf/notifications.py:L29)

## Security Surface

- **sink** (`db-write`): If set, send compute.instance.update notifications on (src/nova/conf/notifications.py:L43)

