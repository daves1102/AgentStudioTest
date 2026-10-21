# src/nova/tests/unit/api/openstack/compute/test_admin_password.py

## Overview

This file implements the `test_admin_password` module, defining 1 class, 1 field, 2 functions, 17 methods, 7 imports, 1 side effect.

Lines: total 160, code 117, comment 17, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get` | function | (self, context, id, expected_attrs=None, cell_down_support=False) | exported | `fake_instance.fake_instance_obj( context, uuid=id, project_id=context.project_id, user_id=context.user_id, expected_attrs=expected_attrs)` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L30) | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L28–L35` |
| `fake_set_admin_password` | function | (self, context, instance, password=None) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L38–L39` |
| `AdminPasswordTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L42–L160` |
| `AdminPasswordTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L43–L43` |
| `AdminPasswordTestV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L45–L50` |
| `AdminPasswordTestV21._get_action` | method | (self) | private | `admin_password_v21.AdminPasswordController().change_password` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L53) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L52–L53` |
| `AdminPasswordTestV21._check_status` | method | (self, expected_status, req, res, controller_method) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L55–L56` |
| `AdminPasswordTestV21.test_change_password` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L58–L61` |
| `AdminPasswordTestV21.test_change_password_empty_string` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L63–L66` |
| `AdminPasswordTestV21.test_change_password_with_non_implement` | method | (self, mock_set_admin_password) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L70–L74` |
| `AdminPasswordTestV21.test_change_password_with_non_existed_instance` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L79–L83` |
| `AdminPasswordTestV21.test_change_password_with_non_string_password` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L85–L89` |
| `AdminPasswordTestV21.test_change_password_failed` | method | (self, mock_set_admin_password) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L94–L98` |
| `AdminPasswordTestV21.test_change_password_not_supported` | method | (self, mock_set_admin_password) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L103–L107` |
| `AdminPasswordTestV21.test_change_password_guest_agent_disabled` | method | (self, mock_set_admin_password) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L112–L117` |
| `AdminPasswordTestV21.test_change_password_without_admin_password` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L119–L123` |
| `AdminPasswordTestV21.test_change_password_none` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L125–L130` |
| `AdminPasswordTestV21.test_change_password_adminpass_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L132–L136` |
| `AdminPasswordTestV21.test_change_password_bad_request` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L138–L142` |
| `AdminPasswordTestV21.test_server_change_password_pass_disabled` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L144–L150` |
| `AdminPasswordTestV21.test_change_password_invalid_state` | method | (self, mock_set_admin_password) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L156–L160` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L19)
- `nova.api.openstack.compute`: imports `admin_password as admin_password_v21` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L23)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L24)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import admin_password as admin_password_v21 (src/nova/tests/unit/api/openstack/compute/test_admin_password.py:L21)

