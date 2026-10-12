# src/payload_plaintext/aurora-network/src/volume_ops.c

## Overview

`volume_ops.c` implements a fixed-capacity in-memory store for `volume` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `VOLUME_OPS_MAX` | constant | `#define VOLUME_OPS_MAX 128` | file | — | — | `volume_ops.c:L15` |
| `volume_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `volume_ops.c:L17–L21` |
| `volume_ops_table` | variable | `static struct volume_ops_entry volume_ops_table[VOLUME_OPS_MAX]` | file | — | — | `volume_ops.c:L23` |
| `volume_ops_count` | variable | `static int volume_ops_count` | file | — | — | `volume_ops.c:L24` |
| `volume_add` | function | `int volume_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `volume_ops.c:L26–L38` |
| `volume_find` | function | `int volume_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `volume_ops.c:L40–L49` |
| `volume_total` | function | `unsigned int volume_total(void)` | exported | `total` (L60) | 11/3 | `volume_ops.c:L51–L61` |
| `volume_clear` | function | `void volume_clear(void)` | exported | — | 5/1 | `volume_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`volume_ops.c:L11`)
- `<stdlib.h>` — standard library (`volume_ops.c:L12`)
- `<string.h>` — string operations (`volume_ops.c:L13`)
