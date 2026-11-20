## Overview

Source file `src/aurora/aurora-network/src/keypair_ops.c` written in C within the `aurora-network` component . It contains 11 defined symbol(s), 3 dependency/dependencies.


Lines: total 67, code 50, comment 9, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KEYPAIR_MAX` | constant | `KEYPAIR_MAX` | — | — | — | L15 (src/aurora/aurora-network/src/keypair_ops.c:L15) |
| `keypair_entry` | type | `keypair_entry` | — | — | — | L17–L21 (src/aurora/aurora-network/src/keypair_ops.c:L17–L21) |
| `name` | field | `name` | — | — | — | L18 (src/aurora/aurora-network/src/keypair_ops.c:L18) |
| `value` | field | `value` | — | — | — | L19 (src/aurora/aurora-network/src/keypair_ops.c:L19) |
| `active` | field | `active` | — | — | — | L20 (src/aurora/aurora-network/src/keypair_ops.c:L20) |
| `keypair_table` | variable | `keypair_table` | — | — | — | L23 (src/aurora/aurora-network/src/keypair_ops.c:L23) |
| `keypair_count` | variable | `keypair_count` | — | — | — | L24 (src/aurora/aurora-network/src/keypair_ops.c:L24) |
| `keypair_add` | function | `keypair_add(name: char*, value: unsigned int) → int` | — | `-1` (L29), `0` (L37) | 3/13 | L26–L38 (src/aurora/aurora-network/src/keypair_ops.c:L26–L38) |
| `keypair_find` | function | `keypair_find(name: char*) → int` | — | `i` (L45), `-1` (L48) | 3/10 | L40–L49 (src/aurora/aurora-network/src/keypair_ops.c:L40–L49) |
| `keypair_total` | function | `keypair_total(: void) → unsigned int` | — | `total` (L60) | 3/11 | L51–L61 (src/aurora/aurora-network/src/keypair_ops.c:L51–L61) |
| `keypair_clear` | function | `keypair_clear(: void) → void` | — | — | 1/5 | L63–L67 (src/aurora/aurora-network/src/keypair_ops.c:L63–L67) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/keypair_ops.c:L11)
- `stdlib.h` (src/aurora/aurora-network/src/keypair_ops.c:L12)
- `string.h` (src/aurora/aurora-network/src/keypair_ops.c:L13)

## Security Surface

- **sink (memory-copy)**: memory copy (src/aurora/aurora-network/src/keypair_ops.c:L31)
