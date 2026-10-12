# src/payload_plaintext/aurora-network/src/label_ops.c

## Overview

`label_ops.c` implements a fixed-capacity in-memory store for `label` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `LABEL_OPS_MAX` | constant | `#define LABEL_OPS_MAX 128` | file | — | — | `label_ops.c:L15` |
| `label_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `label_ops.c:L17–L21` |
| `label_ops_table` | variable | `static struct label_ops_entry label_ops_table[LABEL_OPS_MAX]` | file | — | — | `label_ops.c:L23` |
| `label_ops_count` | variable | `static int label_ops_count` | file | — | — | `label_ops.c:L24` |
| `label_add` | function | `int label_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `label_ops.c:L26–L38` |
| `label_find` | function | `int label_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `label_ops.c:L40–L49` |
| `label_total` | function | `unsigned int label_total(void)` | exported | `total` (L60) | 11/3 | `label_ops.c:L51–L61` |
| `label_clear` | function | `void label_clear(void)` | exported | — | 5/1 | `label_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`label_ops.c:L11`)
- `<stdlib.h>` — standard library (`label_ops.c:L12`)
- `<string.h>` — string operations (`label_ops.c:L13`)
