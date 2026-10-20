# src/nova/cmd/novncproxy.py

## Overview

This file implements the `novncproxy` module, defining 1 constant, 1 function, 7 imports, 1 side effect, 1 security surface entry.

Lines: total 46, code 20, comment 17, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/novncproxy.py:L34–L34` |
| `main` | function | — | exported | not declared | 1/7 | `src/nova/cmd/novncproxy.py:L38–L46` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/novncproxy.py:L21)
- `import sys` (src/nova/cmd/novncproxy.py:L24)
- `nova.cmd`: imports `baseproxy` (src/nova/cmd/novncproxy.py:L27)
- `import nova.conf` (src/nova/cmd/novncproxy.py:L28)
- `nova.conf`: imports `vnc` (src/nova/cmd/novncproxy.py:L29)
- `nova`: imports `config` (src/nova/cmd/novncproxy.py:L30)
- `nova.console.securityproxy`: imports `rfb` (src/nova/cmd/novncproxy.py:L31)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/novncproxy.py:L34)

## Security Surface

- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/novncproxy.py:L41)

