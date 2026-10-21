# src/nova/servicegroup/drivers/mc.py

## Overview

This file implements the `mc` module, defining 1 class, 2 constants, 5 methods, 8 imports, 2 side effects, 1 security surface entry.

Lines: total 117, code 70, comment 27, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/servicegroup/drivers/mc.py:L32–L32` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/servicegroup/drivers/mc.py:L35–L35` |
| `MemcachedDriver` | class | — | exported | not declared | — | `src/nova/servicegroup/drivers/mc.py:L38–L117` |
| `MemcachedDriver.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/servicegroup/drivers/mc.py:L40–L42` |
| `MemcachedDriver.join` | method | (self, member_id, group_id, service=None) | public | not declared | 3/15 | `src/nova/servicegroup/drivers/mc.py:L44–L60` |
| `MemcachedDriver.is_up` | method | (self, service_ref) | public | `is_up` (src/nova/servicegroup/drivers/mc.py:L71) | 2/6 | `src/nova/servicegroup/drivers/mc.py:L62–L71` |
| `MemcachedDriver.updated_time` | method | (self, service_ref) | public | `updated_time_in_mc` (src/nova/servicegroup/drivers/mc.py:L88); `updated_time_in_db` (src/nova/servicegroup/drivers/mc.py:L90) | 4/11 | `src/nova/servicegroup/drivers/mc.py:L73–L90` |
| `MemcachedDriver._report_state` | method | (self, service) | private | not declared | 4/18 | `src/nova/servicegroup/drivers/mc.py:L92–L117` |

## Dependencies

- `import datetime` (src/nova/servicegroup/drivers/mc.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/servicegroup/drivers/mc.py:L22)
- `oslo_utils`: imports `timeutils` (src/nova/servicegroup/drivers/mc.py:L23)
- `nova`: imports `cache_utils` (src/nova/servicegroup/drivers/mc.py:L25)
- `import nova.conf` (src/nova/servicegroup/drivers/mc.py:L26)
- `nova.i18n`: imports `_` (src/nova/servicegroup/drivers/mc.py:L27)
- `nova.servicegroup`: imports `api` (src/nova/servicegroup/drivers/mc.py:L28)
- `nova.servicegroup.drivers`: imports `base` (src/nova/servicegroup/drivers/mc.py:L29)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/servicegroup/drivers/mc.py:L32)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/servicegroup/drivers/mc.py:L35)

## Security Surface

- **sink** (`db-write`): """Update the state of this service in the datastore.""" (src/nova/servicegroup/drivers/mc.py:L93)

