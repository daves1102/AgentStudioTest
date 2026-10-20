# src/nova/api/openstack/compute/evacuate.py

## Overview

This file implements the `evacuate` module, defining 1 class, 3 constants, 5 methods, 16 imports, 4 side effects.

Lines: total 177, code 132, comment 21, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/evacuate.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/evacuate.py:L36–L36` |
| `MIN_VER_NOVA_COMPUTE_EVACUATE_STOPPED` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/evacuate.py:L38–L38` |
| `EvacuateController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/evacuate.py:L42–L177` |
| `EvacuateController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/evacuate.py:L43–L46` |
| `EvacuateController._get_on_shared_storage` | method | (self, req, evacuate_body) | private | `None` (src/nova/api/openstack/compute/evacuate.py:L50); `strutils.bool_from_string(evacuate_body["onSharedStorage"])` (src/nova/api/openstack/compute/evacuate.py:L52) | 2/5 | `src/nova/api/openstack/compute/evacuate.py:L48–L52` |
| `EvacuateController._get_password` | method | (self, req, evacuate_body, on_shared_storage) | private | `password` (src/nova/api/openstack/compute/evacuate.py:L67) | 4/10 | `src/nova/api/openstack/compute/evacuate.py:L54–L67` |
| `EvacuateController._get_password_v214` | method | (self, req, evacuate_body) | private | `password` (src/nova/api/openstack/compute/evacuate.py:L75) | 2/6 | `src/nova/api/openstack/compute/evacuate.py:L69–L75` |
| `EvacuateController._evacuate` | method | (self, req, id, body) | private | `{'adminPass': password}` (src/nova/api/openstack/compute/evacuate.py:L175); `None` (src/nova/api/openstack/compute/evacuate.py:L177) | 16/72 | `src/nova/api/openstack/compute/evacuate.py:L91–L177` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/evacuate.py:L16)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/evacuate.py:L17)
- `webob`: imports `exc` (src/nova/api/openstack/compute/evacuate.py:L18)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/evacuate.py:L20)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/evacuate.py:L21)
- `nova.api.openstack.compute.schemas`: imports `evacuate` (src/nova/api/openstack/compute/evacuate.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/evacuate.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/evacuate.py:L24)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/evacuate.py:L25)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/evacuate.py:L26)
- `import nova.conf` (src/nova/api/openstack/compute/evacuate.py:L27)
- `nova`: imports `exception` (src/nova/api/openstack/compute/evacuate.py:L28)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/evacuate.py:L29)
- `nova`: imports `objects` (src/nova/api/openstack/compute/evacuate.py:L30)
- `nova.policies`: imports `evacuate as evac_policies` (src/nova/api/openstack/compute/evacuate.py:L31)
- `nova`: imports `utils` (src/nova/api/openstack/compute/evacuate.py:L32)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import evacuate (src/nova/api/openstack/compute/evacuate.py:L22)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/evacuate.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/evacuate.py:L36)
- **global-mutation**: MIN_VER_NOVA_COMPUTE_EVACUATE_STOPPED = 62 (src/nova/api/openstack/compute/evacuate.py:L38)

