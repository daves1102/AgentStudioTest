# src/payload_plaintext/aurora-network/src/subnet_ops.c

## Overview

`subnet_ops.c` implements a fixed-capacity in-memory store for `subnet` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SUBNET_OPS_MAX` | constant | `#define SUBNET_OPS_MAX 128` | file | — | — | `subnet_ops.c:L15` |
| `subnet_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `subnet_ops.c:L17–L21` |
| `subnet_ops_table` | variable | `static struct subnet_ops_entry subnet_ops_table[SUBNET_OPS_MAX]` | file | — | — | `subnet_ops.c:L23` |
| `subnet_ops_count` | variable | `static int subnet_ops_count` | file | — | — | `subnet_ops.c:L24` |
| `subnet_add` | function | `int subnet_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `subnet_ops.c:L26–L38` |
| `subnet_find` | function | `int subnet_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `subnet_ops.c:L40–L49` |
| `subnet_total` | function | `unsigned int subnet_total(void)` | exported | `total` (L60) | 11/3 | `subnet_ops.c:L51–L61` |
| `subnet_clear` | function | `void subnet_clear(void)` | exported | — | 5/1 | `subnet_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`subnet_ops.c:L11`)
- `<stdlib.h>` — standard library (`subnet_ops.c:L12`)
- `<string.h>` — string operations (`subnet_ops.c:L13`)
