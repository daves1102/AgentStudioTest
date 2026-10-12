# src/payload_plaintext/aurora-network/src/console_ops.c

## Overview

`console_ops.c` implements a fixed-capacity in-memory store for `console` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `CONSOLE_OPS_MAX` | constant | `#define CONSOLE_OPS_MAX 128` | file | — | — | `console_ops.c:L15` |
| `console_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `console_ops.c:L17–L21` |
| `console_ops_table` | variable | `static struct console_ops_entry console_ops_table[CONSOLE_OPS_MAX]` | file | — | — | `console_ops.c:L23` |
| `console_ops_count` | variable | `static int console_ops_count` | file | — | — | `console_ops.c:L24` |
| `console_add` | function | `int console_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `console_ops.c:L26–L38` |
| `console_find` | function | `int console_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `console_ops.c:L40–L49` |
| `console_total` | function | `unsigned int console_total(void)` | exported | `total` (L60) | 11/3 | `console_ops.c:L51–L61` |
| `console_clear` | function | `void console_clear(void)` | exported | — | 5/1 | `console_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`console_ops.c:L11`)
- `<stdlib.h>` — standard library (`console_ops.c:L12`)
- `<string.h>` — string operations (`console_ops.c:L13`)
