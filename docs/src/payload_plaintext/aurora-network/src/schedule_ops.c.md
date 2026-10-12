# src/payload_plaintext/aurora-network/src/schedule_ops.c

## Overview

`schedule_ops.c` implements a fixed-capacity in-memory store for `schedule` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SCHEDULE_OPS_MAX` | constant | `#define SCHEDULE_OPS_MAX 128` | file | — | — | `schedule_ops.c:L15` |
| `schedule_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `schedule_ops.c:L17–L21` |
| `schedule_ops_table` | variable | `static struct schedule_ops_entry schedule_ops_table[SCHEDULE_OPS_MAX]` | file | — | — | `schedule_ops.c:L23` |
| `schedule_ops_count` | variable | `static int schedule_ops_count` | file | — | — | `schedule_ops.c:L24` |
| `schedule_add` | function | `int schedule_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `schedule_ops.c:L26–L38` |
| `schedule_find` | function | `int schedule_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `schedule_ops.c:L40–L49` |
| `schedule_total` | function | `unsigned int schedule_total(void)` | exported | `total` (L60) | 11/3 | `schedule_ops.c:L51–L61` |
| `schedule_clear` | function | `void schedule_clear(void)` | exported | — | 5/1 | `schedule_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`schedule_ops.c:L11`)
- `<stdlib.h>` — standard library (`schedule_ops.c:L12`)
- `<string.h>` — string operations (`schedule_ops.c:L13`)
