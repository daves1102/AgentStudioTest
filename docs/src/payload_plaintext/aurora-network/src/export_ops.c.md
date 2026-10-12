# src/payload_plaintext/aurora-network/src/export_ops.c

## Overview

`export_ops.c` implements a fixed-capacity in-memory store for `export` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `EXPORT_OPS_MAX` | constant | `#define EXPORT_OPS_MAX 128` | file | — | — | `export_ops.c:L15` |
| `export_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `export_ops.c:L17–L21` |
| `export_ops_table` | variable | `static struct export_ops_entry export_ops_table[EXPORT_OPS_MAX]` | file | — | — | `export_ops.c:L23` |
| `export_ops_count` | variable | `static int export_ops_count` | file | — | — | `export_ops.c:L24` |
| `export_add` | function | `int export_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `export_ops.c:L26–L38` |
| `export_find` | function | `int export_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `export_ops.c:L40–L49` |
| `export_total` | function | `unsigned int export_total(void)` | exported | `total` (L60) | 11/3 | `export_ops.c:L51–L61` |
| `export_clear` | function | `void export_clear(void)` | exported | — | 5/1 | `export_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`export_ops.c:L11`)
- `<stdlib.h>` — standard library (`export_ops.c:L12`)
- `<string.h>` — string operations (`export_ops.c:L13`)
