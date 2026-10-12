# src/payload_plaintext/aurora-network/src/meter_ops.c

## Overview

`meter_ops.c` implements a fixed-capacity in-memory store for `meter` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `METER_OPS_MAX` | constant | `#define METER_OPS_MAX 128` | file | — | — | `meter_ops.c:L15` |
| `meter_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `meter_ops.c:L17–L21` |
| `meter_ops_table` | variable | `static struct meter_ops_entry meter_ops_table[METER_OPS_MAX]` | file | — | — | `meter_ops.c:L23` |
| `meter_ops_count` | variable | `static int meter_ops_count` | file | — | — | `meter_ops.c:L24` |
| `meter_add` | function | `int meter_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `meter_ops.c:L26–L38` |
| `meter_find` | function | `int meter_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `meter_ops.c:L40–L49` |
| `meter_total` | function | `unsigned int meter_total(void)` | exported | `total` (L60) | 11/3 | `meter_ops.c:L51–L61` |
| `meter_clear` | function | `void meter_clear(void)` | exported | — | 5/1 | `meter_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`meter_ops.c:L11`)
- `<stdlib.h>` — standard library (`meter_ops.c:L12`)
- `<string.h>` — string operations (`meter_ops.c:L13`)
