# src/payload_plaintext/aurora-network/src/domain_ops.c

## Overview

`domain_ops.c` implements a fixed-capacity in-memory store for `domain` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `DOMAIN_OPS_MAX` | constant | `#define DOMAIN_OPS_MAX 128` | file | — | — | `domain_ops.c:L15` |
| `domain_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `domain_ops.c:L17–L21` |
| `domain_ops_table` | variable | `static struct domain_ops_entry domain_ops_table[DOMAIN_OPS_MAX]` | file | — | — | `domain_ops.c:L23` |
| `domain_ops_count` | variable | `static int domain_ops_count` | file | — | — | `domain_ops.c:L24` |
| `domain_add` | function | `int domain_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `domain_ops.c:L26–L38` |
| `domain_find` | function | `int domain_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `domain_ops.c:L40–L49` |
| `domain_total` | function | `unsigned int domain_total(void)` | exported | `total` (L60) | 11/3 | `domain_ops.c:L51–L61` |
| `domain_clear` | function | `void domain_clear(void)` | exported | — | 5/1 | `domain_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`domain_ops.c:L11`)
- `<stdlib.h>` — standard library (`domain_ops.c:L12`)
- `<string.h>` — string operations (`domain_ops.c:L13`)
