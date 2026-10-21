# src/nova/tests/unit/virt/zvm/test_hypervisor.py

## Overview

This file implements the `test_hypervisor` module, defining 1 class, 17 methods, 6 imports.

Lines: total 146, code 109, comment 14, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestZVMHypervisor` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L24–L146` |
| `TestZVMHypervisor.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L26–L37` |
| `TestZVMHypervisor.test_get_available_resource` | method | (self, call) | public | not declared | 1/18 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L40–L57` |
| `TestZVMHypervisor.test_get_available_resource_err_case` | method | (self, call) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L60–L65` |
| `TestZVMHypervisor.test_get_available_nodes` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L67–L69` |
| `TestZVMHypervisor.test_list_names` | method | (self, call) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L72–L75` |
| `TestZVMHypervisor.test_get_host_uptime` | method | (self, call) | public | not declared | 1/7 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L78–L85` |
| `TestZVMHypervisor.test_private_guest_exists_true` | method | (self, list_names) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L88–L92` |
| `TestZVMHypervisor.test_private_guest_exists_false` | method | (self, list_names) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L95–L99` |
| `TestZVMHypervisor.test_guest_capture` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L102–L104` |
| `TestZVMHypervisor.test_image_export` | method | (self, mcall) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L107–L110` |
| `TestZVMHypervisor.test_image_delete` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L113–L115` |
| `TestZVMHypervisor.test_guest_softstop` | method | (self, mcall) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L118–L121` |
| `TestZVMHypervisor.test_guest_pause` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L124–L126` |
| `TestZVMHypervisor.test_guest_unpause` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L129–L131` |
| `TestZVMHypervisor.test_guest_reboot` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L134–L136` |
| `TestZVMHypervisor.test_guest_reset` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L139–L141` |
| `TestZVMHypervisor.test_guest_get_console_output` | method | (self, mcall) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_hypervisor.py:L144–L146` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/zvm/test_hypervisor.py:L15)
- `nova`: imports `context` (src/nova/tests/unit/virt/zvm/test_hypervisor.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/virt/zvm/test_hypervisor.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/virt/zvm/test_hypervisor.py:L19)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/zvm/test_hypervisor.py:L20)
- `nova.virt.zvm`: imports `driver as zvmdriver` (src/nova/tests/unit/virt/zvm/test_hypervisor.py:L21)

