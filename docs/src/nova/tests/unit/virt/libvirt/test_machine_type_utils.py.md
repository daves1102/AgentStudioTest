# src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py

## Overview

This file implements the `test_machine_type_utils` module, defining 2 classs, 2 constants, 20 methods, 2 staticmethods, 11 imports, 2 side effects.

Lines: total 463, code 392, comment 30, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestMachineTypeUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L29–L302` |
| `TestMachineTypeUtils._create_test_instance_obj` | method | (self, vm_state=vm_states.STOPPED, mtype=None) | private | `instance` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L47) | 2/17 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L31–L47` |
| `TestMachineTypeUtils.test_get_machine_type` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L53–L70` |
| `TestMachineTypeUtils.test_get_machine_type_none_found` | method | (self, mock_target_cell, mock_get_instance) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L76–L92` |
| `TestMachineTypeUtils.test_check_machine_type_support` | method | (self, machine_type) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L104–L107` |
| `TestMachineTypeUtils.test_check_machine_type_support_failure` | method | (self, machine_type) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L115–L121` |
| `TestMachineTypeUtils.test_check_update_to_existing_type` | method | (self, machine_types) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L126–L131` |
| `TestMachineTypeUtils.test_check_update_to_existing_type_failure` | method | (self, machine_types) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L140–L149` |
| `TestMachineTypeUtils.test_check_vm_state` | method | (self, vm_state) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L155–L159` |
| `TestMachineTypeUtils.test_check_vm_state_failure` | method | (self, vm_state) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L165–L173` |
| `TestMachineTypeUtils.test_update_noop` | method | (self, mock_target_cell, mock_get_instance, mock_check_vm_state, mock_instance_save) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L181–L218` |
| `TestMachineTypeUtils.test_update_force` | method | (self, types, mock_target_cell, mock_get_instance, mock_instance_save) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L231–L259` |
| `TestMachineTypeUtils.test_update` | method | (self, types, mock_target_cell, mock_get_instance, mock_instance_save) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L275–L302` |
| `TestMachineTypeUtilsListUnset` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L305–L463` |
| `TestMachineTypeUtilsListUnset.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L307–L307` |
| `TestMachineTypeUtilsListUnset.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L308–L308` |
| `TestMachineTypeUtilsListUnset.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L310–L313` |
| `TestMachineTypeUtilsListUnset._create_node_in_cell` | method | (ctxt, cell, hypervisor_type, nodename) | private | `cn` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L333) | 1/17 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L316–L333` |
| `TestMachineTypeUtilsListUnset._create_instance_in_cell` | method | (ctxt, cell, node, is_deleted=False, hw_machine_type=None) | private | `inst` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L360) | 3/22 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L336–L360` |
| `TestMachineTypeUtilsListUnset._setup_instances` | method | (self) | private | `instances` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L422) | 1/52 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L362–L422` |
| `TestMachineTypeUtilsListUnset.test_fresh_install_no_cell_mappings` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L424–L428` |
| `TestMachineTypeUtilsListUnset.test_fresh_install_no_computes` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L430–L435` |
| `TestMachineTypeUtilsListUnset.test_get_from_specific_cell` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L437–L447` |
| `TestMachineTypeUtilsListUnset.test_get_multi_cell` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L449–L463` |
| `TestMachineTypeUtilsListUnset._create_node_in_cell` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L315–L333` |
| `TestMachineTypeUtilsListUnset._create_instance_in_cell` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L335–L360` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L13)
- `import ddt` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L16)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L17)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L19)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L24)
- `nova.virt.libvirt`: imports `machine_type_utils` (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L25)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L307)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/unit/virt/libvirt/test_machine_type_utils.py:L308)

