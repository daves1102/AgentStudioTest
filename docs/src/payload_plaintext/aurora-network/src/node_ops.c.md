# src/payload_plaintext/aurora-network/src/node_ops.c

## Overview

`node_ops.c` implements a fixed-capacity in-memory store for `node` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `NODE_OPS_MAX` | constant | `#define NODE_OPS_MAX 128` | file | — | — | `node_ops.c:L15` |
| `node_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `node_ops.c:L17–L21` |
| `node_ops_table` | variable | `static struct node_ops_entry node_ops_table[NODE_OPS_MAX]` | file | — | — | `node_ops.c:L23` |
| `node_ops_count` | variable | `static int node_ops_count` | file | — | — | `node_ops.c:L24` |
| `node_add` | function | `int node_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `node_ops.c:L26–L38` |
| `node_find` | function | `int node_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `node_ops.c:L40–L49` |
| `node_total` | function | `unsigned int node_total(void)` | exported | `total` (L60) | 11/3 | `node_ops.c:L51–L61` |
| `node_clear` | function | `void node_clear(void)` | exported | — | 5/1 | `node_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`node_ops.c:L11`)
- `<stdlib.h>` — standard library (`node_ops.c:L12`)
- `<string.h>` — string operations (`node_ops.c:L13`)
