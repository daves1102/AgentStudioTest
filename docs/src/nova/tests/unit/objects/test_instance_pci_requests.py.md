# src/nova/tests/unit/objects/test_instance_pci_requests.py

## Overview

This file implements the `test_instance_pci_requests` module, defining 3 classs, 2 constants, 8 methods, 2 variables, 7 imports, 2 side effects.

Lines: total 180, code 143, comment 14, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L24–L24` |
| `FAKE_REQUEST_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L25–L25` |
| `fake_pci_requests` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L30–L46` |
| `fake_legacy_pci_requests` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L48–L57` |
| `_TestInstancePCIRequests` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L60–L170` |
| `_TestInstancePCIRequests.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 3/17 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L62–L78` |
| `_TestInstancePCIRequests.test_get_by_instance_current` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L81–L86` |
| `_TestInstancePCIRequests.test_get_by_instance_legacy` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L88–L101` |
| `_TestInstancePCIRequests.test_obj_from_db` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L103–L114` |
| `_TestInstancePCIRequests.test_obj_make_compatible_pre_1_2` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L116–L127` |
| `_TestInstancePCIRequests.test_obj_make_compatible_pre_1_1` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L129–L138` |
| `_TestInstancePCIRequests.test_obj_make_compatible_pre_1_3` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L140–L152` |
| `_TestInstancePCIRequests.test_source_property` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L154–L170` |
| `TestInstancePCIRequests` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L173–L175` |
| `TestRemoteInstancePCIRequests` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_pci_requests.py:L178–L180` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L16)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L17)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L19)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L20)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_pci_requests.py:L21)

## Side Effects

- **global-mutation**: FAKE_UUID = '79a53d6b-0893-4838-a971-15f4f382e7c2' (src/nova/tests/unit/objects/test_instance_pci_requests.py:L24)
- **global-mutation**: FAKE_REQUEST_UUID = '69b53d6b-0793-4839-c981-f5c4f382e7d2' (src/nova/tests/unit/objects/test_instance_pci_requests.py:L25)

