# src/payload_plaintext/aurora-network/src/trunk_ops.c

## Overview

`trunk_ops.c` implements a fixed-capacity in-memory store for `trunk` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `TRUNK_OPS_MAX` | constant | `#define TRUNK_OPS_MAX 128` | file | — | — | `trunk_ops.c:L15` |
| `trunk_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `trunk_ops.c:L17–L21` |
| `trunk_ops_table` | variable | `static struct trunk_ops_entry trunk_ops_table[TRUNK_OPS_MAX]` | file | — | — | `trunk_ops.c:L23` |
| `trunk_ops_count` | variable | `static int trunk_ops_count` | file | — | — | `trunk_ops.c:L24` |
| `trunk_add` | function | `int trunk_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `trunk_ops.c:L26–L38` |
| `trunk_find` | function | `int trunk_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `trunk_ops.c:L40–L49` |
| `trunk_total` | function | `unsigned int trunk_total(void)` | exported | `total` (L60) | 11/3 | `trunk_ops.c:L51–L61` |
| `trunk_clear` | function | `void trunk_clear(void)` | exported | — | 5/1 | `trunk_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`trunk_ops.c:L11`)
- `<stdlib.h>` — standard library (`trunk_ops.c:L12`)
- `<string.h>` — string operations (`trunk_ops.c:L13`)
