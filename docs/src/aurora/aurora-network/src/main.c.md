## Overview

Source file `src/aurora/aurora-network/src/main.c` written in C within the `aurora-network` component . It contains 1 defined symbol(s), 3 dependency/dependencies.


Lines: total 27, code 15, comment 9, blank 3

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `main` | function | `main(argc: int, argv: char**) → int` | — | `0` (L26) | 2/12 | L15–L27 (src/aurora/aurora-network/src/main.c:L15–L27) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/main.c:L11)
- `string.h` (src/aurora/aurora-network/src/main.c:L12)
- `packet.h` (src/aurora/aurora-network/src/main.c:L13)

## Security Surface

- **entry-point (cli-args)**: command line arguments (src/aurora/aurora-network/src/main.c:L15)
- **entry-point (cli-args)**: command line arguments (src/aurora/aurora-network/src/main.c:L22)
