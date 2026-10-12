# src/payload_plaintext/aurora-network/src/packet_parse.c

## Overview

`packet_parse.c` implements the four functions declared in `packet.h`: `parse_tenant_tag`, `parse_ports`, `copy_labels`, and `dump_key`. `parse_tenant_tag` copies a caller-supplied header string into a 16-byte local buffer and extracts the tenant ID via `atoi`. `parse_ports` extracts source and destination port values from a raw byte buffer, guarding on minimum length. `copy_labels` copies up to `count` label bytes into `key->labels`. `dump_key` renders a `flow_key` to a caller-supplied output buffer using `snprintf`. Two functions in this file contain memory-safety vulnerabilities recorded in the KB security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `parse_tenant_tag` | function | `int parse_tenant_tag(const char *header, struct flow_key *key)` | exported | `0` (L22) | 7/1 | `packet_parse.c:L17–L23` |
| `parse_ports` | function | `int parse_ports(const unsigned char *buf, size_t len, struct flow_key *key)` | exported | `-1` (L28), `0` (L32) | 9/2 | `packet_parse.c:L25–L33` |
| `copy_labels` | function | `int copy_labels(struct flow_key *key, const unsigned char *labels, int count)` | exported | `i` (L42) | 8/2 | `packet_parse.c:L36–L43` |
| `dump_key` | function | `void dump_key(const struct flow_key *key, char *out, size_t outlen)` | exported | — | 5/1 | `packet_parse.c:L45–L49` |

## Dependencies

- `<stdio.h>` — `snprintf` in `dump_key` (`packet_parse.c:L11`)
- `<string.h>` — `strcpy` in `parse_tenant_tag` (`packet_parse.c:L12`)
- `<stdlib.h>` — `atoi` in `parse_tenant_tag` (`packet_parse.c:L13`)
- `"packet.h"` — `flow_key` struct (`packet_parse.c:L14`)

## Security Surface

- **Buffer overflow — `parse_tenant_tag`:** `strcpy(tag, header)` copies the caller-supplied `header` string into a 16-byte local `tag` buffer with no length check; a `header` string longer than 15 characters overflows the stack buffer (CWE-121) (`packet_parse.c:L19`)
- **Off-by-one write — `copy_labels`:** the loop condition `i <= count` iterates `count + 1` times, writing one element past the end of `key->labels[MAX_LABELS=8]` when `count >= 8`; this is an out-of-bounds write into the `flow_key` struct (CWE-193, CWE-787) (`packet_parse.c:L38–L41`)
