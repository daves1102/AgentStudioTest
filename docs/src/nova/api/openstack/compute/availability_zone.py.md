# src/nova/api/openstack/compute/availability_zone.py

## Overview

This file implements the `availability_zone` module, defining 1 class, 2 constants, 6 methods, 8 imports, 3 side effects.

Lines: total 128, code 94, comment 16, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/availability_zone.py:L24–L24` |
| `ATTRIBUTE_NAME` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/availability_zone.py:L25–L25` |
| `AvailabilityZoneController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/availability_zone.py:L29–L128` |
| `AvailabilityZoneController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/availability_zone.py:L32–L35` |
| `AvailabilityZoneController._get_filtered_availability_zones` | method | (self, zones, is_available) | private | `result` (src/nova/api/openstack/compute/availability_zone.py:L46) | 3/9 | `src/nova/api/openstack/compute/availability_zone.py:L37–L46` |
| `AvailabilityZoneController._describe_availability_zones` | method | (self, context, **kwargs) | private | `{'availabilityZoneInfo': filtered_available_zones + filtered_not_available_zones}` (src/nova/api/openstack/compute/availability_zone.py:L58) | 1/11 | `src/nova/api/openstack/compute/availability_zone.py:L48–L59` |
| `AvailabilityZoneController._describe_availability_zones_verbose` | method | (self, context, **kwargs) | private | `{'availabilityZoneInfo': result}` (src/nova/api/openstack/compute/availability_zone.py:L106) | 7/39 | `src/nova/api/openstack/compute/availability_zone.py:L61–L106` |
| `AvailabilityZoneController.index` | method | (self, req) | public | `self._describe_availability_zones(context)` (src/nova/api/openstack/compute/availability_zone.py:L117) | 1/4 | `src/nova/api/openstack/compute/availability_zone.py:L112–L117` |
| `AvailabilityZoneController.detail` | method | (self, req) | public | `self._describe_availability_zones_verbose(context)` (src/nova/api/openstack/compute/availability_zone.py:L128) | 1/4 | `src/nova/api/openstack/compute/availability_zone.py:L123–L128` |

## Dependencies

- `nova.api.openstack.compute.schemas`: imports `availability_zone as schema` (src/nova/api/openstack/compute/availability_zone.py:L15)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/availability_zone.py:L16)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/availability_zone.py:L17)
- `nova`: imports `availability_zones` (src/nova/api/openstack/compute/availability_zone.py:L18)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/availability_zone.py:L19)
- `import nova.conf` (src/nova/api/openstack/compute/availability_zone.py:L20)
- `nova.policies`: imports `availability_zone as az_policies` (src/nova/api/openstack/compute/availability_zone.py:L21)
- `nova`: imports `servicegroup` (src/nova/api/openstack/compute/availability_zone.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import availability_zone as schema (src/nova/api/openstack/compute/availability_zone.py:L15)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/availability_zone.py:L24)
- **global-mutation**: ATTRIBUTE_NAME = "availability_zone" (src/nova/api/openstack/compute/availability_zone.py:L25)

