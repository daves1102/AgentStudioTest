# src/payload_plaintext/aurora-network/src/image_ops.c

## Overview

`image_ops.c` implements a fixed-capacity in-memory store for `image` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `IMAGE_OPS_MAX` | constant | `#define IMAGE_OPS_MAX 128` | file | — | — | `image_ops.c:L15` |
| `image_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `image_ops.c:L17–L21` |
| `image_ops_table` | variable | `static struct image_ops_entry image_ops_table[IMAGE_OPS_MAX]` | file | — | — | `image_ops.c:L23` |
| `image_ops_count` | variable | `static int image_ops_count` | file | — | — | `image_ops.c:L24` |
| `image_add` | function | `int image_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `image_ops.c:L26–L38` |
| `image_find` | function | `int image_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `image_ops.c:L40–L49` |
| `image_total` | function | `unsigned int image_total(void)` | exported | `total` (L60) | 11/3 | `image_ops.c:L51–L61` |
| `image_clear` | function | `void image_clear(void)` | exported | — | 5/1 | `image_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`image_ops.c:L11`)
- `<stdlib.h>` — standard library (`image_ops.c:L12`)
- `<string.h>` — string operations (`image_ops.c:L13`)
