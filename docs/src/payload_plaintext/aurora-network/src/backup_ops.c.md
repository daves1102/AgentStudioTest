# src/payload_plaintext/aurora-network/src/backup_ops.c

## Overview

`backup_ops.c` implements a fixed-capacity in-memory store for `backup` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `BACKUP_OPS_MAX` | constant | `#define BACKUP_OPS_MAX 128` | file | — | — | `backup_ops.c:L15` |
| `backup_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `backup_ops.c:L17–L21` |
| `backup_ops_table` | variable | `static struct backup_ops_entry backup_ops_table[BACKUP_OPS_MAX]` | file | — | — | `backup_ops.c:L23` |
| `backup_ops_count` | variable | `static int backup_ops_count` | file | — | — | `backup_ops.c:L24` |
| `backup_add` | function | `int backup_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `backup_ops.c:L26–L38` |
| `backup_find` | function | `int backup_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `backup_ops.c:L40–L49` |
| `backup_total` | function | `unsigned int backup_total(void)` | exported | `total` (L60) | 11/3 | `backup_ops.c:L51–L61` |
| `backup_clear` | function | `void backup_clear(void)` | exported | — | 5/1 | `backup_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`backup_ops.c:L11`)
- `<stdlib.h>` — standard library (`backup_ops.c:L12`)
- `<string.h>` — string operations (`backup_ops.c:L13`)
