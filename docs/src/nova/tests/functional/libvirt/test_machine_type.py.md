# src/nova/tests/functional/libvirt/test_machine_type.py

## Overview

This file implements the `test_machine_type` module, defining 1 class, 1 field, 1 function, 19 methods, 8 imports, 2 security surface entries.

Lines: total 393, code 268, comment 49, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtMachineTypeTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_machine_type.py:L25–L393` |
| `LibvirtMachineTypeTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_machine_type.py:L27–L27` |
| `LibvirtMachineTypeTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_machine_type.py:L29–L55` |
| `LibvirtMachineTypeTest.setUp._get_guest_config` | function | (_self, *args, **kwargs) | private | `self.guest_configs[instance.uuid]` (src/nova/tests/functional/libvirt/test_machine_type.py:L51) | — | `src/nova/tests/functional/libvirt/test_machine_type.py:L47–L51` |
| `LibvirtMachineTypeTest._create_servers` | method | (self) | private | `(server_with, server_without)` (src/nova/tests/functional/libvirt/test_machine_type.py:L66) | 1/10 | `src/nova/tests/functional/libvirt/test_machine_type.py:L57–L66` |
| `LibvirtMachineTypeTest._assert_machine_type` | method | (self, server_id, expected_machine_type) | private | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_machine_type.py:L68–L81` |
| `LibvirtMachineTypeTest._unset_machine_type` | method | (self, server_id) | private | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_machine_type.py:L83–L89` |
| `LibvirtMachineTypeTest.test_init_host_register_machine_type` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_machine_type.py:L91–L120` |
| `LibvirtMachineTypeTest.test_machine_type_after_config_change` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_machine_type.py:L122–L136` |
| `LibvirtMachineTypeTest.test_machine_type_after_server_rebuild` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_machine_type.py:L138–L160` |
| `LibvirtMachineTypeTest._test_machine_type_after_server_reboot` | method | (self, hard=False) | private | not declared | 1/10 | `src/nova/tests/functional/libvirt/test_machine_type.py:L162–L179` |
| `LibvirtMachineTypeTest.test_machine_type_after_server_soft_reboot` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_machine_type.py:L181–L182` |
| `LibvirtMachineTypeTest.test_machine_type_after_server_hard_reboot` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_machine_type.py:L184–L185` |
| `LibvirtMachineTypeTest.test_machine_type_get` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_machine_type.py:L187–L202` |
| `LibvirtMachineTypeTest.test_machine_type_update_stopped` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_machine_type.py:L204–L218` |
| `LibvirtMachineTypeTest.test_machine_type_update_blocked_active` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_machine_type.py:L220–L232` |
| `LibvirtMachineTypeTest.test_machine_type_update_blocked_between_alias_and_versioned` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_machine_type.py:L234–L247` |
| `LibvirtMachineTypeTest.test_machine_type_update_blocked_between_versioned_and_alias` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_machine_type.py:L249–L262` |
| `LibvirtMachineTypeTest.test_machine_type_update_blocked_between_types` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_machine_type.py:L264–L277` |
| `LibvirtMachineTypeTest.test_machine_type_update_force` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_machine_type.py:L279–L295` |
| `LibvirtMachineTypeTest.test_machine_type_list_unset_machine_type` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_machine_type.py:L297–L307` |
| `LibvirtMachineTypeTest.test_hw_machine_type_config_update_workflow` | method | (self) | public | not declared | 2/47 | `src/nova/tests/functional/libvirt/test_machine_type.py:L309–L393` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_machine_type.py:L13)
- `import fixtures` (src/nova/tests/functional/libvirt/test_machine_type.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/libvirt/test_machine_type.py:L16)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_machine_type.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_machine_type.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_machine_type.py:L20)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_machine_type.py:L21)
- `nova.virt.libvirt`: imports `machine_type_utils` (src/nova/tests/functional/libvirt/test_machine_type.py:L22)

## Security Surface

- **sink** (`db-write`): """Mimic a real world [libvirt]hw_machine_type config update workflow (src/nova/tests/functional/libvirt/test_machine_type.py:L310)
- **sink** (`db-write`): workflow that should be typical of an operator attempting to update (src/nova/tests/functional/libvirt/test_machine_type.py:L313)

