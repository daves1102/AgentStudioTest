# src/nova/tests/unit/virt/libvirt/volume/test_storpool.py

## Overview

This file implements the `test_storpool` module, defining 4 classs, 4 functions, 13 methods, 1 variable, 4 imports.

Lines: total 191, code 129, comment 17, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `test_attached` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L22–L22` |
| `MockStorPoolExc` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L25–L27` |
| `MockStorPoolExc.__init__` | method | (self, msg) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L26–L27` |
| `storpoolVolumeName` | function | (vid) | exported | `'os--volume--{id}'.format(id=vid)` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L31) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L30–L31` |
| `storpoolVolumePath` | function | (vid) | exported | `'/dev/storpool/' + storpoolVolumeName(vid)` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L35) | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L34–L35` |
| `MockStorPoolConnector` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L38–L75` |
| `MockStorPoolConnector.__init__` | method | (self, inst) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L39–L40` |
| `MockStorPoolConnector.connect_volume` | method | (self, connection_info) | public | `{'type': 'block', 'path': test_attached[v]['path']}` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L54) | 2/12 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L42–L54` |
| `MockStorPoolConnector.disconnect_volume` | method | (self, connection_info, device_info, **kwargs) | public | not declared | 2/10 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L56–L66` |
| `MockStorPoolConnector.extend_volume` | method | (self, connection_info) | public | `connection_info['real_size']` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L75) | 2/7 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L68–L75` |
| `MockStorPoolInitiator` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L78–L85` |
| `MockStorPoolInitiator.__init__` | method | (self, inst) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L79–L80` |
| `MockStorPoolInitiator.factory` | method | (self, proto, helper) | public | `MockStorPoolConnector(self.inst)` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L85) | 1/4 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L82–L85` |
| `LibvirtStorPoolVolumeDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L88–L191` |
| `LibvirtStorPoolVolumeDriverTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L91–L94` |
| `LibvirtStorPoolVolumeDriverTestCase.mock_storpool` | method | (f) | public | `_config_inner_inner1` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L106) | 1/3 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L96–L106` |
| `LibvirtStorPoolVolumeDriverTestCase.mock_storpool._config_inner_inner1` | function | (inst, *args, **kwargs) | private | `_config_inner_inner2()` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L104) | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L97–L104` |
| `LibvirtStorPoolVolumeDriverTestCase.mock_storpool._config_inner_inner1._config_inner_inner2` | function | — | private | `f(inst, *args, **kwargs)` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L102) | — | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L101–L102` |
| `LibvirtStorPoolVolumeDriverTestCase.assertStorpoolAttached` | method | (self, names) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L108–L109` |
| `LibvirtStorPoolVolumeDriverTestCase.conn_info` | method | (self, volume_id) | public | `{ 'data': { 'access_mode': 'rw', 'client_id': '1', 'volume': volume_id, 'real_size': 42 if volume_id == '1' else 616 }, 'serial': volume_id }` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L112) | 2/9 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L111–L119` |
| `LibvirtStorPoolVolumeDriverTestCase.test_storpool_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L122–L129` |
| `LibvirtStorPoolVolumeDriverTestCase.test_storpool_attach_detach_extend` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L132–L191` |

## Dependencies

- `os_brick`: imports `initiator` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L17)
- `nova.tests.unit.virt.libvirt.volume`: imports `test_volume` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L19)
- `nova.virt.libvirt.volume`: imports `storpool as vol_sp` (src/nova/tests/unit/virt/libvirt/volume/test_storpool.py:L20)

