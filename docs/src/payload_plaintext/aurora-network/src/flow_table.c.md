# src/payload_plaintext/aurora-network/src/flow_table.c

## Overview

`flow_table.c` implements a hash-chained flow tracking table for the aurora-network component. A 4096-bucket pointer array holds chains of heap-allocated `entry` nodes, each carrying a `flow_key`, packet and byte counters, and a chain pointer. A Knuth multiplicative hash over tenant, source port, and destination port maps a key to a bucket. Functions cover lookup, insertion (with `malloc`), per-entry accounting, and a full flush (with `free`). The file depends on `packet.h` for the `flow_key` struct.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `entry` | struct | `{ struct flow_key key; unsigned long packets; unsigned long bytes; struct entry *next; }` | file | — | — | `flow_table.c:L15–L20` |
| `table` | variable | `static struct entry *table[4096]` | file | — | — | `flow_table.c:L22` |
| `hash_key` | function | `static unsigned int hash_key(const struct flow_key *key)` | file | `(key->tenant * 2654435761u + key->sport * 97u + key->dport) & 4095u` (L26) | 4/1 | `flow_table.c:L24–L27` |
| `flow_lookup` | function | `struct entry *flow_lookup(const struct flow_key *key)` | exported | `e` (L34), `NULL` (L38) | 11/3 | `flow_table.c:L29–L39` |
| `flow_insert` | function | `int flow_insert(const struct flow_key *key)` | exported | `-1` (L46), `0` (L53) | 14/2 | `flow_table.c:L41–L54` |
| `flow_account` | function | `void flow_account(struct entry *e, unsigned long bytes)` | exported | — | 5/1 | `flow_table.c:L56–L60` |
| `flow_flush` | function | `void flow_flush(void)` | exported | — | 13/3 | `flow_table.c:L62–L74` |

## Dependencies

- `<stdlib.h>` — `malloc`, `free` (`flow_table.c:L11`)
- `<string.h>` — `memcmp`, `memcpy` (`flow_table.c:L12`)
- `"packet.h"` — `flow_key` struct (`flow_table.c:L13`)

## Side Effects

- **Heap allocation:** `flow_insert` calls `malloc(sizeof(struct entry))` to allocate a new flow entry (`flow_table.c:L43`)
- **Heap free:** `flow_flush` calls `free(e)` for every entry in every bucket chain (`flow_table.c:L67–L72`)
