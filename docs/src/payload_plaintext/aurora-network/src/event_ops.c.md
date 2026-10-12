# src/payload_plaintext/aurora-network/src/event_ops.c

## Overview

`event_ops.c` implements a fixed-capacity in-memory store for `event` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `EVENT_OPS_MAX` | constant | `#define EVENT_OPS_MAX 128` | file | — | — | `event_ops.c:L15` |
| `event_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `event_ops.c:L17–L21` |
| `event_ops_table` | variable | `static struct event_ops_entry event_ops_table[EVENT_OPS_MAX]` | file | — | — | `event_ops.c:L23` |
| `event_ops_count` | variable | `static int event_ops_count` | file | — | — | `event_ops.c:L24` |
| `event_add` | function | `int event_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `event_ops.c:L26–L38` |
| `event_find` | function | `int event_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `event_ops.c:L40–L49` |
| `event_total` | function | `unsigned int event_total(void)` | exported | `total` (L60) | 11/3 | `event_ops.c:L51–L61` |
| `event_clear` | function | `void event_clear(void)` | exported | — | 5/1 | `event_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`event_ops.c:L11`)
- `<stdlib.h>` — standard library (`event_ops.c:L12`)
- `<string.h>` — string operations (`event_ops.c:L13`)
