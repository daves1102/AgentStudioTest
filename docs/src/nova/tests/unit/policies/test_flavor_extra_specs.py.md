# src/nova/tests/unit/policies/test_flavor_extra_specs.py

## Overview

This file implements the `test_flavor_extra_specs` module, defining 2 classs, 1 field, 2 functions, 11 methods, 9 imports, 3 side effects, 4 security surface entries.

Lines: total 217, code 164, comment 26, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorExtraSpecsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L26–L194` |
| `FlavorExtraSpecsPolicyTest.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L34–L63` |
| `FlavorExtraSpecsPolicyTest.setUp.get_flavor_extra_specs` | function | (context, flavor_id) | public | `fake_flavor.fake_flavor_obj( self.project_member_context, id=1, uuid=uuids.fake_id, project_id=self.project_id, is_public=False, extra_specs={'hw:cpu_policy': 'shared'}, expected_attrs='extra_specs')` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L42) | — | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L41–L46` |
| `FlavorExtraSpecsPolicyTest.test_create_flavor_extra_specs_policy` | method | (self, mock_save) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L66–L73` |
| `FlavorExtraSpecsPolicyTest.test_delete_flavor_extra_specs_policy` | method | (self, mock_save, mock_delete) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L77–L82` |
| `FlavorExtraSpecsPolicyTest.test_update_flavor_extra_specs_policy` | method | (self, mock_save) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L85–L92` |
| `FlavorExtraSpecsPolicyTest.test_show_flavor_extra_specs_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L94–L100` |
| `FlavorExtraSpecsPolicyTest.test_index_flavor_extra_specs_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L102–L107` |
| `FlavorExtraSpecsPolicyTest.test_flavor_detail_with_extra_specs_policy` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L109–L120` |
| `FlavorExtraSpecsPolicyTest.test_flavor_show_with_extra_specs_policy` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L122–L133` |
| `FlavorExtraSpecsPolicyTest.test_flavor_create_with_extra_specs_policy` | method | (self) | public | not declared | 3/23 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L135–L173` |
| `FlavorExtraSpecsPolicyTest.test_flavor_create_with_extra_specs_policy.fake_create` | function | (newflavor) | public | not declared | — | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L144–L155` |
| `FlavorExtraSpecsPolicyTest.test_flavor_update_with_extra_specs_policy` | method | (self, mock_save) | public | not declared | 3/15 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L176–L194` |
| `FlavorExtraSpecsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L197–L217` |
| `FlavorExtraSpecsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L201–L201` |
| `FlavorExtraSpecsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_flavor_extra_specs.py:L203–L217` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L15)
- `nova.api.openstack.compute`: imports `flavors` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L17)
- `nova.api.openstack.compute`: imports `flavors_extraspecs` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L18)
- `nova.policies`: imports `flavor_extra_specs as policies` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L19)
- `nova.policies`: imports `flavor_manage as fm_policies` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L21)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import flavors (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L17)
- **network**: from nova.api.openstack.compute import flavors_extraspecs (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L18)
- **network**: self.stub_out('nova.api.openstack.common.get_flavor', (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L48)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L87)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L90)
- **sink** (`db-write`): rule = fm_policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L182)
- **sink** (`db-write`): rule_name, self.fm_ctrl.update, req, '1', (src/nova/tests/unit/policies/test_flavor_extra_specs.py:L188)

