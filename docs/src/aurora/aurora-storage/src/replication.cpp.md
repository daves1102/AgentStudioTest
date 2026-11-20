## Overview

Source file `src/aurora/aurora-storage/src/replication.cpp` written in C++ within the `aurora-storage` component . It contains 7 defined symbol(s), 3 dependency/dependencies.


Lines: total 41, code 26, comment 9, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `aurora` | module | `aurora` | — | — | — | L15–L41 (src/aurora/aurora-storage/src/replication.cpp:L15–L41) |
| `Target` | type | `Target` | — | — | — | L17–L21 (src/aurora/aurora-storage/src/replication.cpp:L17–L21) |
| `host` | field | `host` | — | — | — | L18 (src/aurora/aurora-storage/src/replication.cpp:L18) |
| `weight` | field | `weight` | — | — | — | L19 (src/aurora/aurora-storage/src/replication.cpp:L19) |
| `healthy` | field | `healthy` | — | — | — | L20 (src/aurora/aurora-storage/src/replication.cpp:L20) |
| `select_targets` | function | `select_targets(: std::vector<Target>*, copies: int) → std::vector<Target>` | — | `healthy` (L33) | 2/12 | L23–L34 (src/aurora/aurora-storage/src/replication.cpp:L23–L34) |
| `quorum_reached` | function | `quorum_reached(acknowledged: int, copies: int) → bool` | — | `acknowledged > copies / 2` (L38) | 1/4 | L36–L39 (src/aurora/aurora-storage/src/replication.cpp:L36–L39) |

## Dependencies

- `string` (src/aurora/aurora-storage/src/replication.cpp:L11)
- `vector` (src/aurora/aurora-storage/src/replication.cpp:L12)
- `algorithm` (src/aurora/aurora-storage/src/replication.cpp:L13)
