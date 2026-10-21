# src/nova/tests/unit/objects/test_instance_fault.py

## Overview

This file implements the `test_instance_fault` module, defining 3 classs, 6 methods, 1 variable, 6 imports.

Lines: total 108, code 79, comment 13, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_faults` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_fault.py:L25–L36` |
| `_TestInstanceFault` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_fault.py:L39–L98` |
| `_TestInstanceFault.test_get_latest_for_instance` | method | (self, get_mock) | public | not declared | 2/6 | `src/nova/tests/unit/objects/test_instance_fault.py:L42–L47` |
| `_TestInstanceFault.test_get_latest_for_instance_with_none` | method | (self, get_mock) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_fault.py:L51–L55` |
| `_TestInstanceFault.test_get_by_instance` | method | (self, get_mock) | public | not declared | 3/8 | `src/nova/tests/unit/objects/test_instance_fault.py:L59–L66` |
| `_TestInstanceFault.test_get_by_instance_with_none` | method | (self, get_mock) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_fault.py:L70–L74` |
| `_TestInstanceFault.test_create` | method | (self, mock_create) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_instance_fault.py:L77–L92` |
| `_TestInstanceFault.test_create_already_created` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_fault.py:L94–L98` |
| `TestInstanceFault` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_fault.py:L101–L103` |
| `TestInstanceFaultRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_fault.py:L106–L108` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_fault.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance_fault.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_instance_fault.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance_fault.py:L20)
- `nova.objects`: imports `instance_fault` (src/nova/tests/unit/objects/test_instance_fault.py:L21)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_fault.py:L22)

