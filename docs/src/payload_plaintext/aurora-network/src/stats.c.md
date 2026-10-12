# src/payload_plaintext/aurora-network/src/stats.c

## Overview

`stats.c` maintains global packet counters for the aurora-network component. A single static `counters` struct holds receive (`rx`), transmit (`tx`), and drop (`drop`) counters as `unsigned long` values. Three single-line increment functions (`stats_rx`, `stats_tx`, `stats_drop`) add a caller-supplied count to the corresponding field. `stats_render` formats all three counters into a caller-supplied buffer via `snprintf`. `stats_reset` zeroes the struct with `memset`. The file has no external dependencies beyond the C standard library and presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `counters` | struct | `{ unsigned long rx; unsigned long tx; unsigned long drop; }` | file | — | — | `stats.c:L14–L18` |
| `global` | variable | `static struct counters global` | file | — | — | `stats.c:L20` |
| `stats_rx` | function | `void stats_rx(unsigned long n)` | exported | — | 1/1 | `stats.c:L22` |
| `stats_tx` | function | `void stats_tx(unsigned long n)` | exported | — | 1/1 | `stats.c:L23` |
| `stats_drop` | function | `void stats_drop(unsigned long n)` | exported | — | 1/1 | `stats.c:L24` |
| `stats_render` | function | `void stats_render(char *out, size_t len)` | exported | — | 5/1 | `stats.c:L26–L30` |
| `stats_reset` | function | `void stats_reset(void)` | exported | — | 4/1 | `stats.c:L32–L35` |

## Dependencies

- `<stdio.h>` — `snprintf` in `stats_render` (`stats.c:L11`)
- `<string.h>` — `memset` in `stats_reset` (`stats.c:L12`)
