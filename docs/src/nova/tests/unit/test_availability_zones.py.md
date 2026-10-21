# src/nova/tests/unit/test_availability_zones.py

## Overview

This file implements the `test_availability_zones` module, defining 1 class, 1 constant, 23 methods, 9 imports, 1 side effect, 2 security surface entries.

Lines: total 296, code 205, comment 36, blank 55

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_availability_zones.py:L32–L32` |
| `AvailabilityZoneTestCases` | class | — | exported | not declared | — | `src/nova/tests/unit/test_availability_zones.py:L35–L296` |
| `AvailabilityZoneTestCases.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_availability_zones.py:L38–L45` |
| `AvailabilityZoneTestCases.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_availability_zones.py:L47–L49` |
| `AvailabilityZoneTestCases._create_az` | method | (self, agg_name, az_name) | private | `agg` (src/nova/tests/unit/test_availability_zones.py:L57) | 1/7 | `src/nova/tests/unit/test_availability_zones.py:L51–L57` |
| `AvailabilityZoneTestCases._update_az` | method | (self, aggregate, az_name) | private | not declared | 1/2 | `src/nova/tests/unit/test_availability_zones.py:L59–L60` |
| `AvailabilityZoneTestCases._create_service_with_topic` | method | (self, topic, host, disabled=False) | private | `db.service_create(self.context, values)` (src/nova/tests/unit/test_availability_zones.py:L69) | 1/8 | `src/nova/tests/unit/test_availability_zones.py:L62–L69` |
| `AvailabilityZoneTestCases._destroy_service` | method | (self, service) | private | `db.service_destroy(self.context, service['id'])` (src/nova/tests/unit/test_availability_zones.py:L72) | 1/2 | `src/nova/tests/unit/test_availability_zones.py:L71–L72` |
| `AvailabilityZoneTestCases._add_to_aggregate` | method | (self, service, aggregate) | private | not declared | 1/2 | `src/nova/tests/unit/test_availability_zones.py:L74–L75` |
| `AvailabilityZoneTestCases._delete_from_aggregate` | method | (self, service, aggregate) | private | not declared | 1/2 | `src/nova/tests/unit/test_availability_zones.py:L77–L78` |
| `AvailabilityZoneTestCases.test_rest_availability_zone_reset_cache` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_availability_zones.py:L80–L83` |
| `AvailabilityZoneTestCases.test_update_host_availability_zone_cache` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_availability_zones.py:L85–L97` |
| `AvailabilityZoneTestCases.test_set_availability_zone_compute_service` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_availability_zones.py:L99–L116` |
| `AvailabilityZoneTestCases.test_set_availability_zone_unicode_key` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_availability_zones.py:L118–L126` |
| `AvailabilityZoneTestCases.test_set_availability_zone_not_compute_service` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_availability_zones.py:L128–L134` |
| `AvailabilityZoneTestCases.test_get_host_availability_zone` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_availability_zones.py:L136–L145` |
| `AvailabilityZoneTestCases.test_update_host_availability_zone` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_availability_zones.py:L147–L161` |
| `AvailabilityZoneTestCases.test_delete_host_availability_zone` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_availability_zones.py:L163–L176` |
| `AvailabilityZoneTestCases.test_get_availability_zones` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/test_availability_zones.py:L178–L233` |
| `AvailabilityZoneTestCases.test_get_instance_availability_zone_default_value` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_availability_zones.py:L235–L241` |
| `AvailabilityZoneTestCases.test_get_instance_availability_zone_from_aggregate` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_availability_zones.py:L243–L253` |
| `AvailabilityZoneTestCases.test_get_instance_availability_zone_cache_differs` | method | (self, cache_get) | public | not declared | 1/10 | `src/nova/tests/unit/test_availability_zones.py:L256–L266` |
| `AvailabilityZoneTestCases.test_get_instance_availability_zone_no_host` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_availability_zones.py:L268–L273` |
| `AvailabilityZoneTestCases.test_get_instance_availability_zone_no_host_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_availability_zones.py:L275–L289` |
| `AvailabilityZoneTestCases.test_get_instance_availability_zone_no_host_no_az` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_availability_zones.py:L291–L296` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_availability_zones.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/test_availability_zones.py:L22)
- `nova`: imports `availability_zones as az` (src/nova/tests/unit/test_availability_zones.py:L24)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/test_availability_zones.py:L25)
- `import nova.conf` (src/nova/tests/unit/test_availability_zones.py:L26)
- `nova`: imports `context` (src/nova/tests/unit/test_availability_zones.py:L27)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/test_availability_zones.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/test_availability_zones.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/test_availability_zones.py:L30)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/test_availability_zones.py:L32)

## Security Surface

- **sink** (`db-write`): """Test availability zone cache could be update.""" (src/nova/tests/unit/test_availability_zones.py:L86)
- **sink** (`db-write`): """Test availability zone could be update by given host.""" (src/nova/tests/unit/test_availability_zones.py:L148)

