# src/nova/scheduler/request_filter.py

## Overview

This file implements the `request_filter` module, defining 5 constants, 19 functions, 13 imports, 5 side effects.

Lines: total 633, code 463, comment 61, blank 109

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/request_filter.py:L29–L29` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/request_filter.py:L30–L30` |
| `TENANT_METADATA_KEY` | constant | — | exported | not declared | — | `src/nova/scheduler/request_filter.py:L31–L31` |
| `MIN_COMPUTE_VERSION_OWNER_TRAIT` | constant | — | exported | not declared | — | `src/nova/scheduler/request_filter.py:L36–L36` |
| `trace_request_filter` | function | (fn) | exported | `wrapper` (src/nova/scheduler/request_filter.py:L54) | 1/4 | `src/nova/scheduler/request_filter.py:L39–L54` |
| `trace_request_filter.wrapper` | function | (ctxt, request_spec) | public | `ran` (src/nova/scheduler/request_filter.py:L53) | — | `src/nova/scheduler/request_filter.py:L41–L53` |
| `isolate_aggregates` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L74); `True` (src/nova/scheduler/request_filter.py:L96) | 7/17 | `src/nova/scheduler/request_filter.py:L58–L96` |
| `require_tenant_aggregate` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L113); `True` (src/nova/scheduler/request_filter.py:L140) | 9/29 | `src/nova/scheduler/request_filter.py:L100–L140` |
| `map_az_to_placement_aggregate` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L153); `True` (src/nova/scheduler/request_filter.py:L169) | 6/18 | `src/nova/scheduler/request_filter.py:L144–L169` |
| `require_image_type_support` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L180); `False` (src/nova/scheduler/request_filter.py:L185); `False` (src/nova/scheduler/request_filter.py:L193); `True` (src/nova/scheduler/request_filter.py:L200) | 4/16 | `src/nova/scheduler/request_filter.py:L173–L200` |
| `transform_image_metadata` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L211); `False` (src/nova/scheduler/request_filter.py:L233); `True` (src/nova/scheduler/request_filter.py:L244) | 6/30 | `src/nova/scheduler/request_filter.py:L204–L244` |
| `compute_status_filter` | function | (ctxt, request_spec) | exported | `True` (src/nova/scheduler/request_filter.py:L260) | 1/6 | `src/nova/scheduler/request_filter.py:L248–L260` |
| `accelerators_filter` | function | (ctxt, request_spec) | exported | `True` (src/nova/scheduler/request_filter.py:L276) | 2/7 | `src/nova/scheduler/request_filter.py:L264–L276` |
| `packed_virtqueue_filter` | function | (ctxt, request_spec) | exported | `True` (src/nova/scheduler/request_filter.py:L292) | 2/8 | `src/nova/scheduler/request_filter.py:L280–L292` |
| `routed_networks_filter` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L312); `True` (src/nova/scheduler/request_filter.py:L320); `True` (src/nova/scheduler/request_filter.py:L387) | 15/52 | `src/nova/scheduler/request_filter.py:L296–L387` |
| `remote_managed_ports_filter` | function | (context, request_spec) | exported | `True` (src/nova/scheduler/request_filter.py:L414) | 5/14 | `src/nova/scheduler/request_filter.py:L391–L414` |
| `ephemeral_encryption_filter` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L432); `True` (src/nova/scheduler/request_filter.py:L449) | 3/18 | `src/nova/scheduler/request_filter.py:L418–L449` |
| `virtio_sound_filter` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L466); `True` (src/nova/scheduler/request_filter.py:L470) | 2/11 | `src/nova/scheduler/request_filter.py:L453–L470` |
| `tpm_secret_security_filter` | function | (ctxt, request_spec) | exported | `False` (src/nova/scheduler/request_filter.py:L483); `True` (src/nova/scheduler/request_filter.py:L504) | 6/25 | `src/nova/scheduler/request_filter.py:L474–L504` |
| `_get_pci_request_ids` | function | (request_spec) | unexported | `set()` (src/nova/scheduler/request_filter.py:L517); `{ req.request_id for req in request_spec.pci_requests.requests if (req.source != objects.InstancePCIRequest.NEUTRON_PORT and req.request_id) }` (src/nova/scheduler/request_filter.py:L518) | 7/11 | `src/nova/scheduler/request_filter.py:L507–L523` |
| `_should_filter_by_owner` | function | (context) | unexported | `False` (src/nova/scheduler/request_filter.py:L552); `True` (src/nova/scheduler/request_filter.py:L553) | 2/11 | `src/nova/scheduler/request_filter.py:L526–L553` |
| `owner_nova_filter` | function | (ctxt, request_spec) | exported | `True` (src/nova/scheduler/request_filter.py:L574); `False` (src/nova/scheduler/request_filter.py:L577); `True` (src/nova/scheduler/request_filter.py:L605) | 8/21 | `src/nova/scheduler/request_filter.py:L557–L605` |
| `ALL_REQUEST_FILTERS` | constant | — | exported | not declared | — | `src/nova/scheduler/request_filter.py:L608–L623` |
| `process_reqspec` | function | (ctxt, request_spec) | exported | not declared | 2/3 | `src/nova/scheduler/request_filter.py:L626–L633` |

## Dependencies

- `import functools` (src/nova/scheduler/request_filter.py:L13)
- `import os_traits` (src/nova/scheduler/request_filter.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/request_filter.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/scheduler/request_filter.py:L17)
- `import nova.conf` (src/nova/scheduler/request_filter.py:L19)
- `nova`: imports `context as nova_context` (src/nova/scheduler/request_filter.py:L20)
- `nova`: imports `exception` (src/nova/scheduler/request_filter.py:L21)
- `nova.i18n`: imports `_` (src/nova/scheduler/request_filter.py:L22)
- `nova.network`: imports `neutron` (src/nova/scheduler/request_filter.py:L23)
- `nova`: imports `objects` (src/nova/scheduler/request_filter.py:L24)
- `nova.scheduler.client`: imports `report` (src/nova/scheduler/request_filter.py:L25)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/request_filter.py:L26)
- `nova.virt`: imports `hardware` (src/nova/scheduler/request_filter.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/request_filter.py:L29)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/request_filter.py:L30)
- **global-mutation**: TENANT_METADATA_KEY = 'filter_tenant_id' (src/nova/scheduler/request_filter.py:L31)
- **global-mutation**: MIN_COMPUTE_VERSION_OWNER_TRAIT = 73 (src/nova/scheduler/request_filter.py:L36)
- **global-mutation**: ALL_REQUEST_FILTERS = [ (src/nova/scheduler/request_filter.py:L608)

