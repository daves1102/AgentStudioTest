# src/nova/tests/unit/fake_network.py

## Overview

This file implements the `fake_network` module, defining 11 functions, 1 variable, 9 imports.

Lines: total 228, code 185, comment 16, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_instance_nw_info` | function | (test, num_networks=1) | exported | `nw_model` (src/nova/tests/unit/fake_network.py:L130) | 2/88 | `src/nova/tests/unit/fake_network.py:L28–L130` |
| `fake_get_instance_nw_info.update_cache_fake` | function | (*args, **kwargs) | public | `fake_info_cache` (src/nova/tests/unit/fake_network.py:L39) | — | `src/nova/tests/unit/fake_network.py:L30–L39` |
| `_real_functions` | variable | — | unexported | not declared | — | `src/nova/tests/unit/fake_network.py:L133–L133` |
| `set_stub_network_methods` | function | (test) | exported | not declared | 2/13 | `src/nova/tests/unit/fake_network.py:L136–L153` |
| `set_stub_network_methods.fake_networkinfo` | function | (*args, **kwargs) | public | `network_model.NetworkInfo()` (src/nova/tests/unit/fake_network.py:L145) | — | `src/nova/tests/unit/fake_network.py:L144–L145` |
| `set_stub_network_methods.fake_async_networkinfo` | function | (*args, **kwargs) | public | `network_model.NetworkInfoAsyncWrapper(fake_networkinfo)` (src/nova/tests/unit/fake_network.py:L148) | — | `src/nova/tests/unit/fake_network.py:L147–L148` |
| `unset_stub_network_methods` | function | (test) | exported | `` (src/nova/tests/unit/fake_network.py:L158) | 3/6 | `src/nova/tests/unit/fake_network.py:L156–L162` |
| `_get_fake_cache` | function | — | unexported | `jsonutils.dumps(info)` (src/nova/tests/unit/fake_network.py:L184) | 1/13 | `src/nova/tests/unit/fake_network.py:L165–L184` |
| `_get_fake_cache._ip` | function | (ip, fixed=True, floats=None) | private | `ip_dict` (src/nova/tests/unit/fake_network.py:L172) | — | `src/nova/tests/unit/fake_network.py:L166–L172` |
| `_get_instances_with_cached_ips` | function | (orig_func, *args, **kwargs) | unexported | `instances` (src/nova/tests/unit/fake_network.py:L215) | 3/15 | `src/nova/tests/unit/fake_network.py:L187–L215` |
| `_get_instances_with_cached_ips._info_cache_for` | function | (instance) | private | not declared | — | `src/nova/tests/unit/fake_network.py:L195–L204` |
| `_create_instances_with_cached_ips` | function | (orig_func, *args, **kwargs) | unexported | `instances, reservation_id` (src/nova/tests/unit/fake_network.py:L228) | 2/8 | `src/nova/tests/unit/fake_network.py:L218–L228` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/fake_network.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/fake_network.py:L17)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/unit/fake_network.py:L19)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/fake_network.py:L20)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/fake_network.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/fake_network.py:L22)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/fake_network.py:L23)
- `nova.tests.unit.objects`: imports `test_instance_info_cache` (src/nova/tests/unit/fake_network.py:L24)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/fake_network.py:L25)

