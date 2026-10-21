# src/nova/tests/unit/virt/libvirt/volume/test_nvme.py

## Overview

This file implements the `test_nvme` module, defining 1 class, 6 methods, 4 imports, 3 side effects.

Lines: total 114, code 83, comment 12, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtNVMEVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L21–L114` |
| `LibvirtNVMEVolumeDriverTestCase.test_libvirt_nvme_driver` | method | (self, mock_factory, mock_helper, exists) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L26–L33` |
| `LibvirtNVMEVolumeDriverTestCase.test_libvirt_nvme_driver_multipath` | method | (self, mock_factory, mock_helper, exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L38–L47` |
| `LibvirtNVMEVolumeDriverTestCase.test_libvirt_nvme_driver_multipath_enforced` | method | (self, mock_factory, mock_helper, exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L52–L61` |
| `LibvirtNVMEVolumeDriverTestCase.test_libvirt_nvme_driver_connect` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L65–L81` |
| `LibvirtNVMEVolumeDriverTestCase.test_libvirt_nvme_driver_disconnect` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L85–L100` |
| `LibvirtNVMEVolumeDriverTestCase.test_libvirt_nvme_driver_get_config` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L104–L114` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L13)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L15)
- `nova.virt.libvirt.volume`: imports `nvme` (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L16)
- `os_brick`: imports `initiator` (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L18)

## Side Effects

- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L23)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L35)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/volume/test_nvme.py:L49)

