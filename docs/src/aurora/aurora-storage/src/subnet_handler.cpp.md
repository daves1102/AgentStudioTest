## Overview

Source file `src/aurora/aurora-storage/src/subnet_handler.cpp` written in C++ within the `aurora-storage` component . It contains 8 defined symbol(s), 3 dependency/dependencies.


Lines: total 52, code 35, comment 9, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `aurora` | module | `aurora` | — | — | — | L15–L52 (src/aurora/aurora-storage/src/subnet_handler.cpp:L15–L52) |
| `subnet` | module | `subnet` | — | — | — | L16–L51 (src/aurora/aurora-storage/src/subnet_handler.cpp:L16–L51) |
| `Handler` | class | `Handler` | — | — | — | L18–L49 (src/aurora/aurora-storage/src/subnet_handler.cpp:L18–L49) |
| `set` | method | `set(: std::string*, : std::string*) → void` | — | — | 1/4 | L20–L23 (src/aurora/aurora-storage/src/subnet_handler.cpp:L20–L23) |
| `get` | method | `get(: std::string*, out: std::string*) → bool` | — | `false` (L29), `true` (L32) | 2/9 | L25–L33 (src/aurora/aurora-storage/src/subnet_handler.cpp:L25–L33) |
| `keys` | method | `keys() → std::vector<std::string>` | — | `out` (L42) | 2/9 | L35–L43 (src/aurora/aurora-storage/src/subnet_handler.cpp:L35–L43) |
| `size` | method | `size() → size_t` | — | `entries_.size()` (L45) | 1/1 | L45 (src/aurora/aurora-storage/src/subnet_handler.cpp:L45) |
| `entries_` | field | `entries_` | — | — | — | L48 (src/aurora/aurora-storage/src/subnet_handler.cpp:L48) |

## Dependencies

- `map` (src/aurora/aurora-storage/src/subnet_handler.cpp:L11)
- `string` (src/aurora/aurora-storage/src/subnet_handler.cpp:L12)
- `vector` (src/aurora/aurora-storage/src/subnet_handler.cpp:L13)
