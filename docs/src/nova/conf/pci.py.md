# src/nova/conf/pci.py

## Overview

This file implements the `pci` module, defining 2 functions, 2 variables, 1 import.

Lines: total 388, code 305, comment 15, blank 68

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `pci_group` | variable | — | exported | not declared | — | `src/nova/conf/pci.py:L19–L21` |
| `pci_opts` | variable | — | exported | not declared | — | `src/nova/conf/pci.py:L23–L379` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/pci.py:L382–L384` |
| `list_opts` | function | — | exported | `{pci_group: pci_opts}` (src/nova/conf/pci.py:L388) | 1/2 | `src/nova/conf/pci.py:L387–L388` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/pci.py:L17)

