# src/payload_plaintext/aurora-network/src/account_ops.c

## Overview

`account_ops.c` implements a fixed-capacity in-memory store for `account` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `ACCOUNT_OPS_MAX` | constant | `#define ACCOUNT_OPS_MAX 128` | file | — | — | `account_ops.c:L15` |
| `account_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `account_ops.c:L17–L21` |
| `account_ops_table` | variable | `static struct account_ops_entry account_ops_table[ACCOUNT_OPS_MAX]` | file | — | — | `account_ops.c:L23` |
| `account_ops_count` | variable | `static int account_ops_count` | file | — | — | `account_ops.c:L24` |
| `account_add` | function | `int account_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `account_ops.c:L26–L38` |
| `account_find` | function | `int account_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `account_ops.c:L40–L49` |
| `account_total` | function | `unsigned int account_total(void)` | exported | `total` (L60) | 11/3 | `account_ops.c:L51–L61` |
| `account_clear` | function | `void account_clear(void)` | exported | — | 5/1 | `account_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`account_ops.c:L11`)
- `<stdlib.h>` — standard library (`account_ops.c:L12`)
- `<string.h>` — string operations (`account_ops.c:L13`)
