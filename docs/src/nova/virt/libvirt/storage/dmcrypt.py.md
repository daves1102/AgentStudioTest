# src/nova/virt/libvirt/storage/dmcrypt.py

## Overview

This file implements the `dmcrypt` module, defining 1 constant, 5 functions, 1 variable, 5 imports, 5 side effects, 3 security surface entries.

Lines: total 90, code 53, comment 18, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/storage/dmcrypt.py:L25–L25` |
| `_dmcrypt_suffix` | variable | — | unexported | not declared | — | `src/nova/virt/libvirt/storage/dmcrypt.py:L27–L27` |
| `volume_name` | function | (base) | exported | `base + _dmcrypt_suffix` (src/nova/virt/libvirt/storage/dmcrypt.py:L36) | 1/2 | `src/nova/virt/libvirt/storage/dmcrypt.py:L30–L36` |
| `is_encrypted` | function | (path) | exported | `path.rpartition('/')[2].endswith(_dmcrypt_suffix)` (src/nova/virt/libvirt/storage/dmcrypt.py:L42); `False` (src/nova/virt/libvirt/storage/dmcrypt.py:L44) | 2/5 | `src/nova/virt/libvirt/storage/dmcrypt.py:L39–L44` |
| `create_volume` | function | (target, device, cipher, key_size, key) | exported | not declared | 2/8 | `src/nova/virt/libvirt/storage/dmcrypt.py:L47–L62` |
| `delete_volume` | function | (target) | exported | not declared | 3/12 | `src/nova/virt/libvirt/storage/dmcrypt.py:L65–L84` |
| `list_volumes` | function | — | exported | `[dmdev for dmdev in os.listdir('/dev/mapper') if dmdev.endswith('-dmcrypt')]` (src/nova/virt/libvirt/storage/dmcrypt.py:L89) | 3/3 | `src/nova/virt/libvirt/storage/dmcrypt.py:L87–L90` |

## Dependencies

- `import os` (src/nova/virt/libvirt/storage/dmcrypt.py:L16)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/storage/dmcrypt.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/storage/dmcrypt.py:L19)
- `oslo_utils`: imports `excutils` (src/nova/virt/libvirt/storage/dmcrypt.py:L20)
- `import nova.privsep.libvirt` (src/nova/virt/libvirt/storage/dmcrypt.py:L22)

## Side Effects

- **process-spawn**: import nova.privsep.libvirt (src/nova/virt/libvirt/storage/dmcrypt.py:L22)
- **process-spawn**: nova.privsep.libvirt.dmcrypt_create_volume( (src/nova/virt/libvirt/storage/dmcrypt.py:L57)
- **process-spawn**: nova.privsep.libvirt.dmcrypt_delete_volume(target) (src/nova/virt/libvirt/storage/dmcrypt.py:L71)
- **file-io**: return [dmdev for dmdev in os.listdir('/dev/mapper') (src/nova/virt/libvirt/storage/dmcrypt.py:L89)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/storage/dmcrypt.py:L25)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/virt/libvirt/storage/dmcrypt.py:L22)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.dmcrypt_create_volume( (src/nova/virt/libvirt/storage/dmcrypt.py:L57)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.dmcrypt_delete_volume(target) (src/nova/virt/libvirt/storage/dmcrypt.py:L71)

