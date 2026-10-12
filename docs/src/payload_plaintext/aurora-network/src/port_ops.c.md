# src/payload_plaintext/aurora-network/src/port_ops.c

## Overview

`port_ops.c` implements a fixed-capacity in-memory store for `port` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `PORT_OPS_MAX` | constant | `#define PORT_OPS_MAX 128` | file | — | — | `port_ops.c:L15` |
| `port_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `port_ops.c:L17–L21` |
| `port_ops_table` | variable | `static struct port_ops_entry port_ops_table[PORT_OPS_MAX]` | file | — | — | `port_ops.c:L23` |
| `port_ops_count` | variable | `static int port_ops_count` | file | — | — | `port_ops.c:L24` |
| `port_add` | function | `int port_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `port_ops.c:L26–L38` |
| `port_find` | function | `int port_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `port_ops.c:L40–L49` |
| `port_total` | function | `unsigned int port_total(void)` | exported | `total` (L60) | 11/3 | `port_ops.c:L51–L61` |
| `port_clear` | function | `void port_clear(void)` | exported | — | 5/1 | `port_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`port_ops.c:L11`)
- `<stdlib.h>` — standard library (`port_ops.c:L12`)
- `<string.h>` — string operations (`port_ops.c:L13`)
