# src/payload_plaintext/aurora-network/src/quota_ops.c

## Overview

`quota_ops.c` implements a fixed-capacity in-memory store for `quota` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `QUOTA_OPS_MAX` | constant | `#define QUOTA_OPS_MAX 128` | file | — | — | `quota_ops.c:L15` |
| `quota_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `quota_ops.c:L17–L21` |
| `quota_ops_table` | variable | `static struct quota_ops_entry quota_ops_table[QUOTA_OPS_MAX]` | file | — | — | `quota_ops.c:L23` |
| `quota_ops_count` | variable | `static int quota_ops_count` | file | — | — | `quota_ops.c:L24` |
| `quota_add` | function | `int quota_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `quota_ops.c:L26–L38` |
| `quota_find` | function | `int quota_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `quota_ops.c:L40–L49` |
| `quota_total` | function | `unsigned int quota_total(void)` | exported | `total` (L60) | 11/3 | `quota_ops.c:L51–L61` |
| `quota_clear` | function | `void quota_clear(void)` | exported | — | 5/1 | `quota_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`quota_ops.c:L11`)
- `<stdlib.h>` — standard library (`quota_ops.c:L12`)
- `<string.h>` — string operations (`quota_ops.c:L13`)
