# src/payload_plaintext/aurora-network/src/profile_label.c

## Overview

`profile_label.c` implements the native C side of the cgo boundary between aurora-compute and aurora-network. It maintains a ring buffer of `PROFILE_SLOTS` (4) `profile_slot` entries, each holding a 32-byte label string and an applied flag. `aurora_profile_label` writes an incoming label string into the next slot using `strcpy` and increments the ring index. `aurora_profile_count` returns the number of slots that have been applied. This function is the callee for `aurora-compute/api/profile.go`'s `ApplyProfile` HTTP handler, which passes the HTTP request body's `Label` field across the cgo boundary.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `PROFILE_SLOTS` | constant | `#define PROFILE_SLOTS 4` | file | — | — | `profile_label.c:L15` |
| `profile_slot` | struct | `{ char label[32]; int applied; }` | file | — | — | `profile_label.c:L17–L20` |
| `slots` | variable | `static struct profile_slot slots[PROFILE_SLOTS]` | file | — | — | `profile_label.c:L22` |
| `slot_next` | variable | `static int slot_next` | file | — | — | `profile_label.c:L23` |
| `aurora_profile_label` | function | `int aurora_profile_label(const char *label)` | exported | `0` (L33) | 8/1 | `profile_label.c:L25–L34` |
| `aurora_profile_count` | function | `int aurora_profile_count(void)` | exported | `n` (L44) | 10/3 | `profile_label.c:L36–L45` |

## Dependencies

- `<stdio.h>` — standard I/O (`profile_label.c:L11`)
- `<string.h>` — `strcpy` (`profile_label.c:L12`)
- `"profile_label.h"` — own header (`profile_label.c:L13`)

## Security Surface

- **Buffer overflow — `aurora_profile_label`:** `strcpy(slot->label, label)` copies the caller-supplied `label` into `slot->label[32]` with no bounds check; a label string longer than 31 characters overflows the `profile_slot` struct (CWE-121). This function is the cgo callee for `aurora-compute/api/profile.go::ApplyProfile`, which passes the HTTP request body `Label` field directly — network-supplied input is reachable here (`profile_label.c:L28`)
