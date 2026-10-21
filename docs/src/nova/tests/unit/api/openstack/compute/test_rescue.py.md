# src/nova/tests/unit/api/openstack/compute/test_rescue.py

## Overview

This file implements the `test_rescue` module, defining 2 classs, 2 constants, 1 field, 3 functions, 24 methods, 12 imports, 6 side effects.

Lines: total 278, code 212, comment 16, blank 50

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L30–L30` |
| `UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L31–L31` |
| `rescue` | function | (self, context, instance, rescue_password=None, rescue_image_ref=None, allow_bfv_rescue=False) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L34–L36` |
| `unrescue` | function | (self, context, instance) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L39–L40` |
| `fake_compute_get` | function | (*args, **kwargs) | exported | `fake_instance.fake_instance_obj(args[1], id=1, uuid=UUID, **kwargs)` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L44) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L43–L45` |
| `RescueTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L49–L253` |
| `RescueTestV21.image_uuid` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L51–L51` |
| `RescueTestV21.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L53–L60` |
| `RescueTestV21._set_up_controller` | method | (self) | private | `rescue_v21.RescueController()` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L63) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L62–L63` |
| `RescueTestV21._allow_bfv_rescue` | method | (self) | private | `api_version_request.is_supported(self.fake_req, '2.87')` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L66) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L65–L66` |
| `RescueTestV21.test_rescue__http_conflict_error` | method | (self, exc, mock_rescue) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L73–L80` |
| `RescueTestV21.test_rescue_raise_badrequest_for_not_supported_features` | method | (self, exc, mock_rescue) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L89–L97` |
| `RescueTestV21.test_rescue_with_preset_password` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L99–L102` |
| `RescueTestV21.test_rescue_generates_password` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L104–L107` |
| `RescueTestV21.test_rescue_of_rescued_instance` | method | (self, mock_rescue) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L110–L118` |
| `RescueTestV21.test_unrescue` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L120–L130` |
| `RescueTestV21.test_unrescue_from_locked_server` | method | (self, mock_unrescue) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L133–L141` |
| `RescueTestV21.test_unrescue_of_active_instance` | method | (self, mock_unrescue) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L144–L152` |
| `RescueTestV21.test_rescue_raises_unrescuable` | method | (self, mock_rescue) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L155–L163` |
| `RescueTestV21.test_rescue_raises_unsupported_image` | method | (self, mock_rescue) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L167–L173` |
| `RescueTestV21.test_rescue_with_bad_image_specified` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L175–L180` |
| `RescueTestV21.test_rescue_with_imageRef_as_full_url` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L182–L189` |
| `RescueTestV21.test_rescue_with_imageRef_as_empty_string` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L191–L196` |
| `RescueTestV21.test_rescue_with_image_specified` | method | (self, get_instance_mock, mock_compute_api_rescue) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L200–L215` |
| `RescueTestV21.test_rescue_without_image_specified` | method | (self, get_instance_mock, mock_compute_api_rescue) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L219–L231` |
| `RescueTestV21.test_rescue_with_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L233–L236` |
| `RescueTestV21.test_rescue_with_empty_dict` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L238–L241` |
| `RescueTestV21.test_rescue_disable_password` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L243–L247` |
| `RescueTestV21.test_rescue_with_invalid_property` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L249–L253` |
| `RescueTestV287` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L256–L278` |
| `RescueTestV287.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L258–L261` |
| `RescueTestV287.test_allow_bfv_rescue` | method | (self, mock_get_instance, mock_compute_rescue) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_rescue.py:L265–L278` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L15)
- `import ddt` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L18)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L21)
- `nova.api.openstack.compute`: imports `rescue as rescue_v21` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L22)
- `nova`: imports `compute` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L23)
- `import nova.conf` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L27)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import rescue as rescue_v21 (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L22)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L199)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L218)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L264)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L30)
- **global-mutation**: UUID = '70f6db34-de8d-4fbd-aafb-4065bdfa6114' (src/nova/tests/unit/api/openstack/compute/test_rescue.py:L31)

