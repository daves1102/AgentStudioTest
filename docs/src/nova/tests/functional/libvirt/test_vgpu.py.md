# src/nova/tests/functional/libvirt/test_vgpu.py

## Overview

This file implements the `test_vgpu` module, defining 7 classs, 7 constants, 2 fields, 1 function, 29 methods, 16 imports, 15 side effects, 1 security surface entry.

Lines: total 850, code 577, comment 166, blank 107

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L33–L33` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L34–L34` |
| `VGPUTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L37–L189` |
| `VGPUTestBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L39–L39` |
| `VGPUTestBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L40–L40` |
| `VGPUTestBase.FAKE_LIBVIRT_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L42–L42` |
| `VGPUTestBase.FAKE_QEMU_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L43–L43` |
| `VGPUTestBase._current_host` | field | — | private | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L47–L47` |
| `VGPUTestBase.setUp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_vgpu.py:L49–L90` |
| `VGPUTestBase.setUp.fake_get_vgpu_type_per_pgpu` | function | (_self, *args) | public | `orig_get_vgpu_type_per_pgpu(_self, *args)` (src/nova/tests/functional/libvirt/test_vgpu.py:L84) | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L80–L84` |
| `VGPUTestBase.pci2libvirt_address` | method | (self, address) | public | `"pci_{}_{}_{}_{}".format(*re.split("[.:]", address))` (src/nova/tests/functional/libvirt/test_vgpu.py:L93) | 1/2 | `src/nova/tests/functional/libvirt/test_vgpu.py:L92–L93` |
| `VGPUTestBase.libvirt2pci_address` | method | (self, dev_name) | public | `"{}:{}:{}.{}".format(*dev_name[4:].split('_'))` (src/nova/tests/functional/libvirt/test_vgpu.py:L96) | 1/2 | `src/nova/tests/functional/libvirt/test_vgpu.py:L95–L96` |
| `VGPUTestBase._create_mdev` | method | (self, dev_name, mdev_type, uuid=None) | private | `uuid` (src/nova/tests/functional/libvirt/test_vgpu.py:L113) | 2/11 | `src/nova/tests/functional/libvirt/test_vgpu.py:L98–L113` |
| `VGPUTestBase.start_compute_with_vgpu` | method | (self, hostname, pci_info=None) | public | `compute` (src/nova/tests/functional/libvirt/test_vgpu.py:L138) | 4/22 | `src/nova/tests/functional/libvirt/test_vgpu.py:L115–L138` |
| `VGPUTestBase._confirm_resize` | method | (self, server, host='host1') | private | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_vgpu.py:L140–L151` |
| `VGPUTestBase.assert_mdev_usage` | method | (self, compute, expected_amount, instance=None, expected_rc=orc.VGPU, expected_rp_name=None) | public | not declared | 7/21 | `src/nova/tests/functional/libvirt/test_vgpu.py:L153–L189` |
| `VGPUTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L192–L333` |
| `VGPUTests.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_vgpu.py:L194–L204` |
| `VGPUTests.assert_vgpu_usage_for_compute` | method | (self, compute, expected) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_vgpu.py:L206–L207` |
| `VGPUTests.test_create_servers_with_vgpu` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_vgpu.py:L209–L214` |
| `VGPUTests.test_resize_servers_with_vgpu` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/libvirt/test_vgpu.py:L216–L249` |
| `VGPUTests.test_multiple_instance_create` | method | (self) | public | not declared | 2/15 | `src/nova/tests/functional/libvirt/test_vgpu.py:L251–L272` |
| `VGPUTests.test_multiple_instance_create_filling_up_capacity` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/libvirt/test_vgpu.py:L274–L312` |
| `VGPUTests.test_create_server_with_two_vgpus_isolated` | method | (self) | public | not declared | 3/15 | `src/nova/tests/functional/libvirt/test_vgpu.py:L314–L333` |
| `VGPUMultipleTypesTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L336–L448` |
| `VGPUMultipleTypesTests.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_vgpu.py:L338–L365` |
| `VGPUMultipleTypesTests.test_create_servers_with_vgpu` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_vgpu.py:L367–L393` |
| `VGPUMultipleTypesTests.test_create_servers_with_specific_type` | method | (self) | public | not declared | 2/33 | `src/nova/tests/functional/libvirt/test_vgpu.py:L395–L448` |
| `VGPULimitMultipleTypesTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L451–L526` |
| `VGPULimitMultipleTypesTests.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/libvirt/test_vgpu.py:L453–L481` |
| `VGPULimitMultipleTypesTests.test_create_servers_with_vgpu` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_vgpu.py:L483–L526` |
| `VGPULiveMigrationTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L529–L678` |
| `VGPULiveMigrationTests.FAKE_LIBVIRT_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L532–L532` |
| `VGPULiveMigrationTests.FAKE_QEMU_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L533–L533` |
| `VGPULiveMigrationTests.setUp` | method | (self) | public | not declared | 2/32 | `src/nova/tests/functional/libvirt/test_vgpu.py:L535–L579` |
| `VGPULiveMigrationTests.test_live_migration_fails_on_old_source` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_vgpu.py:L581–L606` |
| `VGPULiveMigrationTests.test_live_migration_fails_on_old_destination` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/libvirt/test_vgpu.py:L608–L638` |
| `VGPULiveMigrationTests.test_live_migration_fails_due_to_non_supported_mdev_types` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/libvirt/test_vgpu.py:L640–L666` |
| `VGPULiveMigrationTests.test_live_migrate_server` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_vgpu.py:L668–L678` |
| `VGPULiveMigrationTestsLMFailed` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L681–L722` |
| `VGPULiveMigrationTestsLMFailed._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_vgpu.py:L687–L708` |
| `VGPULiveMigrationTestsLMFailed.test_live_migrate_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/libvirt/test_vgpu.py:L710–L722` |
| `DifferentMdevClassesTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vgpu.py:L725–L850` |
| `DifferentMdevClassesTests.setUp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_vgpu.py:L727–L761` |
| `DifferentMdevClassesTests.test_create_servers_with_different_mdev_classes` | method | (self) | public | not declared | 2/22 | `src/nova/tests/functional/libvirt/test_vgpu.py:L763–L795` |
| `DifferentMdevClassesTests.test_resize_servers_with_mlx5` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/libvirt/test_vgpu.py:L797–L850` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/libvirt/test_vgpu.py:L14)
- `import re` (src/nova/tests/functional/libvirt/test_vgpu.py:L15)
- `import collections` (src/nova/tests/functional/libvirt/test_vgpu.py:L17)
- `import os_resource_classes as orc` (src/nova/tests/functional/libvirt/test_vgpu.py:L18)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_vgpu.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_vgpu.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/libvirt/test_vgpu.py:L21)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/libvirt/test_vgpu.py:L23)
- `import nova.conf` (src/nova/tests/functional/libvirt/test_vgpu.py:L24)
- `nova`: imports `context` (src/nova/tests/functional/libvirt/test_vgpu.py:L25)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_vgpu.py:L26)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_vgpu.py:L27)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/libvirt/test_vgpu.py:L28)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_vgpu.py:L29)
- `nova.virt.libvirt`: imports `driver as libvirt_driver` (src/nova/tests/functional/libvirt/test_vgpu.py:L30)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/functional/libvirt/test_vgpu.py:L31)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_vgpu.py:L33)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_vgpu.py:L34)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_vgpu.py:L40)
- **global-mutation**: FAKE_LIBVIRT_VERSION = 8000000 (src/nova/tests/functional/libvirt/test_vgpu.py:L42)
- **global-mutation**: FAKE_QEMU_VERSION = 6002000 (src/nova/tests/functional/libvirt/test_vgpu.py:L43)
- **global-mutation**: MDEVCAP_DEV1_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L353)
- **global-mutation**: MDEVCAP_DEV2_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L355)
- **global-mutation**: MDEVCAP_DEV1_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L468)
- **global-mutation**: MDEVCAP_DEV2_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L470)
- **global-mutation**: FAKE_LIBVIRT_VERSION = 8006000 (src/nova/tests/functional/libvirt/test_vgpu.py:L532)
- **global-mutation**: FAKE_QEMU_VERSION = 8001000 (src/nova/tests/functional/libvirt/test_vgpu.py:L533)
- **global-mutation**: MDEVCAP_DEV1_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L549)
- **global-mutation**: MDEVCAP_DEV2_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L551)
- **global-mutation**: MDEVCAP_DEV1_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L742)
- **global-mutation**: MDEVCAP_DEV2_PCI_ADDR = self.libvirt2pci_address( (src/nova/tests/functional/libvirt/test_vgpu.py:L744)

## Security Surface

- **sink** (`db-write`): connection.mdev_info.devices.update( (src/nova/tests/functional/libvirt/test_vgpu.py:L109)

