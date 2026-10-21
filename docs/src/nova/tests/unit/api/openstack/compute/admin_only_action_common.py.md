# src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py

## Overview

This file implements the `admin_only_action_common` module, defining 2 classs, 13 methods, 10 imports.

Lines: total 291, code 227, comment 19, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CommonMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L29–L232` |
| `CommonMixin.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L30–L37` |
| `CommonMixin._stub_instance_get` | method | (self, uuid=None) | private | `instance` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L47) | 2/9 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L39–L47` |
| `CommonMixin._test_non_existing_instance` | method | (self, action, body_map=None) | private | not declared | 3/17 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L49–L69` |
| `CommonMixin._test_action` | method | (self, action, body=None, method=None, compute_api_args_map=None) | private | not declared | 5/23 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L71–L98` |
| `CommonMixin._test_not_implemented_state` | method | (self, action, body=None, method=None) | private | not declared | 3/22 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L100–L126` |
| `CommonMixin._test_invalid_state` | method | (self, action, method=None, body_map=None, compute_api_args_map=None, exception_arg=None) | private | not declared | 7/35 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L128–L168` |
| `CommonMixin._test_locked_instance` | method | (self, action, method=None, body=None, compute_api_args_map=None) | private | not declared | 5/26 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L170–L201` |
| `CommonMixin._test_instance_not_found_in_compute_api` | method | (self, action, method=None, body=None, compute_api_args_map=None) | private | not declared | 4/24 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L203–L232` |
| `CommonTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L235–L291` |
| `CommonTests._test_actions` | method | (self, actions, method_translations=None, body_map=None, args_map=None) | private | not declared | 5/10 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L236–L245` |
| `CommonTests._test_actions_instance_not_found_in_compute_api` | method | (self, actions, method_translations=None, body_map=None, args_map=None) | private | not declared | 5/12 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L247–L258` |
| `CommonTests._test_actions_with_non_existed_instance` | method | (self, actions, body_map=None) | private | not declared | 3/5 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L260–L264` |
| `CommonTests._test_actions_raise_conflict_on_invalid_state` | method | (self, actions, method_translations=None, body_map=None, args_map=None, exception_args=None) | private | not declared | 6/14 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L266–L279` |
| `CommonTests._test_actions_with_locked_instance` | method | (self, actions, method_translations=None, body_map=None, args_map=None) | private | not declared | 5/11 | `src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L281–L291` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L15)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L18)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L20)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/admin_only_action_common.py:L26)

