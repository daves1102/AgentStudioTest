# src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py

## Overview

This file implements the `test_scaleio` module, defining 1 class, 4 methods, 3 imports.

Lines: total 72, code 48, comment 15, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtScaleIOVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L22–L72` |
| `LibvirtScaleIOVolumeDriverTestCase.test_libvirt_scaleio_driver_connect` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L27–L34` |
| `LibvirtScaleIOVolumeDriverTestCase.test_libvirt_scaleio_driver_get_config` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L38–L43` |
| `LibvirtScaleIOVolumeDriverTestCase.test_libvirt_scaleio_driver_disconnect` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L47–L58` |
| `LibvirtScaleIOVolumeDriverTestCase.test_libvirt_scaleio_driver_extend_volume` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L62–L72` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L16)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L18)
- `nova.virt.libvirt.volume`: imports `scaleio` (src/nova/tests/unit/virt/libvirt/volume/test_scaleio.py:L19)

