# src/nova/compute/monitors/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 1 class, 3 constants, 2 methods, 3 imports, 3 side effects.

Lines: total 93, code 52, comment 30, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/monitors/__init__.py:L25–L25` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/monitors/__init__.py:L26–L26` |
| `MonitorHandler` | class | — | exported | not declared | — | `src/nova/compute/monitors/__init__.py:L29–L93` |
| `MonitorHandler.NAMESPACES` | constant | — | public | not declared | — | `src/nova/compute/monitors/__init__.py:L31–L33` |
| `MonitorHandler.__init__` | method | (self, resource_tracker) | public | not declared | 4/11 | `src/nova/compute/monitors/__init__.py:L35–L48` |
| `MonitorHandler.check_enabled_monitor` | method | (self, ext) | public | `False` (src/nova/compute/monitors/__init__.py:L68); `True` (src/nova/compute/monitors/__init__.py:L86); `False` (src/nova/compute/monitors/__init__.py:L93) | 8/28 | `src/nova/compute/monitors/__init__.py:L50–L93` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/compute/monitors/__init__.py:L20)
- `stevedore`: imports `enabled` (src/nova/compute/monitors/__init__.py:L21)
- `import nova.conf` (src/nova/compute/monitors/__init__.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/monitors/__init__.py:L25)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/monitors/__init__.py:L26)
- **global-mutation**: NAMESPACES = [ (src/nova/compute/monitors/__init__.py:L31)

