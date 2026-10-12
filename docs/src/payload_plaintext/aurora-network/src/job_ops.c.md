# src/payload_plaintext/aurora-network/src/job_ops.c

## Overview

`job_ops.c` implements a fixed-capacity in-memory store for `job` entries in the aurora-network component. It defines a capacity constant, an entry struct with `name`, `value`, and `active` fields, a static table, and a static count. Four functions provide add, find, sum, and clear operations over that table. The file has no external dependencies beyond the C standard library and contains no side effects beyond writes to the static table; it presents no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `JOB_OPS_MAX` | constant | `#define JOB_OPS_MAX 128` | file | — | — | `job_ops.c:L15` |
| `job_ops_entry` | struct | `{ char name[64]; unsigned int value; int active; }` | file | — | — | `job_ops.c:L17–L21` |
| `job_ops_table` | variable | `static struct job_ops_entry job_ops_table[JOB_OPS_MAX]` | file | — | — | `job_ops.c:L23` |
| `job_ops_count` | variable | `static int job_ops_count` | file | — | — | `job_ops.c:L24` |
| `job_add` | function | `int job_add(const char *name, unsigned int value)` | exported | `-1` (L29), `0` (L37) | 13/3 | `job_ops.c:L26–L38` |
| `job_find` | function | `int job_find(const char *name)` | exported | `i` (L45), `-1` (L48) | 10/3 | `job_ops.c:L40–L49` |
| `job_total` | function | `unsigned int job_total(void)` | exported | `total` (L60) | 11/3 | `job_ops.c:L51–L61` |
| `job_clear` | function | `void job_clear(void)` | exported | — | 5/1 | `job_ops.c:L63–L67` |

## Dependencies

- `<stdio.h>` — standard I/O (`job_ops.c:L11`)
- `<stdlib.h>` — standard library (`job_ops.c:L12`)
- `<string.h>` — string operations (`job_ops.c:L13`)
