# src/nova/tests/functional/test_availability_zones.py

## Overview

This file implements the `test_availability_zones` module, defining 1 class, 29 methods, 10 imports, 1 side effect.

Lines: total 584, code 376, comment 118, blank 90

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestAvailabilityZoneScheduling` | class | — | exported | not declared | — | `src/nova/tests/functional/test_availability_zones.py:L25–L584` |
| `TestAvailabilityZoneScheduling.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_availability_zones.py:L29–L55` |
| `TestAvailabilityZoneScheduling._start_host_in_zone` | method | (self, host, zone) | private | not declared | 1/17 | `src/nova/tests/functional/test_availability_zones.py:L57–L76` |
| `TestAvailabilityZoneScheduling._create_server` | method | (self, name, zone=None) | private | `server` (src/nova/tests/functional/test_availability_zones.py:L85) | 1/7 | `src/nova/tests/functional/test_availability_zones.py:L78–L85` |
| `TestAvailabilityZoneScheduling._assert_instance_az_and_host` | method | (self, server, expected_zone, expected_host=None) | private | not declared | 2/10 | `src/nova/tests/functional/test_availability_zones.py:L87–L100` |
| `TestAvailabilityZoneScheduling._assert_request_spec_az` | method | (self, ctxt, server, az) | private | not declared | 1/4 | `src/nova/tests/functional/test_availability_zones.py:L102–L105` |
| `TestAvailabilityZoneScheduling._assert_server_with_az_unshelved_to_specified_az` | method | (self, server, az) | private | not declared | 2/14 | `src/nova/tests/functional/test_availability_zones.py:L107–L126` |
| `TestAvailabilityZoneScheduling._shelve_unshelve_server` | method | (self, ctxt, server, req) | private | `self.api.get_server(server['id'])` (src/nova/tests/functional/test_availability_zones.py:L136) | 1/8 | `src/nova/tests/functional/test_availability_zones.py:L128–L136` |
| `TestAvailabilityZoneScheduling.other_az_than` | method | (self, az) | public | `'zone2' if az == 'zone1' else 'zone1'` (src/nova/tests/functional/test_availability_zones.py:L139) | 2/2 | `src/nova/tests/functional/test_availability_zones.py:L138–L139` |
| `TestAvailabilityZoneScheduling.other_host_than` | method | (self, host) | public | `'host2' if host == 'host1' else 'host1'` (src/nova/tests/functional/test_availability_zones.py:L142) | 2/2 | `src/nova/tests/functional/test_availability_zones.py:L141–L142` |
| `TestAvailabilityZoneScheduling.test_live_migrate_implicit_az` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_availability_zones.py:L144–L188` |
| `TestAvailabilityZoneScheduling.test_create_server` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_availability_zones.py:L190–L196` |
| `TestAvailabilityZoneScheduling.test_create_server_to_zone` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_availability_zones.py:L198–L208` |
| `TestAvailabilityZoneScheduling.test_cold_migrate_cross_az` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_availability_zones.py:L210–L223` |
| `TestAvailabilityZoneScheduling.test_unshelve_server_without_az_constraint` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_availability_zones.py:L273–L282` |
| `TestAvailabilityZoneScheduling.test_unshelve_unpin_az_server_without_az_constraint` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_availability_zones.py:L284–L293` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_server_without_az_constraint` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_availability_zones.py:L299–L313` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_and_unpin_server_without_az_constraint` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_availability_zones.py:L315–L332` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_az_server_without_az_constraint` | method | (self) | public | not declared | 2/15 | `src/nova/tests/functional/test_availability_zones.py:L338–L354` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_az_and_host_server_without_az_constraint` | method | (self) | public | not declared | 2/15 | `src/nova/tests/functional/test_availability_zones.py:L361–L377` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_wrong_az_and_host_server_without_az_constraint` | method | (self) | public | not declared | 2/22 | `src/nova/tests/functional/test_availability_zones.py:L379–L403` |
| `TestAvailabilityZoneScheduling.test_unshelve_a_server_with_az_constraint` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_availability_zones.py:L409–L420` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_unpin_az_a_server_with_az_constraint` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_availability_zones.py:L426–L435` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_server_with_az_constraint` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_availability_zones.py:L443–L455` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_wrong_az_server_with_az_constraint` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_availability_zones.py:L457–L477` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_and_unpin_server_with_az_constraint` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_availability_zones.py:L483–L495` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_az_a_server_with_az_constraint` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_availability_zones.py:L501–L513` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_and_az_a_server_with_az_constraint` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_availability_zones.py:L521–L535` |
| `TestAvailabilityZoneScheduling.test_unshelve_to_host_and_wrong_az_a_server_with_az_constraint` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_availability_zones.py:L537–L560` |
| `TestAvailabilityZoneScheduling.test_resize_revert_across_azs` | method | (self) | public | not declared | 3/12 | `src/nova/tests/functional/test_availability_zones.py:L562–L584` |

## Dependencies

- `nova.api.openstack.compute`: imports `hosts` (src/nova/tests/functional/test_availability_zones.py:L13)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_availability_zones.py:L14)
- `nova`: imports `context` (src/nova/tests/functional/test_availability_zones.py:L15)
- `nova`: imports `objects` (src/nova/tests/functional/test_availability_zones.py:L16)
- `nova`: imports `test` (src/nova/tests/functional/test_availability_zones.py:L17)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_availability_zones.py:L18)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/test_availability_zones.py:L19)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_availability_zones.py:L20)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_availability_zones.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/test_availability_zones.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import hosts (src/nova/tests/functional/test_availability_zones.py:L13)

