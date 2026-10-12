# src/payload_plaintext/aurora-network/src/policy_ops.c

## Overview

`policy_ops.c` implements a fixed-capacity in-memory store for `policy` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `POLICY_OPS_MAX` | constant | `#define POLICY_OPS_MAX 128` | file | — | — | `policy_ops.c:L15` |
| `policy_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `policy_ops.c:L17–L21` |
| `policy_ops_table` | variable | `static struct policy_ops_entry policy_ops_table[POLICY_OPS_MAX]` | file | — | — | `policy_ops.c:L23` |
| `policy_ops_count` | variable | `static int policy_ops_count` | file | — | — | `policy_ops.c:L24` |
| `policy_add` | function | `int policy_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `policy_ops.c:L26–L38` |
| `policy_find` | function | `int policy_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `policy_ops.c:L40–L49` |
| `policy_total` | function | `unsigned int policy_total(void)` | exported | `total` (L60) | 11/3 | `policy_ops.c:L51–L61` |
| `policy_clear` | function | `void policy_clear(void)` | exported | — | 5/1 | `policy_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`policy_ops.c:L11`)
- `<stdlib.h>` — standard library (`policy_ops.c:L12`)
- `<string.h>` — string operations (`policy_ops.c:L13`)
