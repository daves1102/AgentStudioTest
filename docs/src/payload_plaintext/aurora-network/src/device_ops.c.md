# src/payload_plaintext/aurora-network/src/device_ops.c

## Overview

`device_ops.c` implements a fixed-capacity in-memory store for `device` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `DEVICE_OPS_MAX` | constant | `#define DEVICE_OPS_MAX 128` | file | — | — | `device_ops.c:L15` |
| `device_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `device_ops.c:L17–L21` |
| `device_ops_table` | variable | `static struct device_ops_entry device_ops_table[DEVICE_OPS_MAX]` | file | — | — | `device_ops.c:L23` |
| `device_ops_count` | variable | `static int device_ops_count` | file | — | — | `device_ops.c:L24` |
| `device_add` | function | `int device_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `device_ops.c:L26–L38` |
| `device_find` | function | `int device_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `device_ops.c:L40–L49` |
| `device_total` | function | `unsigned int device_total(void)` | exported | `total` (L60) | 11/3 | `device_ops.c:L51–L61` |
| `device_clear` | function | `void device_clear(void)` | exported | — | 5/1 | `device_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`device_ops.c:L11`)
- `<stdlib.h>` — standard library (`device_ops.c:L12`)
- `<string.h>` — string operations (`device_ops.c:L13`)
