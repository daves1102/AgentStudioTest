# src/nova/tests/unit/api/openstack/compute/test_instance_actions.py

## Overview

This file implements the `test_instance_actions` module, defining 7 classs, 4 constants, 15 fields, 12 functions, 26 methods, 18 imports, 6 side effects, 3 security surface entries.

Lines: total 462, code 373, comment 22, blank 67

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L38–L38` |
| `FAKE_REQUEST_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L39–L39` |
| `FAKE_EVENT_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L40–L40` |
| `FAKE_REQUEST_NOTFOUND_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L41–L41` |
| `format_action` | function | (action, expect_traceback=True, expect_host=False, expect_hostId=False) | exported | `action` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L59) | 5/14 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L44–L59` |
| `format_event` | function | (event, project_id, expect_traceback=True, expect_host=False, expect_hostId=False) | exported | `event` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L82) | 8/18 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L62–L82` |
| `InstanceActionsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L85–L230` |
| `InstanceActionsTestV21.instance_actions` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L86–L86` |
| `InstanceActionsTestV21.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L87–L87` |
| `InstanceActionsTestV21.expect_events_non_admin` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L88–L88` |
| `InstanceActionsTestV21.expect_event_hostId` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L89–L89` |
| `InstanceActionsTestV21.expect_event_host` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L90–L90` |
| `InstanceActionsTestV21.fake_get` | method | (self, context, instance_uuid, expected_attrs=None, cell_down_support=False) | public | `objects.Instance( context, id=1, uuid=instance_uuid, project_id=context.project_id)` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L94) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L92–L95` |
| `InstanceActionsTestV21.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L97–L105` |
| `InstanceActionsTestV21._get_http_req` | method | (self, action, use_admin_context=False) | private | `fakes.HTTPRequest.blank(fake_url, use_admin_context=use_admin_context, version=self.wsgi_api_version)` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L109) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L107–L111` |
| `InstanceActionsTestV21._get_http_req_with_version` | method | (self, action, use_admin_context=False, version="2.21") | private | `fakes.HTTPRequest.blank(fake_url, use_admin_context=use_admin_context, version=version)` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L116) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L113–L118` |
| `InstanceActionsTestV21._set_policy_rules` | method | (self) | private | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L120–L124` |
| `InstanceActionsTestV21.test_list_actions` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L126–L141` |
| `InstanceActionsTestV21.test_list_actions.fake_get_actions` | function | (context, uuid, limit=None, marker=None, filters=None) | public | `actions` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L134) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L127–L134` |
| `InstanceActionsTestV21.test_get_action_with_events_allowed` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L143–L171` |
| `InstanceActionsTestV21.test_get_action_with_events_allowed.fake_get_action` | function | (context, uuid, request_id) | public | `action` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L147) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L144–L147` |
| `InstanceActionsTestV21.test_get_action_with_events_allowed.fake_get_events` | function | (context, action_id) | public | `events` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L155) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L149–L155` |
| `InstanceActionsTestV21.test_get_action_with_events_not_allowed` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L173–L200` |
| `InstanceActionsTestV21.test_get_action_with_events_not_allowed.fake_get_action` | function | (context, uuid, request_id) | public | `self.fake_actions[uuid][request_id]` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L175) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L174–L175` |
| `InstanceActionsTestV21.test_get_action_with_events_not_allowed.fake_get_events` | function | (context, action_id) | public | `self.fake_events[action_id]` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L178) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L177–L178` |
| `InstanceActionsTestV21.test_action_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L202–L210` |
| `InstanceActionsTestV21.test_action_not_found.fake_no_action` | function | (context, uuid, action_id) | public | `None` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L204) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L203–L204` |
| `InstanceActionsTestV21.test_index_instance_not_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L212–L220` |
| `InstanceActionsTestV21.test_show_instance_not_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L222–L230` |
| `InstanceActionsTestV221` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L233–L240` |
| `InstanceActionsTestV221.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L234–L234` |
| `InstanceActionsTestV221.fake_get` | method | (self, context, instance_uuid, expected_attrs=None, cell_down_support=False) | public | `objects.Instance( context, id=1, uuid=instance_uuid, project_id=context.project_id)` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L239) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L236–L240` |
| `InstanceActionsTestV251` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L243–L245` |
| `InstanceActionsTestV251.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L244–L244` |
| `InstanceActionsTestV251.expect_events_non_admin` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L245–L245` |
| `InstanceActionsTestV258` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L248–L292` |
| `InstanceActionsTestV258.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L249–L249` |
| `InstanceActionsTestV258.test_get_action_with_invalid_marker` | method | (self, mock_actions_get) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L252–L259` |
| `InstanceActionsTestV258.test_get_action_with_invalid_limit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L261–L268` |
| `InstanceActionsTestV258.test_get_action_with_invalid_change_since` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L270–L277` |
| `InstanceActionsTestV258.test_get_action_with_invalid_params` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L279–L285` |
| `InstanceActionsTestV258.test_get_action_with_multi_params` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L287–L292` |
| `InstanceActionsTestV262` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L295–L356` |
| `InstanceActionsTestV262.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L296–L296` |
| `InstanceActionsTestV262.expect_event_hostId` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L297–L297` |
| `InstanceActionsTestV262.expect_event_host` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L298–L298` |
| `InstanceActionsTestV262.instance_project_id` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L299–L299` |
| `InstanceActionsTestV262.fake_get` | method | (self, context, instance_uuid, expected_attrs=None, cell_down_support=False) | public | `objects.Instance(uuid=instance_uuid, project_id=self.instance_project_id)` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L303) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L301–L304` |
| `InstanceActionsTestV262.test_get_action_with_events_project_id_none` | method | (self, mock_action_get, mock_action_events) | public | not declared | 1/41 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L309–L356` |
| `InstanceActionsTestV266` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L359–L416` |
| `InstanceActionsTestV266.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L360–L360` |
| `InstanceActionsTestV266.test_get_action_with_invalid_changes_before` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L362–L369` |
| `InstanceActionsTestV266.test_get_action_with_changes_since_and_changes_before` | method | (self, mock_get_instance, mock_action_get) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L373–L391` |
| `InstanceActionsTestV266.test_instance_actions_filters_with_distinct_changes_time_bad_request` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L393–L403` |
| `InstanceActionsTestV266.test_get_action_with_changes_before_old_microversion` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L405–L416` |
| `InstanceActionsTestV284` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L419–L462` |
| `InstanceActionsTestV284.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L420–L420` |
| `InstanceActionsTestV284._set_policy_rules` | method | (self, overwrite=True) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L422–L427` |
| `InstanceActionsTestV284.test_show_action_with_details` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L429–L444` |
| `InstanceActionsTestV284.test_show_action_with_details.fake_get_action` | function | (context, uuid, request_id) | public | `self.fake_actions[uuid][request_id]` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L431) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L430–L431` |
| `InstanceActionsTestV284.test_show_action_with_details.fake_get_events` | function | (context, action_id) | public | `self.fake_events[action_id]` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L434) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L433–L434` |
| `InstanceActionsTestV284.test_show_action_with_details_old_microversion` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L446–L462` |
| `InstanceActionsTestV284.test_show_action_with_details_old_microversion.fake_get_action` | function | (context, uuid, request_id) | public | `self.fake_actions[uuid][request_id]` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L449) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L448–L449` |
| `InstanceActionsTestV284.test_show_action_with_details_old_microversion.fake_get_events` | function | (context, action_id) | public | `self.fake_events[action_id]` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L452) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L451–L452` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L16)
- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L18)
- `oslo_policy`: imports `policy as oslo_policy` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L21)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L22)
- `nova.api.openstack.compute`: imports `instance_actions as instance_actions_v21` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L24)
- `nova.api.openstack`: imports `wsgi as os_wsgi` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L25)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L26)
- `nova.db.main`: imports `models` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L29)
- `nova`: imports `policy` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L31)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L32)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L33)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L34)
- `nova`: imports `utils` (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L35)

## Side Effects

- **network**: from nova.api.openstack.compute import instance_actions as instance_actions_v21 (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L24)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L372)
- **global-mutation**: FAKE_UUID = fake_server_actions.FAKE_UUID (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L38)
- **global-mutation**: FAKE_REQUEST_ID = fake_server_actions.FAKE_REQUEST_ID1 (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L39)
- **global-mutation**: FAKE_EVENT_ID = fake_server_actions.FAKE_ACTION_ID1 (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L40)
- **global-mutation**: FAKE_REQUEST_NOTFOUND_ID = 'req-' + uuids.req_not_found (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L41)

## Security Surface

- **sink** (`db-write`): action.update(act) (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L132)
- **sink** (`db-write`): action.update(self.fake_actions[uuid][request_id]) (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L146)
- **sink** (`db-write`): event.update(evt) (src/nova/tests/unit/api/openstack/compute/test_instance_actions.py:L153)

