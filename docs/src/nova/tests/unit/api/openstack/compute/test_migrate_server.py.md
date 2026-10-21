# src/nova/tests/unit/api/openstack/compute/test_migrate_server.py

## Overview

This file implements the `test_migrate_server` module, defining 6 classs, 12 fields, 1 function, 87 methods, 11 imports, 2 side effects.

Lines: total 627, code 497, comment 19, blank 111

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MigrateServerTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L31–L331` |
| `MigrateServerTests.disk_over_commit` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L32–L32` |
| `MigrateServerTests.force` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L33–L33` |
| `MigrateServerTests.async_` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L34–L34` |
| `MigrateServerTests.host_name` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L35–L35` |
| `MigrateServerTests.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L37–L46` |
| `MigrateServerTests._get_migration_body` | method | (self, **kwargs) | private | `{'os-migrateLive': self._get_params(**kwargs)}` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L49) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L48–L49` |
| `MigrateServerTests._get_params` | method | (self, **kwargs) | private | `{'host': kwargs.get('host'), 'block_migration': kwargs.get('block_migration') or False, 'disk_over_commit': self.disk_over_commit}` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L52) | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L51–L54` |
| `MigrateServerTests.test_migrate` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L56–L66` |
| `MigrateServerTests.test_migrate_none_hostname` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L68–L78` |
| `MigrateServerTests.test_migrate_with_non_existed_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L80–L84` |
| `MigrateServerTests.test_migrate_raise_conflict_on_invalid_state` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L86–L100` |
| `MigrateServerTests.test_actions_with_locked_instance` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L102–L114` |
| `MigrateServerTests._test_migrate_exception` | method | (self, exc_info, expected_result) | private | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L116–L129` |
| `MigrateServerTests.test_migrate_too_many_instances` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L131–L134` |
| `MigrateServerTests.test_migrate_raise_badrequest_for_accelerator` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L136–L138` |
| `MigrateServerTests.test_migrate_raise_badrequest_for_vdpainterface` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L140–L143` |
| `MigrateServerTests._test_migrate_live_succeeded` | method | (self, param) | private | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L145–L162` |
| `MigrateServerTests.test_migrate_live_enabled` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L164–L166` |
| `MigrateServerTests.test_migrate_live_enabled_with_string_param` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L168–L172` |
| `MigrateServerTests.test_migrate_live_without_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L174–L179` |
| `MigrateServerTests.test_migrate_live_without_block_migration` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L181–L186` |
| `MigrateServerTests.test_migrate_live_without_disk_over_commit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L188–L194` |
| `MigrateServerTests.test_migrate_live_with_invalid_block_migration` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L196–L200` |
| `MigrateServerTests.test_migrate_live_with_invalid_disk_over_commit` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L202–L209` |
| `MigrateServerTests.test_migrate_live_missing_dict_param` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L211–L217` |
| `MigrateServerTests._test_migrate_live_failed_with_exception` | method | (self, fake_exc, uuid=None, expected_exc=webob.exc.HTTPBadRequest, check_response=True) | private | not declared | 2/22 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L219–L241` |
| `MigrateServerTests.test_migrate_live_compute_service_unavailable` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L243–L245` |
| `MigrateServerTests.test_migrate_live_compute_service_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L247–L249` |
| `MigrateServerTests.test_migrate_live_invalid_hypervisor_type` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L251–L253` |
| `MigrateServerTests.test_migrate_live_invalid_cpu_info` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L255–L257` |
| `MigrateServerTests.test_migrate_live_unable_to_migrate_to_self` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L259–L264` |
| `MigrateServerTests.test_migrate_live_destination_hypervisor_too_old` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L266–L268` |
| `MigrateServerTests.test_migrate_live_no_valid_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L270–L272` |
| `MigrateServerTests.test_migrate_live_invalid_local_storage` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L274–L276` |
| `MigrateServerTests.test_migrate_live_invalid_shared_storage` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L278–L280` |
| `MigrateServerTests.test_migrate_live_hypervisor_unavailable` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L282–L284` |
| `MigrateServerTests.test_migrate_live_instance_not_active` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L286–L291` |
| `MigrateServerTests.test_migrate_live_sev_not_supported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L293–L298` |
| `MigrateServerTests.test_migrate_live_vtpm_not_supported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L300–L305` |
| `MigrateServerTests.test_migrate_live_vdpa_interfaces_not_supported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L307–L312` |
| `MigrateServerTests.test_migrate_live_pre_check_error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L314–L316` |
| `MigrateServerTests.test_migrate_live_migration_with_unexpected_error` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L318–L322` |
| `MigrateServerTests.test_live_migration_raises_badrequest_for_accelerators` | method | (self, mock_migrate) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L326–L331` |
| `MigrateServerTestsV225` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L334–L376` |
| `MigrateServerTestsV225.disk_over_commit` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L337–L337` |
| `MigrateServerTestsV225.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L339–L342` |
| `MigrateServerTestsV225._get_params` | method | (self, **kwargs) | private | `{'host': kwargs.get('host'), 'block_migration': kwargs.get('block_migration') or False}` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L345) | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L344–L346` |
| `MigrateServerTestsV225.test_migrate_live_enabled_with_string_param` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L348–L351` |
| `MigrateServerTestsV225.test_migrate_live_without_disk_over_commit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L353–L354` |
| `MigrateServerTestsV225.test_migrate_live_with_invalid_disk_over_commit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L356–L357` |
| `MigrateServerTestsV225.test_live_migrate_block_migration_auto` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L359–L367` |
| `MigrateServerTestsV225.test_migrate_live_with_disk_over_commit_raise` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L369–L376` |
| `MigrateServerTestsV230` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L379–L413` |
| `MigrateServerTestsV230.force` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L380–L380` |
| `MigrateServerTestsV230.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L382–L385` |
| `MigrateServerTestsV230._test_live_migrate` | method | (self, force=False) | private | not declared | 2/14 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L387–L400` |
| `MigrateServerTestsV230.test_live_migrate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L402–L403` |
| `MigrateServerTestsV230.test_live_migrate_with_forced_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L405–L406` |
| `MigrateServerTestsV230.test_forced_live_migrate_with_no_provided_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L408–L413` |
| `MigrateServerTestsV234` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L416–L510` |
| `MigrateServerTestsV234.async_` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L417–L417` |
| `MigrateServerTestsV234.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L419–L422` |
| `MigrateServerTestsV234.test_migrate_live_compute_service_unavailable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L426–L427` |
| `MigrateServerTestsV234.test_migrate_live_compute_service_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L429–L430` |
| `MigrateServerTestsV234.test_migrate_live_invalid_hypervisor_type` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L432–L433` |
| `MigrateServerTestsV234.test_migrate_live_invalid_cpu_info` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L435–L436` |
| `MigrateServerTestsV234.test_migrate_live_unable_to_migrate_to_self` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L438–L439` |
| `MigrateServerTestsV234.test_migrate_live_destination_hypervisor_too_old` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L441–L442` |
| `MigrateServerTestsV234.test_migrate_live_no_valid_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L444–L445` |
| `MigrateServerTestsV234.test_migrate_live_invalid_local_storage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L447–L448` |
| `MigrateServerTestsV234.test_migrate_live_invalid_shared_storage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L450–L451` |
| `MigrateServerTestsV234.test_migrate_live_hypervisor_unavailable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L453–L454` |
| `MigrateServerTestsV234.test_migrate_live_instance_not_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L456–L457` |
| `MigrateServerTestsV234.test_migrate_live_pre_check_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L459–L460` |
| `MigrateServerTestsV234.test_migrate_live_migration_precheck_client_exception` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L462–L463` |
| `MigrateServerTestsV234.test_migrate_live_migration_with_unexpected_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L465–L466` |
| `MigrateServerTestsV234.test_migrate_live_migration_with_old_nova_not_supported` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L468–L469` |
| `MigrateServerTestsV234.test_migrate_live_compute_host_not_found` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L471–L490` |
| `MigrateServerTestsV234.test_migrate_live_unexpected_error` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L492–L510` |
| `MigrateServerTestsV256` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L513–L599` |
| `MigrateServerTestsV256.host_name` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L514–L514` |
| `MigrateServerTestsV256.method_translations` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L515–L515` |
| `MigrateServerTestsV256.body_map` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L516–L516` |
| `MigrateServerTestsV256.args_map` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L517–L517` |
| `MigrateServerTestsV256.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L519–L522` |
| `MigrateServerTestsV256._test_migrate_validation_error` | method | (self, body) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L524–L527` |
| `MigrateServerTestsV256._test_migrate_exception` | method | (self, exc_info, expected_result) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L529–L537` |
| `MigrateServerTestsV256._test_migrate_exception._test` | function | (mock_resize) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L531–L536` |
| `MigrateServerTestsV256.test_migrate` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L539–L542` |
| `MigrateServerTestsV256.test_migrate_without_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L544–L550` |
| `MigrateServerTestsV256.test_migrate_none_hostname` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L552–L558` |
| `MigrateServerTestsV256.test_migrate_with_non_existed_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L560–L562` |
| `MigrateServerTestsV256.test_migrate_raise_conflict_on_invalid_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L564–L570` |
| `MigrateServerTestsV256.test_actions_with_locked_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L572–L576` |
| `MigrateServerTestsV256.test_migrate_without_migrate_object` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L578–L579` |
| `MigrateServerTestsV256.test_migrate_invalid_migrate_object` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L581–L582` |
| `MigrateServerTestsV256.test_migrate_with_additional_property` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L584–L587` |
| `MigrateServerTestsV256.test_migrate_with_host_length_more_than_255` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L589–L591` |
| `MigrateServerTestsV256.test_migrate_nonexistent_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L593–L595` |
| `MigrateServerTestsV256.test_migrate_to_same_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L597–L599` |
| `MigrateServerTestsV268` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L602–L627` |
| `MigrateServerTestsV268.force` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L603–L603` |
| `MigrateServerTestsV268.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L605–L608` |
| `MigrateServerTestsV268.test_live_migrate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L610–L618` |
| `MigrateServerTestsV268.test_live_migrate_with_forced_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L620–L627` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L16)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L19)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L20)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L21)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L23)
- `nova.api.openstack.compute`: imports `migrate_server` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L26)
- `nova.tests.unit.api.openstack.compute`: imports `admin_only_action_common` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import migrate_server (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L24)
- **network**: from nova.tests.unit.api.openstack.compute import admin_only_action_common (src/nova/tests/unit/api/openstack/compute/test_migrate_server.py:L27)

