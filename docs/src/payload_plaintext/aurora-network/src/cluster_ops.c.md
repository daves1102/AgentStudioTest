# src/payload_plaintext/aurora-network/src/cluster_ops.c

## Overview

`cluster_ops.c` implements a fixed-capacity in-memory store for `cluster` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `CLUSTER_OPS_MAX` | constant | `#define CLUSTER_OPS_MAX 128` | file | — | — | `cluster_ops.c:L15` |
| `cluster_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `cluster_ops.c:L17–L21` |
| `cluster_ops_table` | variable | `static struct cluster_ops_entry cluster_ops_table[CLUSTER_OPS_MAX]` | file | — | — | `cluster_ops.c:L23` |
| `cluster_ops_count` | variable | `static int cluster_ops_count` | file | — | — | `cluster_ops.c:L24` |
| `cluster_add` | function | `int cluster_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `cluster_ops.c:L26–L38` |
| `cluster_find` | function | `int cluster_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `cluster_ops.c:L40–L49` |
| `cluster_total` | function | `unsigned int cluster_total(void)` | exported | `total` (L60) | 11/3 | `cluster_ops.c:L51–L61` |
| `cluster_clear` | function | `void cluster_clear(void)` | exported | — | 5/1 | `cluster_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`cluster_ops.c:L11`)
- `<stdlib.h>` — standard library (`cluster_ops.c:L12`)
- `<string.h>` — string operations (`cluster_ops.c:L13`)
