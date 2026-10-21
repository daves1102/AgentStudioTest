# src/nova/tests/unit/api/openstack/compute/test_hosts.py

## Overview

This file implements the `test_hosts` module, defining 2 classs, 2 fields, 8 functions, 41 methods, 14 imports, 1 side effect, 12 security surface entries.

Lines: total 451, code 341, comment 40, blank 70

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `stub_service_get_all` | function | (context, disabled=None) | exported | `fake_hosts.SERVICES_LIST` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L35) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L34–L35` |
| `stub_service_get_by_host_and_binary` | function | (context, host_name, binary) | exported | `service` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L41) | 4/4 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L38–L41` |
| `stub_set_host_enabled` | function | (self, context, host_name, enabled) | exported | `results[not enabled]` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L63); `results[enabled]` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L66) | 5/12 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L44–L66` |
| `stub_set_host_maintenance` | function | (self, context, host_name, mode) | exported | `results[not mode]` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L85); `results[mode]` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L88) | 5/12 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L69–L88` |
| `stub_host_power_action` | function | (self, context, host_name, action) | exported | `action` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L100) | 4/8 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L91–L100` |
| `_create_instance` | function | (**kwargs) | unexported | `db.instance_create(ctxt, _create_instance_dict(**kwargs))` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L106) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L103–L106` |
| `_create_instance_dict` | function | (**kwargs) | unexported | `inst` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L129) | 2/20 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L109–L129` |
| `HostTestCaseV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L132–L428` |
| `HostTestCaseV21.validation_ex` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L134–L134` |
| `HostTestCaseV21.Controller` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L135–L135` |
| `HostTestCaseV21._setup_stubs` | method | (self) | private | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L137–L151` |
| `HostTestCaseV21.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L153–L160` |
| `HostTestCaseV21._test_host_update` | method | (self, host, key, val, expected_value) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L162–L165` |
| `HostTestCaseV21.test_list_hosts` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L167–L172` |
| `HostTestCaseV21.test_list_host_with_multi_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L174–L181` |
| `HostTestCaseV21.test_list_host_query_allow_negative_int_as_string` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L183–L189` |
| `HostTestCaseV21.test_list_host_query_allow_int_as_string` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L191–L197` |
| `HostTestCaseV21.test_list_host_with_unknown_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L199–L206` |
| `HostTestCaseV21.test_list_host_with_hypervisor_and_additional_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L208–L215` |
| `HostTestCaseV21.test_disable_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L217–L219` |
| `HostTestCaseV21.test_enable_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L221–L223` |
| `HostTestCaseV21.test_enable_maintenance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L225–L227` |
| `HostTestCaseV21.test_disable_maintenance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L229–L231` |
| `HostTestCaseV21._test_host_update_notimpl` | method | (self, key, val) | private | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L233–L242` |
| `HostTestCaseV21._test_host_update_notimpl.stub_service_get_all_notimpl` | function | (self, req) | public | `[{'host': 'notimplemented', 'topic': None, 'availability_zone': None}]` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L235) | — | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L234–L236` |
| `HostTestCaseV21.test_disable_host_notimpl` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L244–L245` |
| `HostTestCaseV21.test_enable_maintenance_notimpl` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L247–L248` |
| `HostTestCaseV21.test_host_startup` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L250–L252` |
| `HostTestCaseV21.test_host_shutdown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L254–L256` |
| `HostTestCaseV21.test_host_reboot` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L258–L260` |
| `HostTestCaseV21._test_host_power_action_notimpl` | method | (self, method) | private | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L262–L264` |
| `HostTestCaseV21.test_host_startup_notimpl` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L266–L267` |
| `HostTestCaseV21.test_host_shutdown_notimpl` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L269–L270` |
| `HostTestCaseV21.test_host_reboot_notimpl` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L272–L273` |
| `HostTestCaseV21.test_host_status_bad_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L275–L281` |
| `HostTestCaseV21.test_host_maintenance_bad_host` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L283–L290` |
| `HostTestCaseV21.test_host_power_action_bad_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L292–L298` |
| `HostTestCaseV21.test_host_status_bad_status` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L300–L306` |
| `HostTestCaseV21.test_host_maintenance_bad_status` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L308–L315` |
| `HostTestCaseV21.test_host_power_action_bad_status` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L317–L323` |
| `HostTestCaseV21.test_bad_status_value` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L325–L331` |
| `HostTestCaseV21.test_bad_update_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L333–L336` |
| `HostTestCaseV21.test_bad_update_key_and_correct_update_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L338–L341` |
| `HostTestCaseV21.test_good_update_keys` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L343–L348` |
| `HostTestCaseV21.test_show_host_not_exist` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L350–L356` |
| `HostTestCaseV21._create_compute_service` | method | (self) | private | `db.service_get(ctxt, s_ref['id'])` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L374) | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L358–L374` |
| `HostTestCaseV21.test_show_no_project` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L376–L390` |
| `HostTestCaseV21.test_show_works_correctly` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L392–L411` |
| `HostTestCaseV21.test_show_late_host_mapping_gone` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L413–L419` |
| `HostTestCaseV21.test_list_hosts_with_zone` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L421–L428` |
| `HostControllerDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L431–L451` |
| `HostControllerDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L433–L436` |
| `HostControllerDeprecationTest.test_not_found_for_all_host_api` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_hosts.py:L438–L451` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L18)
- `import testtools` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L19)
- `import webob.exc` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L20)
- `nova.api.openstack.compute`: imports `hosts as os_hosts_v21` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L22)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L24)
- `nova`: imports `context as context_maker` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L25)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L28)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L29)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L30)
- `nova.tests.unit`: imports `fake_hosts` (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute import hosts as os_hosts_v21 (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L22)

## Security Surface

- **sink** (`db-write`): result = self.controller.update(self.req, host, body=body) (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L164)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L241)
- **sink** (`db-write`): self.controller.update(self.req, dest, body={'status': 'enable'}) (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L281)
- **sink** (`db-write`): self.controller.update(self.req, dest, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L289)
- **sink** (`db-write`): self.controller.update(self.req, dest, body={'status': 'enable'}) (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L306)
- **sink** (`db-write`): self.controller.update(self.req, dest, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L314)
- **sink** (`db-write`): self.assertRaises(self.validation_ex, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L327)
- **sink** (`db-write`): self.assertRaises(self.validation_ex, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L330)
- **sink** (`db-write`): self.assertRaises(self.validation_ex, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L335)
- **sink** (`db-write`): self.assertRaises(self.validation_ex, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L340)
- **sink** (`db-write`): result = self.controller.update(self.req, 'host_c1', body=body) (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L345)
- **sink** (`db-write`): self.controller.update, self.req, fakes.FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_hosts.py:L450)

