# src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py

## Overview

This file implements the `test_fibrechannel` module, defining 1 class, 8 methods, 6 imports.

Lines: total 119, code 83, comment 12, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtFibreChannelVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L23–L119` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_libvirt_fibrechan_driver` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L26–L35` |
| `LibvirtFibreChannelVolumeDriverTestCase._test_libvirt_fibrechan_driver_s390` | method | (self) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L37–L41` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_libvirt_fibrechan_driver_s390` | method | (self, mock_machine) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L45–L46` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_libvirt_fibrechan_driver_s390x` | method | (self, mock_machine) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L50–L51` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_libvirt_fibrechan_driver_get_config` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L53–L66` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_libvirt_fibrechan_driver_get_config_default_aio_mode` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L68–L82` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_extend_volume` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L84–L99` |
| `LibvirtFibreChannelVolumeDriverTestCase.test_disconnect_volume` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L101–L119` |

## Dependencies

- `import platform` (src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L14)
- `os_brick.initiator`: imports `connector` (src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L16)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L18)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L19)
- `nova.virt.libvirt.volume`: imports `fibrechannel` (src/nova/tests/unit/virt/libvirt/volume/test_fibrechannel.py:L20)

