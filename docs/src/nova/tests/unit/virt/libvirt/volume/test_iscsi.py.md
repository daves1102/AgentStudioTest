# src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py

## Overview

This file implements the `test_iscsi` module, defining 1 class, 5 methods, 5 imports.

Lines: total 103, code 70, comment 12, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtISCSIVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L21–L103` |
| `LibvirtISCSIVolumeDriverTestCase.test_libvirt_iscsi_driver` | method | (self, transport=None) | public | not declared | 3/9 | `src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L24–L32` |
| `LibvirtISCSIVolumeDriverTestCase.test_libvirt_iscsi_driver_get_config` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L34–L46` |
| `LibvirtISCSIVolumeDriverTestCase.test_libvirt_iscsi_driver_get_config_default_aio_mode` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L48–L62` |
| `LibvirtISCSIVolumeDriverTestCase.test_libvirt_iscsi_driver_disconnect_volume_with_devicenotfound` | method | (self, mock_LOG_warning) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L65–L87` |
| `LibvirtISCSIVolumeDriverTestCase.test_extend_volume` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L89–L103` |

## Dependencies

- `os_brick`: imports `exception as os_brick_exception` (src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L13)
- `os_brick.initiator`: imports `connector` (src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L14)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L15)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L17)
- `nova.virt.libvirt.volume`: imports `iscsi` (src/nova/tests/unit/virt/libvirt/volume/test_iscsi.py:L18)

