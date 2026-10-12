# src/payload_plaintext/aurora-network/src/task_ops.c

## Overview

`task_ops.c` implements a fixed-capacity in-memory store for `task` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `TASK_OPS_MAX` | constant | `#define TASK_OPS_MAX 128` | file | — | — | `task_ops.c:L15` |
| `task_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `task_ops.c:L17–L21` |
| `task_ops_table` | variable | `static struct task_ops_entry task_ops_table[TASK_OPS_MAX]` | file | — | — | `task_ops.c:L23` |
| `task_ops_count` | variable | `static int task_ops_count` | file | — | — | `task_ops.c:L24` |
| `task_add` | function | `int task_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `task_ops.c:L26–L38` |
| `task_find` | function | `int task_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `task_ops.c:L40–L49` |
| `task_total` | function | `unsigned int task_total(void)` | exported | `total` (L60) | 11/3 | `task_ops.c:L51–L61` |
| `task_clear` | function | `void task_clear(void)` | exported | — | 5/1 | `task_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`task_ops.c:L11`)
- `<stdlib.h>` — standard library (`task_ops.c:L12`)
- `<string.h>` — string operations (`task_ops.c:L13`)
