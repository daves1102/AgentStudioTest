# src/payload_plaintext/aurora-network/src/usage_ops.c

## Overview

`usage_ops.c` implements a fixed-capacity in-memory store for `usage` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `USAGE_OPS_MAX` | constant | `#define USAGE_OPS_MAX 128` | file | — | — | `usage_ops.c:L15` |
| `usage_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `usage_ops.c:L17–L21` |
| `usage_ops_table` | variable | `static struct usage_ops_entry usage_ops_table[USAGE_OPS_MAX]` | file | — | — | `usage_ops.c:L23` |
| `usage_ops_count` | variable | `static int usage_ops_count` | file | — | — | `usage_ops.c:L24` |
| `usage_add` | function | `int usage_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `usage_ops.c:L26–L38` |
| `usage_find` | function | `int usage_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `usage_ops.c:L40–L49` |
| `usage_total` | function | `unsigned int usage_total(void)` | exported | `total` (L60) | 11/3 | `usage_ops.c:L51–L61` |
| `usage_clear` | function | `void usage_clear(void)` | exported | — | 5/1 | `usage_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`usage_ops.c:L11`)
- `<stdlib.h>` — standard library (`usage_ops.c:L12`)
- `<string.h>` — string operations (`usage_ops.c:L13`)
