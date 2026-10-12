# src/payload_plaintext/aurora-network/src/worker_ops.c

## Overview

`worker_ops.c` implements a fixed-capacity in-memory store for `worker` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `WORKER_OPS_MAX` | constant | `#define WORKER_OPS_MAX 128` | file | — | — | `worker_ops.c:L15` |
| `worker_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `worker_ops.c:L17–L21` |
| `worker_ops_table` | variable | `static struct worker_ops_entry worker_ops_table[WORKER_OPS_MAX]` | file | — | — | `worker_ops.c:L23` |
| `worker_ops_count` | variable | `static int worker_ops_count` | file | — | — | `worker_ops.c:L24` |
| `worker_add` | function | `int worker_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `worker_ops.c:L26–L38` |
| `worker_find` | function | `int worker_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `worker_ops.c:L40–L49` |
| `worker_total` | function | `unsigned int worker_total(void)` | exported | `total` (L60) | 11/3 | `worker_ops.c:L51–L61` |
| `worker_clear` | function | `void worker_clear(void)` | exported | — | 5/1 | `worker_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`worker_ops.c:L11`)
- `<stdlib.h>` — standard library (`worker_ops.c:L12`)
- `<string.h>` — string operations (`worker_ops.c:L13`)
