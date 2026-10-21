# src/nova/tests/unit/api/openstack/compute/test_flavor_access.py

## Overview

This file implements the `test_flavor_access` module, defining 3 classs, 2 constants, 8 fields, 9 functions, 26 methods, 11 imports, 8 side effects, 2 security surface entries.

Lines: total 407, code 328, comment 19, blank 60

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `generate_flavor` | function | (flavorid, ispublic) | exported | `{ 'id': flavorid, 'flavorid': str(flavorid), 'root_gb': 1, 'ephemeral_gb': 1, 'name': u'test', 'created_at': datetime.datetime(2012, 1, 1, 1, 1, 1, 1), 'updated_at': None, 'memory_mb': 512, 'vcpus': 1` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L32) | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L31–L49` |
| `FLAVORS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L52–L56` |
| `ACCESS_LIST` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L59–L63` |
| `fake_get_flavor_access_by_flavor_id` | function | (context, flavorid) | exported | `res` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L71) | 3/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L66–L71` |
| `fake_get_flavor_by_flavor_id` | function | (context, flavorid) | exported | `FLAVORS[flavorid]` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L75) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L74–L75` |
| `_has_flavor_access` | function | (flavorid, projectid) | unexported | `True` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L82); `False` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L83) | 4/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L78–L83` |
| `fake_get_all_flavors_sorted_list` | function | (context, inactive=False, filters=None, sort_key='flavorid', sort_dir='asc', limit=None, marker=None) | exported | `sorted(FLAVORS.values(), key=lambda item: item[sort_key])` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L90); `res` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L101) | 7/14 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L86–L101` |
| `FakeRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L104–L109` |
| `FakeRequest.environ` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L105–L105` |
| `FakeRequest.api_version_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L106–L106` |
| `FakeRequest.is_legacy_v2` | method | (self) | public | `False` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L109) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L108–L109` |
| `FakeResponse` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L112–L120` |
| `FakeResponse.obj` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L113–L117` |
| `FakeResponse.attach` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L119–L120` |
| `fake_get_flavor_projects_from_db` | function | (context, flavorid) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L123–L124` |
| `FlavorAccessTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L127–L407` |
| `FlavorAccessTestV21.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L128–L128` |
| `FlavorAccessTestV21.FlavorAccessController` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L129–L129` |
| `FlavorAccessTestV21.FlavorActionController` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L130–L130` |
| `FlavorAccessTestV21._prefix` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L131–L131` |
| `FlavorAccessTestV21.validation_ex` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L132–L132` |
| `FlavorAccessTestV21.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L134–L151` |
| `FlavorAccessTestV21._verify_flavor_list` | method | (self, result, expected) | private | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L153–L158` |
| `FlavorAccessTestV21.test_list_flavor_access_public` | method | (self, mock_api_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L162–L170` |
| `FlavorAccessTestV21.test_list_flavor_access_private` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L172–L181` |
| `FlavorAccessTestV21.test_list_flavor_with_admin_default_proj1` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L183–L189` |
| `FlavorAccessTestV21.test_list_flavor_with_admin_default_proj2` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L191–L197` |
| `FlavorAccessTestV21.test_list_flavor_with_admin_ispublic_true` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L199–L205` |
| `FlavorAccessTestV21.test_list_flavor_with_admin_ispublic_false` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L207–L213` |
| `FlavorAccessTestV21.test_list_flavor_with_admin_ispublic_false_proj2` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L215–L222` |
| `FlavorAccessTestV21.test_list_flavor_with_admin_ispublic_none` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L224–L231` |
| `FlavorAccessTestV21.test_list_flavor_with_no_admin_default` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L233–L238` |
| `FlavorAccessTestV21.test_list_flavor_with_no_admin_ispublic_true` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L240–L246` |
| `FlavorAccessTestV21.test_list_flavor_with_no_admin_ispublic_false` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L248–L254` |
| `FlavorAccessTestV21.test_list_flavor_with_no_admin_ispublic_none` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L256–L262` |
| `FlavorAccessTestV21.test_add_tenant_access` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L264–L279` |
| `FlavorAccessTestV21.test_add_tenant_access.stub_add_flavor_access` | function | (context, flavor_id, projectid) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L265–L267` |
| `FlavorAccessTestV21.test_add_tenant_access_with_flavor_not_found` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L283–L289` |
| `FlavorAccessTestV21.test_add_tenant_access_with_no_tenant` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L291–L301` |
| `FlavorAccessTestV21.test_add_tenant_access_with_already_added_access` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L303–L316` |
| `FlavorAccessTestV21.test_add_tenant_access_with_already_added_access.stub_add_flavor_access` | function | (context, flavorid, projectid) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L304–L306` |
| `FlavorAccessTestV21.test_remove_tenant_access_with_bad_access` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L318–L331` |
| `FlavorAccessTestV21.test_remove_tenant_access_with_bad_access.stub_remove_flavor_access` | function | (context, flavorid, projectid) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L319–L321` |
| `FlavorAccessTestV21.test_add_tenant_access_is_public` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L333–L340` |
| `FlavorAccessTestV21.test_delete_tenant_access_with_no_tenant` | method | (self, mock_api_get) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L344–L354` |
| `FlavorAccessTestV21.test_add_tenant_access_with_invalid_tenant` | method | (self, mock_verify) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L359–L368` |
| `FlavorAccessTestV21.test_remove_tenant_access_with_invalid_tenant` | method | (self, mock_verify, mock_remove_access) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L372–L388` |
| `FlavorAccessTestV21.test_remove_tenant_access_missing_keystone_endpoint` | method | (self, mock_verify) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L394–L407` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L19)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L20)
- `nova.api.openstack`: imports `api_version_request as api_version` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L22)
- `nova.api.openstack.compute`: imports `flavor_access` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L23)
- `nova.api.openstack.compute`: imports `flavors as flavors_api` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L24)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import flavor_access (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L23)
- **network**: from nova.api.openstack.compute import flavors as flavors_api (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L24)
- **network**: self.stub_out('nova.api.openstack.identity.verify_project_id', (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L140)
- **network**: @mock.patch('nova.api.openstack.identity.verify_project_id', (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L356)
- **network**: @mock.patch('nova.api.openstack.identity.verify_project_id') (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L371)
- **network**: @mock.patch('nova.api.openstack.identity.verify_project_id', (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L390)
- **global-mutation**: FLAVORS = { (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L52)
- **global-mutation**: ACCESS_LIST = [ (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L59)

## Security Surface

- **sink** (`db-write`): res.update({k: v}) (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L95)
- **sink** (`db-write`): res.update({k: v}) (src/nova/tests/unit/api/openstack/compute/test_flavor_access.py:L98)

