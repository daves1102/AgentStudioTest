# src/payload_plaintext/aurora-network/src/config_ops.c

## Overview

`config_ops.c` implements a fixed-capacity in-memory store for `config` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `CONFIG_OPS_MAX` | constant | `#define CONFIG_OPS_MAX 128` | file | — | — | `config_ops.c:L15` |
| `config_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `config_ops.c:L17–L21` |
| `config_ops_table` | variable | `static struct config_ops_entry config_ops_table[CONFIG_OPS_MAX]` | file | — | — | `config_ops.c:L23` |
| `config_ops_count` | variable | `static int config_ops_count` | file | — | — | `config_ops.c:L24` |
| `config_add` | function | `int config_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `config_ops.c:L26–L38` |
| `config_find` | function | `int config_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `config_ops.c:L40–L49` |
| `config_total` | function | `unsigned int config_total(void)` | exported | `total` (L60) | 11/3 | `config_ops.c:L51–L61` |
| `config_clear` | function | `void config_clear(void)` | exported | — | 5/1 | `config_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`config_ops.c:L11`)
- `<stdlib.h>` — standard library (`config_ops.c:L12`)
- `<string.h>` — string operations (`config_ops.c:L13`)
