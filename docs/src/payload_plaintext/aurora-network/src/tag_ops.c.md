# src/payload_plaintext/aurora-network/src/tag_ops.c

## Overview

`tag_ops.c` implements a fixed-capacity in-memory store for `tag` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `TAG_OPS_MAX` | constant | `#define TAG_OPS_MAX 128` | file | — | — | `tag_ops.c:L15` |
| `tag_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `tag_ops.c:L17–L21` |
| `tag_ops_table` | variable | `static struct tag_ops_entry tag_ops_table[TAG_OPS_MAX]` | file | — | — | `tag_ops.c:L23` |
| `tag_ops_count` | variable | `static int tag_ops_count` | file | — | — | `tag_ops.c:L24` |
| `tag_add` | function | `int tag_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `tag_ops.c:L26–L38` |
| `tag_find` | function | `int tag_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `tag_ops.c:L40–L49` |
| `tag_total` | function | `unsigned int tag_total(void)` | exported | `total` (L60) | 11/3 | `tag_ops.c:L51–L61` |
| `tag_clear` | function | `void tag_clear(void)` | exported | — | 5/1 | `tag_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`tag_ops.c:L11`)
- `<stdlib.h>` — standard library (`tag_ops.c:L12`)
- `<string.h>` — string operations (`tag_ops.c:L13`)
