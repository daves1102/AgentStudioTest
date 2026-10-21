# src/nova/tests/unit/policies/test_instance_actions.py

## Overview

This file implements the `test_instance_actions` module, defining 3 classs, 2 constants, 2 fields, 9 methods, 19 imports, 6 side effects.

Lines: total 254, code 180, comment 39, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L36–L36` |
| `FAKE_REQUEST_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L37–L37` |
| `InstanceActionsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L40–L175` |
| `InstanceActionsPolicyTest.setUp` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/policies/test_instance_actions.py:L49–L77` |
| `InstanceActionsPolicyTest._set_policy_rules` | method | (self, overwrite=True) | private | not declared | 1/4 | `src/nova/tests/unit/policies/test_instance_actions.py:L79–L82` |
| `InstanceActionsPolicyTest.test_index_instance_action_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_instance_actions.py:L84–L89` |
| `InstanceActionsPolicyTest.test_show_instance_action_policy` | method | (self, mock_action_get) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_instance_actions.py:L92–L99` |
| `InstanceActionsPolicyTest.test_show_instance_action_policy_with_events` | method | (self, mock_get_action, mock_get_events) | public | not declared | 3/22 | `src/nova/tests/unit/policies/test_instance_actions.py:L103–L132` |
| `InstanceActionsPolicyTest.test_show_instance_action_policy_with_show_details` | method | (self, mock_get_action, mock_get_events) | public | not declared | 5/27 | `src/nova/tests/unit/policies/test_instance_actions.py:L136–L175` |
| `InstanceActionsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L178–L196` |
| `InstanceActionsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L183–L183` |
| `InstanceActionsNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L184–L191` |
| `InstanceActionsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_instance_actions.py:L193–L196` |
| `InstanceActionsDeprecatedPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_actions.py:L199–L254` |
| `InstanceActionsDeprecatedPolicyTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/policies/test_instance_actions.py:L208–L229` |
| `InstanceActionsDeprecatedPolicyTest.test_deprecated_policy_overridden_rule_is_checked` | method | (self, mock_instance_get, mock_actions_get) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_instance_actions.py:L233–L254` |

## Dependencies

- `import copy` (src/nova/tests/unit/policies/test_instance_actions.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_instance_actions.py:L14)
- `import fixtures` (src/nova/tests/unit/policies/test_instance_actions.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/policies/test_instance_actions.py:L18)
- `oslo_policy`: imports `policy as oslo_policy` (src/nova/tests/unit/policies/test_instance_actions.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_instance_actions.py:L20)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_instance_actions.py:L21)
- `nova.api.openstack.compute`: imports `instance_actions as instance_actions_v21` (src/nova/tests/unit/policies/test_instance_actions.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_instance_actions.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_instance_actions.py:L25)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_instance_actions.py:L26)
- `nova.policies`: imports `instance_actions as ia_policies` (src/nova/tests/unit/policies/test_instance_actions.py:L27)
- `nova`: imports `policy` (src/nova/tests/unit/policies/test_instance_actions.py:L28)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/policies/test_instance_actions.py:L29)
- `nova.tests.unit.api.openstack.compute`: imports `test_instance_actions` (src/nova/tests/unit/policies/test_instance_actions.py:L30)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_instance_actions.py:L31)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_instance_actions.py:L32)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/unit/policies/test_instance_actions.py:L33)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_instance_actions.py:L34)

## Side Effects

- **network**: from nova.api.openstack.compute import instance_actions as instance_actions_v21 (src/nova/tests/unit/policies/test_instance_actions.py:L23)
- **network**: from nova.tests.unit.api.openstack.compute import test_instance_actions (src/nova/tests/unit/policies/test_instance_actions.py:L30)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_instance_actions.py:L57)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/policies/test_instance_actions.py:L232)
- **global-mutation**: FAKE_UUID = fake_server_actions.FAKE_UUID (src/nova/tests/unit/policies/test_instance_actions.py:L36)
- **global-mutation**: FAKE_REQUEST_ID = fake_server_actions.FAKE_REQUEST_ID1 (src/nova/tests/unit/policies/test_instance_actions.py:L37)

