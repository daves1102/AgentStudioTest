# src/nova/tests/functional/libvirt/test_stateless_firmware.py

## Overview

This file implements the `test_stateless_firmware` module, defining 1 class, 2 constants, 1 field, 3 functions, 15 methods, 12 imports, 2 side effects.

Lines: total 298, code 199, comment 42, blank 57

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L28–L28` |
| `LibvirtStatelessFirmwareTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L31–L298` |
| `LibvirtStatelessFirmwareTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L37–L37` |
| `LibvirtStatelessFirmwareTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L39–L39` |
| `LibvirtStatelessFirmwareTest.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L41–L76` |
| `LibvirtStatelessFirmwareTest.setUp._get_guest_config` | function | (_self, *args, **kwargs) | private | `self.guest_configs[instance.uuid]` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L61) | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L57–L61` |
| `LibvirtStatelessFirmwareTest.setUp.fake_path` | function | (_self, *args, **kwargs) | public | `CONF.instances_path` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L73) | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L72–L73` |
| `LibvirtStatelessFirmwareTest._start_compute` | method | (self, hostname='compute1') | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L78–L85` |
| `LibvirtStatelessFirmwareTest._create_server_with_stateless_firmware` | method | (self) | private | `server` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L93) | 1/7 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L87–L93` |
| `LibvirtStatelessFirmwareTest._create_server_without_stateless_firmware` | method | (self) | private | `server` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L101) | 1/7 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L95–L101` |
| `LibvirtStatelessFirmwareTest._assert_server_has_stateless_firmware` | method | (self, server_id) | private | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L103–L111` |
| `LibvirtStatelessFirmwareTest._assert_server_has_no_stateless_firmware` | method | (self, server_id) | private | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L113–L121` |
| `LibvirtStatelessFirmwareTest.test_create_server` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L123–L131` |
| `LibvirtStatelessFirmwareTest.test_live_migrate_server` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L133–L157` |
| `LibvirtStatelessFirmwareTest.test_live_migrate_server.migration_xml_wrapper` | function | (*args, **kwargs) | public | `self.migration_xml` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L147) | — | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L145–L147` |
| `LibvirtStatelessFirmwareTest.test_migrate_server` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L159–L177` |
| `LibvirtStatelessFirmwareTest.test_migrate_server_revert` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L179–L198` |
| `LibvirtStatelessFirmwareTest.test_shelve_and_unshelve_to_same_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L200–L210` |
| `LibvirtStatelessFirmwareTest.test_shelve_and_unshelve_to_different_host` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L212–L232` |
| `LibvirtStatelessFirmwareTest.test_evacuate_server` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L234–L253` |
| `LibvirtStatelessFirmwareTest.test_rescue_unrescue_server` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L255–L284` |
| `LibvirtStatelessFirmwareTest.test_rebuild_server` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_stateless_firmware.py:L286–L298` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L13)
- `import fixtures` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L14)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L15)
- `lxml`: imports `etree` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L18)
- `oslo_utils`: imports `versionutils` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L19)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L21)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L22)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L23)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L24)
- `nova.virt.libvirt`: imports `driver as libvirt_driver` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L25)
- `nova.virt.libvirt`: imports `migration as libvirt_migration` (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L26)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L28)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_stateless_firmware.py:L37)

