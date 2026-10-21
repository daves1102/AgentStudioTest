# src/nova/tests/unit/virt/libvirt/volume/test_lightos.py

## Overview

This file implements the `test_lightos` module, defining 1 class, 4 methods, 4 imports.

Lines: total 85, code 59, comment 12, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtLightVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L21–L85` |
| `LibvirtLightVolumeDriverTestCase.test_libvirt_lightos_driver` | method | (self, mock_factory, mock_helper) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L25–L30` |
| `LibvirtLightVolumeDriverTestCase.test_libvirt_lightos_driver_connect` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L34–L52` |
| `LibvirtLightVolumeDriverTestCase.test_libvirt_lightos_driver_disconnect` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L56–L71` |
| `LibvirtLightVolumeDriverTestCase.test_libvirt_lightos_driver_get_config` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L75–L85` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L13)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L15)
- `nova.virt.libvirt.volume`: imports `lightos` (src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L16)
- `os_brick`: imports `initiator` (src/nova/tests/unit/virt/libvirt/volume/test_lightos.py:L18)

