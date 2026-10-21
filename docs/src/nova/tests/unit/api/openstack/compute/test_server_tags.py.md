# src/nova/tests/unit/api/openstack/compute/test_server_tags.py

## Overview

This file implements the `test_server_tags` module, defining 1 class, 6 constants, 1 field, 3 functions, 32 methods, 14 imports, 32 side effects, 7 security surface entries.

Lines: total 333, code 268, comment 11, blank 54

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L30–L30` |
| `TAG1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L31–L31` |
| `TAG2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L32–L32` |
| `TAG3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L33–L33` |
| `TAGS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L34–L34` |
| `NON_EXISTING_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L35–L35` |
| `return_server` | function | (compute_api, context, instance_id, expected_attrs=None) | exported | `fake_instance.fake_instance_obj(context, vm_state=vm_states.ACTIVE)` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L39) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L38–L39` |
| `return_invalid_server` | function | (compute_api, context, instance_id, expected_attrs=None) | exported | `fake_instance.fake_instance_obj(context, vm_state=vm_states.BUILDING)` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L44) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L42–L45` |
| `ServerTagsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L48–L333` |
| `ServerTagsTest.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L49–L49` |
| `ServerTagsTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L51–L59` |
| `ServerTagsTest._get_tag` | method | (self, tag_name) | private | `tag` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L65) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L61–L65` |
| `ServerTagsTest._get_request` | method | (self, url, method) | private | `request` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L70) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L67–L70` |
| `ServerTagsTest.test_show` | method | (self, mock_exists) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L73–L79` |
| `ServerTagsTest.test_index` | method | (self, mock_db_get_inst_tags) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L82–L90` |
| `ServerTagsTest.test_update_all` | method | (self, mock_db_set_inst_tags, mock_notify) | public | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L94–L103` |
| `ServerTagsTest.test_update_all_too_many_tags` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L105–L113` |
| `ServerTagsTest.test_update_all_forbidden_characters` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L115–L121` |
| `ServerTagsTest.test_update_all_invalid_tag_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L123–L127` |
| `ServerTagsTest.test_update_all_tags_with_one_tag_empty_string` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L129–L133` |
| `ServerTagsTest.test_update_all_too_long_tag` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L135–L141` |
| `ServerTagsTest.test_update_all_invalid_tag_list_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L143–L147` |
| `ServerTagsTest.test_update_all_invalid_instance_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L149–L154` |
| `ServerTagsTest.test_show_non_existing_tag` | method | (self, mock_exists) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L157–L162` |
| `ServerTagsTest.test_update` | method | (self, mock_db_get_inst_tags, mock_db_add_inst_tags, mock_notify) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L167–L183` |
| `ServerTagsTest.test_update_existing_tag` | method | (self, mock_db_get_inst_tags) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L186–L196` |
| `ServerTagsTest.test_update_tag_limit_exceed` | method | (self, mock_db_get_inst_tags) | public | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L199–L208` |
| `ServerTagsTest.test_update_too_long_tag` | method | (self, mock_db_get_inst_tags) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L211–L219` |
| `ServerTagsTest.test_update_forbidden_characters` | method | (self, mock_db_get_inst_tags) | public | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L222–L229` |
| `ServerTagsTest.test_update_invalid_instance_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L231–L237` |
| `ServerTagsTest.test_delete` | method | (self, mock_db_delete_inst_tags, mock_notify, mock_db_get_inst_tags) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L242–L250` |
| `ServerTagsTest.test_delete_non_existing_tag` | method | (self, mock_db_delete_inst_tags) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L253–L265` |
| `ServerTagsTest.test_delete_non_existing_tag.fake_db_delete_tag` | function | (context, instance_uuid, tag) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L256–L260` |
| `ServerTagsTest.test_delete_invalid_instance_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L267–L273` |
| `ServerTagsTest.test_delete_all` | method | (self, mock_db_delete_inst_tags, mock_notify) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L277–L282` |
| `ServerTagsTest.test_delete_all_invalid_instance_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L284–L289` |
| `ServerTagsTest.test_show_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L291–L295` |
| `ServerTagsTest.test_show_with_details_information_non_existing_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L297–L302` |
| `ServerTagsTest.test_index_non_existing_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L304–L309` |
| `ServerTagsTest.test_update_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L311–L315` |
| `ServerTagsTest.test_update_all_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L317–L321` |
| `ServerTagsTest.test_delete_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L323–L327` |
| `ServerTagsTest.test_delete_all_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L329–L333` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L13)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L15)
- `nova.api.openstack.compute`: imports `server_tags` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L17)
- `nova.api.openstack.compute`: imports `servers` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L18)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L20)
- `nova.db.main`: imports `models` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L23)
- `nova.objects`: imports `instance` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L24)
- `nova.objects`: imports `tag as tag_obj` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L27)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import server_tags (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L17)
- **network**: from nova.api.openstack.compute import servers (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L18)
- **network**: def test_update_all(self, mock_db_set_inst_tags, mock_notify): (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L94)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L95)
- **network**: self.assertEqual(1, mock_notify.call_count) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L103)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L106)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L116)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L136)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L150)
- **network**: mock_notify): (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L168)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L169)
- **network**: self.assertEqual(1, mock_notify.call_count) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L183)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L187)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L200)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L212)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L223)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L232)
- **network**: def test_delete(self, mock_db_delete_inst_tags, mock_notify, (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L242)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L244)
- **network**: self.assertEqual(1, mock_notify.call_count) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L250)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L254)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L268)
- **network**: def test_delete_all(self, mock_db_delete_inst_tags, mock_notify): (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L277)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', return_server) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L278)
- **network**: self.assertEqual(1, mock_notify.call_count) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L282)
- **network**: self.stub_out('nova.api.openstack.common.get_instance', (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L285)
- **global-mutation**: UUID = 'b48316c5-71e8-45e4-9884-6c78055b9b13' (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L30)
- **global-mutation**: TAG1 = 'tag1' (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L31)
- **global-mutation**: TAG2 = 'tag2' (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L32)
- **global-mutation**: TAG3 = 'tag3' (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L33)
- **global-mutation**: TAGS = [TAG1, TAG2, TAG3] (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L34)
- **global-mutation**: NON_EXISTING_UUID = '123' (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L35)

## Security Surface

- **sink** (`db-write`): res = self.controller.update(req, UUID, TAG2, body=None) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L176)
- **sink** (`db-write`): res = self.controller.update(req, UUID, TAG1, body=None) (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L192)
- **sink** (`db-write`): self.assertRaises(exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L207)
- **sink** (`db-write`): self.assertRaises(exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L218)
- **sink** (`db-write`): self.assertRaises(exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L228)
- **sink** (`db-write`): self.assertRaises(exc.HTTPConflict, self.controller.update, req, UUID, (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L236)
- **sink** (`db-write`): self.assertRaises(exc.HTTPNotFound, self.controller.update, req, (src/nova/tests/unit/api/openstack/compute/test_server_tags.py:L314)

## Notes

- KB `sideEffects` entries at L94, L242, L277 have targets that appear to be code fragments rather than resource paths; documented as recorded.

