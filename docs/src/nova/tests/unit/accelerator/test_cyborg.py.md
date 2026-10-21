# src/nova/tests/unit/accelerator/test_cyborg.py

## Overview

This file implements the `test_cyborg` module, defining 1 class, 36 methods, 14 imports, 45 side effects, 1 security surface entry.

Lines: total 521, code 405, comment 37, blank 79

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CyborgTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/accelerator/test_cyborg.py:L35–L521` |
| `CyborgTestCase.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/accelerator/test_cyborg.py:L36–L45` |
| `CyborgTestCase.test_get_client` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/accelerator/test_cyborg.py:L47–L60` |
| `CyborgTestCase.test_call_cyborg` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/accelerator/test_cyborg.py:L62–L67` |
| `CyborgTestCase.test_call_cyborg_sdk_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/accelerator/test_cyborg.py:L69–L76` |
| `CyborgTestCase.test_call_cyborg_bad_response` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/accelerator/test_cyborg.py:L78–L85` |
| `CyborgTestCase.test_get_device_profile_list` | method | (self, mock_resp_json, mock_call_cyborg) | public | not declared | 1/5 | `src/nova/tests/unit/accelerator/test_cyborg.py:L89–L93` |
| `CyborgTestCase.test_get_device_profile_list_bad_response` | method | (self, mock_call_cyborg) | public | not declared | 1/6 | `src/nova/tests/unit/accelerator/test_cyborg.py:L96–L101` |
| `CyborgTestCase._test_get_device_profile_groups` | method | (self, mock_get_dp_list, owner) | private | not declared | 1/21 | `src/nova/tests/unit/accelerator/test_cyborg.py:L105–L126` |
| `CyborgTestCase.test_get_device_profile_groups_no_owner` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/accelerator/test_cyborg.py:L128–L129` |
| `CyborgTestCase.test_get_device_profile_groups_port_owner` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/accelerator/test_cyborg.py:L131–L132` |
| `CyborgTestCase.test_get_device_profile_groups_no_dp` | method | (self, mock_get_dp_list) | public | not declared | 1/5 | `src/nova/tests/unit/accelerator/test_cyborg.py:L136–L141` |
| `CyborgTestCase.test_get_device_profile_groups_many_dp` | method | (self, mock_get_dp_list) | public | not declared | 1/5 | `src/nova/tests/unit/accelerator/test_cyborg.py:L145–L150` |
| `CyborgTestCase._get_arqs_and_request_groups` | method | (self) | private | `arqs, rg_rp_map` (src/nova/tests/unit/accelerator/test_cyborg.py:L172) | 2/20 | `src/nova/tests/unit/accelerator/test_cyborg.py:L152–L172` |
| `CyborgTestCase._get_bound_arqs` | method | (self) | private | `bindings, bound_arqs` (src/nova/tests/unit/accelerator/test_cyborg.py:L206) | 3/32 | `src/nova/tests/unit/accelerator/test_cyborg.py:L174–L206` |
| `CyborgTestCase.test_create_arqs_failure` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/accelerator/test_cyborg.py:L208–L213` |
| `CyborgTestCase.test_create_arq_and_match_rps` | method | (self, mock_create_arqs) | public | not declared | 2/10 | `src/nova/tests/unit/accelerator/test_cyborg.py:L217–L231` |
| `CyborgTestCase.test_create_arqs` | method | (self, mock_create_arqs) | public | not declared | 1/6 | `src/nova/tests/unit/accelerator/test_cyborg.py:L235–L244` |
| `CyborgTestCase.test_get_arq_device_rp_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/accelerator/test_cyborg.py:L246–L252` |
| `CyborgTestCase.test_create_arq_and_match_rps_exception` | method | (self, mock_create_arqs) | public | not declared | 1/8 | `src/nova/tests/unit/accelerator/test_cyborg.py:L256–L265` |
| `CyborgTestCase.test_bind_arqs` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/accelerator/test_cyborg.py:L267–L284` |
| `CyborgTestCase.test_bind_arqs_exception` | method | (self, mock_call_cyborg, mock_del_arqs) | public | not declared | 1/6 | `src/nova/tests/unit/accelerator/test_cyborg.py:L288–L294` |
| `CyborgTestCase.test_get_arqs_for_instance` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/accelerator/test_cyborg.py:L296–L314` |
| `CyborgTestCase.test_get_arqs_for_instance_exception` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/accelerator/test_cyborg.py:L316–L325` |
| `CyborgTestCase.test_get_arqs_for_instance_exception_no_resp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/accelerator/test_cyborg.py:L327–L338` |
| `CyborgTestCase.test_get_arqs_for_instance_all_resolved` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/accelerator/test_cyborg.py:L340–L359` |
| `CyborgTestCase.test_get_arqs_for_instance_some_resolved` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/accelerator/test_cyborg.py:L361–L379` |
| `CyborgTestCase.test_delete_arqs_for_instance` | method | (self, mock_call_cyborg) | public | not declared | 1/6 | `src/nova/tests/unit/accelerator/test_cyborg.py:L382–L388` |
| `CyborgTestCase.test_delete_arqs_for_instance_exception` | method | (self, mock_call_cyborg) | public | not declared | 1/9 | `src/nova/tests/unit/accelerator/test_cyborg.py:L391–L400` |
| `CyborgTestCase.test_delete_arqs_by_uuid` | method | (self, mock_call_cyborg) | public | not declared | 2/8 | `src/nova/tests/unit/accelerator/test_cyborg.py:L403–L411` |
| `CyborgTestCase.test_delete_arqs_by_uuid_exception` | method | (self, mock_call_cyborg, mock_log) | public | not declared | 2/10 | `src/nova/tests/unit/accelerator/test_cyborg.py:L415–L424` |
| `CyborgTestCase.test_get_arq_by_uuid` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/accelerator/test_cyborg.py:L426–L437` |
| `CyborgTestCase.test_get_arq_by_uuid_exception` | method | (self, mock_call_cyborg) | public | not declared | 2/7 | `src/nova/tests/unit/accelerator/test_cyborg.py:L440–L447` |
| `CyborgTestCase.test_get_arq_by_uuid_not_found` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/accelerator/test_cyborg.py:L449–L458` |
| `CyborgTestCase.test_get_arq_uuids_for_instance` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/accelerator/test_cyborg.py:L460–L479` |
| `CyborgTestCase.test_get_arq_pci_device_profile` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/accelerator/test_cyborg.py:L481–L503` |
| `CyborgTestCase.test_get_device_amount_of_dp_groups` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/accelerator/test_cyborg.py:L505–L521` |

## Dependencies

- `import itertools` (src/nova/tests/unit/accelerator/test_cyborg.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/accelerator/test_cyborg.py:L16)
- `import fixtures` (src/nova/tests/unit/accelerator/test_cyborg.py:L18)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/tests/unit/accelerator/test_cyborg.py:L20)
- `requests.models`: imports `Response` (src/nova/tests/unit/accelerator/test_cyborg.py:L21)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/accelerator/test_cyborg.py:L23)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/accelerator/test_cyborg.py:L24)
- `nova.accelerator`: imports `cyborg` (src/nova/tests/unit/accelerator/test_cyborg.py:L26)
- `nova`: imports `context` (src/nova/tests/unit/accelerator/test_cyborg.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/accelerator/test_cyborg.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/accelerator/test_cyborg.py:L29)
- `nova.objects`: imports `request_spec` (src/nova/tests/unit/accelerator/test_cyborg.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/accelerator/test_cyborg.py:L31)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/unit/accelerator/test_cyborg.py:L32)

## Side Effects

- **network**: 'nova.service_auth.get_service_user_token_auth_plugin')).mock (src/nova/tests/unit/accelerator/test_cyborg.py:L40)
- **network**: fixtures.MockPatch('nova.utils.get_sdk_adapter')).mock (src/nova/tests/unit/accelerator/test_cyborg.py:L42)
- **network**: self.assertIs(self.mock_adapter, self.client._client) (src/nova/tests/unit/accelerator/test_cyborg.py:L55)
- **network**: self.assertIs(self.mock_adapter, self.client._client) (src/nova/tests/unit/accelerator/test_cyborg.py:L56)
- **network**: resp, err_msg = self.client._call_cyborg( (src/nova/tests/unit/accelerator/test_cyborg.py:L64)
- **network**: 'get', self.client.DEVICE_PROFILE_URL) (src/nova/tests/unit/accelerator/test_cyborg.py:L65)
- **network**: resp, err_msg = self.client._call_cyborg( (src/nova/tests/unit/accelerator/test_cyborg.py:L71)
- **network**: 'get', self.client.DEVICE_PROFILE_URL) (src/nova/tests/unit/accelerator/test_cyborg.py:L72)
- **network**: resp, err_msg = self.client._call_cyborg( (src/nova/tests/unit/accelerator/test_cyborg.py:L80)
- **network**: 'get', self.client.DEVICE_PROFILE_URL) (src/nova/tests/unit/accelerator/test_cyborg.py:L81)
- **network**: ret = self.client._get_device_profile_list(dp_name='mydp') (src/nova/tests/unit/accelerator/test_cyborg.py:L92)
- **network**: self.client._get_device_profile_list, (src/nova/tests/unit/accelerator/test_cyborg.py:L100)
- **network**: dp_groups = self.client.get_device_profile_groups('mydp') (src/nova/tests/unit/accelerator/test_cyborg.py:L121)
- **network**: actual_groups = self.client.get_device_request_groups(dp_groups, (src/nova/tests/unit/accelerator/test_cyborg.py:L122)
- **network**: self.client.get_device_profile_groups, (src/nova/tests/unit/accelerator/test_cyborg.py:L140)
- **network**: self.client.get_device_profile_groups, (src/nova/tests/unit/accelerator/test_cyborg.py:L149)
- **network**: self.client._create_arqs, (src/nova/tests/unit/accelerator/test_cyborg.py:L212)
- **network**: ret_arqs = self.client.create_arqs_and_match_resource_providers( (src/nova/tests/unit/accelerator/test_cyborg.py:L224)
- **network**: ret_arqs = self.client.create_arqs(dp_name) (src/nova/tests/unit/accelerator/test_cyborg.py:L242)
- **network**: rp_uuid = self.client.get_arq_device_rp_uuid( (src/nova/tests/unit/accelerator/test_cyborg.py:L249)
- **network**: self.client.create_arqs_and_match_resource_providers, (src/nova/tests/unit/accelerator/test_cyborg.py:L264)
- **network**: self.client.bind_arqs(bindings) (src/nova/tests/unit/accelerator/test_cyborg.py:L279)
- **network**: self.client.ARQ_URL, json=mock.ANY) (src/nova/tests/unit/accelerator/test_cyborg.py:L282)
- **network**: self.client.bind_arqs, bindings=bindings) (src/nova/tests/unit/accelerator/test_cyborg.py:L293)
- **network**: ret_arqs = self.client.get_arqs_for_instance(instance_uuid) (src/nova/tests/unit/accelerator/test_cyborg.py:L306)
- **network**: self.client.ARQ_URL, params=query) (src/nova/tests/unit/accelerator/test_cyborg.py:L309)
- **network**: self.client.get_arqs_for_instance, instance_uuid) (src/nova/tests/unit/accelerator/test_cyborg.py:L325)
- **network**: self.client.get_arqs_for_instance, instance_uuid) (src/nova/tests/unit/accelerator/test_cyborg.py:L338)
- **network**: ret_arqs = self.client.get_arqs_for_instance( (src/nova/tests/unit/accelerator/test_cyborg.py:L350)
- **network**: self.client.ARQ_URL, params=query) (src/nova/tests/unit/accelerator/test_cyborg.py:L354)
- **network**: ret_arqs = self.client.get_arqs_for_instance( (src/nova/tests/unit/accelerator/test_cyborg.py:L374)
- **network**: self.client.ARQ_URL, params=query) (src/nova/tests/unit/accelerator/test_cyborg.py:L378)
- **network**: self.client.delete_arqs_for_instance(instance_uuid) (src/nova/tests/unit/accelerator/test_cyborg.py:L386)
- **network**: self.client.ARQ_URL, params={'instance': instance_uuid}) (src/nova/tests/unit/accelerator/test_cyborg.py:L388)
- **network**: self.client.delete_arqs_for_instance, instance_uuid) (src/nova/tests/unit/accelerator/test_cyborg.py:L397)
- **network**: self.client.delete_arqs_by_uuid(arq_uuids) (src/nova/tests/unit/accelerator/test_cyborg.py:L409)
- **network**: self.client.ARQ_URL, params={'arqs': arq_uuid_str}) (src/nova/tests/unit/accelerator/test_cyborg.py:L411)
- **network**: self.client.delete_arqs_by_uuid(arq_uuids) (src/nova/tests/unit/accelerator/test_cyborg.py:L420)
- **network**: self.client.ARQ_URL, params={'arqs': arq_uuid_str}) (src/nova/tests/unit/accelerator/test_cyborg.py:L422)
- **network**: ret_arqs = self.client.get_arq_by_uuid(arq_uuids[0]) (src/nova/tests/unit/accelerator/test_cyborg.py:L433)
- **network**: "%s/%s" % (self.client.ARQ_URL, arq_uuids[0])) (src/nova/tests/unit/accelerator/test_cyborg.py:L436)
- **network**: self.client.get_arq_by_uuid, (src/nova/tests/unit/accelerator/test_cyborg.py:L446)
- **network**: self.client.get_arq_by_uuid, (src/nova/tests/unit/accelerator/test_cyborg.py:L457)
- **network**: ret_arqs = self.client.get_arq_uuids_for_instance(instance) (src/nova/tests/unit/accelerator/test_cyborg.py:L472)
- **network**: self.client.ARQ_URL, params=query) (src/nova/tests/unit/accelerator/test_cyborg.py:L475)

## Security Surface

- **privilege** (`crypto-key`): 'nova.service_auth.get_service_user_token_auth_plugin')).mock (src/nova/tests/unit/accelerator/test_cyborg.py:L40)

