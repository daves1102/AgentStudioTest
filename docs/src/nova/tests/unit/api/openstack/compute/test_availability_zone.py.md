# src/nova/tests/unit/api/openstack/compute/test_availability_zone.py

## Overview

This file implements the `test_availability_zone` module, defining 2 classs, 1 constant, 2 fields, 4 functions, 15 methods, 18 imports, 3 side effects.

Lines: total 321, code 264, comment 16, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L37–L37` |
| `fake_service_get_all` | function | (context, filters=None, **kwargs) | exported | `objects.ServiceList(objects=svcs)` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L82) | 5/25 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L40–L82` |
| `fake_service_get_all.__fake_service` | function | (binary, availability_zone, created_at, updated_at, host, disabled) | private | `objects.Service(context, **db_s)` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L54) | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L42–L54` |
| `AvailabilityZoneApiTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L85–L208` |
| `AvailabilityZoneApiTestV21.availability_zone` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L86–L86` |
| `AvailabilityZoneApiTestV21.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L88–L100` |
| `AvailabilityZoneApiTestV21.test_filtered_availability_zones` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L102–L115` |
| `AvailabilityZoneApiTestV21.test_availability_zone_index` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L117–L129` |
| `AvailabilityZoneApiTestV21.test_availability_zone_index_invalid_query_params` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L131–L137` |
| `AvailabilityZoneApiTestV21.test_availability_zone_detail` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L139–L187` |
| `AvailabilityZoneApiTestV21.test_availability_zone_detail_no_services` | method | (self, mock_get_az) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L191–L200` |
| `AvailabilityZoneApiTestV21.test_availability_zone_detail_invalid_query_params` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L202–L208` |
| `ServersControllerCreateTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L211–L321` |
| `ServersControllerCreateTestV21.base_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L212–L212` |
| `ServersControllerCreateTestV21.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L214–L229` |
| `ServersControllerCreateTestV21.setUp._populate_instance_for_create` | function | (*args, **kwargs) | private | `instance` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L225) | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L222–L225` |
| `ServersControllerCreateTestV21._set_up_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L231–L232` |
| `ServersControllerCreateTestV21._create_instance_with_availability_zone` | method | (self, zone_name) | private | `req, body` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L273) | 1/34 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L234–L273` |
| `ServersControllerCreateTestV21._create_instance_with_availability_zone.create` | function | (*args, **kwargs) | public | `old_create(*args, **kwargs)` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L238) | — | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L235–L238` |
| `ServersControllerCreateTestV21.test_create_instance_with_availability_zone` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L275–L280` |
| `ServersControllerCreateTestV21.test_create_instance_with_invalid_availability_zone_too_long` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L282–L286` |
| `ServersControllerCreateTestV21.test_create_instance_with_invalid_availability_zone_too_short` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L288–L292` |
| `ServersControllerCreateTestV21.test_create_instance_with_invalid_availability_zone_not_str` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L294–L298` |
| `ServersControllerCreateTestV21.test_create_instance_without_availability_zone` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L300–L321` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L20)
- `nova.api.openstack.compute`: imports `availability_zone as az_v21` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L22)
- `nova.api.openstack.compute`: imports `servers as servers_v21` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L23)
- `nova`: imports `availability_zones` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L24)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L26)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L30)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L31)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L32)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L33)
- `nova.tests.unit.objects`: imports `test_service` (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L34)

## Side Effects

- **network**: from nova.api.openstack.compute import availability_zone as az_v21 (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L22)
- **network**: from nova.api.openstack.compute import servers as servers_v21 (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L23)
- **global-mutation**: FAKE_UUID = fakes.FAKE_UUID (src/nova/tests/unit/api/openstack/compute/test_availability_zone.py:L37)

