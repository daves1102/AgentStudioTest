# src/nova/tests/unit/scheduler/test_request_filter.py

## Overview

This file implements the `test_request_filter` module, defining 1 class, 1 function, 52 methods, 12 imports.

Lines: total 1109, code 944, comment 54, blank 111

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestRequestFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_request_filter.py:L30–L1109` |
| `TestRequestFilter.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_request_filter.py:L31–L40` |
| `TestRequestFilter.test_process_reqspec` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/scheduler/test_request_filter.py:L42–L50` |
| `TestRequestFilter.test_log_timer` | method | (self, mock_now) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_request_filter.py:L53–L72` |
| `TestRequestFilter.test_log_timer.tester` | function | (c, r) | public | `result` (src/nova/tests/unit/scheduler/test_request_filter.py:L60) | — | `src/nova/tests/unit/scheduler/test_request_filter.py:L58–L60` |
| `TestRequestFilter.test_require_tenant_aggregate_disabled` | method | (self, getmd) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_request_filter.py:L75–L80` |
| `TestRequestFilter.test_require_tenant_aggregate` | method | (self, mock_log, getmd) | public | not declared | 2/22 | `src/nova/tests/unit/scheduler/test_request_filter.py:L84–L108` |
| `TestRequestFilter.test_isolate_aggregates` | method | (self, mock_getnotmd) | public | not declared | 1/30 | `src/nova/tests/unit/scheduler/test_request_filter.py:L112–L141` |
| `TestRequestFilter.test_isolate_aggregates_union` | method | (self, mock_getnotmd) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_request_filter.py:L145–L175` |
| `TestRequestFilter.test_isolate_agg_trait_on_flavor_destination_not_set` | method | (self, mock_getnotmd) | public | not declared | 3/17 | `src/nova/tests/unit/scheduler/test_request_filter.py:L179–L195` |
| `TestRequestFilter.test_isolate_agg_trait_on_flv_img_destination_not_set` | method | (self, mock_getnotmd) | public | not declared | 4/20 | `src/nova/tests/unit/scheduler/test_request_filter.py:L199–L218` |
| `TestRequestFilter.test_require_tenant_aggregate_no_match` | method | (self, getmd) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_request_filter.py:L221–L227` |
| `TestRequestFilter.test_require_tenant_aggregate_no_match_not_required` | method | (self, getmd) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_request_filter.py:L230–L233` |
| `TestRequestFilter.test_map_az` | method | (self, mock_log, getmd) | public | not declared | 2/9 | `src/nova/tests/unit/scheduler/test_request_filter.py:L237–L245` |
| `TestRequestFilter.test_map_az_no_hint` | method | (self, getmd) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_request_filter.py:L248–L252` |
| `TestRequestFilter.test_map_az_no_aggregates` | method | (self, getmd) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_request_filter.py:L255–L261` |
| `TestRequestFilter.test_with_tenant_and_az_and_traits` | method | (self, mock_getmd, mock_getnotmd) | public | not declared | 3/59 | `src/nova/tests/unit/scheduler/test_request_filter.py:L266–L330` |
| `TestRequestFilter.test_require_image_type_support_disabled` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_request_filter.py:L332–L340` |
| `TestRequestFilter.test_require_image_type_support_volume_backed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_request_filter.py:L342–L350` |
| `TestRequestFilter.test_require_image_type_support_unknown` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_request_filter.py:L352–L362` |
| `TestRequestFilter.test_require_image_type_support_adds_trait` | method | (self, mock_log) | public | not declared | 2/15 | `src/nova/tests/unit/scheduler/test_request_filter.py:L365–L382` |
| `TestRequestFilter.test_compute_status_filter` | method | (self, mock_log) | public | not declared | 2/10 | `src/nova/tests/unit/scheduler/test_request_filter.py:L385–L398` |
| `TestRequestFilter.test_transform_image_metadata_x86` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/test_request_filter.py:L401–L426` |
| `TestRequestFilter.test_transform_image_metadata_aarch64` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/test_request_filter.py:L429–L454` |
| `TestRequestFilter.test_transform_image_metadata__disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_request_filter.py:L456–L463` |
| `TestRequestFilter.test_accelerators_filter_with_device_profile` | method | (self, mock_log) | public | not declared | 2/13 | `src/nova/tests/unit/scheduler/test_request_filter.py:L466–L484` |
| `TestRequestFilter.test_accelerators_filter_no_device_profile` | method | (self, mock_log) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_request_filter.py:L487–L502` |
| `TestRequestFilter.test_virtio_filter_with_packed_ring_in_flavor` | method | (self, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_request_filter.py:L505–L520` |
| `TestRequestFilter.test_virtio_filter_with_packed_ring_in_image` | method | (self, mock_log) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_request_filter.py:L523–L537` |
| `TestRequestFilter.test_routed_networks_filter_not_enabled` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_request_filter.py:L539–L549` |
| `TestRequestFilter.test_routed_networks_filter_no_requested_nets` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_request_filter.py:L551–L554` |
| `TestRequestFilter.test_routed_networks_filter_with_requested_port_immediate` | method | (self, mock_show_port, mock_get_aggs_subnet) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_request_filter.py:L558–L579` |
| `TestRequestFilter.test_routed_networks_filter_with_requested_port_deferred` | method | (self, mock_show_port, mock_get_aggs_network) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_request_filter.py:L583–L603` |
| `TestRequestFilter.test_routed_networks_filter_with_requested_net` | method | (self, mock_get_aggs_network) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_request_filter.py:L606–L619` |
| `TestRequestFilter.test_routed_networks_filter_with_two_requested_nets` | method | (self, mock_get_aggs_network) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_request_filter.py:L622–L641` |
| `TestRequestFilter.test_ephemeral_encryption_filter_no_encryption` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_request_filter.py:L643–L660` |
| `TestRequestFilter.test_ephemeral_encryption_filter_encryption_disabled` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_request_filter.py:L662–L687` |
| `TestRequestFilter.test_ephemeral_encryption_filter_encryption_no_format` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_request_filter.py:L689–L705` |
| `TestRequestFilter.test_ephemeral_encryption_filter_encryption_and_format` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_request_filter.py:L707–L728` |
| `TestRequestFilter.test_virtio_sound_filter` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_request_filter.py:L730–L750` |
| `TestRequestFilter.test_tpm_secret_security_filter` | method | (self, source, secret_security, trait) | public | not declared | 3/27 | `src/nova/tests/unit/scheduler/test_request_filter.py:L762–L791` |
| `TestRequestFilter.test_tpm_secret_security_filter_skip` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_request_filter.py:L793–L801` |
| `TestRequestFilter.test_tpm_secret_security_filter_fail` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_request_filter.py:L803–L822` |
| `TestRequestFilter.test_owner_nova_filter_in_all_filters` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_request_filter.py:L824–L826` |
| `TestRequestFilter.test_owner_nova_filter_adds_trait` | method | (self, mock_get_min_ver) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_request_filter.py:L831–L844` |
| `TestRequestFilter.test_owner_nova_filter_skips_when_not_upgraded` | method | (self, mock_get_min_ver, mock_log) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/test_request_filter.py:L850–L868` |
| `TestRequestFilter.test_owner_nova_filter_preserves_existing_traits` | method | (self, mock_get_min_ver) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_request_filter.py:L873–L887` |
| `TestRequestFilter.test_owner_nova_filter_above_min_version` | method | (self, mock_get_min_ver) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_request_filter.py:L892–L904` |
| `TestRequestFilter.test_owner_nova_filter_skips_version_check_if_present` | method | (self, mock_get_min_ver) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_request_filter.py:L909–L926` |
| `TestRequestFilter.test_owner_nova_filter_adds_trait_to_pci_groups` | method | (self, mock_get_min_ver) | public | not declared | 1/38 | `src/nova/tests/unit/scheduler/test_request_filter.py:L931–L971` |
| `TestRequestFilter.test_get_pci_request_ids_excludes_neutron_port_requests` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/test_request_filter.py:L973–L990` |
| `TestRequestFilter.test_owner_nova_filter_skips_non_pci_groups` | method | (self, mock_get_min_ver) | public | not declared | 1/37 | `src/nova/tests/unit/scheduler/test_request_filter.py:L995–L1036` |
| `TestRequestFilter.test_owner_nova_filter_skips_groups_without_requester_id` | method | (self, mock_get_min_ver) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/test_request_filter.py:L1041–L1070` |
| `TestRequestFilter.test_owner_nova_filter_skips_pci_when_not_upgraded` | method | (self, mock_get_min_ver, mock_log) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_request_filter.py:L1076–L1109` |

## Dependencies

- `import os_traits as ot` (src/nova/tests/unit/scheduler/test_request_filter.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/test_request_filter.py:L14)
- `import ddt` (src/nova/tests/unit/scheduler/test_request_filter.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/test_request_filter.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/scheduler/test_request_filter.py:L18)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/scheduler/test_request_filter.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/scheduler/test_request_filter.py:L21)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/scheduler/test_request_filter.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/test_request_filter.py:L23)
- `nova.scheduler`: imports `request_filter` (src/nova/tests/unit/scheduler/test_request_filter.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/test_request_filter.py:L25)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/scheduler/test_request_filter.py:L26)

