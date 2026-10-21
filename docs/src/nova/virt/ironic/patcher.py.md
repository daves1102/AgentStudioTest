# src/nova/virt/ironic/patcher.py

## Overview

This file implements the `patcher` module, defining 1 class, 1 constant, 1 function, 2 methods, 2 imports, 1 side effect.

Lines: total 138, code 90, comment 30, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/ironic/patcher.py:L26–L26` |
| `create` | function | (node) | exported | `GenericDriverFields(node)` (src/nova/virt/ironic/patcher.py:L35) | 1/2 | `src/nova/virt/ironic/patcher.py:L29–L35` |
| `GenericDriverFields` | class | — | exported | not declared | — | `src/nova/virt/ironic/patcher.py:L38–L138` |
| `GenericDriverFields.__init__` | method | (self, node) | public | not declared | 1/2 | `src/nova/virt/ironic/patcher.py:L40–L41` |
| `GenericDriverFields.get_deploy_patch` | method | (self, instance, image_meta, flavor, metadata, preserve_ephemeral=None, boot_from_volume=False) | public | `patch` (src/nova/virt/ironic/patcher.py:L138) | 12/64 | `src/nova/virt/ironic/patcher.py:L43–L138` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/virt/ironic/patcher.py:L21)
- `import nova.conf` (src/nova/virt/ironic/patcher.py:L24)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/ironic/patcher.py:L26)

