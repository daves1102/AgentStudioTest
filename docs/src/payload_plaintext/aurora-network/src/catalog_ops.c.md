# src/payload_plaintext/aurora-network/src/catalog_ops.c

## Overview

`catalog_ops.c` implements a fixed-capacity in-memory store for `catalog` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `CATALOG_OPS_MAX` | constant | `#define CATALOG_OPS_MAX 128` | file | — | — | `catalog_ops.c:L15` |
| `catalog_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `catalog_ops.c:L17–L21` |
| `catalog_ops_table` | variable | `static struct catalog_ops_entry catalog_ops_table[CATALOG_OPS_MAX]` | file | — | — | `catalog_ops.c:L23` |
| `catalog_ops_count` | variable | `static int catalog_ops_count` | file | — | — | `catalog_ops.c:L24` |
| `catalog_add` | function | `int catalog_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `catalog_ops.c:L26–L38` |
| `catalog_find` | function | `int catalog_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `catalog_ops.c:L40–L49` |
| `catalog_total` | function | `unsigned int catalog_total(void)` | exported | `total` (L60) | 11/3 | `catalog_ops.c:L51–L61` |
| `catalog_clear` | function | `void catalog_clear(void)` | exported | — | 5/1 | `catalog_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`catalog_ops.c:L11`)
- `<stdlib.h>` — standard library (`catalog_ops.c:L12`)
- `<string.h>` — string operations (`catalog_ops.c:L13`)
