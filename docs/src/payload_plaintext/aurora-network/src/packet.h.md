# src/payload_plaintext/aurora-network/src/packet.h

## Overview

`packet.h` is the shared header for the aurora-network packet-parsing subsystem. It defines the `flow_key` struct — the central data type passed among parsing, ACL, and flow-table functions — and declares four functions whose implementations reside in `packet_parse.c`. The guard macro `AURORA_PACKET_H` prevents multiple inclusion. The `MAX_LABELS` constant (value 8) bounds the labels array within `flow_key`.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `AURORA_PACKET_H` | constant | `#define AURORA_PACKET_H` (include guard) | file | — | — | `packet.h:L12` |
| `MAX_LABELS` | constant | `#define MAX_LABELS 8` | exported | — | — | `packet.h:L16` |
| `flow_key` | struct | `{ unsigned int tenant; unsigned int sport; unsigned int dport; unsigned char labels[MAX_LABELS]; }` | exported | — | — | `packet.h:L18–L23` |
| `parse_tenant_tag` | function | `int parse_tenant_tag(const char *header, struct flow_key *key)` | exported | not declared | — | `packet.h:L25` |
| `parse_ports` | function | `int parse_ports(const unsigned char *buf, size_t len, struct flow_key *key)` | exported | not declared | — | `packet.h:L26` |
| `copy_labels` | function | `int copy_labels(struct flow_key *key, const unsigned char *labels, int count)` | exported | not declared | — | `packet.h:L27` |
| `dump_key` | function | `void dump_key(const struct flow_key *key, char *out, size_t outlen)` | exported | not declared | — | `packet.h:L28` |

## Dependencies

- `<stddef.h>` — `size_t` used in `parse_ports` and `dump_key` signatures (`packet.h:L14`)
