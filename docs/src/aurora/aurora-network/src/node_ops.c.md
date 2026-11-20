## Overview

Source file `src/aurora/aurora-network/src/node_ops.c` written in C within the `aurora-network` component . It contains 11 defined symbol(s), 3 dependency/dependencies.


Lines: total 67, code 50, comment 9, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NODE_MAX` | constant | `NODE_MAX` | — | — | — | L15 (src/aurora/aurora-network/src/node_ops.c:L15) |
| `node_entry` | type | `node_entry` | — | — | — | L17–L21 (src/aurora/aurora-network/src/node_ops.c:L17–L21) |
| `name` | field | `name` | — | — | — | L18 (src/aurora/aurora-network/src/node_ops.c:L18) |
| `value` | field | `value` | — | — | — | L19 (src/aurora/aurora-network/src/node_ops.c:L19) |
| `active` | field | `active` | — | — | — | L20 (src/aurora/aurora-network/src/node_ops.c:L20) |
| `node_table` | variable | `node_table` | — | — | — | L23 (src/aurora/aurora-network/src/node_ops.c:L23) |
| `node_count` | variable | `node_count` | — | — | — | L24 (src/aurora/aurora-network/src/node_ops.c:L24) |
| `node_add` | function | `node_add(name: char*, value: unsigned int) → int` | — | `-1` (L29), `0` (L37) | 3/13 | L26–L38 (src/aurora/aurora-network/src/node_ops.c:L26–L38) |
| `node_find` | function | `node_find(name: char*) → int` | — | `i` (L45), `-1` (L48) | 3/10 | L40–L49 (src/aurora/aurora-network/src/node_ops.c:L40–L49) |
| `node_total` | function | `node_total(: void) → unsigned int` | — | `total` (L60) | 3/11 | L51–L61 (src/aurora/aurora-network/src/node_ops.c:L51–L61) |
| `node_clear` | function | `node_clear(: void) → void` | — | — | 1/5 | L63–L67 (src/aurora/aurora-network/src/node_ops.c:L63–L67) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/node_ops.c:L11)
- `stdlib.h` (src/aurora/aurora-network/src/node_ops.c:L12)
- `string.h` (src/aurora/aurora-network/src/node_ops.c:L13)

## Security Surface

- **sink (memory-copy)**: memory copy (src/aurora/aurora-network/src/node_ops.c:L31)
