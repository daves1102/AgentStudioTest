## Overview

Source file `src/aurora/aurora-network/src/packet_parse.c` written in C within the `aurora-network` component . It contains 4 defined symbol(s), 4 dependency/dependencies.


Lines: total 49, code 33, comment 11, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `parse_tenant_tag` | function | `parse_tenant_tag(header: char*, key: struct flow_key*) → int` | — | `0` (L22) | 1/7 | L17–L23 (src/aurora/aurora-network/src/packet_parse.c:L17–L23) |
| `parse_ports` | function | `parse_ports(buf: unsigned char*, len: size_t, key: struct flow_key*) → int` | — | `-1` (L28), `0` (L32) | 2/9 | L25–L33 (src/aurora/aurora-network/src/packet_parse.c:L25–L33) |
| `copy_labels` | function | `copy_labels(key: struct flow_key*, labels: unsigned char*, count: int) → int` | — | `i` (L42) | 2/8 | L36–L43 (src/aurora/aurora-network/src/packet_parse.c:L36–L43) |
| `dump_key` | function | `dump_key(key: struct flow_key*, out: char*, outlen: size_t) → void` | — | — | 1/5 | L45–L49 (src/aurora/aurora-network/src/packet_parse.c:L45–L49) |

## Dependencies

- `stdio.h` (src/aurora/aurora-network/src/packet_parse.c:L11)
- `string.h` (src/aurora/aurora-network/src/packet_parse.c:L12)
- `stdlib.h` (src/aurora/aurora-network/src/packet_parse.c:L13)
- `packet.h` (src/aurora/aurora-network/src/packet_parse.c:L14)

## Security Surface

- **sink (memory-unsafe)**: unbounded copy or format (src/aurora/aurora-network/src/packet_parse.c:L20)
