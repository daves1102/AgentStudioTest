# src/nova/tests/unit/api/openstack/compute/test_image_metadata.py

## Overview

This file implements the `test_image_metadata` module, defining 2 classs, 2 constants, 3 fields, 1 function, 24 methods, 9 imports, 4 side effects, 18 security surface entries.

Lines: total 376, code 307, comment 16, blank 53

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `IMAGE_FIXTURES` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L28–L28` |
| `CHK_QUOTA_STR` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L29–L29` |
| `get_image_123` | function | — | exported | `copy.deepcopy(IMAGE_FIXTURES)[0]` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L33) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L32–L33` |
| `ImageMetaDataTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L36–L351` |
| `ImageMetaDataTestV21.controller_class` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L37–L37` |
| `ImageMetaDataTestV21.invalid_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L38–L38` |
| `ImageMetaDataTestV21.base_path` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L39–L39` |
| `ImageMetaDataTestV21.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L41–L43` |
| `ImageMetaDataTestV21.test_index` | method | (self, get_all_mocked) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L46–L51` |
| `ImageMetaDataTestV21.test_show` | method | (self, get_mocked) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L54–L60` |
| `ImageMetaDataTestV21.test_show_not_found` | method | (self, _get_mocked) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L63–L66` |
| `ImageMetaDataTestV21.test_show_image_not_found` | method | (self, _get_mocked) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L70–L73` |
| `ImageMetaDataTestV21.test_create` | method | (self, get_mocked, update_mocked, quota_mocked) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L78–L99` |
| `ImageMetaDataTestV21.test_create_image_not_found` | method | (self, _get_mocked, update_mocked, quota_mocked) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L105–L116` |
| `ImageMetaDataTestV21.test_update_all` | method | (self, get_mocked, update_mocked, quota_mocked) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L121–L138` |
| `ImageMetaDataTestV21.test_update_all_image_not_found` | method | (self, _get_mocked, quota_mocked) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L143–L152` |
| `ImageMetaDataTestV21.test_update_item` | method | (self, _get_mocked, update_mocked, quota_mocked) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L157–L173` |
| `ImageMetaDataTestV21.test_update_item_image_not_found` | method | (self, _get_mocked, quota_mocked) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L178–L188` |
| `ImageMetaDataTestV21.test_update_item_bad_body` | method | (self, get_mocked, update_mocked, quota_mocked) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L193–L206` |
| `ImageMetaDataTestV21.test_update_item_too_many_keys` | method | (self, get_mocked, update_mocked, _quota_mocked) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L212–L224` |
| `ImageMetaDataTestV21.test_update_item_body_uri_mismatch` | method | (self, _get_mocked, update_mocked, quota_mocked) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L229–L241` |
| `ImageMetaDataTestV21.test_delete` | method | (self, _get_mocked, update_mocked) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L245–L254` |
| `ImageMetaDataTestV21.test_delete_not_found` | method | (self, _get_mocked) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L257–L262` |
| `ImageMetaDataTestV21.test_delete_image_not_found` | method | (self, _get_mocked) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L266–L271` |
| `ImageMetaDataTestV21.test_too_many_metadata_items_on_create` | method | (self, _get_mocked, update_mocked, _quota_mocked) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L277–L287` |
| `ImageMetaDataTestV21.test_too_many_metadata_items_on_put` | method | (self, _get_mocked, update_mocked, _quota_mocked) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L293–L304` |
| `ImageMetaDataTestV21.test_image_not_authorized_update` | method | (self, _get_mocked) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L308–L317` |
| `ImageMetaDataTestV21.test_image_not_authorized_update_all` | method | (self, _get_mocked) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L321–L334` |
| `ImageMetaDataTestV21.test_image_not_authorized_create` | method | (self, _get_mocked) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L338–L351` |
| `ImageMetadataControllerV239` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L354–L376` |
| `ImageMetadataControllerV239.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L356–L359` |
| `ImageMetadataControllerV239.test_not_found_for_all_image_metadata_api` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L361–L376` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L20)
- `nova.api.openstack.compute`: imports `image_metadata as image_metadata_v21` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L25)
- `nova.tests.unit`: imports `image_fixtures` (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import image_metadata as image_metadata_v21 (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L22)
- **network**: CHK_QUOTA_STR = 'nova.api.openstack.common.check_img_metadata_properties_quota' (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L29)
- **global-mutation**: IMAGE_FIXTURES = image_fixtures.get_image_fixtures() (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L28)
- **global-mutation**: CHK_QUOTA_STR = 'nova.api.openstack.common.check_img_metadata_properties_quota' (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L29)

## Security Surface

- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L76)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L102)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L119)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L155)
- **sink** (`db-write`): res = self.controller.update(req, '123', 'key1', body=body) (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L163)
- **sink** (`db-write`): self.controller.update, req, '100', 'key1', (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L186)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L191)
- **sink** (`db-write`): self.controller.update, req, '123', 'key1', (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L202)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L210)
- **sink** (`db-write`): self.controller.update, req, '123', 'key1', (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L221)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L227)
- **sink** (`db-write`): self.controller.update, req, '123', 'bad', (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L238)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L243)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L275)
- **sink** (`db-write`): @mock.patch('nova.image.glance.API.update') (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L291)
- **sink** (`db-write`): self.controller.update, req, '123', 'blah', (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L302)
- **sink** (`db-write`): self.controller.update, req, '123', 'key1', (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L316)
- **sink** (`db-write`): self.controller.update, self.req, (src/nova/tests/unit/api/openstack/compute/test_image_metadata.py:L370)

