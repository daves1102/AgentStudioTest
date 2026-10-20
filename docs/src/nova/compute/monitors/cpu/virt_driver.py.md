# src/nova/compute/monitors/cpu/virt_driver.py

## Overview

This file implements the `virt_driver` module, defining 1 class, 2 constants, 3 methods, 6 imports, 2 side effects.

Lines: total 101, code 61, comment 23, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/monitors/cpu/virt_driver.py:L28–L28` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/monitors/cpu/virt_driver.py:L29–L29` |
| `Monitor` | class | — | exported | not declared | — | `src/nova/compute/monitors/cpu/virt_driver.py:L32–L101` |
| `Monitor.__init__` | method | (self, resource_tracker) | public | not declared | 1/6 | `src/nova/compute/monitors/cpu/virt_driver.py:L35–L40` |
| `Monitor.populate_metrics` | method | (self, metric_list) | public | not declared | 2/9 | `src/nova/compute/monitors/cpu/virt_driver.py:L42–L50` |
| `Monitor._update_data` | method | (self) | private | not declared | 2/33 | `src/nova/compute/monitors/cpu/virt_driver.py:L52–L101` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/compute/monitors/cpu/virt_driver.py:L20)
- `oslo_utils`: imports `timeutils` (src/nova/compute/monitors/cpu/virt_driver.py:L21)
- `nova.compute.monitors`: imports `base` (src/nova/compute/monitors/cpu/virt_driver.py:L23)
- `import nova.conf` (src/nova/compute/monitors/cpu/virt_driver.py:L24)
- `nova`: imports `exception` (src/nova/compute/monitors/cpu/virt_driver.py:L25)
- `nova`: imports `objects` (src/nova/compute/monitors/cpu/virt_driver.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/monitors/cpu/virt_driver.py:L28)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/monitors/cpu/virt_driver.py:L29)

