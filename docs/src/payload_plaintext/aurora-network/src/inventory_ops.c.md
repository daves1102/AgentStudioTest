# src/payload_plaintext/aurora-network/src/inventory_ops.c

## Overview

`inventory_ops.c` implements a fixed-capacity in-memory store for `inventory` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `INVENTORY_OPS_MAX` | constant | `#define INVENTORY_OPS_MAX 128` | file | — | — | `inventory_ops.c:L15` |
| `inventory_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `inventory_ops.c:L17–L21` |
| `inventory_ops_table` | variable | `static struct inventory_ops_entry inventory_ops_table[INVENTORY_OPS_MAX]` | file | — | — | `inventory_ops.c:L23` |
| `inventory_ops_count` | variable | `static int inventory_ops_count` | file | — | — | `inventory_ops.c:L24` |
| `inventory_add` | function | `int inventory_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `inventory_ops.c:L26–L38` |
| `inventory_find` | function | `int inventory_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `inventory_ops.c:L40–L49` |
| `inventory_total` | function | `unsigned int inventory_total(void)` | exported | `total` (L60) | 11/3 | `inventory_ops.c:L51–L61` |
| `inventory_clear` | function | `void inventory_clear(void)` | exported | — | 5/1 | `inventory_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`inventory_ops.c:L11`)
- `<stdlib.h>` — standard library (`inventory_ops.c:L12`)
- `<string.h>` — string operations (`inventory_ops.c:L13`)
