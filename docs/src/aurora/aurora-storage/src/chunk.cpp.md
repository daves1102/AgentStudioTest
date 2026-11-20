## Overview

Source file `src/aurora/aurora-storage/src/chunk.cpp` written in C++ within the `aurora-storage` component . It contains 7 defined symbol(s), 4 dependency/dependencies.


Lines: total 44, code 26, comment 11, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `aurora` | module | `aurora` | — | — | — | L16–L44 (src/aurora/aurora-storage/src/chunk.cpp:L16–L44) |
| `Chunk` | type | `Chunk` | — | — | — | L18–L21 (src/aurora/aurora-storage/src/chunk.cpp:L18–L21) |
| `id` | field | `id` | — | — | — | L19 (src/aurora/aurora-storage/src/chunk.cpp:L19) |
| `data` | field | `data` | — | — | — | L20 (src/aurora/aurora-storage/src/chunk.cpp:L20) |
| `make_chunk` | function | `make_chunk(: std::string*, body: unsigned char*, len: size_t) → Chunk` | — | `c` (L29) | 1/7 | L24–L30 (src/aurora/aurora-storage/src/chunk.cpp:L24–L30) |
| `placement_group` | function | `placement_group(: std::string*, groups: int) → int` | — | `std::rand() % groups` (L36) | 1/5 | L33–L37 (src/aurora/aurora-storage/src/chunk.cpp:L33–L37) |
| `chunk_size` | function | `chunk_size(: Chunk*) → size_t` | — | `c.data.size()` (L41) | 1/4 | L39–L42 (src/aurora/aurora-storage/src/chunk.cpp:L39–L42) |

## Dependencies

- `cstring` (src/aurora/aurora-storage/src/chunk.cpp:L11)
- `cstdlib` (src/aurora/aurora-storage/src/chunk.cpp:L12)
- `string` (src/aurora/aurora-storage/src/chunk.cpp:L13)
- `vector` (src/aurora/aurora-storage/src/chunk.cpp:L14)

## Security Surface

- **sink (memory-copy)**: memory copy (src/aurora/aurora-storage/src/chunk.cpp:L27)
- **sink (random)**: non-cryptographic random (src/aurora/aurora-storage/src/chunk.cpp:L35)
- **sink (random)**: non-cryptographic random (src/aurora/aurora-storage/src/chunk.cpp:L36)
