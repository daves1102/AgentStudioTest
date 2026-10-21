# src/nova/tests/unit/api/openstack/compute/test_shelve.py

## Overview

This file implements the `test_shelve` module, defining 3 classs, 3 fields, 26 methods, 14 imports, 14 side effects.

Lines: total 450, code 389, comment 13, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ShelveControllerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L34–L97` |
| `ShelveControllerTest.plugin` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L35–L35` |
| `ShelveControllerTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L37–L40` |
| `ShelveControllerTest.test_shelve__http_conflict_error` | method | (self, exc, mock_get_instance, mock_shelve) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L50–L59` |
| `ShelveControllerTest.test_shelve_raise_badrequest_for_not_supported_feature` | method | (self, exc, mock_get_instance, mock_shelve) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L70–L78` |
| `ShelveControllerTest.test_unshelve_locked_server` | method | (self, get_instance_mock) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L81–L87` |
| `ShelveControllerTest.test_shelve_offload_locked_server` | method | (self, get_instance_mock) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L90–L97` |
| `UnshelveServerControllerTestV277` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L100–L219` |
| `UnshelveServerControllerTestV277.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L106–L106` |
| `UnshelveServerControllerTestV277.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L108–L119` |
| `UnshelveServerControllerTestV277.fake_get_instance` | method | (self) | public | `fake_instance.fake_instance_obj( ctxt, uuid=fakes.FAKE_UUID, vm_state=vm_states.SHELVED_OFFLOADED)` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L123) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L121–L124` |
| `UnshelveServerControllerTestV277.test_unshelve_with_az_pre_2_77_failed` | method | (self, mock_get_instance) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L127–L147` |
| `UnshelveServerControllerTestV277.test_unshelve_with_none_pre_2_77_success` | method | (self, mock_get_instance, mock_unshelve) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L151–L167` |
| `UnshelveServerControllerTestV277.test_unshelve_with_empty_dict_with_v2_77_failed` | method | (self, mock_get_instance, mock_unshelve) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L171–L183` |
| `UnshelveServerControllerTestV277.test_invalid_az_name_with_int` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L185–L194` |
| `UnshelveServerControllerTestV277.test_no_az_value` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L196–L206` |
| `UnshelveServerControllerTestV277.test_unshelve_with_additional_param` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L208–L219` |
| `UnshelveServerControllerTestV291` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L222–L450` |
| `UnshelveServerControllerTestV291.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L228–L228` |
| `UnshelveServerControllerTestV291.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L230–L235` |
| `UnshelveServerControllerTestV291.fake_get_instance` | method | (self) | public | `fake_instance.fake_instance_obj( ctxt, uuid=fakes.FAKE_UUID, vm_state=vm_states.SHELVED_OFFLOADED)` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L239) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L237–L240` |
| `UnshelveServerControllerTestV291.test_unshelve_with_az_pre_2_91` | method | (self, mock_get_instance) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L243–L265` |
| `UnshelveServerControllerTestV291.test_unshelve_without_parameters_2_91` | method | (self, mock_get_instance) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L268–L287` |
| `UnshelveServerControllerTestV291.test_unshelve_with_az_2_91` | method | (self, mock_get_instance) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L290–L312` |
| `UnshelveServerControllerTestV291.test_unshelve_with_az_none_2_91` | method | (self, mock_get_instance) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L315–L337` |
| `UnshelveServerControllerTestV291.test_unshelve_with_host_2_91` | method | (self, mock_get_instance) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L340–L361` |
| `UnshelveServerControllerTestV291.test_unshelve_with_az_and_host_with_v2_91` | method | (self, mock_get_instance, mock_unshelve) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L365–L388` |
| `UnshelveServerControllerTestV291.test_invalid_az_name_with_int` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L390–L401` |
| `UnshelveServerControllerTestV291.test_no_az_value` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L403–L413` |
| `UnshelveServerControllerTestV291.test_invalid_host_fqdn_with_int` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L415–L426` |
| `UnshelveServerControllerTestV291.test_no_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L428–L437` |
| `UnshelveServerControllerTestV291.test_unshelve_with_additional_param` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_shelve.py:L439–L450` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L15)
- `import ddt` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L17)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L20)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L21)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L23)
- `nova.api.openstack.compute`: imports `shelve as shelve_v21` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L24)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L25)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L28)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L29)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute import shelve as shelve_v21 (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L24)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L49)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L69)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L80)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L89)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L126)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L150)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L170)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L242)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L267)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L289)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L314)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L339)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_shelve.py:L364)

