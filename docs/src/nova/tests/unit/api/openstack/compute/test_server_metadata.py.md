# src/nova/tests/unit/api/openstack/compute/test_server_metadata.py

## Overview

This file implements the `test_server_metadata` module, defining 2 classs, 1 constant, 2 fields, 9 functions, 51 methods, 12 imports, 2 side effects, 13 security surface entries.

Lines: total 704, code 570, comment 20, blank 114

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L33–L33` |
| `return_create_instance_metadata_max` | function | (context, server_id, metadata, delete) | exported | `stub_max_server_metadata()` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L37) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L36–L37` |
| `return_create_instance_metadata` | function | (context, server_id, metadata, delete) | exported | `stub_server_metadata()` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L41) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L40–L41` |
| `fake_instance_save` | function | (inst, **kwargs) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L44–L46` |
| `return_server_metadata` | function | (context, server_id) | exported | `stub_server_metadata()` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L53) | 3/5 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L49–L53` |
| `return_empty_server_metadata` | function | (context, server_id) | exported | `{}` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L57) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L56–L57` |
| `delete_server_metadata` | function | (context, server_id, key) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L60–L61` |
| `stub_server_metadata` | function | — | exported | `metadata` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L70) | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L64–L70` |
| `stub_max_server_metadata` | function | — | exported | `metadata` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L77) | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L73–L77` |
| `return_server_nonexistent` | function | (context, server_id, columns_to_join=None, use_slave=False) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L80–L82` |
| `ServerMetaDataTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L85–L642` |
| `ServerMetaDataTestV21.validation_ex` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L86–L86` |
| `ServerMetaDataTestV21.validation_ex_large` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L87–L87` |
| `ServerMetaDataTestV21.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L89–L103` |
| `ServerMetaDataTestV21._set_up_resources` | method | (self) | private | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L105–L109` |
| `ServerMetaDataTestV21._get_request` | method | (self, param_url='') | private | `fakes.HTTPRequestV21.blank(self.url + param_url)` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L112) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L111–L112` |
| `ServerMetaDataTestV21.test_index` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L114–L125` |
| `ServerMetaDataTestV21.test_index_nonexistent_server` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L127–L132` |
| `ServerMetaDataTestV21.test_index_no_data` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L134–L140` |
| `ServerMetaDataTestV21.test_show` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L142–L146` |
| `ServerMetaDataTestV21.test_show_nonexistent_server` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L148–L153` |
| `ServerMetaDataTestV21.test_show_meta_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L155–L160` |
| `ServerMetaDataTestV21.test_delete` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L162–L171` |
| `ServerMetaDataTestV21.test_delete_nonexistent_server` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L173–L180` |
| `ServerMetaDataTestV21.test_delete_meta_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L182–L188` |
| `ServerMetaDataTestV21.test_create` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L190–L204` |
| `ServerMetaDataTestV21.test_create_empty_body` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L206–L214` |
| `ServerMetaDataTestV21.test_create_item_empty_key` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L216–L226` |
| `ServerMetaDataTestV21.test_create_item_non_dict` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L228–L238` |
| `ServerMetaDataTestV21.test_create_item_key_too_long` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L240–L251` |
| `ServerMetaDataTestV21.test_create_malformed_container` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L253–L263` |
| `ServerMetaDataTestV21.test_create_malformed_data` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L265–L275` |
| `ServerMetaDataTestV21.test_create_nonexistent_server` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L277–L288` |
| `ServerMetaDataTestV21.test_update_metadata` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L290–L303` |
| `ServerMetaDataTestV21.test_update_all` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L305–L319` |
| `ServerMetaDataTestV21.test_update_all_empty_container` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L321–L330` |
| `ServerMetaDataTestV21.test_update_all_empty_body_item` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L332–L341` |
| `ServerMetaDataTestV21.test_update_all_with_non_dict_item` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L343–L354` |
| `ServerMetaDataTestV21.test_update_all_malformed_container` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L356–L367` |
| `ServerMetaDataTestV21.test_update_all_malformed_data` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L369–L380` |
| `ServerMetaDataTestV21.test_update_all_nonexistent_server` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L382–L393` |
| `ServerMetaDataTestV21.test_update_all_non_dict` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L395–L405` |
| `ServerMetaDataTestV21.test_update_item` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L407–L416` |
| `ServerMetaDataTestV21.test_update_item_nonexistent_server` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L418–L429` |
| `ServerMetaDataTestV21.test_update_item_empty_body` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L431–L440` |
| `ServerMetaDataTestV21.test_update_malformed_container` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L442–L453` |
| `ServerMetaDataTestV21.test_update_malformed_data` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L455–L466` |
| `ServerMetaDataTestV21.test_update_item_empty_key` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L468–L479` |
| `ServerMetaDataTestV21.test_update_item_key_too_long` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L481–L492` |
| `ServerMetaDataTestV21.test_update_item_value_too_long` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L494–L505` |
| `ServerMetaDataTestV21.test_update_item_too_many_keys` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L507–L518` |
| `ServerMetaDataTestV21.test_update_item_body_uri_mismatch` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L520–L531` |
| `ServerMetaDataTestV21.test_update_item_non_dict` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L533–L544` |
| `ServerMetaDataTestV21.test_update_empty_container` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L546–L557` |
| `ServerMetaDataTestV21.test_too_many_metadata_items_on_create` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L559–L571` |
| `ServerMetaDataTestV21.test_invalid_metadata_items_on_create` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L573–L596` |
| `ServerMetaDataTestV21.test_too_many_metadata_items_on_update_item` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L598–L610` |
| `ServerMetaDataTestV21.test_invalid_metadata_items_on_update_item` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L612–L642` |
| `BadStateServerMetaDataTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L645–L704` |
| `BadStateServerMetaDataTestV21.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L647–L658` |
| `BadStateServerMetaDataTestV21._set_up_resources` | method | (self) | private | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L660–L664` |
| `BadStateServerMetaDataTestV21._get_request` | method | (self, param_url='') | private | `fakes.HTTPRequestV21.blank(self.url + param_url)` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L667) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L666–L667` |
| `BadStateServerMetaDataTestV21.test_invalid_state_on_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L669–L673` |
| `BadStateServerMetaDataTestV21.test_invalid_state_on_update_metadata` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L675–L689` |
| `BadStateServerMetaDataTestV21.test_instance_lock_update_metadata` | method | (self, mock_update) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L693–L704` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L20)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L21)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L22)
- `nova.api.openstack.compute`: imports `server_metadata as server_metadata_v21` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L24–L25)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L26)
- `import nova.db.main.api` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L29)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute import server_metadata \ (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L24)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L33)

## Security Surface

- **sink** (`db-write`): body['metadata'].update({ (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L199)
- **sink** (`db-write`): res_dict = self.controller.update(req, self.uuid, 'key1', body=body) (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L414)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'key1', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L428)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'key1', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L439)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'key1', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L452)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'key1', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L465)
- **sink** (`db-write`): self.controller.update, req, self.uuid, '', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L478)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L491)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L504)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'key1', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L517)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'bad', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L530)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'bad', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L543)
- **sink** (`db-write`): self.controller.update, req, self.uuid, 'bad', (src/nova/tests/unit/api/openstack/compute/test_server_metadata.py:L556)

