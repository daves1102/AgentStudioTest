# src/nova/cmd/serialproxy.py

## Overview

This file implements the `serialproxy` module, defining 1 constant, 1 function, 6 imports, 1 side effect, 1 security surface entry.

Lines: total 43, code 19, comment 16, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/serialproxy.py:L32–L32` |
| `main` | function | — | exported | not declared | 1/6 | `src/nova/cmd/serialproxy.py:L36–L43` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/serialproxy.py:L21)
- `import sys` (src/nova/cmd/serialproxy.py:L24)
- `nova.cmd`: imports `baseproxy` (src/nova/cmd/serialproxy.py:L26)
- `import nova.conf` (src/nova/cmd/serialproxy.py:L27)
- `nova.conf`: imports `serial_console as serial` (src/nova/cmd/serialproxy.py:L28)
- `nova`: imports `config` (src/nova/cmd/serialproxy.py:L29)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/serialproxy.py:L32)

## Security Surface

- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/serialproxy.py:L39)

