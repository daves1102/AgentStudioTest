# src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py

## Overview

This file implements the `test_deferred_delete` module, defining 1 class, 1 field, 8 methods, 8 imports, 1 side effect.

Lines: total 172, code 130, comment 18, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DeferredDeleteExtensionTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L28–L172` |
| `DeferredDeleteExtensionTestV21.ext_ver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L29–L29` |
| `DeferredDeleteExtensionTestV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L31–L35` |
| `DeferredDeleteExtensionTestV21.test_force_delete` | method | (self, mock_force_delete, mock_get) | public | not declared | 2/19 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L39–L61` |
| `DeferredDeleteExtensionTestV21.test_force_delete_instance_not_found` | method | (self, mock_get) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L64–L79` |
| `DeferredDeleteExtensionTestV21.test_force_delete_instance_locked` | method | (self, mock_force_delete, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L85–L92` |
| `DeferredDeleteExtensionTestV21.test_force_delete_instance_notfound` | method | (self, mock_force_delete, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L98–L106` |
| `DeferredDeleteExtensionTestV21.test_restore` | method | (self, mock_restore, mock_get) | public | not declared | 2/19 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L110–L132` |
| `DeferredDeleteExtensionTestV21.test_restore_instance_not_found` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L135–L147` |
| `DeferredDeleteExtensionTestV21.test_restore_raises_conflict_on_invalid_state` | method | (self, mock_restore, mock_get) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L151–L172` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L16)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L18)
- `nova.api.openstack.compute`: imports `deferred_delete as dd_v21` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L20)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L23)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L24)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import deferred_delete as dd_v21 (src/nova/tests/unit/api/openstack/compute/test_deferred_delete.py:L20)

