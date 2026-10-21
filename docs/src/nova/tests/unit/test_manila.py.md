# src/nova/tests/unit/test_manila.py

## Overview

This file implements the `test_manila` module, defining 4 classs, 1 constant, 1 field, 6 functions, 30 methods, 17 imports, 12 side effects.

Lines: total 621, code 541, comment 11, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_manila.py:L40–L40` |
| `stub_share` | function | (share_id) | exported | `share` (src/nova/tests/unit/test_manila.py:L80) | 1/37 | `src/nova/tests/unit/test_manila.py:L43–L80` |
| `stub_export_locations` | function | — | exported | not declared | 2/31 | `src/nova/tests/unit/test_manila.py:L83–L114` |
| `stub_access_list` | function | — | exported | not declared | 2/5 | `src/nova/tests/unit/test_manila.py:L117–L121` |
| `stub_access` | function | — | exported | `access` (src/nova/tests/unit/test_manila.py:L150) | 1/27 | `src/nova/tests/unit/test_manila.py:L124–L150` |
| `stub_lock` | function | (share_id) | exported | `lock` (src/nova/tests/unit/test_manila.py:L178) | 1/26 | `src/nova/tests/unit/test_manila.py:L153–L178` |
| `stub_resource_locks` | function | (share_id) | exported | not declared | 2/6 | `src/nova/tests/unit/test_manila.py:L181–L186` |
| `BaseManilaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_manila.py:L189–L305` |
| `BaseManilaTestCase.project_id` | field | — | public | not declared | — | `src/nova/tests/unit/test_manila.py:L190–L190` |
| `BaseManilaTestCase.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_manila.py:L192–L207` |
| `BaseManilaTestCase.fake_conn` | method | (self, *args, **kwargs) | public | `FakeConnection()` (src/nova/tests/unit/test_manila.py:L271) | 1/14 | `src/nova/tests/unit/test_manila.py:L209–L271` |
| `BaseManilaTestCase.fake_conn.FakeConnection` | class | — | public | not declared | — | `src/nova/tests/unit/test_manila.py:L210–L212` |
| `BaseManilaTestCase.fake_conn.FakeConnection.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/test_manila.py:L211–L212` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy` | class | — | public | not declared | — | `src/nova/tests/unit/test_manila.py:L214–L269` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/test_manila.py:L215–L216` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.get_share` | method | (self, share_id) | public | `stub_share(share_id)` (src/nova/tests/unit/test_manila.py:L221) | — | `src/nova/tests/unit/test_manila.py:L218–L221` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.export_locations` | method | (self, share_id) | public | `stub_export_locations()` (src/nova/tests/unit/test_manila.py:L224) | — | `src/nova/tests/unit/test_manila.py:L223–L224` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.access_rules` | method | (self, share_id) | public | `[]` (src/nova/tests/unit/test_manila.py:L232); `stub_access_list()` (src/nova/tests/unit/test_manila.py:L233) | — | `src/nova/tests/unit/test_manila.py:L226–L233` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.create_access_rule` | method | (self, share_id, **kwargs) | public | `stub_access()` (src/nova/tests/unit/test_manila.py:L240) | — | `src/nova/tests/unit/test_manila.py:L235–L240` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.delete_access_rule` | method | (self, access_id, share_id, unrestrict) | public | `res` (src/nova/tests/unit/test_manila.py:L250) | — | `src/nova/tests/unit/test_manila.py:L242–L250` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.get_all_resource_locks` | method | (self, resource_id=None) | public | `[]` (src/nova/tests/unit/test_manila.py:L254); `[]` (src/nova/tests/unit/test_manila.py:L256); `[]` (src/nova/tests/unit/test_manila.py:L258); `stub_resource_locks(resource_id)` (src/nova/tests/unit/test_manila.py:L259) | — | `src/nova/tests/unit/test_manila.py:L252–L259` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.create_resource_lock` | method | (self, resource_id=None, resource_type=None, lock_reason=None) | public | `stub_lock(resource_id)` (src/nova/tests/unit/test_manila.py:L266) | — | `src/nova/tests/unit/test_manila.py:L261–L266` |
| `BaseManilaTestCase.fake_conn.FakeConnectionShareV2Proxy.delete_resource_lock` | method | (self, share_id) | public | not declared | — | `src/nova/tests/unit/test_manila.py:L268–L269` |
| `BaseManilaTestCase.test_client` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/15 | `src/nova/tests/unit/test_manila.py:L274–L288` |
| `BaseManilaTestCase.test_client_admin` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/15 | `src/nova/tests/unit/test_manila.py:L291–L305` |
| `ManilaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_manila.py:L308–L621` |
| `ManilaTestCase.test_get_fails_non_existing_share` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_manila.py:L309–L317` |
| `ManilaTestCase.test_get_share` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/37 | `src/nova/tests/unit/test_manila.py:L321–L359` |
| `ManilaTestCase.test_get_access_fails_non_existing_share` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_manila.py:L361–L385` |
| `ManilaTestCase.test_get_access` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/16 | `src/nova/tests/unit/test_manila.py:L389–L407` |
| `ManilaTestCase.test_get_access_not_existing` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_manila.py:L409–L416` |
| `ManilaTestCase.test_get_access_rules` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/16 | `src/nova/tests/unit/test_manila.py:L420–L437` |
| `ManilaTestCase.test_get_access_rules_empty` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_manila.py:L439–L443` |
| `ManilaTestCase.test_get_access_rules_fails_non_existing_share` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_manila.py:L445–L455` |
| `ManilaTestCase.test_allow_access_fails_non_existing_share` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_manila.py:L457–L471` |
| `ManilaTestCase.test_allow_access` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/16 | `src/nova/tests/unit/test_manila.py:L475–L492` |
| `ManilaTestCase.test_allow_access_sets_lock_reason` | method | (self, mock_client) | public | not declared | 1/12 | `src/nova/tests/unit/test_manila.py:L495–L506` |
| `ManilaTestCase.test_allow_access_fails_already_exists` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_manila.py:L508–L523` |
| `ManilaTestCase.test_deny_access_fails_non_existing_share` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_manila.py:L525–L538` |
| `ManilaTestCase.test_deny_access` | method | (self, mock_get_sdk_adapter) | public | not declared | 1/40 | `src/nova/tests/unit/test_manila.py:L542–L585` |
| `ManilaTestCase.test_deny_access_fails_id_missing` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_manila.py:L587–L603` |
| `ManilaTestCase.test_deny_access_fails_access_not_found` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_manila.py:L605–L621` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_manila.py:L13)
- `import fixtures` (src/nova/tests/unit/test_manila.py:L15)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/tests/unit/test_manila.py:L16)
- `openstack.shared_file_system.v2`: imports `resource_locks as sdk_resource_locks` (src/nova/tests/unit/test_manila.py:L17–L19)
- `openstack.shared_file_system.v2`: imports `share_access_rule as sdk_share_access_rule` (src/nova/tests/unit/test_manila.py:L21–L23)
- `openstack.shared_file_system.v2`: imports `share_export_locations as sdk_share_export_locations` (src/nova/tests/unit/test_manila.py:L24–L26)
- `openstack.shared_file_system.v2`: imports `share as sdk_share` (src/nova/tests/unit/test_manila.py:L27)
- `openstack`: imports `utils` (src/nova/tests/unit/test_manila.py:L28)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_manila.py:L29)
- `requests`: imports `Response` (src/nova/tests/unit/test_manila.py:L30)
- `import nova.conf` (src/nova/tests/unit/test_manila.py:L32)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/test_manila.py:L33)
- `nova`: imports `exception` (src/nova/tests/unit/test_manila.py:L34)
- `nova.share`: imports `manila` (src/nova/tests/unit/test_manila.py:L35)
- `nova`: imports `test` (src/nova/tests/unit/test_manila.py:L36)
- `nova.tests.fixtures.manila`: imports `ManilaAccess` (src/nova/tests/unit/test_manila.py:L37)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/test_manila.py:L38)

## Side Effects

- **network**: from openstack.shared_file_system.v2 import ( (src/nova/tests/unit/test_manila.py:L17)
- **network**: from openstack.shared_file_system.v2 import ( (src/nova/tests/unit/test_manila.py:L21)
- **network**: from openstack.shared_file_system.v2 import ( (src/nova/tests/unit/test_manila.py:L24)
- **network**: from openstack.shared_file_system.v2 import share as sdk_share (src/nova/tests/unit/test_manila.py:L27)
- **network**: @mock.patch('nova.utils.get_sdk_adapter') (src/nova/tests/unit/test_manila.py:L273)
- **network**: @mock.patch('nova.utils.get_sdk_adapter') (src/nova/tests/unit/test_manila.py:L290)
- **network**: 'nova.utils.get_sdk_adapter', side_effect=nova.utils.get_sdk_adapter) (src/nova/tests/unit/test_manila.py:L320)
- **network**: 'nova.utils.get_sdk_adapter', side_effect=nova.utils.get_sdk_adapter) (src/nova/tests/unit/test_manila.py:L388)
- **network**: 'nova.utils.get_sdk_adapter', side_effect=nova.utils.get_sdk_adapter) (src/nova/tests/unit/test_manila.py:L419)
- **network**: 'nova.utils.get_sdk_adapter', side_effect=nova.utils.get_sdk_adapter) (src/nova/tests/unit/test_manila.py:L474)
- **network**: 'nova.utils.get_sdk_adapter', side_effect=nova.utils.get_sdk_adapter) (src/nova/tests/unit/test_manila.py:L541)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/test_manila.py:L40)

