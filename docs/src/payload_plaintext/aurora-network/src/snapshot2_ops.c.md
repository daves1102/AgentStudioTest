# src/payload_plaintext/aurora-network/src/snapshot2_ops.c

## Overview

`snapshot2_ops.c` implements a fixed-capacity in-memory store for `snapshot2` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SNAPSHOT2_OPS_MAX` | constant | `#define SNAPSHOT2_OPS_MAX 128` | file | — | — | `snapshot2_ops.c:L15` |
| `snapshot2_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `snapshot2_ops.c:L17–L21` |
| `snapshot2_ops_table` | variable | `static struct snapshot2_ops_entry snapshot2_ops_table[SNAPSHOT2_OPS_MAX]` | file | — | — | `snapshot2_ops.c:L23` |
| `snapshot2_ops_count` | variable | `static int snapshot2_ops_count` | file | — | — | `snapshot2_ops.c:L24` |
| `snapshot2_add` | function | `int snapshot2_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `snapshot2_ops.c:L26–L38` |
| `snapshot2_find` | function | `int snapshot2_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `snapshot2_ops.c:L40–L49` |
| `snapshot2_total` | function | `unsigned int snapshot2_total(void)` | exported | `total` (L60) | 11/3 | `snapshot2_ops.c:L51–L61` |
| `snapshot2_clear` | function | `void snapshot2_clear(void)` | exported | — | 5/1 | `snapshot2_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`snapshot2_ops.c:L11`)
- `<stdlib.h>` — standard library (`snapshot2_ops.c:L12`)
- `<string.h>` — string operations (`snapshot2_ops.c:L13`)
