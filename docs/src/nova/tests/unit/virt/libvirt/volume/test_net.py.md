# src/nova/tests/unit/virt/libvirt/volume/test_net.py

## Overview

This file implements the `test_net` module, defining 1 class, 1 constant, 11 methods, 4 imports, 1 side effect.

Lines: total 216, code 172, comment 17, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L19–L19` |
| `LibvirtNetVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L22–L216` |
| `LibvirtNetVolumeDriverTestCase._assertNetworkAndProtocolEquals` | method | (self, tree) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L26–L30` |
| `LibvirtNetVolumeDriverTestCase._assertISCSINetworkAndProtocolEquals` | method | (self, tree) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L32–L36` |
| `LibvirtNetVolumeDriverTestCase.rbd_connection` | method | (self, volume) | public | `{ 'driver_volume_type': 'rbd', 'data': { 'name': '%s/%s' % ('rbd', volume['name']), 'auth_enabled': CONF.libvirt.rbd_user is not None, 'auth_username': CONF.libvirt.rbd_user, 'secret_type': 'ceph', 's` (src/nova/tests/unit/virt/libvirt/volume/test_net.py:L39) | 1/15 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L38–L52` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L54–L64` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver_hosts` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L66–L81` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver_auth_enabled` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L83–L99` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver_auth_enabled_flags` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L101–L125` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver_auth_enabled_flags_secret_uuid_fallback` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L127–L159` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver_auth_disabled` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L161–L175` |
| `LibvirtNetVolumeDriverTestCase.test_libvirt_rbd_driver_auth_disabled_flags_override` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L177–L201` |
| `LibvirtNetVolumeDriverTestCase.test_extend_volume` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/volume/test_net.py:L203–L216` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_net.py:L13)
- `import nova.conf` (src/nova/tests/unit/virt/libvirt/volume/test_net.py:L15)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_net.py:L16)
- `nova.virt.libvirt.volume`: imports `net` (src/nova/tests/unit/virt/libvirt/volume/test_net.py:L17)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/libvirt/volume/test_net.py:L19)

