# src/payload_plaintext/aurora-network/src/queue_ops.c

## Overview

`queue_ops.c` implements a fixed-capacity in-memory store for `queue` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `QUEUE_OPS_MAX` | constant | `#define QUEUE_OPS_MAX 128` | file | — | — | `queue_ops.c:L15` |
| `queue_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `queue_ops.c:L17–L21` |
| `queue_ops_table` | variable | `static struct queue_ops_entry queue_ops_table[QUEUE_OPS_MAX]` | file | — | — | `queue_ops.c:L23` |
| `queue_ops_count` | variable | `static int queue_ops_count` | file | — | — | `queue_ops.c:L24` |
| `queue_add` | function | `int queue_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `queue_ops.c:L26–L38` |
| `queue_find` | function | `int queue_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `queue_ops.c:L40–L49` |
| `queue_total` | function | `unsigned int queue_total(void)` | exported | `total` (L60) | 11/3 | `queue_ops.c:L51–L61` |
| `queue_clear` | function | `void queue_clear(void)` | exported | — | 5/1 | `queue_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`queue_ops.c:L11`)
- `<stdlib.h>` — standard library (`queue_ops.c:L12`)
- `<string.h>` — string operations (`queue_ops.c:L13`)
