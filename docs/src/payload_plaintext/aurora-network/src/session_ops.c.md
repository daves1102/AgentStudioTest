# src/payload_plaintext/aurora-network/src/session_ops.c

## Overview

`session_ops.c` implements a fixed-capacity in-memory store for `session` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SESSION_OPS_MAX` | constant | `#define SESSION_OPS_MAX 128` | file | — | — | `session_ops.c:L15` |
| `session_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `session_ops.c:L17–L21` |
| `session_ops_table` | variable | `static struct session_ops_entry session_ops_table[SESSION_OPS_MAX]` | file | — | — | `session_ops.c:L23` |
| `session_ops_count` | variable | `static int session_ops_count` | file | — | — | `session_ops.c:L24` |
| `session_add` | function | `int session_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `session_ops.c:L26–L38` |
| `session_find` | function | `int session_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `session_ops.c:L40–L49` |
| `session_total` | function | `unsigned int session_total(void)` | exported | `total` (L60) | 11/3 | `session_ops.c:L51–L61` |
| `session_clear` | function | `void session_clear(void)` | exported | — | 5/1 | `session_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`session_ops.c:L11`)
- `<stdlib.h>` — standard library (`session_ops.c:L12`)
- `<string.h>` — string operations (`session_ops.c:L13`)
