# src/payload_plaintext/aurora-network/src/firewall_ops.c

## Overview

`firewall_ops.c` implements a fixed-capacity in-memory store for `firewall` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `FIREWALL_OPS_MAX` | constant | `#define FIREWALL_OPS_MAX 128` | file | — | — | `firewall_ops.c:L15` |
| `firewall_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `firewall_ops.c:L17–L21` |
| `firewall_ops_table` | variable | `static struct firewall_ops_entry firewall_ops_table[FIREWALL_OPS_MAX]` | file | — | — | `firewall_ops.c:L23` |
| `firewall_ops_count` | variable | `static int firewall_ops_count` | file | — | — | `firewall_ops.c:L24` |
| `firewall_add` | function | `int firewall_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `firewall_ops.c:L26–L38` |
| `firewall_find` | function | `int firewall_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `firewall_ops.c:L40–L49` |
| `firewall_total` | function | `unsigned int firewall_total(void)` | exported | `total` (L60) | 11/3 | `firewall_ops.c:L51–L61` |
| `firewall_clear` | function | `void firewall_clear(void)` | exported | — | 5/1 | `firewall_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`firewall_ops.c:L11`)
- `<stdlib.h>` — standard library (`firewall_ops.c:L12`)
- `<string.h>` — string operations (`firewall_ops.c:L13`)
