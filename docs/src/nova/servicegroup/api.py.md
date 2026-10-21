# src/nova/servicegroup/api.py

## Overview

This file implements the `api` module, defining 1 class, 3 constants, 4 methods, 1 variable, 3 imports, 3 side effects.

Lines: total 83, code 47, comment 19, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/servicegroup/api.py:L24–L24` |
| `_driver_name_class_mapping` | variable | — | unexported | not declared | — | `src/nova/servicegroup/api.py:L26–L29` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/servicegroup/api.py:L31–L31` |
| `INITIAL_REPORTING_DELAY` | constant | — | exported | not declared | — | `src/nova/servicegroup/api.py:L34–L34` |
| `API` | class | — | exported | not declared | — | `src/nova/servicegroup/api.py:L37–L83` |
| `API.__init__` | method | (self, *args, **kwargs) | public | not declared | 2/16 | `src/nova/servicegroup/api.py:L39–L61` |
| `API.join` | method | (self, member, group, service=None) | public | `self._driver.join(member, group, service)` (src/nova/servicegroup/api.py:L70) | 1/2 | `src/nova/servicegroup/api.py:L63–L70` |
| `API.service_is_up` | method | (self, member) | public | `False` (src/nova/servicegroup/api.py:L77); `self._driver.is_up(member)` (src/nova/servicegroup/api.py:L79) | 2/4 | `src/nova/servicegroup/api.py:L72–L79` |
| `API.get_updated_time` | method | (self, member) | public | `self._driver.updated_time(member)` (src/nova/servicegroup/api.py:L83) | 1/2 | `src/nova/servicegroup/api.py:L81–L83` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/servicegroup/api.py:L19)
- `oslo_utils`: imports `importutils` (src/nova/servicegroup/api.py:L20)
- `import nova.conf` (src/nova/servicegroup/api.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/servicegroup/api.py:L24)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/servicegroup/api.py:L31)
- **global-mutation**: INITIAL_REPORTING_DELAY = 5 (src/nova/servicegroup/api.py:L34)

