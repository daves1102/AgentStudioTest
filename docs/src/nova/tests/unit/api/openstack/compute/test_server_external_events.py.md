# src/nova/tests/unit/api/openstack/compute/test_server_external_events.py

## Overview

This file implements the `test_server_external_events` module, defining 4 classs, 1 constant, 6 fields, 2 functions, 17 methods, 4 variables, 10 imports, 2 side effects, 5 security surface entries.

Lines: total 294, code 232, comment 17, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_instances` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L30–L39` |
| `fake_instance_uuids` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L40–L40` |
| `MISSING_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L41–L41` |
| `fake_cells` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L43–L44` |
| `fake_instance_mappings` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L45–L48` |
| `fake_get_by_filters` | function | (cls, context, filters, expected_attrs=None) | exported | `objects.InstanceList(objects=[ inst for inst in fake_instances.values() if inst.uuid in filters['uuid']])` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L60) | 4/10 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L52–L62` |
| `fake_get_by_instance_uuids` | function | (cls, context, uuids) | exported | `objects.InstanceMappingList(objects=mappings)` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L69) | 3/4 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L66–L69` |
| `ServerExternalEventsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L76–L199` |
| `ServerExternalEventsTestV21.server_external_events` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L77–L77` |
| `ServerExternalEventsTestV21.invalid_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L78–L78` |
| `ServerExternalEventsTestV21.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L79–L79` |
| `ServerExternalEventsTestV21.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L81–L100` |
| `ServerExternalEventsTestV21._assert_call` | method | (self, body, expected_uuids, expected_events) | private | `result, code` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L131) | 4/24 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L102–L131` |
| `ServerExternalEventsTestV21.test_create` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L133–L139` |
| `ServerExternalEventsTestV21.test_create_one_bad_instance` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L141–L149` |
| `ServerExternalEventsTestV21.test_create_event_instance_has_no_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L151–L161` |
| `ServerExternalEventsTestV21.test_create_no_good_instances` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L163–L171` |
| `ServerExternalEventsTestV21.test_create_bad_status` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L173–L177` |
| `ServerExternalEventsTestV21.test_create_extra_gorp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L179–L183` |
| `ServerExternalEventsTestV21.test_create_bad_events` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L185–L188` |
| `ServerExternalEventsTestV21.test_create_bad_body` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L190–L193` |
| `ServerExternalEventsTestV21.test_create_unknown_events` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L195–L199` |
| `ServerExternalEventsTestV251` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L206–L219` |
| `ServerExternalEventsTestV251.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L207–L207` |
| `ServerExternalEventsTestV251.test_create_with_missing_tag` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L209–L219` |
| `ServerExternalEventsTestV276` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L226–L263` |
| `ServerExternalEventsTestV276.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L227–L227` |
| `ServerExternalEventsTestV276.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L229–L233` |
| `ServerExternalEventsTestV276.test_create_with_missing_tag` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L235–L248` |
| `ServerExternalEventsTestV276.test_create_event_auth_pre_2_76_fails` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L250–L263` |
| `ServerExternalEventsTestV282` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L270–L294` |
| `ServerExternalEventsTestV282.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L271–L271` |
| `ServerExternalEventsTestV282.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L273–L276` |
| `ServerExternalEventsTestV282.test_accelerator_request_bound_event` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L278–L294` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L15)
- `import fixtures as fx` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L18)
- `nova.api.openstack.compute`: imports `server_external_events as server_external_events_v21` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L20–L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L23)
- `nova.objects`: imports `instance as instance_obj` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L25)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import server_external_events \ (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L20)
- **global-mutation**: MISSING_UUID = '00000000-0000-0000-0000-000000000005' (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L41)

## Security Surface

- **sink** (`db-write`): body['events'][0]['name'] = 'power-update' (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L237)
- **sink** (`db-write`): body['events'][1]['name'] = 'power-update' (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L238)
- **sink** (`db-write`): ['power-update']) (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L241)
- **sink** (`db-write`): body['events'][0]['name'] = 'power-update' (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L254)
- **sink** (`db-write`): body['events'][1]['name'] = 'power-update' (src/nova/tests/unit/api/openstack/compute/test_server_external_events.py:L255)

