# src/payload_plaintext/aurora-network/src/profile_label.h

## Overview

`profile_label.h` is the header for the aurora-network profile-label native library. It uses a standard include guard (`AURORA_PROFILE_LABEL_H`) and declares the single exported function `aurora_profile_label`, which is the entry point imported by aurora-compute via cgo. The implementation resides in `profile_label.c`.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `AURORA_PROFILE_LABEL_H` | constant | `#define AURORA_PROFILE_LABEL_H` (include guard) | file | — | — | `profile_label.h:L12` |
| `aurora_profile_label` | function | `int aurora_profile_label(const char *label)` | exported | not declared | — | `profile_label.h:L15` |
