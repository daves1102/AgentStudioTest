# src/nova/tests/unit/api/openstack/compute/test_server_shares.py

## Overview

This file implements the `test_server_shares` module, defining 1 class, 2 constants, 1 field, 2 functions, 8 methods, 12 imports, 10 side effects.

Lines: total 410, code 350, comment 12, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L29–L29` |
| `NON_EXISTING_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L30–L30` |
| `return_server` | function | (compute_api, context, instance_id, expected_attrs=None) | exported | `fake_instance.fake_instance_obj(context, vm_state=vm_states.ACTIVE)` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L34) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L33–L34` |
| `return_invalid_server` | function | (compute_api, context, instance_id, expected_attrs=None) | exported | `fake_instance.fake_instance_obj(context, vm_state=vm_states.BUILDING)` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L39) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L37–L40` |
| `ServerSharesTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L43–L410` |
| `ServerSharesTest.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L44–L44` |
| `ServerSharesTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L46–L59` |
| `ServerSharesTest.fake_get_instance` | method | (self) | public | `fake_instance.fake_instance_obj( ctxt, uuid=fakes.FAKE_UUID, flavor = objects.Flavor(id=1, name='flavor1', memory_mb=256, vcpus=1, root_gb=1, ephemeral_gb=1, flavorid='1', swap=0, rxtx_factor=1.0, vcp` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L63) | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L61–L79` |
| `ServerSharesTest.test_index` | method | (self, mock_get_instance, mock_db_get_shares, mock_shares_support) | public | not declared | 1/55 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L86–L143` |
| `ServerSharesTest.test_create` | method | (self, mock_get_instance, mock_db_update_share, mock_db_get_share, mock_notifications, mock_shares_support) | public | not declared | 1/41 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L157–L202` |
| `ServerSharesTest.test_create_share_with_new_tag` | method | (self, mock_get_instance, mock_db_update_share, mock_db_get_share, mock_shares_support, mock_allow) | public | not declared | 1/66 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L213–L288` |
| `ServerSharesTest.test_create_passing_a_share_with_an_error` | method | (self, mock_get_instance, mock_shares_support) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L294–L323` |
| `ServerSharesTest.test_create_passing_unknown_protocol` | method | (self, mock_get_instance, mock_shares_support) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L329–L357` |
| `ServerSharesTest.test_delete` | method | (self, mock_get_instance, mock_db_get_shares, mock_db_delete_share, mock_notifications, mock_shares_support, mock_deny) | public | not declared | 1/35 | `src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L372–L410` |

## Dependencies

- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L13)
- `nova.api.openstack.compute`: imports `server_shares` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L15)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L16)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L17)
- `nova.db.main`: imports `models` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L20)
- `nova.tests.unit.compute.test_compute`: imports `BaseTestCase` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L24)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L25)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import server_shares (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L15)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L85)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L156)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L212)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L293)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L328)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L371)
- **global-mutation**: UUID = 'aaaaaaaa-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L29)
- **global-mutation**: NON_EXISTING_UUID = '123' (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L30)
- **global-mutation**: NOW = timeutils.utcnow() (src/nova/tests/unit/api/openstack/compute/test_server_shares.py:L90)

