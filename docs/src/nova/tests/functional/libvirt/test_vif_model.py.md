# src/nova/tests/functional/libvirt/test_vif_model.py

## Overview

This file implements the `test_vif_model` module, defining 1 class, 2 constants, 1 function, 5 methods, 5 imports, 2 side effects.

Lines: total 100, code 70, comment 13, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vif_model.py:L23–L23` |
| `LibvirtVifModelTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vif_model.py:L26–L100` |
| `LibvirtVifModelTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vif_model.py:L27–L27` |
| `LibvirtVifModelTest.setUp` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/libvirt/test_vif_model.py:L29–L59` |
| `LibvirtVifModelTest.test_boot_with_vif_model_igb` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_vif_model.py:L61–L78` |
| `LibvirtVifModelTest.test_boot_with_vif_model_igb.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_vif_model.py:L67) | — | `src/nova/tests/functional/libvirt/test_vif_model.py:L65–L67` |
| `LibvirtVifModelTest._test_boot_with_vif_model_igb_old_hypervisor` | method | (self, libvirt_version, qemu_version) | private | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_vif_model.py:L80–L92` |
| `LibvirtVifModelTest.test_boot_with_vif_model_igb_old_qemu` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_vif_model.py:L94–L96` |
| `LibvirtVifModelTest.test_boot_with_vif_model_igb_old_libvirt` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_vif_model.py:L98–L100` |

## Dependencies

- `import datetime` (src/nova/tests/functional/libvirt/test_vif_model.py:L15)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_vif_model.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_vif_model.py:L18)
- `import nova` (src/nova/tests/functional/libvirt/test_vif_model.py:L20)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_vif_model.py:L21)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_vif_model.py:L23)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_vif_model.py:L27)

