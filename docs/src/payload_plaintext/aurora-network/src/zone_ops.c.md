# src/payload_plaintext/aurora-network/src/zone_ops.c

## Overview

`zone_ops.c` implements a fixed-capacity in-memory store for `zone` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `ZONE_OPS_MAX` | constant | `#define ZONE_OPS_MAX 128` | file | — | — | `zone_ops.c:L15` |
| `zone_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `zone_ops.c:L17–L21` |
| `zone_ops_table` | variable | `static struct zone_ops_entry zone_ops_table[ZONE_OPS_MAX]` | file | — | — | `zone_ops.c:L23` |
| `zone_ops_count` | variable | `static int zone_ops_count` | file | — | — | `zone_ops.c:L24` |
| `zone_add` | function | `int zone_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `zone_ops.c:L26–L38` |
| `zone_find` | function | `int zone_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `zone_ops.c:L40–L49` |
| `zone_total` | function | `unsigned int zone_total(void)` | exported | `total` (L60) | 11/3 | `zone_ops.c:L51–L61` |
| `zone_clear` | function | `void zone_clear(void)` | exported | — | 5/1 | `zone_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`zone_ops.c:L11`)
- `<stdlib.h>` — standard library (`zone_ops.c:L12`)
- `<string.h>` — string operations (`zone_ops.c:L13`)
