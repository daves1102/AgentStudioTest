## Overview

Source file `src/aurora/third_party/regex-engine/regex.c` written in C within the `third_party` component . It contains 1 defined symbol(s), 1 dependency/dependencies.


Lines: total 13, code 11, comment 1, blank 1

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `regex_match` | function | `regex_match(pattern: char*, text: char*) → int` | — | `*text == '\0'` (L7), `*text != '\0' && regex_match(pattern + 1, text + 1)` (L10), `*pattern == *text && regex_match(pattern + 1, text + 1)` (L12) | 5/10 | L4–L13 (src/aurora/third_party/regex-engine/regex.c:L4–L13) |

## Dependencies

- `string.h` (src/aurora/third_party/regex-engine/regex.c:L2)
