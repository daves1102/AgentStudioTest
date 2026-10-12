# src/payload_plaintext/aurora-network/src/lock_ops.c

## Overview

`lock_ops.c` implements a fixed-capacity in-memory store for `lock` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `LOCK_OPS_MAX` | constant | `#define LOCK_OPS_MAX 128` | file | — | — | `lock_ops.c:L15` |
| `lock_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `lock_ops.c:L17–L21` |
| `lock_ops_table` | variable | `static struct lock_ops_entry lock_ops_table[LOCK_OPS_MAX]` | file | — | — | `lock_ops.c:L23` |
| `lock_ops_count` | variable | `static int lock_ops_count` | file | — | — | `lock_ops.c:L24` |
| `lock_add` | function | `int lock_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `lock_ops.c:L26–L38` |
| `lock_find` | function | `int lock_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `lock_ops.c:L40–L49` |
| `lock_total` | function | `unsigned int lock_total(void)` | exported | `total` (L60) | 11/3 | `lock_ops.c:L51–L61` |
| `lock_clear` | function | `void lock_clear(void)` | exported | — | 5/1 | `lock_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`lock_ops.c:L11`)
- `<stdlib.h>` — standard library (`lock_ops.c:L12`)
- `<string.h>` — string operations (`lock_ops.c:L13`)
