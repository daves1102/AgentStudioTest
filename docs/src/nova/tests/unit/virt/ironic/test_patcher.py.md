# src/nova/tests/unit/virt/ironic/test_patcher.py

## Overview

This file implements the `test_patcher` module, defining 1 class, 1 constant, 17 methods, 8 imports, 1 side effect.

Lines: total 251, code 213, comment 15, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_patcher.py:L27–L27` |
| `IronicDriverFieldsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_patcher.py:L30–L251` |
| `IronicDriverFieldsTestCase.setUp` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L32–L82` |
| `IronicDriverFieldsTestCase.assertPatchEqual` | method | (self, expected, observed) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L84–L88` |
| `IronicDriverFieldsTestCase.test_create_generic` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L90–L93` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L95–L99` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_capabilities` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L101–L110` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_capabilities_op` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L112–L121` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_capabilities_nested_key` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L123–L132` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_traits` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L134–L143` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_traits_granular` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L145–L154` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_traits_ignores_not_required` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L156–L162` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_image_traits_required` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L164–L174` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_image_flavor_traits_required` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L176–L187` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_image_flavor_traits_none` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L189–L195` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_boot_from_volume_image_traits_required` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L197–L213` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_ephemeral` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L215–L231` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_preserve_ephemeral` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L233–L242` |
| `IronicDriverFieldsTestCase.test_generic_get_deploy_patch_boot_from_volume` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/virt/ironic/test_patcher.py:L244–L251` |

## Dependencies

- `import operator` (src/nova/tests/unit/virt/ironic/test_patcher.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/ironic/test_patcher.py:L18)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/virt/ironic/test_patcher.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/virt/ironic/test_patcher.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/virt/ironic/test_patcher.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/ironic/test_patcher.py:L23)
- `nova.tests.unit.virt.ironic`: imports `utils as ironic_utils` (src/nova/tests/unit/virt/ironic/test_patcher.py:L24)
- `nova.virt.ironic`: imports `patcher` (src/nova/tests/unit/virt/ironic/test_patcher.py:L25)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/ironic/test_patcher.py:L27)

