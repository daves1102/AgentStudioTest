# src/payload_plaintext/aurora-network/src/object_ops.c

## Overview

`object_ops.c` implements a fixed-capacity in-memory store for `object` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `OBJECT_OPS_MAX` | constant | `#define OBJECT_OPS_MAX 128` | file | — | — | `object_ops.c:L15` |
| `object_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `object_ops.c:L17–L21` |
| `object_ops_table` | variable | `static struct object_ops_entry object_ops_table[OBJECT_OPS_MAX]` | file | — | — | `object_ops.c:L23` |
| `object_ops_count` | variable | `static int object_ops_count` | file | — | — | `object_ops.c:L24` |
| `object_add` | function | `int object_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `object_ops.c:L26–L38` |
| `object_find` | function | `int object_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `object_ops.c:L40–L49` |
| `object_total` | function | `unsigned int object_total(void)` | exported | `total` (L60) | 11/3 | `object_ops.c:L51–L61` |
| `object_clear` | function | `void object_clear(void)` | exported | — | 5/1 | `object_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`object_ops.c:L11`)
- `<stdlib.h>` — standard library (`object_ops.c:L12`)
- `<string.h>` — string operations (`object_ops.c:L13`)
