# src/payload_plaintext/aurora-network/src/route_ops.c

## Overview

`route_ops.c` implements a fixed-capacity in-memory store for `route` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `ROUTE_OPS_MAX` | constant | `#define ROUTE_OPS_MAX 128` | file | — | — | `route_ops.c:L15` |
| `route_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `route_ops.c:L17–L21` |
| `route_ops_table` | variable | `static struct route_ops_entry route_ops_table[ROUTE_OPS_MAX]` | file | — | — | `route_ops.c:L23` |
| `route_ops_count` | variable | `static int route_ops_count` | file | — | — | `route_ops.c:L24` |
| `route_add` | function | `int route_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `route_ops.c:L26–L38` |
| `route_find` | function | `int route_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `route_ops.c:L40–L49` |
| `route_total` | function | `unsigned int route_total(void)` | exported | `total` (L60) | 11/3 | `route_ops.c:L51–L61` |
| `route_clear` | function | `void route_clear(void)` | exported | — | 5/1 | `route_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`route_ops.c:L11`)
- `<stdlib.h>` — standard library (`route_ops.c:L12`)
- `<string.h>` — string operations (`route_ops.c:L13`)
