## Overview

Source file `src/aurora/aurora-network/src/acl.c` written in C within the `aurora-network` component . It contains 9 defined symbol(s), 3 dependency/dependencies.


Lines: total 51, code 36, comment 9, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `acl_rule` | type | `acl_rule` | — | — | — | L15–L19 (src/aurora/aurora-network/src/acl.c:L15–L19) |
| `tenant` | field | `tenant` | — | — | — | L16 (src/aurora/aurora-network/src/acl.c:L16) |
| `dport` | field | `dport` | — | — | — | L17 (src/aurora/aurora-network/src/acl.c:L17) |
| `allow` | field | `allow` | — | — | — | L18 (src/aurora/aurora-network/src/acl.c:L18) |
| `rules` | variable | `rules` | — | — | — | L21 (src/aurora/aurora-network/src/acl.c:L21) |
| `rule_count` | variable | `rule_count` | — | — | — | L22 (src/aurora/aurora-network/src/acl.c:L22) |
| `acl_add` | function | `acl_add(tenant: unsigned int, dport: unsigned int, allow: int) → int` | — | `-1` (L27), `0` (L33) | 2/11 | L24–L34 (src/aurora/aurora-network/src/acl.c:L24–L34) |
| `acl_check` | function | `acl_check(key: struct flow_key*) → int` | — | `rules[i].allow` (L41), `0` (L44) | 4/10 | L36–L45 (src/aurora/aurora-network/src/acl.c:L36–L45) |
| `acl_reset` | function | `acl_reset(: void) → void` | — | — | 1/5 | L47–L51 (src/aurora/aurora-network/src/acl.c:L47–L51) |

## Dependencies

- `string.h` (src/aurora/aurora-network/src/acl.c:L11)
- `stdio.h` (src/aurora/aurora-network/src/acl.c:L12)
- `packet.h` (src/aurora/aurora-network/src/acl.c:L13)
