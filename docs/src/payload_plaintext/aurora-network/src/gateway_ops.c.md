# src/payload_plaintext/aurora-network/src/gateway_ops.c

## Overview

`gateway_ops.c` implements a fixed-capacity in-memory store for `gateway` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `GATEWAY_OPS_MAX` | constant | `#define GATEWAY_OPS_MAX 128` | file | — | — | `gateway_ops.c:L15` |
| `gateway_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `gateway_ops.c:L17–L21` |
| `gateway_ops_table` | variable | `static struct gateway_ops_entry gateway_ops_table[GATEWAY_OPS_MAX]` | file | — | — | `gateway_ops.c:L23` |
| `gateway_ops_count` | variable | `static int gateway_ops_count` | file | — | — | `gateway_ops.c:L24` |
| `gateway_add` | function | `int gateway_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `gateway_ops.c:L26–L38` |
| `gateway_find` | function | `int gateway_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `gateway_ops.c:L40–L49` |
| `gateway_total` | function | `unsigned int gateway_total(void)` | exported | `total` (L60) | 11/3 | `gateway_ops.c:L51–L61` |
| `gateway_clear` | function | `void gateway_clear(void)` | exported | — | 5/1 | `gateway_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`gateway_ops.c:L11`)
- `<stdlib.h>` — standard library (`gateway_ops.c:L12`)
- `<string.h>` — string operations (`gateway_ops.c:L13`)
