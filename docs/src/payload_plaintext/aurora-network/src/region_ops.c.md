# src/payload_plaintext/aurora-network/src/region_ops.c

## Overview

`region_ops.c` implements a fixed-capacity in-memory store for `region` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `REGION_OPS_MAX` | constant | `#define REGION_OPS_MAX 128` | file | — | — | `region_ops.c:L15` |
| `region_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `region_ops.c:L17–L21` |
| `region_ops_table` | variable | `static struct region_ops_entry region_ops_table[REGION_OPS_MAX]` | file | — | — | `region_ops.c:L23` |
| `region_ops_count` | variable | `static int region_ops_count` | file | — | — | `region_ops.c:L24` |
| `region_add` | function | `int region_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `region_ops.c:L26–L38` |
| `region_find` | function | `int region_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `region_ops.c:L40–L49` |
| `region_total` | function | `unsigned int region_total(void)` | exported | `total` (L60) | 11/3 | `region_ops.c:L51–L61` |
| `region_clear` | function | `void region_clear(void)` | exported | — | 5/1 | `region_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`region_ops.c:L11`)
- `<stdlib.h>` — standard library (`region_ops.c:L12`)
- `<string.h>` — string operations (`region_ops.c:L13`)
