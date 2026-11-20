## Overview

Source file `src/aurora/aurora-network/src/stats.c` written in C within the `aurora-network` component . It contains 10 defined symbol(s), 2 dependency/dependencies.


Lines: total 35, code 20, comment 9, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `counters` | type | `counters` | — | — | — | L14–L18 (src/aurora/aurora-network/src/stats.c:L14–L18) |
| `rx` | field | `rx` | — | — | — | L15 (src/aurora/aurora-network/src/stats.c:L15) |
| `tx` | field | `tx` | — | — | — | L16 (src/aurora/aurora-network/src/stats.c:L16) |
| `drop` | field | `drop` | — | — | — | L17 (src/aurora/aurora-network/src/stats.c:L17) |
| `global` | variable | `global` | — | — | — | L20 (src/aurora/aurora-network/src/stats.c:L20) |
| `stats_rx` | function | `stats_rx(n: unsigned long) → void` | — | — | 1/1 | L22 (src/aurora/aurora-network/src/stats.c:L22) |
| `stats_tx` | function | `stats_tx(n: unsigned long) → void` | — | — | 1/1 | L23 (src/aurora/aurora-network/src/stats.c:L23) |
| `stats_drop` | function | `stats_drop(n: unsigned long) → void` | — | — | 1/1 | L24 (src/aurora/aurora-network/src/stats.c:L24) |
| `stats_render` | function | `stats_render(out: char*, len: size_t) → void` | — | — | 1/5 | L26–L30 (src/aurora/aurora-network/src/stats.c:L26–L30) |
| `stats_reset` | function | `stats_reset(: void) → void` | — | — | 1/4 | L32–L35 (src/aurora/aurora-network/src/stats.c:L32–L35) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/stats.c:L11)
- `string.h` (src/aurora/aurora-network/src/stats.c:L12)
