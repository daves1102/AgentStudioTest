# src/nova/virt/libvirt/volume/iser.py

## Overview

This file implements the `iser` module, defining 1 class, 1 constant, 2 methods, 5 imports, 1 side effect.

Lines: total 40, code 18, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/volume/iser.py:L21–L21` |
| `LibvirtISERVolumeDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/volume/iser.py:L24–L40` |
| `LibvirtISERVolumeDriver.__init__` | method | (self, connection) | public | not declared | 1/8 | `src/nova/virt/libvirt/volume/iser.py:L27–L37` |
| `LibvirtISERVolumeDriver._get_transport` | method | (self) | private | `'iser'` (src/nova/virt/libvirt/volume/iser.py:L40) | 1/2 | `src/nova/virt/libvirt/volume/iser.py:L39–L40` |

## Dependencies

- `os_brick`: imports `initiator` (src/nova/virt/libvirt/volume/iser.py:L13)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/volume/iser.py:L14)
- `import nova.conf` (src/nova/virt/libvirt/volume/iser.py:L16)
- `nova`: imports `utils` (src/nova/virt/libvirt/volume/iser.py:L17)
- `nova.virt.libvirt.volume`: imports `iscsi` (src/nova/virt/libvirt/volume/iser.py:L18)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/volume/iser.py:L21)

