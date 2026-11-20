## Overview

Source file `src/aurora/aurora-network/src/flow_table.c` written in C within the `aurora-network` component . It contains 11 defined symbol(s), 3 dependency/dependencies.


Lines: total 74, code 57, comment 9, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `entry` | type | `entry` | — | — | — | L15–L20 (src/aurora/aurora-network/src/flow_table.c:L15–L20) |
| `key` | field | `key` | — | — | — | L16 (src/aurora/aurora-network/src/flow_table.c:L16) |
| `packets` | field | `packets` | — | — | — | L17 (src/aurora/aurora-network/src/flow_table.c:L17) |
| `bytes` | field | `bytes` | — | — | — | L18 (src/aurora/aurora-network/src/flow_table.c:L18) |
| `next` | field | `next` | — | — | — | L19 (src/aurora/aurora-network/src/flow_table.c:L19) |
| `table` | variable | `table` | — | — | — | L22 (src/aurora/aurora-network/src/flow_table.c:L22) |
| `hash_key` | function | `hash_key(key: struct flow_key*) → unsigned int` | — | `(key->tenant * 2654435761u + key->sport * 97u + key->dport) & 4095u` (L26) | 1/4 | L24–L27 (src/aurora/aurora-network/src/flow_table.c:L24–L27) |
| `flow_lookup` | function | `flow_lookup(key: struct flow_key*) → struct entry*` | — | `e` (L34), `NULL` (L38) | 3/11 | L29–L39 (src/aurora/aurora-network/src/flow_table.c:L29–L39) |
| `flow_insert` | function | `flow_insert(key: struct flow_key*) → int` | — | `-1` (L46), `0` (L53) | 2/14 | L41–L54 (src/aurora/aurora-network/src/flow_table.c:L41–L54) |
| `flow_account` | function | `flow_account(e: struct entry*, bytes: unsigned long) → void` | — | — | 1/5 | L56–L60 (src/aurora/aurora-network/src/flow_table.c:L56–L60) |
| `flow_flush` | function | `flow_flush(: void) → void` | — | — | 3/13 | L62–L74 (src/aurora/aurora-network/src/flow_table.c:L62–L74) |

## Dependencies

- `stdlib.h` (src/aurora/aurora-network/src/flow_table.c:L11)
- `string.h` (src/aurora/aurora-network/src/flow_table.c:L12)
- `packet.h` (src/aurora/aurora-network/src/flow_table.c:L13)

## Security Surface

- **sink (memory-copy)**: memory copy (src/aurora/aurora-network/src/flow_table.c:L48)
