## Overview

Source file `src/aurora/aurora-storage/src/object_store.cpp` written in C++ within the `aurora-storage` component . It contains 10 defined symbol(s), 4 dependency/dependencies.


Lines: total 58, code 40, comment 9, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `aurora` | module | `aurora` | — | — | — | L16–L58 (src/aurora/aurora-storage/src/object_store.cpp:L16–L58) |
| `ObjectStore` | class | `ObjectStore` | — | — | — | L18–L56 (src/aurora/aurora-storage/src/object_store.cpp:L18–L56) |
| `ObjectStore` | method | `ObjectStore(root: std::string)` | — | — | 1/1 | L20 (src/aurora/aurora-storage/src/object_store.cpp:L20) |
| `put` | method | `put(: std::string*, : std::string*) → bool` | — | `false` (L27), `true` (L31) | 2/11 | L22–L32 (src/aurora/aurora-storage/src/object_store.cpp:L22–L32) |
| `get` | method | `get(: std::string*, body: std::string*) → bool` | — | `false` (L38), `true` (L42) | 2/10 | L34–L43 (src/aurora/aurora-storage/src/object_store.cpp:L34–L43) |
| `count` | method | `count() → size_t` | — | `index_.size()` (L45) | 1/1 | L45 (src/aurora/aurora-storage/src/object_store.cpp:L45) |
| `path_for` | method | `path_for(: std::string*) → std::string` | — | `root_ + "/" + key` (L50) | 1/4 | L48–L51 (src/aurora/aurora-storage/src/object_store.cpp:L48–L51) |
| `root_` | field | `root_` | — | — | — | L53 (src/aurora/aurora-storage/src/object_store.cpp:L53) |
| `index_` | field | `index_` | — | — | — | L54 (src/aurora/aurora-storage/src/object_store.cpp:L54) |
| `lock_` | field | `lock_` | — | — | — | L55 (src/aurora/aurora-storage/src/object_store.cpp:L55) |

## Dependencies

- `fstream` (src/aurora/aurora-storage/src/object_store.cpp:L11)
- `string` (src/aurora/aurora-storage/src/object_store.cpp:L12)
- `map` (src/aurora/aurora-storage/src/object_store.cpp:L13)
- `mutex` (src/aurora/aurora-storage/src/object_store.cpp:L14)

## Side Effects

-  (src/aurora/aurora-storage/src/object_store.cpp:L25)
-  (src/aurora/aurora-storage/src/object_store.cpp:L36)

## Security Surface

- **sink (file-access)**: file access (src/aurora/aurora-storage/src/object_store.cpp:L25)
- **sink (file-access)**: file access (src/aurora/aurora-storage/src/object_store.cpp:L36)
