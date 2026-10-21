# src/nova/servicegroup/drivers/db.py

## Overview

This file implements the `db` module, defining 1 class, 2 constants, 5 methods, 8 imports, 2 side effects, 1 security surface entry.

Lines: total 124, code 78, comment 31, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/servicegroup/drivers/db.py:L27–L27` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/servicegroup/drivers/db.py:L29–L29` |
| `DbDriver` | class | — | exported | not declared | — | `src/nova/servicegroup/drivers/db.py:L32–L124` |
| `DbDriver.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/servicegroup/drivers/db.py:L34–L35` |
| `DbDriver.join` | method | (self, member, group, service=None) | public | not declared | 3/13 | `src/nova/servicegroup/drivers/db.py:L37–L55` |
| `DbDriver.is_up` | method | (self, service_ref) | public | `is_up` (src/nova/servicegroup/drivers/db.py:L81) | 4/16 | `src/nova/servicegroup/drivers/db.py:L57–L81` |
| `DbDriver.updated_time` | method | (self, service_ref) | public | `service_ref['updated_at']` (src/nova/servicegroup/drivers/db.py:L85) | 1/2 | `src/nova/servicegroup/drivers/db.py:L83–L85` |
| `DbDriver._report_state` | method | (self, service) | private | not declared | 6/24 | `src/nova/servicegroup/drivers/db.py:L87–L124` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/servicegroup/drivers/db.py:L16)
- `import oslo_messaging as messaging` (src/nova/servicegroup/drivers/db.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/servicegroup/drivers/db.py:L18)
- `import nova.conf` (src/nova/servicegroup/drivers/db.py:L20)
- `nova`: imports `exception` (src/nova/servicegroup/drivers/db.py:L21)
- `nova.i18n`: imports `_` (src/nova/servicegroup/drivers/db.py:L22)
- `nova.servicegroup`: imports `api` (src/nova/servicegroup/drivers/db.py:L23)
- `nova.servicegroup.drivers`: imports `base` (src/nova/servicegroup/drivers/db.py:L24)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/servicegroup/drivers/db.py:L27)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/servicegroup/drivers/db.py:L29)

## Security Surface

- **sink** (`db-write`): """Update the state of this service in the datastore.""" (src/nova/servicegroup/drivers/db.py:L88)

