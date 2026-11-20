## Overview

Source file `src/aurora/aurora-network/src/tunnel.c` written in C within the `aurora-network` component . It contains 3 defined symbol(s), 3 dependency/dependencies.


Lines: total 38, code 24, comment 10, blank 4

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `tunnel_up` | function | `tunnel_up(name: char*, remote: char*) → int` | — | `system(cmd)` (L20) | 1/6 | L16–L21 (src/aurora/aurora-network/src/tunnel.c:L16–L21) |
| `tunnel_down` | function | `tunnel_down(name: char*) → int` | — | `system(cmd)` (L27) | 1/6 | L23–L28 (src/aurora/aurora-network/src/tunnel.c:L23–L28) |
| `tunnel_mtu` | function | `tunnel_mtu(name: char*, mtu: int) → int` | — | `-1` (L34), `system(cmd)` (L37) | 3/9 | L30–L38 (src/aurora/aurora-network/src/tunnel.c:L30–L38) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/tunnel.c:L11)
- `stdlib.h` (src/aurora/aurora-network/src/tunnel.c:L12)
- `string.h` (src/aurora/aurora-network/src/tunnel.c:L13)

## Side Effects

-  (src/aurora/aurora-network/src/tunnel.c:L20)
-  (src/aurora/aurora-network/src/tunnel.c:L27)
-  (src/aurora/aurora-network/src/tunnel.c:L37)

## Security Surface

- **sink (memory-unsafe)**: unbounded copy or format (src/aurora/aurora-network/src/tunnel.c:L19)
- **sink (command-exec)**: process execution (src/aurora/aurora-network/src/tunnel.c:L20)
- **sink (command-exec)**: process execution (src/aurora/aurora-network/src/tunnel.c:L27)
- **sink (command-exec)**: process execution (src/aurora/aurora-network/src/tunnel.c:L37)
