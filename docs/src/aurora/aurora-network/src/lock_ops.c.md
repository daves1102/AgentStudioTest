## Overview

Source file `src/aurora/aurora-network/src/lock_ops.c` written in C within the `aurora-network` component . It contains 11 defined symbol(s), 3 dependency/dependencies.


Lines: total 67, code 50, comment 9, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOCK_MAX` | constant | `LOCK_MAX` | — | — | — | L15 (src/aurora/aurora-network/src/lock_ops.c:L15) |
| `lock_entry` | type | `lock_entry` | — | — | — | L17–L21 (src/aurora/aurora-network/src/lock_ops.c:L17–L21) |
| `name` | field | `name` | — | — | — | L18 (src/aurora/aurora-network/src/lock_ops.c:L18) |
| `value` | field | `value` | — | — | — | L19 (src/aurora/aurora-network/src/lock_ops.c:L19) |
| `active` | field | `active` | — | — | — | L20 (src/aurora/aurora-network/src/lock_ops.c:L20) |
| `lock_table` | variable | `lock_table` | — | — | — | L23 (src/aurora/aurora-network/src/lock_ops.c:L23) |
| `lock_count` | variable | `lock_count` | — | — | — | L24 (src/aurora/aurora-network/src/lock_ops.c:L24) |
| `lock_add` | function | `lock_add(name: char*, value: unsigned int) → int` | — | `-1` (L29), `0` (L37) | 3/13 | L26–L38 (src/aurora/aurora-network/src/lock_ops.c:L26–L38) |
| `lock_find` | function | `lock_find(name: char*) → int` | — | `i` (L45), `-1` (L48) | 3/10 | L40–L49 (src/aurora/aurora-network/src/lock_ops.c:L40–L49) |
| `lock_total` | function | `lock_total(: void) → unsigned int` | — | `total` (L60) | 3/11 | L51–L61 (src/aurora/aurora-network/src/lock_ops.c:L51–L61) |
| `lock_clear` | function | `lock_clear(: void) → void` | — | — | 1/5 | L63–L67 (src/aurora/aurora-network/src/lock_ops.c:L63–L67) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/lock_ops.c:L11)
- `stdlib.h` (src/aurora/aurora-network/src/lock_ops.c:L12)
- `string.h` (src/aurora/aurora-network/src/lock_ops.c:L13)

## Security Surface

- **sink (memory-copy)**: memory copy (src/aurora/aurora-network/src/lock_ops.c:L31)
