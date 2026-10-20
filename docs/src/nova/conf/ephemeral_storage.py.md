# src/nova/conf/ephemeral_storage.py

## Overview

This file implements the `ephemeral_storage` module, defining 2 functions, 2 variables, 1 import.

Lines: total 74, code 46, comment 15, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ephemeral_storage_encryption_group` | variable | — | exported | not declared | — | `src/nova/conf/ephemeral_storage.py:L19–L21` |
| `ephemeral_storage_encryption_opts` | variable | — | exported | not declared | — | `src/nova/conf/ephemeral_storage.py:L23–L63` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/ephemeral_storage.py:L66–L69` |
| `list_opts` | function | — | exported | `{ephemeral_storage_encryption_group: ephemeral_storage_encryption_opts}` (src/nova/conf/ephemeral_storage.py:L73) | 1/3 | `src/nova/conf/ephemeral_storage.py:L72–L74` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/ephemeral_storage.py:L17)

