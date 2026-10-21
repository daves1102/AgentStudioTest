# src/nova/virt/libvirt/machine_type_utils.py

## Overview

This file implements the `machine_type_utils` module, defining 2 constants, 7 functions, 7 imports, 2 side effects, 7 security surface entries.

Lines: total 225, code 154, comment 30, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SUPPORTED_TYPE_PATTERNS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/machine_type_utils.py:L23–L38` |
| `ALLOWED_UPDATE_VM_STATES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/machine_type_utils.py:L41–L45` |
| `get_machine_type` | function | (context, instance_uuid) | exported | `instance.image_meta.properties.get('hw_machine_type')` (src/nova/virt/libvirt/machine_type_utils.py:L67) | 1/9 | `src/nova/virt/libvirt/machine_type_utils.py:L48–L67` |
| `_check_machine_type_support` | function | (mtype) | unexported | not declared | 4/5 | `src/nova/virt/libvirt/machine_type_utils.py:L70–L83` |
| `_check_update_to_existing_type` | function | (existing_type, machine_type) | unexported | not declared | 6/17 | `src/nova/virt/libvirt/machine_type_utils.py:L86–L117` |
| `_check_vm_state` | function | (instance) | unexported | not declared | 2/7 | `src/nova/virt/libvirt/machine_type_utils.py:L120–L131` |
| `update_machine_type` | function | (context, instance_uuid, machine_type, force=False) | exported | `machine_type, existing_mtype` (src/nova/virt/libvirt/machine_type_utils.py:L158); `machine_type, existing_mtype` (src/nova/virt/libvirt/machine_type_utils.py:L164); `machine_type, existing_mtype` (src/nova/virt/libvirt/machine_type_utils.py:L180) | 5/24 | `src/nova/virt/libvirt/machine_type_utils.py:L134–L180` |
| `_get_instances_without_mtype` | function | (context) | unexported | `instances_without` (src/nova/virt/libvirt/machine_type_utils.py:L198) | 5/11 | `src/nova/virt/libvirt/machine_type_utils.py:L183–L198` |
| `get_instances_without_type` | function | (context, cell_uuid=None) | exported | `list(itertools.chain(*[r for c, r in results.items()]))` (src/nova/virt/libvirt/machine_type_utils.py:L225) | 3/16 | `src/nova/virt/libvirt/machine_type_utils.py:L201–L225` |

## Dependencies

- `import itertools` (src/nova/virt/libvirt/machine_type_utils.py:L13)
- `import re` (src/nova/virt/libvirt/machine_type_utils.py:L14)
- `nova.compute`: imports `vm_states` (src/nova/virt/libvirt/machine_type_utils.py:L16)
- `nova`: imports `context as nova_context` (src/nova/virt/libvirt/machine_type_utils.py:L17)
- `nova`: imports `exception` (src/nova/virt/libvirt/machine_type_utils.py:L18)
- `nova`: imports `objects` (src/nova/virt/libvirt/machine_type_utils.py:L19)
- `oslo_utils`: imports `versionutils` (src/nova/virt/libvirt/machine_type_utils.py:L20)

## Side Effects

- **global-mutation**: SUPPORTED_TYPE_PATTERNS = [ (src/nova/virt/libvirt/machine_type_utils.py:L23)
- **global-mutation**: ALLOWED_UPDATE_VM_STATES = [ (src/nova/virt/libvirt/machine_type_utils.py:L41)

## Security Surface

- **sink** (`db-write`): """Check the update to an existing machine type (src/nova/virt/libvirt/machine_type_utils.py:L90)
- **sink** (`db-write`): of the same type during an update. (src/nova/virt/libvirt/machine_type_utils.py:L94)
- **sink** (`db-write`): state=instance.vm_state, method='update machine type.') (src/nova/virt/libvirt/machine_type_utils.py:L131)
- **sink** (`db-write`): """Set or update the stored machine type of an instance (src/nova/virt/libvirt/machine_type_utils.py:L140)
- **sink** (`db-write`): :param instance_uuid: Instance UUID to update. (src/nova/virt/libvirt/machine_type_utils.py:L142)
- **sink** (`db-write`): :param machine_type: Machine type to update. (src/nova/virt/libvirt/machine_type_utils.py:L143)
- **sink** (`db-write`): :param force: If the update should be forced. (src/nova/virt/libvirt/machine_type_utils.py:L144)

