# src/payload_plaintext/aurora-network/src/share_ops.c

## Overview

`share_ops.c` implements a fixed-capacity in-memory store for `share` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SHARE_OPS_MAX` | constant | `#define SHARE_OPS_MAX 128` | file | — | — | `share_ops.c:L15` |
| `share_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `share_ops.c:L17–L21` |
| `share_ops_table` | variable | `static struct share_ops_entry share_ops_table[SHARE_OPS_MAX]` | file | — | — | `share_ops.c:L23` |
| `share_ops_count` | variable | `static int share_ops_count` | file | — | — | `share_ops.c:L24` |
| `share_add` | function | `int share_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `share_ops.c:L26–L38` |
| `share_find` | function | `int share_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `share_ops.c:L40–L49` |
| `share_total` | function | `unsigned int share_total(void)` | exported | `total` (L60) | 11/3 | `share_ops.c:L51–L61` |
| `share_clear` | function | `void share_clear(void)` | exported | — | 5/1 | `share_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`share_ops.c:L11`)
- `<stdlib.h>` — standard library (`share_ops.c:L12`)
- `<string.h>` — string operations (`share_ops.c:L13`)
