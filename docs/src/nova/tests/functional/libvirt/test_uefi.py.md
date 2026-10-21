# src/nova/tests/functional/libvirt/test_uefi.py

## Overview

This file implements the `test_uefi` module, defining 2 classs, 2 constants, 11 functions, 9 methods, 15 imports, 8 side effects.

Lines: total 770, code 618, comment 53, blank 99

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_uefi.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_uefi.py:L35–L35` |
| `UEFIServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_uefi.py:L39–L422` |
| `UEFIServersTest.assertInstanceHasUEFI` | method | (self, server, secure_boot=False, stateless=False) | public | not declared | 3/25 | `src/nova/tests/functional/libvirt/test_uefi.py:L41–L67` |
| `UEFIServersTest.test_create_server` | method | (self) | public | not declared | 1/35 | `src/nova/tests/functional/libvirt/test_uefi.py:L69–L131` |
| `UEFIServersTest.test_create_server.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L90) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L72–L90` |
| `UEFIServersTest.test_create_server_secure_boot` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/libvirt/test_uefi.py:L133–L196` |
| `UEFIServersTest.test_create_server_secure_boot.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L154) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L136–L154` |
| `UEFIServersTest.test_create_server_stateless` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/libvirt/test_uefi.py:L198–L261` |
| `UEFIServersTest.test_create_server_stateless.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L219) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L201–L219` |
| `UEFIServersTest.test_create_server_secure_boot_stateless` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/libvirt/test_uefi.py:L263–L328` |
| `UEFIServersTest.test_create_server_secure_boot_stateless.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L284) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L266–L284` |
| `UEFIServersTest.test_create_server_bios_boot_stateless` | method | (self, firmware_type, stateless, mock_log) | public | not declared | 3/58 | `src/nova/tests/functional/libvirt/test_uefi.py:L338–L422` |
| `UEFIServersTest.test_create_server_bios_boot_stateless.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L361) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L347–L361` |
| `UEFIServersFirmwareTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_uefi.py:L425–L770` |
| `UEFIServersFirmwareTest.test_hard_reboot` | method | (self) | public | not declared | 1/69 | `src/nova/tests/functional/libvirt/test_uefi.py:L427–L579` |
| `UEFIServersFirmwareTest.test_hard_reboot.fake_path_exists` | function | (path) | public | `code_exists` (src/nova/tests/functional/libvirt/test_uefi.py:L435); `nvram_template_exists` (src/nova/tests/functional/libvirt/test_uefi.py:L437); `orig_path_exists(path)` (src/nova/tests/functional/libvirt/test_uefi.py:L439) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L433–L439` |
| `UEFIServersFirmwareTest.test_hard_reboot.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L497) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L449–L497` |
| `UEFIServersFirmwareTest.test_rebuild` | method | (self) | public | not declared | 1/39 | `src/nova/tests/functional/libvirt/test_uefi.py:L581–L674` |
| `UEFIServersFirmwareTest.test_rebuild.fake_path_exists` | function | (path) | public | `True` (src/nova/tests/functional/libvirt/test_uefi.py:L586); `True` (src/nova/tests/functional/libvirt/test_uefi.py:L588); `orig_path_exists(path)` (src/nova/tests/functional/libvirt/test_uefi.py:L590) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L584–L590` |
| `UEFIServersFirmwareTest.test_rebuild.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L631) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L597–L631` |
| `UEFIServersFirmwareTest.test_resize` | method | (self) | public | not declared | 1/42 | `src/nova/tests/functional/libvirt/test_uefi.py:L676–L770` |
| `UEFIServersFirmwareTest.test_resize.fake_path_exists` | function | (path) | public | `True` (src/nova/tests/functional/libvirt/test_uefi.py:L681); `True` (src/nova/tests/functional/libvirt/test_uefi.py:L683); `orig_path_exists(path)` (src/nova/tests/functional/libvirt/test_uefi.py:L685) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L679–L685` |
| `UEFIServersFirmwareTest.test_resize.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_uefi.py:L726) | — | `src/nova/tests/functional/libvirt/test_uefi.py:L692–L726` |

## Dependencies

- `import datetime` (src/nova/tests/functional/libvirt/test_uefi.py:L16)
- `import os` (src/nova/tests/functional/libvirt/test_uefi.py:L17)
- `import re` (src/nova/tests/functional/libvirt/test_uefi.py:L18)
- `import textwrap` (src/nova/tests/functional/libvirt/test_uefi.py:L19)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_uefi.py:L20)
- `import ddt` (src/nova/tests/functional/libvirt/test_uefi.py:L22)
- `import fixtures` (src/nova/tests/functional/libvirt/test_uefi.py:L23)
- `lxml`: imports `etree` (src/nova/tests/functional/libvirt/test_uefi.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_uefi.py:L25)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_uefi.py:L26)
- `import nova.conf` (src/nova/tests/functional/libvirt/test_uefi.py:L28)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_uefi.py:L29)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_uefi.py:L30)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_uefi.py:L31)
- `nova.virt`: imports `hardware as hw` (src/nova/tests/functional/libvirt/test_uefi.py:L32)

## Side Effects

- **file-io**: orig_path_exists = os.path.exists (src/nova/tests/functional/libvirt/test_uefi.py:L428)
- **file-io**: 'os.path.exists', fake_path_exists)) (src/nova/tests/functional/libvirt/test_uefi.py:L442)
- **file-io**: orig_path_exists = os.path.exists (src/nova/tests/functional/libvirt/test_uefi.py:L582)
- **file-io**: 'os.path.exists', fake_path_exists)) (src/nova/tests/functional/libvirt/test_uefi.py:L593)
- **file-io**: orig_path_exists = os.path.exists (src/nova/tests/functional/libvirt/test_uefi.py:L677)
- **file-io**: 'os.path.exists', fake_path_exists)) (src/nova/tests/functional/libvirt/test_uefi.py:L688)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/libvirt/test_uefi.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_uefi.py:L35)

