# src/payload_plaintext/aurora-network/src/profile_ops.c

## Overview

`profile_ops.c` implements a fixed-capacity in-memory store for `profile` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `PROFILE_OPS_MAX` | constant | `#define PROFILE_OPS_MAX 128` | file | — | — | `profile_ops.c:L15` |
| `profile_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `profile_ops.c:L17–L21` |
| `profile_ops_table` | variable | `static struct profile_ops_entry profile_ops_table[PROFILE_OPS_MAX]` | file | — | — | `profile_ops.c:L23` |
| `profile_ops_count` | variable | `static int profile_ops_count` | file | — | — | `profile_ops.c:L24` |
| `profile_add` | function | `int profile_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `profile_ops.c:L26–L38` |
| `profile_find` | function | `int profile_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `profile_ops.c:L40–L49` |
| `profile_total` | function | `unsigned int profile_total(void)` | exported | `total` (L60) | 11/3 | `profile_ops.c:L51–L61` |
| `profile_clear` | function | `void profile_clear(void)` | exported | — | 5/1 | `profile_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`profile_ops.c:L11`)
- `<stdlib.h>` — standard library (`profile_ops.c:L12`)
- `<string.h>` — string operations (`profile_ops.c:L13`)
