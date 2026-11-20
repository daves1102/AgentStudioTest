## Overview

Source file `src/aurora/aurora-network/src/profile_label.c` written in C within the `aurora-network` component . It contains 8 defined symbol(s), 3 dependency/dependencies.


Lines: total 45, code 28, comment 9, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PROFILE_SLOTS` | constant | `PROFILE_SLOTS` | — | — | — | L15 (src/aurora/aurora-network/src/profile_label.c:L15) |
| `profile_slot` | type | `profile_slot` | — | — | — | L17–L20 (src/aurora/aurora-network/src/profile_label.c:L17–L20) |
| `label` | field | `label` | — | — | — | L18 (src/aurora/aurora-network/src/profile_label.c:L18) |
| `applied` | field | `applied` | — | — | — | L19 (src/aurora/aurora-network/src/profile_label.c:L19) |
| `slots` | variable | `slots` | — | — | — | L22 (src/aurora/aurora-network/src/profile_label.c:L22) |
| `slot_next` | variable | `slot_next` | — | — | — | L23 (src/aurora/aurora-network/src/profile_label.c:L23) |
| `aurora_profile_label` | function | `aurora_profile_label(label: char*) → int` | — | `0` (L33) | 1/8 | L25–L34 (src/aurora/aurora-network/src/profile_label.c:L25–L34) |
| `aurora_profile_count` | function | `aurora_profile_count(: void) → int` | — | `n` (L44) | 3/10 | L36–L45 (src/aurora/aurora-network/src/profile_label.c:L36–L45) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/profile_label.c:L11)
- `string.h` (src/aurora/aurora-network/src/profile_label.c:L12)
- `profile_label.h` (src/aurora/aurora-network/src/profile_label.c:L13)

## Security Surface

- **sink (memory-unsafe)**: unbounded copy or format (src/aurora/aurora-network/src/profile_label.c:L29)
