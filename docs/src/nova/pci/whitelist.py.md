# src/nova/pci/whitelist.py

## Overview

This file implements the `whitelist` module, defining 1 class, 4 methods, 1 staticmethod, 6 imports.

Lines: total 107, code 74, comment 15, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Whitelist` | class | — | exported | not declared | — | `src/nova/pci/whitelist.py:L27–L107` |
| `Whitelist.__init__` | method | (self, whitelist_spec=None) | public | not declared | 2/5 | `src/nova/pci/whitelist.py:L36–L53` |
| `Whitelist._parse_white_list_from_config` | method | (whitelists) | private | `specs` (src/nova/pci/whitelist.py:L83) | 7/24 | `src/nova/pci/whitelist.py:L56–L83` |
| `Whitelist.device_assignable` | method | (self, dev) | public | `spec` (src/nova/pci/whitelist.py:L97); `None` (src/nova/pci/whitelist.py:L98) | 3/7 | `src/nova/pci/whitelist.py:L85–L98` |
| `Whitelist.get_devspec` | method | (self, pci_dev) | public | `spec` (src/nova/pci/whitelist.py:L105); `None` (src/nova/pci/whitelist.py:L107) | 3/7 | `src/nova/pci/whitelist.py:L100–L107` |
| `Whitelist._parse_white_list_from_config` | staticmethod | — | private | not declared | — | `src/nova/pci/whitelist.py:L55–L83` |

## Dependencies

- `import typing as ty` (src/nova/pci/whitelist.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/pci/whitelist.py:L19)
- `nova`: imports `exception` (src/nova/pci/whitelist.py:L21)
- `nova.i18n`: imports `_` (src/nova/pci/whitelist.py:L22)
- `nova`: imports `objects` (src/nova/pci/whitelist.py:L23)
- `nova.pci`: imports `devspec` (src/nova/pci/whitelist.py:L24)

