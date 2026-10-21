# src/nova/tests/unit/virt/vmwareapi/test_configdrive.py

## Overview

This file implements the `test_configdrive` module, defining 2 classs, 1 constant, 2 functions, 8 methods, 16 imports, 1 side effect.

Lines: total 171, code 136, comment 16, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConfigDriveTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L36–L171` |
| `ConfigDriveTestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L38–L38` |
| `ConfigDriveTestCase.setUp` | method | (self, mock_register, mock_service) | public | not declared | 1/66 | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L42–L120` |
| `ConfigDriveTestCase.setUp.FakeInstanceMetadata` | class | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L98–L104` |
| `ConfigDriveTestCase.setUp.FakeInstanceMetadata.__init__` | method | (self, instance, content=None, extra_md=None, network_info=None, request_context=None) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L99–L101` |
| `ConfigDriveTestCase.setUp.FakeInstanceMetadata.metadata_for_config_drive` | method | (self) | public | `[]` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L104) | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L103–L104` |
| `ConfigDriveTestCase.setUp.fake_make_drive` | function | (_self, _path) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L110–L111` |
| `ConfigDriveTestCase.setUp.fake_upload_iso_to_datastore` | function | (iso_path, instance, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L117–L118` |
| `ConfigDriveTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L122–L124` |
| `ConfigDriveTestCase._spawn_vm` | method | (self, fake_get_instance_meta, injected_files=None, admin_password=None, block_device_info=None) | private | not declared | 2/10 | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L128–L138` |
| `ConfigDriveTestCase.test_create_vm_with_config_drive_verify_method_invocation` | method | (self, mock_attach_cdrom, mock_create_config_drive) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L143–L157` |
| `ConfigDriveTestCase.test_create_vm_without_config_drive` | method | (self, mock_attach_cdrom, mock_create_config_drive) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L162–L167` |
| `ConfigDriveTestCase.test_create_vm_with_config_drive` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L169–L171` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L16)
- `import fixtures` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L21)
- `nova.image`: imports `glance` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L24)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L26)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L27)
- `nova.tests.unit.virt.vmwareapi`: imports `fake as vmwareapi_fake` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L28)
- `nova.tests.unit.virt.vmwareapi`: imports `stubs` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L29)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L30)
- `nova.virt.vmwareapi`: imports `driver` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L31)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L32)
- `nova.virt.vmwareapi`: imports `vmops` (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L33)

## Side Effects

- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/virt/vmwareapi/test_configdrive.py:L38)

