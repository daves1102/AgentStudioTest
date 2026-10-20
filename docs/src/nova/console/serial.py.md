# src/nova/console/serial.py

## Overview

This file implements the `serial` module, defining 4 constants, 4 functions, 5 imports, 4 side effects, 1 security surface entry.

Lines: total 90, code 53, comment 16, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/console/serial.py:L25–L25` |
| `ALLOCATED_PORTS` | constant | — | exported | not declared | — | `src/nova/console/serial.py:L27–L27` |
| `SERIAL_LOCK` | constant | — | exported | not declared | — | `src/nova/console/serial.py:L28–L28` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/console/serial.py:L30–L30` |
| `acquire_port` | function | (host) | exported | `port` (src/nova/console/serial.py:L53) | 4/12 | `src/nova/console/serial.py:L38–L57` |
| `release_port` | function | (host, port) | exported | not declared | 1/2 | `src/nova/console/serial.py:L61–L63` |
| `_get_port_range` | function | — | unexported | `start, stop` (src/nova/console/serial.py:L79) | 2/13 | `src/nova/console/serial.py:L66–L79` |
| `_verify_port` | function | (host, port) | unexported | not declared | 3/9 | `src/nova/console/serial.py:L82–L90` |

## Dependencies

- `import socket` (src/nova/console/serial.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/console/serial.py:L19)
- `import nova.conf` (src/nova/console/serial.py:L21)
- `nova`: imports `exception` (src/nova/console/serial.py:L22)
- `nova`: imports `utils` (src/nova/console/serial.py:L23)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/console/serial.py:L25)
- **global-mutation**: ALLOCATED_PORTS = set()  # in-memory set of already allocated ports (src/nova/console/serial.py:L27)
- **global-mutation**: SERIAL_LOCK = 'serial-lock' (src/nova/console/serial.py:L28)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/console/serial.py:L30)

## Security Surface

- **entry-point** (`network-socket`): s = socket.socket() (src/nova/console/serial.py:L83)

