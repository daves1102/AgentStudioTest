# src/payload_plaintext/aurora-network/src/server_ops.c

## Overview

`server_ops.c` implements a fixed-capacity in-memory store for `server` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `SERVER_OPS_MAX` | constant | `#define SERVER_OPS_MAX 128` | file | — | — | `server_ops.c:L15` |
| `server_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `server_ops.c:L17–L21` |
| `server_ops_table` | variable | `static struct server_ops_entry server_ops_table[SERVER_OPS_MAX]` | file | — | — | `server_ops.c:L23` |
| `server_ops_count` | variable | `static int server_ops_count` | file | — | — | `server_ops.c:L24` |
| `server_add` | function | `int server_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `server_ops.c:L26–L38` |
| `server_find` | function | `int server_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `server_ops.c:L40–L49` |
| `server_total` | function | `unsigned int server_total(void)` | exported | `total` (L60) | 11/3 | `server_ops.c:L51–L61` |
| `server_clear` | function | `void server_clear(void)` | exported | — | 5/1 | `server_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`server_ops.c:L11`)
- `<stdlib.h>` — standard library (`server_ops.c:L12`)
- `<string.h>` — string operations (`server_ops.c:L13`)
