# src/nova/tests/unit/api/openstack/compute/test_evacuate.py

## Overview

This file implements the `test_evacuate` module, defining 5 classs, 1 constant, 2 fields, 5 functions, 54 methods, 13 imports, 2 side effects.

Lines: total 447, code 344, comment 21, blank 82

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L32–L32` |
| `fake_compute_api` | function | (*args, **kwargs) | exported | `True` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L36) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L35–L36` |
| `fake_compute_api_get` | function | (self, context, instance_id, **kwargs) | exported | `fake_instance.fake_instance_obj(context, id=1, uuid=instance_id, task_state=None, host='host1', vm_state=vm_states.ACTIVE)` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L44) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L39–L46` |
| `fake_service_get_by_compute_host` | function | (self, context, host) | exported | `{ 'host_name': host, 'service': 'compute', 'zone': 'nova' }` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L55) | 3/11 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L49–L59` |
| `EvacuateTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L62–L265` |
| `EvacuateTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L63–L63` |
| `EvacuateTestV21._methods` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L64–L64` |
| `EvacuateTestV21.setUp` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L66–L83` |
| `EvacuateTestV21._set_up_controller` | method | (self) | private | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L85–L87` |
| `EvacuateTestV21._get_evacuate_response` | method | (self, json_load, uuid=None) | private | `response` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L94) | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L89–L94` |
| `EvacuateTestV21._check_evacuate_failure` | method | (self, exception, body, uuid=None, controller=None) | private | `self.assertRaises(exception, controller._evacuate, self.admin_req, uuid or self.UUID, body=body)` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L100) | 3/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L96–L101` |
| `EvacuateTestV21.test_evacuate_with_valid_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L103–L109` |
| `EvacuateTestV21.test_evacuate_with_invalid_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L111–L116` |
| `EvacuateTestV21.test_evacuate_raise_badrequest_with_vtpm` | method | (self, mock_evacuate) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L119–L124` |
| `EvacuateTestV21.test_evacuate_raise_badrequest_with_vdpa_interface` | method | (self, mock_evacuate) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L127–L134` |
| `EvacuateTestV21.test_evacuate_raise_badrequest_for_accelerator` | method | (self, mock_evacuate) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L137–L142` |
| `EvacuateTestV21.test_evacuate_with_active_service` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L144–L152` |
| `EvacuateTestV21.test_evacuate_with_active_service.fake_evacuate` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L145–L146` |
| `EvacuateTestV21.test_evacuate_instance_with_no_target` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L154–L159` |
| `EvacuateTestV21.test_evacuate_instance_without_on_shared_storage` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L161–L164` |
| `EvacuateTestV21.test_evacuate_instance_with_invalid_characters_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L166–L171` |
| `EvacuateTestV21.test_evacuate_instance_with_too_long_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L173–L178` |
| `EvacuateTestV21.test_evacuate_instance_with_invalid_on_shared_storage` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L180–L184` |
| `EvacuateTestV21.test_evacuate_instance_with_bad_target` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L186–L190` |
| `EvacuateTestV21.test_evacuate_instance_with_unmapped_target` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L192–L196` |
| `EvacuateTestV21.test_evacuate_instance_with_target` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L198–L204` |
| `EvacuateTestV21.test_evacuate_shared_and_pass` | method | (self, mock_save) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L207–L211` |
| `EvacuateTestV21.test_evacuate_not_shared_pass_generated` | method | (self, mock_save) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L214–L217` |
| `EvacuateTestV21.test_evacuate_shared` | method | (self, mock_save) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L220–L222` |
| `EvacuateTestV21.test_evacuate_to_same_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L224–L228` |
| `EvacuateTestV21.test_evacuate_instance_with_empty_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L230–L235` |
| `EvacuateTestV21.test_evacuate_instance_with_underscore_in_hostname` | method | (self, mock_save) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L238–L247` |
| `EvacuateTestV21.test_evacuate_disable_password_return` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L249–L250` |
| `EvacuateTestV21.test_evacuate_enable_password_return` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L252–L253` |
| `EvacuateTestV21._test_evacuate_enable_instance_password_conf` | method | (self, mock_save, enable_pass) | private | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L256–L265` |
| `EvacuateTestV214` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L268–L356` |
| `EvacuateTestV214.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L269–L273` |
| `EvacuateTestV214._get_evacuate_response` | method | (self, json_load, uuid=None) | private | `response` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L281) | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L275–L281` |
| `EvacuateTestV214._check_evacuate_failure` | method | (self, exception, body, uuid=None, controller=None) | private | `self.assertRaises(exception, controller._evacuate, self.admin_req, uuid or self.UUID, body=body)` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L288) | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L283–L289` |
| `EvacuateTestV214.test_evacuate_instance` | method | (self, mock_evacuate) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L292–L297` |
| `EvacuateTestV214.test_evacuate_with_valid_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L299–L304` |
| `EvacuateTestV214.test_evacuate_disable_password_return` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L307–L308` |
| `EvacuateTestV214.test_evacuate_enable_password_return` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L311–L312` |
| `EvacuateTestV214.test_evacuate_instance_with_invalid_on_shared_storage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L315–L316` |
| `EvacuateTestV214.test_evacuate_not_shared_pass_generated` | method | (self, mock_save) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L320–L321` |
| `EvacuateTestV214.test_evacuate_pass_generated` | method | (self, mock_save, mock_evacuate) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L325–L328` |
| `EvacuateTestV214.test_evacuate_instance_without_on_shared_storage` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L330–L332` |
| `EvacuateTestV214.test_evacuate_instance_with_no_target` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L334–L339` |
| `EvacuateTestV214.test_evacuate_shared_and_pass` | method | (self, mock_save) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L343–L344` |
| `EvacuateTestV214.test_evacuate_instance_with_target` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L348–L349` |
| `EvacuateTestV214.test_evacuate_instance_with_underscore_in_hostname` | method | (self, mock_save) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L352–L356` |
| `EvacuateTestV229` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L359–L392` |
| `EvacuateTestV229.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L360–L364` |
| `EvacuateTestV229.test_evacuate_instance` | method | (self, mock_evacuate) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L367–L374` |
| `EvacuateTestV229.test_evacuate_with_valid_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L376–L381` |
| `EvacuateTestV229.test_evacuate_instance_with_forced_host` | method | (self, mock_evacuate) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L384–L388` |
| `EvacuateTestV229.test_forced_evacuate_with_no_host_provided` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L390–L392` |
| `EvacuateTestV268` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L395–L418` |
| `EvacuateTestV268.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L396–L400` |
| `EvacuateTestV268.test_evacuate_with_valid_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L402–L407` |
| `EvacuateTestV268.test_evacuate_instance_with_forced_host` | method | (self, mock_evacuate) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L410–L414` |
| `EvacuateTestV268.test_forced_evacuate_with_no_host_provided` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L416–L418` |
| `EvacuateTestV295` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L421–L447` |
| `EvacuateTestV295.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L422–L429` |
| `EvacuateTestV295.test_evacuate_version_error` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L431–L435` |
| `EvacuateTestV295.test_evacuate_unsupported_rpc` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L437–L447` |
| `EvacuateTestV295.test_evacuate_unsupported_rpc.fake_evacuate` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L438–L441` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L15)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L18)
- `import testtools` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L20)
- `nova.api.openstack.compute`: imports `evacuate as evacuate_v21` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L22)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L24)
- `import nova.conf` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute import evacuate as evacuate_v21 (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L22)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/openstack/compute/test_evacuate.py:L32)

