# src/payload_plaintext/aurora-network/src/tenant_ops.c

## Overview

`tenant_ops.c` implements a fixed-capacity in-memory store for `tenant` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `TENANT_OPS_MAX` | constant | `#define TENANT_OPS_MAX 128` | file | — | — | `tenant_ops.c:L15` |
| `tenant_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `tenant_ops.c:L17–L21` |
| `tenant_ops_table` | variable | `static struct tenant_ops_entry tenant_ops_table[TENANT_OPS_MAX]` | file | — | — | `tenant_ops.c:L23` |
| `tenant_ops_count` | variable | `static int tenant_ops_count` | file | — | — | `tenant_ops.c:L24` |
| `tenant_add` | function | `int tenant_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `tenant_ops.c:L26–L38` |
| `tenant_find` | function | `int tenant_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `tenant_ops.c:L40–L49` |
| `tenant_total` | function | `unsigned int tenant_total(void)` | exported | `total` (L60) | 11/3 | `tenant_ops.c:L51–L61` |
| `tenant_clear` | function | `void tenant_clear(void)` | exported | — | 5/1 | `tenant_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`tenant_ops.c:L11`)
- `<stdlib.h>` — standard library (`tenant_ops.c:L12`)
- `<string.h>` — string operations (`tenant_ops.c:L13`)
