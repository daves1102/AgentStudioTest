# src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py

## Overview

This file implements the `test_flavors_extraspecs` module, defining 1 class, 2 fields, 6 functions, 43 methods, 9 imports, 1 side effect, 10 security surface entries.

Lines: total 454, code 359, comment 14, blank 81

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `return_create_flavor_extra_specs` | function | (context, flavor_id, extra_specs, *args, **kwargs) | exported | `stub_flavor_extra_specs()` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L32) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L30–L32` |
| `return_flavor_extra_specs` | function | (context, flavor_id) | exported | `stub_flavor_extra_specs()` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L36) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L35–L36` |
| `return_flavor_extra_specs_item` | function | (context, flavor_id, key) | exported | `{key: stub_flavor_extra_specs()[key]}` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L40) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L39–L40` |
| `return_empty_flavor_extra_specs` | function | (context, flavor_id) | exported | `{}` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L44) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L43–L44` |
| `delete_flavor_extra_specs` | function | (context, flavor_id, key) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L47–L48` |
| `stub_flavor_extra_specs` | function | — | exported | `specs` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L56) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L51–L56` |
| `FlavorsExtraSpecsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L59–L454` |
| `FlavorsExtraSpecsTestV21.bad_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L60–L60` |
| `FlavorsExtraSpecsTestV21.flavorextraspecs` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L61–L61` |
| `FlavorsExtraSpecsTestV21._get_request` | method | (self, url, use_admin_context=False, version=None) | private | `fakes.HTTPRequest.blank( req_url, use_admin_context=use_admin_context, **kwargs, )` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L68) | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L63–L70` |
| `FlavorsExtraSpecsTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L72–L75` |
| `FlavorsExtraSpecsTestV21.test_index` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L77–L88` |
| `FlavorsExtraSpecsTestV21.test_index_no_data` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L91–L98` |
| `FlavorsExtraSpecsTestV21.test_index_flavor_not_found` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L101–L106` |
| `FlavorsExtraSpecsTestV21.test_show` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L108–L117` |
| `FlavorsExtraSpecsTestV21.test_show_spec_not_found` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L120–L125` |
| `FlavorsExtraSpecsTestV21.test_not_found_because_flavor` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L127–L145` |
| `FlavorsExtraSpecsTestV21.test_delete` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L148–L155` |
| `FlavorsExtraSpecsTestV21.test_delete_spec_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L157–L161` |
| `FlavorsExtraSpecsTestV21.test_create` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L163–L175` |
| `FlavorsExtraSpecsTestV21.test_create_flavor_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L177–L183` |
| `FlavorsExtraSpecsTestV21.test_create_flavor_db_duplicate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L185–L193` |
| `FlavorsExtraSpecsTestV21._test_create_bad_request` | method | (self, body) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L195–L201` |
| `FlavorsExtraSpecsTestV21.test_create_empty_body` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L203–L204` |
| `FlavorsExtraSpecsTestV21.test_create_non_dict_extra_specs` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L206–L207` |
| `FlavorsExtraSpecsTestV21.test_create_non_string_key` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L209–L210` |
| `FlavorsExtraSpecsTestV21.test_create_non_string_value` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L212–L213` |
| `FlavorsExtraSpecsTestV21.test_create_zero_length_key` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L215–L216` |
| `FlavorsExtraSpecsTestV21.test_create_long_key` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L218–L220` |
| `FlavorsExtraSpecsTestV21.test_create_long_value` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L222–L226` |
| `FlavorsExtraSpecsTestV21.test_create_really_long_integer_value` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L228–L233` |
| `FlavorsExtraSpecsTestV21.test_create_invalid_specs` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L235–L252` |
| `FlavorsExtraSpecsTestV21.test_create_invalid_known_namespace` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L254–L281` |
| `FlavorsExtraSpecsTestV21.test_create_invalid_unknown_namespace` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L283–L295` |
| `FlavorsExtraSpecsTestV21.test_create_valid_specs` | method | (self, mock_flavor_extra_specs) | public | not declared | 2/23 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L298–L321` |
| `FlavorsExtraSpecsTestV21.test_update_item` | method | (self, mock_add) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L324–L332` |
| `FlavorsExtraSpecsTestV21._test_update_item_bad_request` | method | (self, body) | private | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L334–L338` |
| `FlavorsExtraSpecsTestV21.test_update_item_empty_body` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L340–L341` |
| `FlavorsExtraSpecsTestV21.test_update_item_too_many_keys` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L343–L345` |
| `FlavorsExtraSpecsTestV21.test_update_item_non_dict_extra_specs` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L347–L348` |
| `FlavorsExtraSpecsTestV21.test_update_item_non_string_key` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L350–L351` |
| `FlavorsExtraSpecsTestV21.test_update_item_non_string_value` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L353–L354` |
| `FlavorsExtraSpecsTestV21.test_update_item_zero_length_key` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L356–L357` |
| `FlavorsExtraSpecsTestV21.test_update_item_long_key` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L359–L361` |
| `FlavorsExtraSpecsTestV21.test_update_item_long_value` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L363–L365` |
| `FlavorsExtraSpecsTestV21.test_update_item_body_uri_mismatch` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L367–L372` |
| `FlavorsExtraSpecsTestV21.test_update_flavor_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L374–L382` |
| `FlavorsExtraSpecsTestV21.test_update_flavor_db_duplicate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L384–L394` |
| `FlavorsExtraSpecsTestV21.test_update_really_long_integer_value` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L396–L402` |
| `FlavorsExtraSpecsTestV21.test_update_invalid_specs_known_namespace` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L404–L421` |
| `FlavorsExtraSpecsTestV21.test_update_invalid_specs_unknown_namespace` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L423–L436` |
| `FlavorsExtraSpecsTestV21.test_update_valid_specs` | method | (self, mock_flavor_extra_specs) | public | not declared | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L439–L454` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L16)
- `import testtools` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L18)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L19)
- `nova.api.openstack.compute`: imports `flavors_extraspecs as flavorextraspecs_v21` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L21–L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L26)
- `nova.tests.unit.objects`: imports `test_flavor` (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import flavors_extraspecs \ (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L21)

## Security Surface

- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPNotFound, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L134)
- **sink** (`db-write`): res_dict = self.controller.update(req, 1, 'hw:cpu_policy', body=body) (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L330)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L337)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L371)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPNotFound, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L381)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPConflict, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L393)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L401)
- **sink** (`db-write`): self.controller.update(req, 1, key, body=body) (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L421)
- **sink** (`db-write`): self.controller.update(req, 1, key, body=body) (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L436)
- **sink** (`db-write`): res_dict = self.controller.update(req, 1, key, body=body) (src/nova/tests/unit/api/openstack/compute/test_flavors_extraspecs.py:L453)

