# src/nova/tests/unit/api/openstack/compute/test_images.py

## Overview

This file implements the `test_images` module, defining 2 classs, 4 constants, 2 fields, 26 methods, 12 imports, 9 side effects.

Lines: total 457, code 392, comment 15, blank 50

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L36–L36` |
| `ATOMNS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L37–L37` |
| `NOW_API_FORMAT` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L38–L38` |
| `IMAGE_FIXTURES` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L39–L39` |
| `ImagesControllerTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L42–L439` |
| `ImagesControllerTestV21.url_base` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L45–L45` |
| `ImagesControllerTestV21.http_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L46–L46` |
| `ImagesControllerTestV21.setUp` | method | (self) | public | not declared | 1/100 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L48–L151` |
| `ImagesControllerTestV21.test_get_image` | method | (self, get_mocked) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L154–L160` |
| `ImagesControllerTestV21.test_get_image_with_custom_prefix` | method | (self, _get_mocked) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L163–L184` |
| `ImagesControllerTestV21.test_get_image_404` | method | (self, _get_mocked) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L188–L191` |
| `ImagesControllerTestV21.test_get_image_details` | method | (self, get_all_mocked) | public | not declared | 1/89 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L194–L292` |
| `ImagesControllerTestV21.test_get_image_details_with_limit` | method | (self, get_all_mocked) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L295–L299` |
| `ImagesControllerTestV21.test_get_image_details_with_limit_and_page_size` | method | (self, get_all_mocked) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L302–L307` |
| `ImagesControllerTestV21._detail_request` | method | (self, filters, request, get_all_mocked) | private | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L310–L312` |
| `ImagesControllerTestV21.test_image_detail_filter_with_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L314–L318` |
| `ImagesControllerTestV21.test_image_detail_filter_with_status` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L320–L324` |
| `ImagesControllerTestV21.test_image_detail_filter_with_property` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L326–L330` |
| `ImagesControllerTestV21.test_image_detail_filter_server_href` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L332–L336` |
| `ImagesControllerTestV21.test_image_detail_filter_server_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L338–L342` |
| `ImagesControllerTestV21.test_image_detail_filter_changes_since` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L344–L348` |
| `ImagesControllerTestV21.test_image_detail_filter_with_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L350–L354` |
| `ImagesControllerTestV21.test_image_detail_filter_not_supported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L356–L361` |
| `ImagesControllerTestV21.test_image_detail_no_filters` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L363–L366` |
| `ImagesControllerTestV21.test_image_detail_invalid_marker` | method | (self, _get_all_mocked) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L369–L372` |
| `ImagesControllerTestV21.test_generate_alternate_link` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L374–L379` |
| `ImagesControllerTestV21.test_delete_image` | method | (self, delete_mocked) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L382–L389` |
| `ImagesControllerTestV21.test_delete_deleted_image` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L391–L403` |
| `ImagesControllerTestV21.test_delete_image_not_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L405–L413` |
| `ImagesControllerTestV21.test_get_image_next_link` | method | (self, get_all_mocked) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L417–L426` |
| `ImagesControllerTestV21.test_get_image_details_next_link` | method | (self, get_all_mocked) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L430–L439` |
| `ImagesControllerDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_images.py:L442–L457` |
| `ImagesControllerDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L444–L447` |
| `ImagesControllerDeprecationTest.test_not_found_for_all_images_api` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_images.py:L449–L457` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_images.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_images.py:L22)
- `urllib`: imports `parse as urlparse` (src/nova/tests/unit/api/openstack/compute/test_images.py:L23)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_images.py:L25)
- `nova.api.openstack.compute`: imports `images as images_v21` (src/nova/tests/unit/api/openstack/compute/test_images.py:L27)
- `nova.api.openstack.compute.views`: imports `images as images_view` (src/nova/tests/unit/api/openstack/compute/test_images.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_images.py:L29)
- `nova.image`: imports `glance` (src/nova/tests/unit/api/openstack/compute/test_images.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_images.py:L31)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_images.py:L32)
- `nova.tests.unit`: imports `image_fixtures` (src/nova/tests/unit/api/openstack/compute/test_images.py:L33)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/api/openstack/compute/test_images.py:L34)

## Side Effects

- **network**: from nova.api.openstack.compute import images as images_v21 (src/nova/tests/unit/api/openstack/compute/test_images.py:L27)
- **network**: from nova.api.openstack.compute.views import images as images_view (src/nova/tests/unit/api/openstack/compute/test_images.py:L28)
- **network**: NS = "{http://docs.openstack.org/compute/api/v1.1}" (src/nova/tests/unit/api/openstack/compute/test_images.py:L36)
- **network**: "type": "application/vnd.openstack.image", (src/nova/tests/unit/api/openstack/compute/test_images.py:L93)
- **network**: "type": "application/vnd.openstack.image", (src/nova/tests/unit/api/openstack/compute/test_images.py:L143)
- **global-mutation**: NS = "{http://docs.openstack.org/compute/api/v1.1}" (src/nova/tests/unit/api/openstack/compute/test_images.py:L36)
- **global-mutation**: ATOMNS = "{http://www.w3.org/2005/Atom}" (src/nova/tests/unit/api/openstack/compute/test_images.py:L37)
- **global-mutation**: NOW_API_FORMAT = "2010-10-11T10:30:22Z" (src/nova/tests/unit/api/openstack/compute/test_images.py:L38)
- **global-mutation**: IMAGE_FIXTURES = image_fixtures.get_image_fixtures() (src/nova/tests/unit/api/openstack/compute/test_images.py:L39)

