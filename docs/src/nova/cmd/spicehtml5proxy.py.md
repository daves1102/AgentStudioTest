# src/nova/cmd/spicehtml5proxy.py

## Overview

This file implements the `spicehtml5proxy` module, defining 1 constant, 1 function, 6 imports, 1 side effect, 1 security surface entry.

Lines: total 41, code 17, comment 16, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/spicehtml5proxy.py:L32–L32` |
| `main` | function | — | exported | not declared | 1/5 | `src/nova/cmd/spicehtml5proxy.py:L36–L41` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/spicehtml5proxy.py:L21)
- `import sys` (src/nova/cmd/spicehtml5proxy.py:L24)
- `nova.cmd`: imports `baseproxy` (src/nova/cmd/spicehtml5proxy.py:L26)
- `import nova.conf` (src/nova/cmd/spicehtml5proxy.py:L27)
- `nova.conf`: imports `spice` (src/nova/cmd/spicehtml5proxy.py:L28)
- `nova`: imports `config` (src/nova/cmd/spicehtml5proxy.py:L29)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/spicehtml5proxy.py:L32)

## Security Surface

- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/spicehtml5proxy.py:L37)

