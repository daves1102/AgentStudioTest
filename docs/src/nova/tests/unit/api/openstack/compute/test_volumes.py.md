# src/nova/tests/unit/api/openstack/compute/test_volumes.py

## Overview

This file implements the `test_volumes` module, defining 3 classs, 1 constant, 1 function, 42 methods, 12 imports, 2 side effects.

Lines: total 365, code 291, comment 15, blank 59

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L32–L32` |
| `BootFromVolumeTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L35–L146` |
| `BootFromVolumeTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L37–L43` |
| `BootFromVolumeTest._get_fake_compute_api_create` | method | (self) | private | `_fake_compute_api_create` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L68) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L45–L68` |
| `BootFromVolumeTest._get_fake_compute_api_create._fake_compute_api_create` | function | (cls, context, flavor, image_href, **kwargs) | private | `([{'id': 1, 'display_name': 'test_server', 'uuid': uuids.server, 'flavor': flavor, 'access_ip_v4': '1.2.3.4', 'access_ip_v6': 'fead::1234', 'image_ref': uuids.image, 'user_id': 'fake', 'project_id': f` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L54) | — | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L46–L67` |
| `BootFromVolumeTest.test_create_root_volume` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L70–L94` |
| `BootFromVolumeTest.test_create_root_volume_bdm_v2` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L96–L122` |
| `BootFromVolumeTest.test_create_root_volume_bdm_v2_reproducer_2114951` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L124–L146` |
| `VolumeApiTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L149–L345` |
| `VolumeApiTestV21.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L150–L163` |
| `VolumeApiTestV21.test_volume_create` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L165–L179` |
| `VolumeApiTestV21._test_volume_translate_exception` | method | (self, cinder_exc, api_exc, mock_create) | private | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L182–L199` |
| `VolumeApiTestV21.test_volume_create_bad_snapshot_id` | method | (self, mock_create, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L203–L210` |
| `VolumeApiTestV21.test_volume_create_bad_input` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L212–L214` |
| `VolumeApiTestV21.test_volume_create_bad_quota` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L216–L218` |
| `VolumeApiTestV21._bad_request_create` | method | (self, body) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L220–L226` |
| `VolumeApiTestV21.test_volume_create_no_body` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L228–L229` |
| `VolumeApiTestV21.test_volume_create_missing_volume` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L231–L233` |
| `VolumeApiTestV21.test_volume_create_malformed_entity` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L235–L237` |
| `VolumeApiTestV21.test_volume_index` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L239–L240` |
| `VolumeApiTestV21.test_volume_detail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L242–L243` |
| `VolumeApiTestV21.test_volume_show` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L245–L246` |
| `VolumeApiTestV21.test_volume_show_no_volume` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L251–L256` |
| `VolumeApiTestV21.test_volume_delete` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L258–L259` |
| `VolumeApiTestV21.test_volume_delete_no_volume` | method | (self, mock_delete) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L264–L269` |
| `VolumeApiTestV21._test_list_with_invalid_filter` | method | (self, url) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L271–L274` |
| `VolumeApiTestV21.test_list_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L276–L277` |
| `VolumeApiTestV21.test_list_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L279–L280` |
| `VolumeApiTestV21.test_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L282–L283` |
| `VolumeApiTestV21.test_list_with_invalid_non_int_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L285–L286` |
| `VolumeApiTestV21.test_list_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L288–L289` |
| `VolumeApiTestV21.test_list_duplicate_query_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L291–L292` |
| `VolumeApiTestV21._test_list_detail_with_invalid_filter` | method | (self, url) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L294–L297` |
| `VolumeApiTestV21.test_detail_list_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L299–L300` |
| `VolumeApiTestV21.test_detail_list_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L302–L303` |
| `VolumeApiTestV21.test_detail_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L305–L306` |
| `VolumeApiTestV21.test_detail_list_with_invalid_non_int_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L308–L309` |
| `VolumeApiTestV21.test_detail_list_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L311–L312` |
| `VolumeApiTestV21.test_detail_list_duplicate_query_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L314–L315` |
| `VolumeApiTestV21._test_list_duplicate_query_parameters_validation` | method | (self, url) | private | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L317–L322` |
| `VolumeApiTestV21.test_list_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L324–L328` |
| `VolumeApiTestV21.test_detail_list_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L330–L335` |
| `VolumeApiTestV21.test_list_with_additional_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L337–L340` |
| `VolumeApiTestV21.test_detail_list_with_additional_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L342–L345` |
| `TestVolumesAPIDeprecation` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L348–L365` |
| `TestVolumesAPIDeprecation.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L350–L353` |
| `TestVolumesAPIDeprecation.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volumes.py:L355–L365` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L21)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L22)
- `nova.api.openstack.compute`: imports `volumes as volumes_v21` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L24)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L25)
- `import nova.conf` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L28)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L29)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute import volumes as volumes_v21 (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L24)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/openstack/compute/test_volumes.py:L32)

