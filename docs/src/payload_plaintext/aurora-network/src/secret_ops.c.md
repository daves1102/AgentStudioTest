# src/payload_plaintext/aurora-network/src/secret_ops.c

## Overview

`secret_ops.c` implements a fixed-capacity in-memory store for `secret` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SECRET_OPS_MAX` | constant | `#define SECRET_OPS_MAX 128` | file | — | — | `secret_ops.c:L15` |
| `secret_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `secret_ops.c:L17–L21` |
| `secret_ops_table` | variable | `static struct secret_ops_entry secret_ops_table[SECRET_OPS_MAX]` | file | — | — | `secret_ops.c:L23` |
| `secret_ops_count` | variable | `static int secret_ops_count` | file | — | — | `secret_ops.c:L24` |
| `secret_add` | function | `int secret_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `secret_ops.c:L26–L38` |
| `secret_find` | function | `int secret_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `secret_ops.c:L40–L49` |
| `secret_total` | function | `unsigned int secret_total(void)` | exported | `total` (L60) | 11/3 | `secret_ops.c:L51–L61` |
| `secret_clear` | function | `void secret_clear(void)` | exported | — | 5/1 | `secret_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`secret_ops.c:L11`)
- `<stdlib.h>` — standard library (`secret_ops.c:L12`)
- `<string.h>` — string operations (`secret_ops.c:L13`)
