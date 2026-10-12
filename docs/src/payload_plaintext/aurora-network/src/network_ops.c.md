# src/payload_plaintext/aurora-network/src/network_ops.c

## Overview

`network_ops.c` implements a fixed-capacity in-memory store for `network` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `NETWORK_OPS_MAX` | constant | `#define NETWORK_OPS_MAX 128` | file | — | — | `network_ops.c:L15` |
| `network_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `network_ops.c:L17–L21` |
| `network_ops_table` | variable | `static struct network_ops_entry network_ops_table[NETWORK_OPS_MAX]` | file | — | — | `network_ops.c:L23` |
| `network_ops_count` | variable | `static int network_ops_count` | file | — | — | `network_ops.c:L24` |
| `network_add` | function | `int network_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `network_ops.c:L26–L38` |
| `network_find` | function | `int network_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `network_ops.c:L40–L49` |
| `network_total` | function | `unsigned int network_total(void)` | exported | `total` (L60) | 11/3 | `network_ops.c:L51–L61` |
| `network_clear` | function | `void network_clear(void)` | exported | — | 5/1 | `network_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`network_ops.c:L11`)
- `<stdlib.h>` — standard library (`network_ops.c:L12`)
- `<string.h>` — string operations (`network_ops.c:L13`)
