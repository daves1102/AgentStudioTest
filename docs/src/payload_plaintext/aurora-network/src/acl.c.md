# src/payload_plaintext/aurora-network/src/acl.c

## Overview

`acl.c` implements a simple access-control list for the aurora-network component. It maintains a static array of up to 256 `acl_rule` records, each binding a tenant identifier and a destination port to an allow/deny decision. Three functions allow rules to be added, a flow key to be evaluated against the ruleset, and the table to be cleared. The file depends on `packet.h` for the `flow_key` struct shared across aurora-network source files.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `acl_rule` | struct | `{ unsigned int tenant; unsigned int dport; int allow; }` | file | — | — | `acl.c:L15–L19` |
| `rules` | variable | `static struct acl_rule rules[256]` | file | — | — | `acl.c:L21` |
| `rule_count` | variable | `static int rule_count` | file | — | — | `acl.c:L22` |
| `acl_add` | function | `int acl_add(unsigned int tenant, unsigned int dport, int allow)` | exported | `-1` (L27), `0` (L33) | 11/2 | `acl.c:L24–L34` |
| `acl_check` | function | `int acl_check(const struct flow_key *key)` | exported | `rules[i].allow` (L41), `0` (L44) | 10/4 | `acl.c:L36–L45` |
| `acl_reset` | function | `void acl_reset(void)` | exported | — | 5/1 | `acl.c:L47–L51` |

## Dependencies

- `<string.h>` — `memset` for table clear (`acl.c:L11`)
- `<stdio.h>` — standard I/O (`acl.c:L12`)
- `"packet.h"` — `flow_key` struct used by `acl_check` (`acl.c:L13`)
