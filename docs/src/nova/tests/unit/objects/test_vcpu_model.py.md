# src/nova/tests/unit/objects/test_vcpu_model.py

## Overview

This file implements the `test_vcpu_model` module, defining 6 classs, 5 methods, 4 variables, 3 imports.

Lines: total 101, code 70, comment 11, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_cpu_model_feature` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L17–L20` |
| `fake_cpu_model_feature_obj` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L22–L23` |
| `fake_vcpumodel_dict` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L25–L33` |
| `fake_vcpumodel` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L34–L34` |
| `_TestVirtCPUFeatureObj` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L37–L40` |
| `_TestVirtCPUFeatureObj.test_policy_limitation` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_vcpu_model.py:L38–L40` |
| `TestVirtCPUFeatureObj` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L43–L45` |
| `TestRemoteVirtCPUFeatureObj` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L48–L50` |
| `_TestVirtCPUModel` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L53–L91` |
| `_TestVirtCPUModel.test_create` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_vcpu_model.py:L54–L61` |
| `_TestVirtCPUModel.test_defaults` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_vcpu_model.py:L63–L71` |
| `_TestVirtCPUModel.test_arch_field` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_vcpu_model.py:L73–L75` |
| `_TestVirtCPUModel.test_serialize` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_vcpu_model.py:L77–L91` |
| `TestVirtCPUModel` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L94–L96` |
| `TestRemoteVirtCPUModel` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_vcpu_model.py:L99–L101` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/objects/test_vcpu_model.py:L13)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/objects/test_vcpu_model.py:L14)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_vcpu_model.py:L15)

