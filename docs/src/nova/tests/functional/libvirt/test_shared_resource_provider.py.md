# src/nova/tests/functional/libvirt/test_shared_resource_provider.py

## Overview

This file implements the `test_shared_resource_provider` module, defining 1 class, 1 constant, 5 methods, 6 imports, 1 side effect.

Lines: total 209, code 125, comment 49, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L25–L25` |
| `SharedStorageProviderUsageTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L28–L209` |
| `SharedStorageProviderUsageTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L31–L33` |
| `SharedStorageProviderUsageTestCase.test_shared_storage_rp_configuration_with_cn_rp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L37–L84` |
| `SharedStorageProviderUsageTestCase.create_shared_storage_rp` | method | (self) | public | `shared_RP['uuid']` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L101) | 1/11 | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L86–L101` |
| `SharedStorageProviderUsageTestCase.test_rebuild_instance_with_image_traits_on_shared_rp` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L105–L156` |
| `SharedStorageProviderUsageTestCase.test_rebuild_instance_with_image_traits_on_shared_rp_no_valid_host` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L160–L209` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L16)
- `import unittest` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L17)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L19)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L20)
- `nova.tests.functional.libvirt`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L21)
- `nova`: imports `utils` (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L22)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/test_shared_resource_provider.py:L25)

